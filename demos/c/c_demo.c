#include <stdlib.h>
#include <stdio.h>
#include <memory.h>
#include <string.h>
#include <time.h>
#include <sys/stat.h>

#include "../../cQFMatchSuperApi.h"

#ifdef WIN32
#define MKDIR(path) mkdir(path)
#define GET_ACCURATE_USEC_TIME(v) 			\
	{					\
	SYSTEMTIME t;			\
	GetLocalTime(&t);		\
	v=t.wHour*3600000000+		\
	t.wMinute*60000000+	\
	t.wSecond*1000000+		\
	t.wMilliseconds*1000;	\
	}
#define SLEEP(ms) Sleep(ms)
#else
#define MKDIR(path) mkdir(path, S_IRWXU | S_IRWXG | S_IROTH | S_IXOTH)
#define GET_ACCURATE_USEC_TIME(v)			\
	{					\
	struct timeval t;		\
	gettimeofday(&t,NULL);		\
	tm *now=localtime(&t.tv_sec);		\
	v=(long)now->tm_hour*3600000000 + (long)now->tm_min*60000000+now->tm_sec*1000000+		\
	t.tv_usec;		\
	}
#define SLEEP(ms) sleep((ms)/1000)
#endif

char *UserID = "900000001";
char *Password = "111111";
char *FrontAddress = "tcp://192.168.92.26:12701";

void Login(QFMatchSuperApiInstance client) {
    struct CQFMatchReqUserLoginField user;
    memset(&user, 0, sizeof(struct CQFMatchReqUserLoginField));

    strncpy(&user.UserID[0], UserID, sizeof(TQFMatchUserIDType)-1);
    strncpy(&user.Password[0], Password, sizeof(TQFMatchPasswordType)-1);

    ReqUserLogin(client, &user, 0);
}

void OnFrontConnected(QFMatchSuperApiInstance client) {
    printf("Front connected.\n");

    Login(client);
}

void OnRspUserLogin(QFMatchSuperApiInstance client, struct CQFMatchRspUserLoginField *pRspUserLogin, struct CQFMatchRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
    if (pRspUserLogin == NULL) {
        return;
    }

    if (pRspInfo != NULL && pRspInfo->ErrorID != 0) {
        printf("用户登录失败: [%d]%s\n", pRspInfo->ErrorID, pRspInfo->ErrorMsg);

        if (pRspInfo->ErrorID == 75) {
            printf("3秒后尝试重新登录\n");

            SLEEP(3000);

            Login(client);
        }
    } else {
        printf("User[%s] login successfully: %s\n", pRspUserLogin->UserID, pRspInfo->ErrorMsg);

        struct CQFMatchQryInstrumentField qry;
        memset(&qry, 0, sizeof(struct CQFMatchQryInstrumentField));

        SLEEP(1000);
        
        ReqQryInstrument(client, &qry, nRequestID + 1);
    }
}

void OnRspQryInstrument(QFMatchSuperApiInstance client, struct CQFMatchRspInstrumentField *pInstruemnt, struct CQFMatchRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
    if (pInstruemnt == NULL) {
        return;
    }

    if (pRspInfo != NULL && pRspInfo->ErrorID != 0) {
        printf("合约查询失败: [%d]%s\n", pRspInfo->ErrorID, pRspInfo->ErrorMsg);
    } else {
        printf("Instrument[%s.%s]: Name[%s], PriceTick[%f]\n", pInstruemnt->ProductGroupID, pInstruemnt->InstrumentID, pInstruemnt->InstrumentName, pInstruemnt->PriceTick);
        
        if (bIsLast) {
            printf("Query finished.\n");
        }
    }
}

int main() {
    MKDIR("flow");

    Callbacks callbacks;
    memset(&callbacks, 0, sizeof(Callbacks));

    callbacks.ptrOnFrontConnected = &OnFrontConnected;
    callbacks.ptrOnRspUserLogin = &OnRspUserLogin;
    callbacks.ptrOnRspQryInstrument = &OnRspQryInstrument;
    
    QFMatchSuperApiInstance client = InitApi("./flow/", "c_demo");

    RegisterCallbacks(client, &callbacks);

    RegisterFront(client, FrontAddress);
    SubscribePrivateTopic(client, QFMATCH_TERT_QUICK);
    SubscribePublicTopic(client, QFMATCH_TERT_QUICK);
    SubscribeUserTopic(client, QFMATCH_TERT_QUICK);

    Init(client);

    while(true) {
        SLEEP(1000);
    }
}