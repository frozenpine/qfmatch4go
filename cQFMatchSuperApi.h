/////////////////////////////////////////////////////////////////////////
///@file cQFMatchSuperApi.h
///@brief �����˳����û�API��C�ӿ�
/////////////////////////////////////////////////////////////////////////
#ifdef __cplusplus
extern "C" {
#endif

#ifndef CQFMATCH_SUPERAPI_H
#define CQFMATCH_SUPERAPI_H

#include <stdbool.h>
#include "QFMatchApiStruct.h"

#if defined(WINDOWS) && !defined(WIN32)
#define WIN32
#endif

#if defined(CQFMATCH_SUPERAPI_IS_LIB) && defined(WIN32)
#ifdef LIB_CQFMATCH_SUPER_API_EXPORT
#define CQFMATCH_SUPER_API_EXPORT __declspec(dllexport)
#else
#define CQFMATCH_SUPER_API_EXPORT __declspec(dllimport)
#endif
#else
#define CQFMATCH_SUPER_API_EXPORT __attribute__ ((dllimport))
#endif

/////////////////////////////////////////////////
///
/// C��װC++ API������ָ��
///
////////////////////////////////////////////////

typedef unsigned int QFMatchSuperApiInstance;

///////////////////////////////////////////////////
///
/// ����ص�����ָ��
///
///////////////////////////////////////////////////

typedef void (*FuncOnFrontConnected)(QFMatchSuperApiInstance instance);
typedef void (*FuncOnFrontDisconnected)(QFMatchSuperApiInstance instance, int nReason);
typedef void (*FuncOnHeartBeatWarning)(QFMatchSuperApiInstance instance, int nTimeLapse);
typedef void (*FuncOnPackageStart)(QFMatchSuperApiInstance instance, int nTopicID, int nSequenceNo);
typedef void (*FuncOnPackageEnd)(QFMatchSuperApiInstance instance, int nTopicID, int nSequenceNo);
///����Ӧ��
typedef void (*FuncOnRspError)(QFMatchSuperApiInstance instance, struct CQFMatchRspInfoField *pRspInfo, int nRequestID, bool bIsLast);
///�û���¼Ӧ��
typedef void (*FuncOnRspUserLogin)(QFMatchSuperApiInstance instance, struct CQFMatchRspUserLoginField *pRspUserLogin, struct CQFMatchRspInfoField *pRspInfo, int nRequestID, bool bIsLast);
///�û��˳�Ӧ��
typedef void (*FuncOnRspUserLogout)(QFMatchSuperApiInstance instance, struct CQFMatchRspUserLogoutField *pRspUserLogout, struct CQFMatchRspInfoField *pRspInfo, int nRequestID, bool bIsLast);
///����¼��Ӧ��
typedef void (*FuncOnRspOrderInsert)(QFMatchSuperApiInstance instance, struct CQFMatchInputOrderField *pInputOrder, struct CQFMatchRspInfoField *pRspInfo, int nRequestID, bool bIsLast);
///��������Ӧ��
typedef void (*FuncOnRspOrderAction)(QFMatchSuperApiInstance instance, struct CQFMatchOrderActionField *pOrderAction, struct CQFMatchRspInfoField *pRspInfo, int nRequestID, bool bIsLast);
///����¼��Ӧ��
typedef void (*FuncOnRspQuoteInsert)(QFMatchSuperApiInstance instance, struct CQFMatchInputQuoteField *pInputQuote, struct CQFMatchRspInfoField *pRspInfo, int nRequestID, bool bIsLast);
///���۲���Ӧ��
typedef void (*FuncOnRspQuoteAction)(QFMatchSuperApiInstance instance, struct CQFMatchQuoteActionField *pQuoteAction, struct CQFMatchRspInfoField *pRspInfo, int nRequestID, bool bIsLast);
///OTC����¼��Ӧ��
typedef void (*FuncOnRspOTCOrderInsert)(QFMatchSuperApiInstance instance, struct CQFMatchOTCOrderField *pOTCOrder, struct CQFMatchRspInfoField *pRspInfo, int nRequestID, bool bIsLast);
///�û������޸�Ӧ��
typedef void (*FuncOnRspUserPasswordUpdate)(QFMatchSuperApiInstance instance, struct CQFMatchUserPasswordUpdateField *pUserPasswordUpdate, struct CQFMatchRspInfoField *pRspInfo, int nRequestID, bool bIsLast);
///ִ������¼��Ӧ��
typedef void (*FuncOnRspExecOrderInsert)(QFMatchSuperApiInstance instance, struct CQFMatchInputExecOrderField *pInputExecOrder, struct CQFMatchRspInfoField *pRspInfo, int nRequestID, bool bIsLast);
///ִ���������Ӧ��
typedef void (*FuncOnRspExecOrderAction)(QFMatchSuperApiInstance instance, struct CQFMatchExecOrderActionField *pExecOrderAction, struct CQFMatchRspInfoField *pRspInfo, int nRequestID, bool bIsLast);
///������¼��Ӧ��
typedef void (*FuncOnRspAdminOrderInsert)(QFMatchSuperApiInstance instance, struct CQFMatchInputAdminOrderField *pInputAdminOrder, struct CQFMatchRspInfoField *pRspInfo, int nRequestID, bool bIsLast);
///�Ǳ���ϱ���¼��Ӧ��
typedef void (*FuncOnRspCombOrderInsert)(QFMatchSuperApiInstance instance, struct CQFMatchInputCombOrderField *pInputCombOrder, struct CQFMatchRspInfoField *pRspInfo, int nRequestID, bool bIsLast);
///��������Ӧ��
typedef void (*FuncOnRspSubscribeTopic)(QFMatchSuperApiInstance instance, struct CQFMatchDisseminationField *pDissemination, struct CQFMatchRspInfoField *pRspInfo, int nRequestID, bool bIsLast);
///��������������Ӧ��
typedef void (*FuncOnRspBulletin)(QFMatchSuperApiInstance instance, struct CQFMatchBulletinField *pBulletin, struct CQFMatchRspInfoField *pRspInfo, int nRequestID, bool bIsLast);
///������������ϢӦ��
typedef void (*FuncOnRspInformation)(QFMatchSuperApiInstance instance, struct CQFMatchInformationField *pInformation, struct CQFMatchRspInfoField *pRspInfo, int nRequestID, bool bIsLast);
///��Լ����״̬�ı�Ӧ��
typedef void (*FuncOnRspInstrumentStatusUpdate)(QFMatchSuperApiInstance instance, struct CQFMatchInstrumentStatusField *pInstrumentStatus, struct CQFMatchRspInfoField *pRspInfo, int nRequestID, bool bIsLast);
///ǿ���û��˳�Ӧ��
typedef void (*FuncOnRspForceUserExit)(QFMatchSuperApiInstance instance, struct CQFMatchForceUserExitField *pForceUserExit, struct CQFMatchRspInfoField *pRspInfo, int nRequestID, bool bIsLast);
///�û��Ựɾ��Ӧ��
typedef void (*FuncOnRspForceUserLogout)(QFMatchSuperApiInstance instance, struct CQFMatchForceUserExitField *pForceUserExit, struct CQFMatchRspInfoField *pRspInfo, int nRequestID, bool bIsLast);
///����������ͬ��״̬�ı�Ӧ��
typedef void (*FuncOnRspExchangeDataSyncStatusUpdate)(QFMatchSuperApiInstance instance, struct CQFMatchExchangeDataSyncStatusField *pExchangeDataSyncStatus, struct CQFMatchRspInfoField *pRspInfo, int nRequestID, bool bIsLast);
///����������ͬ��״̬�ı�Ӧ��
typedef void (*FuncOnRspSGDataSyncStatusUpdate)(QFMatchSuperApiInstance instance, struct CQFMatchSGDataSyncStatusField *pSGDataSyncStatus, struct CQFMatchRspInfoField *pRspInfo, int nRequestID, bool bIsLast);
///ʵʱ�ϳ�Ӧ��
typedef void (*FuncOnRspTBCommand)(QFMatchSuperApiInstance instance, struct CQFMatchTBCommandField *pTBCommand, struct CQFMatchRspInfoField *pRspInfo, int nRequestID, bool bIsLast);
///��������Ӧ��
typedef void (*FuncOnRspUpdateMarketData)(QFMatchSuperApiInstance instance, struct CQFMatchUpdateMarketDataField *pUpdateMarketData, struct CQFMatchRspInfoField *pRspInfo, int nRequestID, bool bIsLast);
///��λ��֤�����Ӧ��
typedef void (*FuncOnRspPositionMarginAction)(QFMatchSuperApiInstance instance, struct CQFMatchPositionMarginActionField *pPositionMarginAction, struct CQFMatchRspInfoField *pRspInfo, int nRequestID, bool bIsLast);
///��Ա�ʽ��ѯӦ��
typedef void (*FuncOnRspQryPartAccount)(QFMatchSuperApiInstance instance, struct CQFMatchRspPartAccountField *pRspPartAccount, struct CQFMatchRspInfoField *pRspInfo, int nRequestID, bool bIsLast);
///������ѯӦ��
typedef void (*FuncOnRspQryOrder)(QFMatchSuperApiInstance instance, struct CQFMatchOrderField *pOrder, struct CQFMatchRspInfoField *pRspInfo, int nRequestID, bool bIsLast);
///���۲�ѯӦ��
typedef void (*FuncOnRspQryQuote)(QFMatchSuperApiInstance instance, struct CQFMatchQuoteField *pQuote, struct CQFMatchRspInfoField *pRspInfo, int nRequestID, bool bIsLast);
///�ɽ�����ѯӦ��
typedef void (*FuncOnRspQryTrade)(QFMatchSuperApiInstance instance, struct CQFMatchTradeField *pTrade, struct CQFMatchRspInfoField *pRspInfo, int nRequestID, bool bIsLast);
///��Ա�ͻ���ѯӦ��
typedef void (*FuncOnRspQryClient)(QFMatchSuperApiInstance instance, struct CQFMatchRspClientField *pRspClient, struct CQFMatchRspInfoField *pRspInfo, int nRequestID, bool bIsLast);
///��Ա�ֲֲ�ѯӦ��
typedef void (*FuncOnRspQryPartPosition)(QFMatchSuperApiInstance instance, struct CQFMatchRspPartPositionField *pRspPartPosition, struct CQFMatchRspInfoField *pRspInfo, int nRequestID, bool bIsLast);
///�ͻ��ֲֲ�ѯӦ��
typedef void (*FuncOnRspQryClientPosition)(QFMatchSuperApiInstance instance, struct CQFMatchRspClientPositionField *pRspClientPosition, struct CQFMatchRspInfoField *pRspInfo, int nRequestID, bool bIsLast);
///��Լ��ѯӦ��
typedef void (*FuncOnRspQryInstrument)(QFMatchSuperApiInstance instance, struct CQFMatchRspInstrumentField *pRspInstrument, struct CQFMatchRspInfoField *pRspInfo, int nRequestID, bool bIsLast);
///��Լ����״̬��ѯӦ��
typedef void (*FuncOnRspQryInstrumentStatus)(QFMatchSuperApiInstance instance, struct CQFMatchInstrumentStatusField *pInstrumentStatus, struct CQFMatchRspInfoField *pRspInfo, int nRequestID, bool bIsLast);
///������״̬��ѯӦ��
typedef void (*FuncOnRspQrySGDataSyncStatus)(QFMatchSuperApiInstance instance, struct CQFMatchSGDataSyncStatusField *pSGDataSyncStatus, struct CQFMatchRspInfoField *pRspInfo, int nRequestID, bool bIsLast);
///��ֵ���Ӧ��
typedef void (*FuncOnRspQryHedgeVolume)(QFMatchSuperApiInstance instance, struct CQFMatchHedgeVolumeField *pHedgeVolume, struct CQFMatchRspInfoField *pRspInfo, int nRequestID, bool bIsLast);
///�����޶��ѯӦ��
typedef void (*FuncOnRspQryCreditLimit)(QFMatchSuperApiInstance instance, struct CQFMatchCreditLimitField *pCreditLimit, struct CQFMatchRspInfoField *pRspInfo, int nRequestID, bool bIsLast);
///�Ǳ���ϱ�����ѯӦ��
typedef void (*FuncOnRspQryCombOrder)(QFMatchSuperApiInstance instance, struct CQFMatchCombOrderField *pCombOrder, struct CQFMatchRspInfoField *pRspInfo, int nRequestID, bool bIsLast);
///��ͨ�����ѯӦ��
typedef void (*FuncOnRspQryMarketData)(QFMatchSuperApiInstance instance, struct CQFMatchMarketDataField *pMarketData, struct CQFMatchRspInfoField *pRspInfo, int nRequestID, bool bIsLast);
///�����������ѯ����Ӧ��
typedef void (*FuncOnRspQryBulletin)(QFMatchSuperApiInstance instance, struct CQFMatchBulletinField *pBulletin, struct CQFMatchRspInfoField *pRspInfo, int nRequestID, bool bIsLast);
///�����ѯӦ��
typedef void (*FuncOnRspQryTopic)(QFMatchSuperApiInstance instance, struct CQFMatchDisseminationField *pDissemination, struct CQFMatchRspInfoField *pRspInfo, int nRequestID, bool bIsLast);
///�û����߲�ѯӦ��
typedef void (*FuncOnRspQryUserSession)(QFMatchSuperApiInstance instance, struct CQFMatchUserSessionField *pUserSession, struct CQFMatchRspInfoField *pRspInfo, int nRequestID, bool bIsLast);
///�û���ѯӦ��
typedef void (*FuncOnRspQryUser)(QFMatchSuperApiInstance instance, struct CQFMatchUserField *pUser, struct CQFMatchRspInfoField *pRspInfo, int nRequestID, bool bIsLast);
///��Ա��ѯӦ��
typedef void (*FuncOnRspQryParticipant)(QFMatchSuperApiInstance instance, struct CQFMatchParticipantField *pParticipant, struct CQFMatchRspInfoField *pRspInfo, int nRequestID, bool bIsLast);
///��Լ��λ��ѯӦ��
typedef void (*FuncOnRspQryMBLMarketData)(QFMatchSuperApiInstance instance, struct CQFMatchMBLMarketDataField *pMBLMarketData, struct CQFMatchRspInfoField *pRspInfo, int nRequestID, bool bIsLast);
///��Ϣ��ѯӦ��
typedef void (*FuncOnRspQryInformation)(QFMatchSuperApiInstance instance, struct CQFMatchInformationField *pInformation, struct CQFMatchRspInfoField *pRspInfo, int nRequestID, bool bIsLast);
///�ͻ��ֲ���ϸ��ѯӦ��
typedef void (*FuncOnRspQryClientPositionDetail)(QFMatchSuperApiInstance instance, struct CQFMatchClientPositionDetailField *pClientPositionDetail, struct CQFMatchRspInfoField *pRspInfo, int nRequestID, bool bIsLast);
///�ɽ��ر�
typedef void (*FuncOnRtnTrade)(QFMatchSuperApiInstance instance, struct CQFMatchTradeField *pTrade);
///�����ر�
typedef void (*FuncOnRtnOrder)(QFMatchSuperApiInstance instance, struct CQFMatchOrderField *pOrder);
///ִ������ر�
typedef void (*FuncOnRtnExecOrder)(QFMatchSuperApiInstance instance, struct CQFMatchExecOrderField *pExecOrder);
///���ۻر�
typedef void (*FuncOnRtnQuote)(QFMatchSuperApiInstance instance, struct CQFMatchQuoteField *pQuote);
///�Ǳ���ϱ����ر�
typedef void (*FuncOnRtnCombOrder)(QFMatchSuperApiInstance instance, struct CQFMatchCombOrderField *pCombOrder);
///��Լ����״̬֪ͨ
typedef void (*FuncOnRtnInstrumentStatus)(QFMatchSuperApiInstance instance, struct CQFMatchInstrumentStatusField *pInstrumentStatus);
///���Ӻ�Լ֪ͨ
typedef void (*FuncOnRtnInsInstrument)(QFMatchSuperApiInstance instance, struct CQFMatchInstrumentField *pInstrument);
///ɾ����Լ֪ͨ
typedef void (*FuncOnRtnDelInstrument)(QFMatchSuperApiInstance instance, struct CQFMatchInstrumentField *pInstrument);
///���Ӻ�Լ����֪ͨ
typedef void (*FuncOnRtnInsCombinationLeg)(QFMatchSuperApiInstance instance, struct CQFMatchCombinationLegField *pCombinationLeg);
///ɾ����Լ����֪ͨ
typedef void (*FuncOnRtnDelCombinationLeg)(QFMatchSuperApiInstance instance, struct CQFMatchCombinationLegField *pCombinationLeg);
///�ͻ��ֲ�֪ͨ
typedef void (*FuncOnRtnClientPosition)(QFMatchSuperApiInstance instance, struct CQFMatchClientPositionField *pClientPosition);
///��Ա�ʽ�֪ͨ
typedef void (*FuncOnRtnTradingAccount)(QFMatchSuperApiInstance instance, struct CQFMatchTradingAccountField *pTradingAccount);
///��������֪ͨ
typedef void (*FuncOnRtnAliasDefine)(QFMatchSuperApiInstance instance, struct CQFMatchAliasDefineField *pAliasDefine);
///����������֪ͨ
typedef void (*FuncOnRtnFlowMessageCancel)(QFMatchSuperApiInstance instance, struct CQFMatchFlowMessageCancelField *pFlowMessageCancel);
///����֪ͨ
typedef void (*FuncOnRtnBulletin)(QFMatchSuperApiInstance instance, struct CQFMatchBulletinField *pBulletin);
///��ͨ����֪ͨ
typedef void (*FuncOnRtnMarketData)(QFMatchSuperApiInstance instance, struct CQFMatchMarketDataField *pMarketData);
///�������֪ͨ
typedef void (*FuncOnRtnDepthMarketData)(QFMatchSuperApiInstance instance, struct CQFMatchDepthMarketDataField *pDepthMarketData);
///������֪ͨ
typedef void (*FuncOnRtnAdminOrder)(QFMatchSuperApiInstance instance, struct CQFMatchAdminOrderField *pAdminOrder);
///����¼�����ر�
typedef void (*FuncOnErrRtnOrderInsert)(QFMatchSuperApiInstance instance, struct CQFMatchInputOrderField *pInputOrder, struct CQFMatchRspInfoField *pRspInfo);
///������������ر�
typedef void (*FuncOnErrRtnOrderAction)(QFMatchSuperApiInstance instance, struct CQFMatchOrderActionField *pOrderAction, struct CQFMatchRspInfoField *pRspInfo);
///����¼�����ر�
typedef void (*FuncOnErrRtnQuoteInsert)(QFMatchSuperApiInstance instance, struct CQFMatchInputQuoteField *pInputQuote, struct CQFMatchRspInfoField *pRspInfo);
///���۲�������ر�
typedef void (*FuncOnErrRtnQuoteAction)(QFMatchSuperApiInstance instance, struct CQFMatchQuoteActionField *pQuoteAction, struct CQFMatchRspInfoField *pRspInfo);
///ִ������¼�����ر�
typedef void (*FuncOnErrRtnExecOrderInsert)(QFMatchSuperApiInstance instance, struct CQFMatchInputExecOrderField *pInputExecOrder, struct CQFMatchRspInfoField *pRspInfo);
///ִ�������������ر�
typedef void (*FuncOnErrRtnExecOrderAction)(QFMatchSuperApiInstance instance, struct CQFMatchExecOrderActionField *pExecOrderAction, struct CQFMatchRspInfoField *pRspInfo);
///�Ǳ���ϱ���¼�����ر�
typedef void (*FuncOnErrRtnCombOrderInsert)(QFMatchSuperApiInstance instance, struct CQFMatchInputCombOrderField *pInputCombOrder, struct CQFMatchRspInfoField *pRspInfo);
///�����ڴ������Ӧ��
typedef void (*FuncOnRspDumpMemTable)(QFMatchSuperApiInstance instance, struct CQFMatchDumpMemTableField *pDumpMemTable, struct CQFMatchRspInfoField *pRspInfo, int nRequestID, bool bIsLast);
///����ɽ����걨Ӧ��
typedef void (*FuncOnRspOTCTradeInsert)(QFMatchSuperApiInstance instance, struct CQFMatchInputOTCTradeField *pInputOTCTrade, struct CQFMatchRspInfoField *pRspInfo, int nRequestID, bool bIsLast);
///����ɽ��ر�
typedef void (*FuncOnRtnOTCTrade)(QFMatchSuperApiInstance instance, struct CQFMatchOTCTradeField *pOTCTrade);
///����ɽ�����ر�
typedef void (*FuncOnErrRtnOTCTrade)(QFMatchSuperApiInstance instance, struct CQFMatchInputOTCTradeField *pInputOTCTrade, struct CQFMatchRspInfoField *pRspInfo);
///�û������Ӧ��
typedef void (*FuncOnRspAccountDeposit)(QFMatchSuperApiInstance instance, struct CQFMatchAccountDepositField *pAccountDeposit, struct CQFMatchRspInfoField *pRspInfo, int nRequestID, bool bIsLast);
///������ѯӦ��
typedef void (*FuncOnRspQryAccountDepositDetail)(QFMatchSuperApiInstance instance, struct CQFMatchAccountDepositDetailField *pAccountDepositDetail, struct CQFMatchRspInfoField *pRspInfo, int nRequestID, bool bIsLast);
///ʵʱ�ϳ���ѯӦ��
typedef void (*FuncOnRspQryTBCommandDetail)(QFMatchSuperApiInstance instance, struct CQFMatchTBCommandDetailField *pTBCommandDetail, struct CQFMatchRspInfoField *pRspInfo, int nRequestID, bool bIsLast);
///�ͻ������Ѳ�ѯӦ��
typedef void (*FuncOnRspQryPartClientFee)(QFMatchSuperApiInstance instance, struct CQFMatchPartClientFeeField *pPartClientFee, struct CQFMatchRspInfoField *pRspInfo, int nRequestID, bool bIsLast);
///�ಥ��������
typedef void (*FuncOnRtnMultiHeartbeat)(QFMatchSuperApiInstance instance, struct CQFMatchMultiHeartbeatField *pMultiHeartbeat);

/////////////////////////////////////////////////
///
/// �ص��������
///
////////////////////////////////////////////////

typedef struct
{
	FuncOnFrontConnected ptrOnFrontConnected;
	FuncOnFrontDisconnected ptrOnFrontDisconnected;
	FuncOnHeartBeatWarning ptrOnHeartBeatWarning;
	FuncOnPackageStart ptrOnPackageStart;
	FuncOnPackageEnd ptrOnPackageEnd;
	FuncOnRspError ptrOnRspError;
	FuncOnRspUserLogin ptrOnRspUserLogin;
	FuncOnRspUserLogout ptrOnRspUserLogout;
	FuncOnRspOrderInsert ptrOnRspOrderInsert;
	FuncOnRspOrderAction ptrOnRspOrderAction;
	FuncOnRspQuoteInsert ptrOnRspQuoteInsert;
	FuncOnRspQuoteAction ptrOnRspQuoteAction;
	FuncOnRspOTCOrderInsert ptrOnRspOTCOrderInsert;
	FuncOnRspUserPasswordUpdate ptrOnRspUserPasswordUpdate;
	FuncOnRspExecOrderInsert ptrOnRspExecOrderInsert;
	FuncOnRspExecOrderAction ptrOnRspExecOrderAction;
	FuncOnRspAdminOrderInsert ptrOnRspAdminOrderInsert;
	FuncOnRspCombOrderInsert ptrOnRspCombOrderInsert;
	FuncOnRspSubscribeTopic ptrOnRspSubscribeTopic;
	FuncOnRspBulletin ptrOnRspBulletin;
	FuncOnRspInformation ptrOnRspInformation;
	FuncOnRspInstrumentStatusUpdate ptrOnRspInstrumentStatusUpdate;
	FuncOnRspForceUserExit ptrOnRspForceUserExit;
	FuncOnRspForceUserLogout ptrOnRspForceUserLogout;
	FuncOnRspExchangeDataSyncStatusUpdate ptrOnRspExchangeDataSyncStatusUpdate;
	FuncOnRspSGDataSyncStatusUpdate ptrOnRspSGDataSyncStatusUpdate;
	FuncOnRspTBCommand ptrOnRspTBCommand;
	FuncOnRspUpdateMarketData ptrOnRspUpdateMarketData;
	FuncOnRspPositionMarginAction ptrOnRspPositionMarginAction;
	FuncOnRspQryPartAccount ptrOnRspQryPartAccount;
	FuncOnRspQryOrder ptrOnRspQryOrder;
	FuncOnRspQryQuote ptrOnRspQryQuote;
	FuncOnRspQryTrade ptrOnRspQryTrade;
	FuncOnRspQryClient ptrOnRspQryClient;
	FuncOnRspQryPartPosition ptrOnRspQryPartPosition;
	FuncOnRspQryClientPosition ptrOnRspQryClientPosition;
	FuncOnRspQryInstrument ptrOnRspQryInstrument;
	FuncOnRspQryInstrumentStatus ptrOnRspQryInstrumentStatus;
	FuncOnRspQrySGDataSyncStatus ptrOnRspQrySGDataSyncStatus;
	FuncOnRspQryHedgeVolume ptrOnRspQryHedgeVolume;
	FuncOnRspQryCreditLimit ptrOnRspQryCreditLimit;
	FuncOnRspQryCombOrder ptrOnRspQryCombOrder;
	FuncOnRspQryMarketData ptrOnRspQryMarketData;
	FuncOnRspQryBulletin ptrOnRspQryBulletin;
	FuncOnRspQryTopic ptrOnRspQryTopic;
	FuncOnRspQryUserSession ptrOnRspQryUserSession;
	FuncOnRspQryUser ptrOnRspQryUser;
	FuncOnRspQryParticipant ptrOnRspQryParticipant;
	FuncOnRspQryMBLMarketData ptrOnRspQryMBLMarketData;
	FuncOnRspQryInformation ptrOnRspQryInformation;
	FuncOnRspQryClientPositionDetail ptrOnRspQryClientPositionDetail;
	FuncOnRtnTrade ptrOnRtnTrade;
	FuncOnRtnOrder ptrOnRtnOrder;
	FuncOnRtnExecOrder ptrOnRtnExecOrder;
	FuncOnRtnQuote ptrOnRtnQuote;
	FuncOnRtnCombOrder ptrOnRtnCombOrder;
	FuncOnRtnInstrumentStatus ptrOnRtnInstrumentStatus;
	FuncOnRtnInsInstrument ptrOnRtnInsInstrument;
	FuncOnRtnDelInstrument ptrOnRtnDelInstrument;
	FuncOnRtnInsCombinationLeg ptrOnRtnInsCombinationLeg;
	FuncOnRtnDelCombinationLeg ptrOnRtnDelCombinationLeg;
	FuncOnRtnClientPosition ptrOnRtnClientPosition;
	FuncOnRtnTradingAccount ptrOnRtnTradingAccount;
	FuncOnRtnAliasDefine ptrOnRtnAliasDefine;
	FuncOnRtnFlowMessageCancel ptrOnRtnFlowMessageCancel;
	FuncOnRtnBulletin ptrOnRtnBulletin;
	FuncOnRtnMarketData ptrOnRtnMarketData;
	FuncOnRtnDepthMarketData ptrOnRtnDepthMarketData;
	FuncOnRtnAdminOrder ptrOnRtnAdminOrder;
	FuncOnErrRtnOrderInsert ptrOnErrRtnOrderInsert;
	FuncOnErrRtnOrderAction ptrOnErrRtnOrderAction;
	FuncOnErrRtnQuoteInsert ptrOnErrRtnQuoteInsert;
	FuncOnErrRtnQuoteAction ptrOnErrRtnQuoteAction;
	FuncOnErrRtnExecOrderInsert ptrOnErrRtnExecOrderInsert;
	FuncOnErrRtnExecOrderAction ptrOnErrRtnExecOrderAction;
	FuncOnErrRtnCombOrderInsert ptrOnErrRtnCombOrderInsert;
	FuncOnRspDumpMemTable ptrOnRspDumpMemTable;
	FuncOnRspOTCTradeInsert ptrOnRspOTCTradeInsert;
	FuncOnRtnOTCTrade ptrOnRtnOTCTrade;
	FuncOnErrRtnOTCTrade ptrOnErrRtnOTCTrade;
	FuncOnRspAccountDeposit ptrOnRspAccountDeposit;
	FuncOnRspQryAccountDepositDetail ptrOnRspQryAccountDepositDetail;
	FuncOnRspQryTBCommandDetail ptrOnRspQryTBCommandDetail;
	FuncOnRspQryPartClientFee ptrOnRspQryPartClientFee;
	FuncOnRtnMultiHeartbeat ptrOnRtnMultiHeartbeat;
} Callbacks;


///////////////////////////////////////////////
///
/// ������������C��װ
///
///////////////////////////////////////////////

///����UserApi
///@param pszFlowPath ����������Ϣ�ļ���Ŀ¼��Ĭ��Ϊ��ǰĿ¼
///@param pszUserApiType UserAPI����
///@return ��������UserApi
CQFMATCH_SUPER_API_EXPORT QFMatchSuperApiInstance InitApi(const char *pszFlowPath, const char *pszSuperApiTyp);

///ע��ص��������
///@param pInstance InitApi�������ص�APIʵ����ַ
///@param callbacks �ص��������ĵ�ַ
CQFMATCH_SUPER_API_EXPORT void RegisterCallbacks(QFMatchSuperApiInstance instance, Callbacks *callbacks);

///��ȡϵͳ�汾��
///@param pInstance InitApi�������ص�APIʵ����ַ
///@return �汾��
CQFMATCH_SUPER_API_EXPORT const char *GetVersion(QFMatchSuperApiInstance instance);

///ɾ���ӿڶ�����
///@param pInstance InitApi�������ص�APIʵ����ַ
///@remark ����ʹ�ñ��ӿڶ���ʱ,���øú���ɾ���ӿڶ���
CQFMATCH_SUPER_API_EXPORT void Release(QFMatchSuperApiInstance instance);

///��ʼ��
///@param pInstance InitApi�������ص�APIʵ����ַ
///@remark ��ʼ�����л���,ֻ�е��ú�,�ӿڲſ�ʼ����
CQFMATCH_SUPER_API_EXPORT void Init(QFMatchSuperApiInstance instance);

///�ȴ��ӿ��߳̽�������
///@param pInstance InitApi�������ص�APIʵ����ַ
///@return �߳��˳�����
CQFMATCH_SUPER_API_EXPORT int Join(QFMatchSuperApiInstance instance);

///��ȡ��ǰ������
///@param pInstance InitApi�������ص�APIʵ����ַ
///@retrun ��ȡ���Ľ�����
///@remark ֻ�е�¼�ɹ���,���ܵõ���ȷ�Ľ�����
CQFMATCH_SUPER_API_EXPORT const char *GetTradingDay(QFMatchSuperApiInstance instance);

///ע��ǰ�û������ַ
///@param pInstance InitApi�������ص�APIʵ����ַ
///@param pszFrontAddress��ǰ�û������ַ��
///@remark �����ַ�ĸ�ʽΪ����protocol://ipaddress:port�����磺��tcp://127.0.0.1:17001���� 
///@remark ��tcp��������Э�飬��127.0.0.1�������������ַ����17001������������˿ںš�
CQFMATCH_SUPER_API_EXPORT void RegisterFront(QFMatchSuperApiInstance instance, char *pszFrontAddress);

///ע�����ַ����������ַ
///@param pInstance InitApi�������ص�APIʵ����ַ
///@param pszNsAddress�����ַ����������ַ��
///@remark �����ַ�ĸ�ʽΪ����protocol://ipaddress:port�����磺��tcp://127.0.0.1:12001���� 
///@remark ��tcp��������Э�飬��127.0.0.1�������������ַ����12001������������˿ںš�
///@remark RegisterFront������RegisterNameServer
CQFMATCH_SUPER_API_EXPORT void RegisterNameServer(QFMatchSuperApiInstance instance, char *pszNsAddress);

///����֤��
///@param pInstance InitApi�������ص�APIʵ����ַ
///@param pszCertFileName �û�֤���ļ���
///@param pszKeyFileName �û�˽Կ�ļ���
///@param pszCaFileName ������CA֤���ļ���
///@param pszKeyFilePassword �û�˽Կ�ļ�����
///@return 0 �����ɹ�
///@return -1 ������CA֤������ʧ��
///@return -2 �û�֤������ʧ��
///@return -3 �û�˽Կ����ʧ��	
///@return -4 �û�֤��У��ʧ��
CQFMATCH_SUPER_API_EXPORT int RegisterCertificateFile(QFMatchSuperApiInstance instance, const char *pszCertFileName, const char *pszKeyFileName, 
	const char *pszCaFileName, const char *pszKeyFilePassword);

///�����г����顣
///@param pInstance InitApi�������ص�APIʵ����ַ
///@param nTopicID �г���������  
///@param nResumeType �г������ش���ʽ  
///        QFMATCH_TERT_RESTART:�ӱ������տ�ʼ�ش�
///        QFMATCH_TERT_RESUME:���ϴ��յ�������
///        QFMATCH_TERT_QUICK:�ȴ��͵�ǰ�������,�ٴ��͵�¼���г����������
///@remark �÷���Ҫ��Init����ǰ���á����������򲻻��յ�˽���������ݡ�
CQFMATCH_SUPER_API_EXPORT void SubscribeMarketDataTopic(QFMatchSuperApiInstance instance, int nTopicID, enum QFMATCH_TE_RESUME_TYPE nResumeType);

///����˽������
///@param pInstance InitApi�������ص�APIʵ����ַ
///@param nResumeType ˽�����ش���ʽ  
///        QFMATCH_TERT_RESTART:�ӱ������տ�ʼ�ش�
///        QFMATCH_TERT_RESUME:���ϴ��յ�������
///        QFMATCH_TERT_QUICK:ֻ���͵�¼��˽����������
///@remark �÷���Ҫ��Init����ǰ���á����������򲻻��յ�˽���������ݡ�
CQFMATCH_SUPER_API_EXPORT void SubscribePrivateTopic(QFMatchSuperApiInstance instance, enum QFMATCH_TE_RESUME_TYPE nResumeType);

///���Ĺ�������
///@param pInstance InitApi�������ص�APIʵ����ַ
///@param nResumeType �������ش���ʽ  
///        QFMATCH_TERT_RESTART:�ӱ������տ�ʼ�ش�
///        QFMATCH_TERT_RESUME:���ϴ��յ�������
///        QFMATCH_TERT_QUICK:ֻ���͵�¼�󹫹���������
///@remark �÷���Ҫ��Init����ǰ���á����������򲻻��յ������������ݡ�
CQFMATCH_SUPER_API_EXPORT void SubscribePublicTopic(QFMatchSuperApiInstance instance, enum QFMATCH_TE_RESUME_TYPE nResumeType);

///���Ľ���Ա����
///@param pInstance InitApi�������ص�APIʵ����ַ
///@param nResumeType ����Ա���ش���ʽ
///        QFMATCH_TERT_RESTART:�ӱ������տ�ʼ�ش�
///        QFMATCH_TERT_RESUME:���ϴ��յ�������
///        QFMATCH_TERT_QUICK:ֻ���͵�¼����Ա��������
///@remark �÷���Ҫ��Init����ǰ���á����������򲻻��յ�����Ա�������ݡ�
CQFMATCH_SUPER_API_EXPORT void SubscribeUserTopic(QFMatchSuperApiInstance instance, enum QFMATCH_TE_RESUME_TYPE nResumeType);


///����������ʱʱ�䡣
///@param pInstance InitApi�������ص�APIʵ����ַ
///@param timeout ������ʱʱ��(��)
CQFMATCH_SUPER_API_EXPORT void SetHeartbeatTimeout(QFMatchSuperApiInstance instance, unsigned int timeout);

///��������־�ļ�
///@param pInstance InitApi�������ص�APIʵ����ַ
///@param pszReqLogFileName ������־�ļ���
///@return 0 �����ɹ�
///@return -1 ����־�ļ�ʧ��
CQFMATCH_SUPER_API_EXPORT int OpenRequestLog(QFMatchSuperApiInstance instance, const char *pszReqLogFileName);

///��Ӧ����־�ļ�
///@param pInstance InitApi�������ص�APIʵ����ַ
///@param pszRspLogFileName Ӧ����־�ļ���  
///@return 0 �����ɹ�
///@return -1 ����־�ļ�ʧ��
CQFMATCH_SUPER_API_EXPORT int OpenResponseLog(QFMatchSuperApiInstance instance, const char *pszRspLogFileName);

///�û���¼����
///@param pInstance InitApi�������ص�APIʵ����ַ
CQFMATCH_SUPER_API_EXPORT int ReqUserLogin(QFMatchSuperApiInstance instance, struct CQFMatchReqUserLoginField *pReqUserLoginField, int nRequestID);

///�û��˳�����
CQFMATCH_SUPER_API_EXPORT  int ReqUserLogout(QFMatchSuperApiInstance instance, struct CQFMatchReqUserLogoutField *pReqUserLogout, int nRequestID);

///����¼������
CQFMATCH_SUPER_API_EXPORT  int ReqOrderInsert(QFMatchSuperApiInstance instance, struct CQFMatchInputOrderField *pInputOrder, int nRequestID);

///������������
CQFMATCH_SUPER_API_EXPORT  int ReqOrderAction(QFMatchSuperApiInstance instance, struct CQFMatchOrderActionField *pOrderAction, int nRequestID);

///����¼������
CQFMATCH_SUPER_API_EXPORT  int ReqQuoteInsert(QFMatchSuperApiInstance instance, struct CQFMatchInputQuoteField *pInputQuote, int nRequestID);

///���۲�������
CQFMATCH_SUPER_API_EXPORT  int ReqQuoteAction(QFMatchSuperApiInstance instance, struct CQFMatchQuoteActionField *pQuoteAction, int nRequestID);

///OTC����¼������
CQFMATCH_SUPER_API_EXPORT  int ReqOTCOrderInsert(QFMatchSuperApiInstance instance, struct CQFMatchOTCOrderField *pOTCOrder, int nRequestID);

///�û������޸�����
CQFMATCH_SUPER_API_EXPORT  int ReqUserPasswordUpdate(QFMatchSuperApiInstance instance, struct CQFMatchUserPasswordUpdateField *pUserPasswordUpdate, int nRequestID);

///ִ������¼������
CQFMATCH_SUPER_API_EXPORT  int ReqExecOrderInsert(QFMatchSuperApiInstance instance, struct CQFMatchInputExecOrderField *pInputExecOrder, int nRequestID);

///ִ�������������
CQFMATCH_SUPER_API_EXPORT  int ReqExecOrderAction(QFMatchSuperApiInstance instance, struct CQFMatchExecOrderActionField *pExecOrderAction, int nRequestID);

///������¼������
CQFMATCH_SUPER_API_EXPORT  int ReqAdminOrderInsert(QFMatchSuperApiInstance instance, struct CQFMatchInputAdminOrderField *pInputAdminOrder, int nRequestID);

///�Ǳ���ϱ���¼������
CQFMATCH_SUPER_API_EXPORT  int ReqCombOrderInsert(QFMatchSuperApiInstance instance, struct CQFMatchInputCombOrderField *pInputCombOrder, int nRequestID);

///������������
CQFMATCH_SUPER_API_EXPORT  int ReqSubscribeTopic(QFMatchSuperApiInstance instance, struct CQFMatchDisseminationField *pDissemination, int nRequestID);

///��������������
CQFMATCH_SUPER_API_EXPORT  int ReqBulletin(QFMatchSuperApiInstance instance, struct CQFMatchBulletinField *pBulletin, int nRequestID);

///��������Ϣ����
CQFMATCH_SUPER_API_EXPORT  int ReqInformation(QFMatchSuperApiInstance instance, struct CQFMatchInformationField *pInformation, int nRequestID);

///��Լ����״̬�ı�����
CQFMATCH_SUPER_API_EXPORT  int ReqInstrumentStatusUpdate(QFMatchSuperApiInstance instance, struct CQFMatchInstrumentStatusField *pInstrumentStatus, int nRequestID);

///ǿ���û��˳�����
CQFMATCH_SUPER_API_EXPORT  int ReqForceUserExit(QFMatchSuperApiInstance instance, struct CQFMatchForceUserExitField *pForceUserExit, int nRequestID);

///�û��Ựɾ������
CQFMATCH_SUPER_API_EXPORT  int ReqForceUserLogout(QFMatchSuperApiInstance instance, struct CQFMatchForceUserExitField *pForceUserExit, int nRequestID);

///����������ͬ��״̬�ı�����
CQFMATCH_SUPER_API_EXPORT  int ReqExchangeDataSyncStatusUpdate(QFMatchSuperApiInstance instance, struct CQFMatchExchangeDataSyncStatusField *pExchangeDataSyncStatus, int nRequestID);

///����������ͬ��״̬�ı�����
CQFMATCH_SUPER_API_EXPORT  int ReqSGDataSyncStatusUpdate(QFMatchSuperApiInstance instance, struct CQFMatchSGDataSyncStatusField *pSGDataSyncStatus, int nRequestID);

///ʵʱ�ϳ�����
CQFMATCH_SUPER_API_EXPORT  int ReqTBCommand(QFMatchSuperApiInstance instance, struct CQFMatchTBCommandField *pTBCommand, int nRequestID);

///������������
CQFMATCH_SUPER_API_EXPORT  int ReqUpdateMarketData(QFMatchSuperApiInstance instance, struct CQFMatchUpdateMarketDataField *pUpdateMarketData, int nRequestID);

///��λ��֤���������
CQFMATCH_SUPER_API_EXPORT  int ReqPositionMarginAction(QFMatchSuperApiInstance instance, struct CQFMatchPositionMarginActionField *pPositionMarginAction, int nRequestID);

///��Ա�ʽ��ѯ����
CQFMATCH_SUPER_API_EXPORT  int ReqQryPartAccount(QFMatchSuperApiInstance instance, struct CQFMatchQryPartAccountField *pQryPartAccount, int nRequestID);

///������ѯ����
CQFMATCH_SUPER_API_EXPORT  int ReqQryOrder(QFMatchSuperApiInstance instance, struct CQFMatchQryOrderField *pQryOrder, int nRequestID);

///���۲�ѯ����
CQFMATCH_SUPER_API_EXPORT  int ReqQryQuote(QFMatchSuperApiInstance instance, struct CQFMatchQryQuoteField *pQryQuote, int nRequestID);

///�ɽ�����ѯ����
CQFMATCH_SUPER_API_EXPORT  int ReqQryTrade(QFMatchSuperApiInstance instance, struct CQFMatchQryTradeField *pQryTrade, int nRequestID);

///��Ա�ͻ���ѯ����
CQFMATCH_SUPER_API_EXPORT  int ReqQryClient(QFMatchSuperApiInstance instance, struct CQFMatchQryClientField *pQryClient, int nRequestID);

///��Ա�ֲֲ�ѯ����
CQFMATCH_SUPER_API_EXPORT  int ReqQryPartPosition(QFMatchSuperApiInstance instance, struct CQFMatchQryPartPositionField *pQryPartPosition, int nRequestID);

///�ͻ��ֲֲ�ѯ����
CQFMATCH_SUPER_API_EXPORT  int ReqQryClientPosition(QFMatchSuperApiInstance instance, struct CQFMatchQryClientPositionField *pQryClientPosition, int nRequestID);

///��Լ��ѯ����
CQFMATCH_SUPER_API_EXPORT  int ReqQryInstrument(QFMatchSuperApiInstance instance, struct CQFMatchQryInstrumentField *pQryInstrument, int nRequestID);

///��Լ����״̬��ѯ����
CQFMATCH_SUPER_API_EXPORT  int ReqQryInstrumentStatus(QFMatchSuperApiInstance instance, struct CQFMatchQryInstrumentStatusField *pQryInstrumentStatus, int nRequestID);

///������״̬��ѯ����
CQFMATCH_SUPER_API_EXPORT  int ReqQrySGDataSyncStatus(QFMatchSuperApiInstance instance, struct CQFMatchQrySGDataSyncStatusField *pQrySGDataSyncStatus, int nRequestID);

///��ֵ��Ȳ�ѯ
CQFMATCH_SUPER_API_EXPORT  int ReqQryHedgeVolume(QFMatchSuperApiInstance instance, struct CQFMatchQryHedgeVolumeField *pQryHedgeVolume, int nRequestID);

///�����޶��ѯ����
CQFMATCH_SUPER_API_EXPORT  int ReqQryCreditLimit(QFMatchSuperApiInstance instance, struct CQFMatchQryCreditLimitField *pQryCreditLimit, int nRequestID);

///�Ǳ���ϱ�����ѯ����
CQFMATCH_SUPER_API_EXPORT  int ReqQryCombOrder(QFMatchSuperApiInstance instance, struct CQFMatchQryCombOrderField *pQryCombOrder, int nRequestID);

///��ͨ�����ѯ����
CQFMATCH_SUPER_API_EXPORT  int ReqQryMarketData(QFMatchSuperApiInstance instance, struct CQFMatchQryMarketDataField *pQryMarketData, int nRequestID);

///�����������ѯ����
CQFMATCH_SUPER_API_EXPORT  int ReqQryBulletin(QFMatchSuperApiInstance instance, struct CQFMatchQryBulletinField *pQryBulletin, int nRequestID);

///�����ѯ����
CQFMATCH_SUPER_API_EXPORT  int ReqQryTopic(QFMatchSuperApiInstance instance, struct CQFMatchDisseminationField *pDissemination, int nRequestID);

///�û����߲�ѯ����
CQFMATCH_SUPER_API_EXPORT  int ReqQryUserSession(QFMatchSuperApiInstance instance, struct CQFMatchQryUserSessionField *pQryUserSession, int nRequestID);

///�û���ѯ����
CQFMATCH_SUPER_API_EXPORT  int ReqQryUser(QFMatchSuperApiInstance instance, struct CQFMatchQryUserField *pQryUser, int nRequestID);

///��Ա��ѯ����
CQFMATCH_SUPER_API_EXPORT  int ReqQryParticipant(QFMatchSuperApiInstance instance, struct CQFMatchQryParticipantField *pQryParticipant, int nRequestID);

///��Լ��λ��ѯ
CQFMATCH_SUPER_API_EXPORT  int ReqQryMBLMarketData(QFMatchSuperApiInstance instance, struct CQFMatchQryMBLMarketDataField *pQryMBLMarketData, int nRequestID);

///��Ϣ��ѯ
CQFMATCH_SUPER_API_EXPORT  int ReqQryInformation(QFMatchSuperApiInstance instance, struct CQFMatchQryInformationField *pQryInformation, int nRequestID);

///�ͻ��ֲ���ϸ��ѯ
CQFMATCH_SUPER_API_EXPORT  int ReqQryClientPositionDetail(QFMatchSuperApiInstance instance, struct CQFMatchQryClientPositionDetailField *pQryClientPositionDetail, int nRequestID);

///�ͻ��ֲֲ�ѯ����
CQFMATCH_SUPER_API_EXPORT  int ReqQryClientPositionV1(QFMatchSuperApiInstance instance, struct CQFMatchQryClientPositionV1Field *pQryClientPositionV1, int nRequestID);

///�����ڴ������
CQFMATCH_SUPER_API_EXPORT  int ReqDumpMemTable(QFMatchSuperApiInstance instance, struct CQFMatchDumpMemTableField *pDumpMemTable, int nRequestID);

///����ɽ����걨
CQFMATCH_SUPER_API_EXPORT  int ReqOTCTradeInsert(QFMatchSuperApiInstance instance, struct CQFMatchInputOTCTradeField *pInputOTCTrade, int nRequestID);

///�û����������
CQFMATCH_SUPER_API_EXPORT  int ReqAccountDeposit(QFMatchSuperApiInstance instance, struct CQFMatchAccountDepositField *pAccountDeposit, int nRequestID);

///������ѯ����
CQFMATCH_SUPER_API_EXPORT  int ReqQryAccountDepositDetail(QFMatchSuperApiInstance instance, struct CQFMatchQryAccountDepositDetailField *pQryAccountDepositDetail, int nRequestID);

///ʵʱ�ϳ���ѯ����
CQFMATCH_SUPER_API_EXPORT  int ReqQryTBCommandDetail(QFMatchSuperApiInstance instance, struct CQFMatchQryTBCommandDetailField *pQryTBCommandDetail, int nRequestID);

///�ͻ������Ѳ�ѯ
CQFMATCH_SUPER_API_EXPORT  int ReqQryPartClientFee(QFMatchSuperApiInstance instance, struct CQFMatchQryPartClientFeeField *pQryPartClientFee, int nRequestID);

#endif

#ifdef __cplusplus
}
#endif
