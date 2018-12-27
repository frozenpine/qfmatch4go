package main

import (
	"log"
	"time"

	"gitlab.quantdo.cn/yuanyang/qfmatch4go"
)

type myAPI struct {
	qfmatch4go.QFMatchMarketAPI
}

func (api *myAPI) Login() {
	loginReq := qfmatch4go.GoCQFMatchReqUserLoginField{}
	loginReq.UserID = "900000001"
	loginReq.Password = "111111"

	api.ReqUserLogin(&loginReq)
}

func (api *myAPI) OnFrontConnected() {
	api.QFMatchMarketAPI.OnFrontConnected()

	time.Sleep(time.Second)

	api.Login()
}

func (api *myAPI) OnRspUserLogin(rspUserLogin *qfmatch4go.GoCQFMatchRspUserLoginField, err *qfmatch4go.GoCQFMatchRspInfoField, requestID int, isLast bool) {
	api.QFMatchMarketAPI.OnRspUserLogin(rspUserLogin, err, requestID, isLast)

	if err != nil && err.ErrorID == 75 {
		log.Printf("3秒后尝试重新登录...\n")

		time.Sleep(time.Second * 3)

		api.Login()
	}

	qryInstrument := qfmatch4go.GoCQFMatchQryInstrumentField{}
	qryInstrument.SettlementGroupID = "SG01"

	time.Sleep(time.Second)

	api.ReqQryInstrument(&qryInstrument)
}

func main() {
	api := myAPI{}

	api.InitAPI("./flow/", "demo")

	api.RegisterFront("tcp://192.168.92.26:12701")
	api.SubscribePrivateTopic(qfmatch4go.QUICK)
	api.SubscribePublicTopic(qfmatch4go.QUICK)
	api.SubscribeUserTopic(qfmatch4go.QUICK)

	api.RegisterCallbacks(&api)

	api.Init()

	for {
		time.Sleep(time.Second * 5)
	}
}
