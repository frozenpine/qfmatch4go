package main

import (
	"time"

	"gitlab.quantdo.cn/yuanyang/qfmatch4go"
)

type myAPI struct {
	qfmatch4go.QFMatchMarketAPI
}

func (api *myAPI) OnFrontConnected() {
	api.QFMatchMarketAPI.OnFrontConnected()

	loginReq := qfmatch4go.GoCQFMatchReqUserLoginField{}
	loginReq.UserID = "900000001"
	loginReq.Password = "111111"

	time.Sleep(time.Second)

	api.ReqUserLogin(&loginReq)
}

func (api *myAPI) OnRspUserLogin(rspUserLogin *qfmatch4go.GoCQFMatchRspUserLoginField, err *qfmatch4go.GoCQFMatchRspInfoField, requestID int, isLast bool) {
	api.QFMatchMarketAPI.OnRspUserLogin(rspUserLogin, err, requestID, isLast)

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
