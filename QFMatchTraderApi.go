package qfmatch4go

/*
#cgo CFLAGS: -I${SRCDIR} -fPIC
#cgo LDFLAGS: -L${SRCDIR} -lcQFMatchSuperApi

#include "cgoTraderApi.h"
*/
import "C"

type tradeAPICallbacks interface {
	OnRspOrderInsert(rspOrderInsert *GoCQFMatchInputOrderField, err *GoCQFMatchRspInfoField, requestID int, isLast bool)
	OnRspOrderAction(rspOrderAction *GoCQFMatchOrderActionField, err *GoCQFMatchRspInfoField, requestID int, isLast bool)
	// OnRspQryPartAccount
	OnRspQryOrder(rspQryOrder *GoCQFMatchOrderField, err *GoCQFMatchRspInfoField, requestID int, isLast bool)
	OnRspQryTrade(rspQryTrade *GoCQFMatchTradeField, err *GoCQFMatchRspInfoField, requestID int, isLast bool)
	// OnRspQryClient
	// OnRspQryClientPosition
	OnRtnTrade(rtnTrade *GoCQFMatchTradeField)
	OnRtnOrder(rtnOrder *GoCQFMatchOrderField)
	// OnRtnClientPosition
	// OnRtnFlowMessageCancel
	// OnErrRtnOrderInsert
	// OnErrRtnOrderAction
	// OnRspQryPartClientFee
}

//export goOnRspOrderInsert
func goOnRspOrderInsert(instance C.QFMatchSuperApiInstance, pInputOrder *C.struct_CQFMatchInputOrderField, pRspInfo *C.struct_CQFMatchRspInfoField, nRequestID C.int, bIsLast C.bool) {

}

//export goOnRspOrderAction
func goOnRspOrderAction(instance C.QFMatchSuperApiInstance, pOrderAction *C.struct_CQFMatchOrderActionField, pRspInfo *C.struct_CQFMatchRspInfoField, nRequestID C.int, bIsLast C.bool) {

}

//export goOnRspQryPartAccount
// func goOnRspQryPartAccount(instance C.QFMatchSuperApiInstance, pRspPartAccount *C.struct_CQFMatchRspPartAccountField, pRspInfo *C.struct_CQFMatchRspInfoField, nRequestID C.int, bIsLast C.bool) {}

//export goOnRspQryOrder
func goOnRspQryOrder(instance C.QFMatchSuperApiInstance, pOrder *C.struct_CQFMatchOrderField, pRspInfo *C.struct_CQFMatchRspInfoField, nRequestID C.int, bIsLast C.bool) {

}

//export goOnRspQryTrade
func goOnRspQryTrade(instance C.QFMatchSuperApiInstance, pTrade *C.struct_CQFMatchTradeField, pRspInfo *C.struct_CQFMatchRspInfoField, nRequestID C.int, bIsLast C.bool) {

}

//export goOnRspQryClient
// func goOnRspQryClient(instance C.QFMatchSuperApiInstance, pRspClient *C.struct_CQFMatchRspClientField, pRspInfo *C.struct_CQFMatchRspInfoField, nRequestID C.int, bIsLast C.bool) {}

//export goOnRspQryClientPosition
// func goOnRspQryClientPosition(instance C.QFMatchSuperApiInstance, pRspClientPosition *C.struct_CQFMatchRspClientPositionField, pRspInfo *C.struct_CQFMatchRspInfoField, nRequestID C.int, bIsLast C.bool) {}

//export goOnRtnTrade
func goOnRtnTrade(instance C.QFMatchSuperApiInstance, pTrade *C.struct_CQFMatchTradeField) {

}

//export goOnRtnOrder
func goOnRtnOrder(instance C.QFMatchSuperApiInstance, pOrder *C.struct_CQFMatchOrderField) {

}

//export OnRtnClientPosition
// func OnRtnClientPosition(instance C.QFMatchSuperApiInstance, pClientPosition *C.struct_CQFMatchClientPositionField) {}

//export goOnRtnFlowMessageCancel
// func goOnRtnFlowMessageCancel(instance C.QFMatchSuperApiInstance, pFlowMessageCancel *C.struct_CQFMatchFlowMessageCancelField) {}

//export goOnErrRtnOrderInsert
// func goOnErrRtnOrderInsert(instance C.QFMatchSuperApiInstance, pInputOrder *C.struct_CQFMatchInputOrderField, pRspInfo *C.struct_CQFMatchRspInfoField) {}

//export goOnErrRtnOrderAction
// func goOnErrRtnOrderAction(instance C.QFMatchSuperApiInstance, pOrderAction *C.struct_CQFMatchOrderActionField, pRspInfo *C.struct_CQFMatchRspInfoField) {}

//export goOnRspQryPartClientFee
// func goOnRspQryPartClientFee(instance C.QFMatchSuperApiInstance, pPartClientFee *C.struct_CQFMatchPartClientFeeField, pRspInfo *C.struct_CQFMatchRspInfoField, nRequestID C.int, bIsLast C.bool) {}

type traderAPI struct{}

// QFMatchTraderAPICallbacks Quantfair撮合引擎交易API回调接口
type QFMatchTraderAPICallbacks interface {
	commonAPICallbacks
	marketAPICallbacks
	tradeAPICallbacks
}

// QFMatchTraderAPI Quantfair撮合引擎交易接口
type QFMatchTraderAPI struct {
	commonAPI
	marketAPI
	traderAPI
}

func (api *traderAPI) registerTraderCallbacks(ptrVtCallbacks *C.Callbacks) {
	ptrVtCallbacks.ptrOnRspOrderInsert = C.FuncOnRspOrderInsert(C.cgoOnRspOrderInsert)
	ptrVtCallbacks.ptrOnRspOrderAction = C.FuncOnRspOrderAction(C.cgoOnRspOrderAction)
	// ptrVtCallbacks.ptrOnRspQryPartAccount = C.FuncOnRspQryPartAccount(C.cgoOnRspQryPartAccount)
	ptrVtCallbacks.ptrOnRspQryOrder = C.FuncOnRspQryOrder(C.cgoOnRspQryOrder)
	ptrVtCallbacks.ptrOnRspQryTrade = C.FuncOnRspQryTrade(C.cgoOnRspQryTrade)
	// ptrVtCallbacks.ptrOnRspQryClient = C.FuncOnRspQryClient(C.cgoOnRspQryClient)
	// ptrVtCallbacks.ptrOnRspQryClientPosition = C.FuncOnRspQryClientPosition(C.cgoOnRspQryClientPosition)
	ptrVtCallbacks.ptrOnRtnTrade = C.FuncOnRtnTrade(C.cgoOnRtnTrade)
	ptrVtCallbacks.ptrOnRtnOrder = C.FuncOnRtnOrder(C.cgoOnRtnOrder)
	// ptrVtCallbacks.ptrOnRtnClientPosition = C.FuncOnRtnClientPosition(C.cgoOnRtnClientPosition)
	// ptrVtCallbacks.ptrOnRtnFlowMessageCancel = C.FuncOnRtnFlowMessageCancel(C.cgoOnRtnFlowMessageCancel)
	// ptrVtCallbacks.ptrOnErrRtnOrderInsert = C.FuncOnErrRtnOrderInsert(C.cgoOnErrRtnOrderInsert)
	// ptrVtCallbacks.ptrOnErrRtnOrderAction = C.FuncOnErrRtnOrderAction(C.cgoOnErrRtnOrderAction)
	// ptrVtCallbacks.ptrOnRspQryPartClientFee = C.FuncOnRspQryPartClientFee(C.cgoOnRspQryPartClientFee)
}

// RegisterCallbacks 注册回调接口
func (api *QFMatchTraderAPI) RegisterCallbacks(cb interface{}) {
	vtCallbacks := C.Callbacks{}

	switch cb.(type) {
	case QFMatchMarketAPICallbacks:
		api.registerMarketCallbacks(&vtCallbacks)
	case QFMatchTraderAPICallbacks:
		api.registerMarketCallbacks(&vtCallbacks)
		api.registerTraderCallbacks(&vtCallbacks)
	default:
		panic("Invalid callback interface.")
	}

	api.registerCommonCallbacks(&vtCallbacks)

	C.RegisterCallbacks(C.QFMatchSuperApiInstance(api.apiInstance), &vtCallbacks)

	apiMap[api.apiInstance] = cb
}
