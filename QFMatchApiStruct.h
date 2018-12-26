/////////////////////////////////////////////////////////////////////////
///@file QFMatchApiStruct.h
///@brief �����˿ͻ��˽ӿ�ʹ�õ�ҵ�����ݽṹ
/////////////////////////////////////////////////////////////////////////

#if !defined(QFMatch_STRUCT_H)
#define QFMatch_STRUCT_H

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "QFMatchApiDataType.h"

///��Ϣ�ַ�
struct CQFMatchDisseminationField
{
	///����ϵ�к�
	TQFMatchSequenceSeriesType	SequenceSeries;
	///���к�
	TQFMatchSequenceNoType	SequenceNo;
};
///��Ӧ��Ϣ
struct CQFMatchRspInfoField
{
	///�������
	TQFMatchErrorIDType	ErrorID;
	///������Ϣ
	TQFMatchErrorMsgType	ErrorMsg;
};
///ͨѶ�׶�
struct CQFMatchCommPhaseField
{
	///������
	TQFMatchDateType	TradingDay;
	///ͨѶʱ�κ�
	TQFMatchCommPhaseNoType	CommPhaseNo;
};
///������������
struct CQFMatchExchangeTradingDayField
{
	///������
	TQFMatchDateType	TradingDay;
	///����������
	TQFMatchExchangeIDType	ExchangeID;
};
///����Ự
struct CQFMatchSettlementSessionField
{
	///������
	TQFMatchDateType	TradingDay;
	///���������
	TQFMatchSettlementGroupIDType	SettlementGroupID;
	///������
	TQFMatchSettlementIDType	SettlementID;
};
///��ǰʱ��
struct CQFMatchCurrentTimeField
{
	///��ǰ����
	TQFMatchDateType	CurrDate;
	///��ǰʱ��
	TQFMatchTimeType	CurrTime;
	///��ǰʱ�䣨���룩
	TQFMatchMillisecType	CurrMillisec;
};
///�û���¼����
struct CQFMatchReqUserLoginField
{
	///������
	TQFMatchDateType	TradingDay;
	///�����û�����
	TQFMatchUserIDType	UserID;
	///��Ա����
	TQFMatchParticipantIDType	ParticipantID;
	///����
	TQFMatchPasswordType	Password;
	///�û��˲�Ʒ��Ϣ
	TQFMatchProductInfoType	UserProductInfo;
	///�ӿڶ˲�Ʒ��Ϣ
	TQFMatchProductInfoType	InterfaceProductInfo;
	///Э����Ϣ
	TQFMatchProtocolInfoType	ProtocolInfo;
	///�������Ĵ���
	TQFMatchDataCenterIDType	DataCenterID;
};
///�û���¼Ӧ��
struct CQFMatchRspUserLoginField
{
	///������
	TQFMatchDateType	TradingDay;
	///��¼�ɹ�ʱ��
	TQFMatchTimeType	LoginTime;
	///��󱾵ر�����
	TQFMatchOrderLocalIDType	MaxOrderLocalID;
	///�����û�����
	TQFMatchUserIDType	UserID;
	///��Ա����
	TQFMatchParticipantIDType	ParticipantID;
	///����ϵͳ����
	TQFMatchTradingSystemNameType	TradingSystemName;
	///�������Ĵ���
	TQFMatchDataCenterIDType	DataCenterID;
	///��Ա˽������ǰ����
	TQFMatchSequenceNoType	PrivateFlowSize;
	///����Ա˽������ǰ����
	TQFMatchSequenceNoType	UserFlowSize;
};
///�û��ǳ�����
struct CQFMatchReqUserLogoutField
{
	///�����û�����
	TQFMatchUserIDType	UserID;
	///��Ա����
	TQFMatchParticipantIDType	ParticipantID;
};
///�û��ǳ�Ӧ��
struct CQFMatchRspUserLogoutField
{
	///�����û�����
	TQFMatchUserIDType	UserID;
	///��Ա����
	TQFMatchParticipantIDType	ParticipantID;
};
///���뱨��
struct CQFMatchInputOrderField
{
	///�������
	TQFMatchOrderSysIDType	OrderSysID;
	///��Ա����
	TQFMatchParticipantIDType	ParticipantID;
	///�ͻ�����
	TQFMatchClientIDType	ClientID;
	///�����û�����
	TQFMatchUserIDType	UserID;
	///��Լ����
	TQFMatchInstrumentIDType	InstrumentID;
	///�����۸�����
	TQFMatchOrderPriceTypeType	OrderPriceType;
	///��������
	TQFMatchDirectionType	Direction;
	///��Ͽ�ƽ��־
	TQFMatchCombOffsetFlagType	CombOffsetFlag;
	///���Ͷ���ױ���־
	TQFMatchCombHedgeFlagType	CombHedgeFlag;
	///�۸�
	TQFMatchPriceType	LimitPrice;
	///����
	TQFMatchVolumeType	VolumeTotalOriginal;
	///��Ч������
	TQFMatchTimeConditionType	TimeCondition;
	///GTD����
	TQFMatchDateType	GTDDate;
	///�ɽ�������
	TQFMatchVolumeConditionType	VolumeCondition;
	///��С�ɽ���
	TQFMatchVolumeType	MinVolume;
	///��������
	TQFMatchContingentConditionType	ContingentCondition;
	///ֹ���
	TQFMatchPriceType	StopPrice;
	///ǿƽԭ��
	TQFMatchForceCloseReasonType	ForceCloseReason;
	///���ر������
	TQFMatchOrderLocalIDType	OrderLocalID;
	///�Զ������־
	TQFMatchBoolType	IsAutoSuspend;
	///ҵ��Ԫ
	TQFMatchBusinessUnitType	BusinessUnit;
};
///��������
struct CQFMatchOrderActionField
{
	///�������
	TQFMatchOrderSysIDType	OrderSysID;
	///���ر������
	TQFMatchOrderLocalIDType	OrderLocalID;
	///����������־
	TQFMatchActionFlagType	ActionFlag;
	///��Ա����
	TQFMatchParticipantIDType	ParticipantID;
	///�ͻ�����
	TQFMatchClientIDType	ClientID;
	///�����û�����
	TQFMatchUserIDType	UserID;
	///�۸�
	TQFMatchPriceType	LimitPrice;
	///�����仯
	TQFMatchVolumeType	VolumeChange;
	///�������ر��
	TQFMatchOrderLocalIDType	ActionLocalID;
	///ҵ��Ԫ
	TQFMatchBusinessUnitType	BusinessUnit;
};
///OTC����
struct CQFMatchOTCOrderField
{
	///������
	TQFMatchDateType	TradingDay;
	///���������
	TQFMatchSettlementGroupIDType	SettlementGroupID;
	///������
	TQFMatchSettlementIDType	SettlementID;
	///OTC�������
	TQFMatchOTCOrderSysIDType	OTCOrderSysID;
	///��Ա����
	TQFMatchParticipantIDType	ParticipantID;
	///�ͻ�����
	TQFMatchClientIDType	ClientID;
	///�����û�����
	TQFMatchUserIDType	UserID;
	///��Լ����
	TQFMatchInstrumentIDType	InstrumentID;
	///��������
	TQFMatchDirectionType	Direction;
	///��ƽ��־
	TQFMatchOffsetFlagType	OffsetFlag;
	///Ͷ���ױ���־
	TQFMatchHedgeFlagType	HedgeFlag;
	///�۸�
	TQFMatchPriceType	Price;
	///����
	TQFMatchVolumeType	Volume;
	///���ַ���Ա����
	TQFMatchParticipantIDType	OtherParticipantID;
	///���ַ��ͻ�����
	TQFMatchClientIDType	OtherClientID;
	///���ַ������û�����
	TQFMatchUserIDType	OtherUserID;
	///���ַ���ƽ��־
	TQFMatchOffsetFlagType	OtherOffsetFlag;
	///���ַ��ױ���־
	TQFMatchHedgeFlagType	OtherHedgeFlag;
	///����OTC�������
	TQFMatchOrderLocalIDType	OTCOrderLocalID;
	///OTC����״̬
	TQFMatchOTCOrderStatusType	OTCOrderStatus;
	///����ʱ��
	TQFMatchTimeType	InsertTime;
	///����ʱ��
	TQFMatchTimeType	CancelTime;
	///�����Ա���
	TQFMatchParticipantIDType	ClearingPartID;
	///���ַ������Ա���
	TQFMatchParticipantIDType	OtherClearingPartID;
	///��Ȼ����
	TQFMatchDateType	CalendarDate;
};
///���뱨��
struct CQFMatchInputQuoteField
{
	///���۱��
	TQFMatchQuoteSysIDType	QuoteSysID;
	///��Ա����
	TQFMatchParticipantIDType	ParticipantID;
	///�ͻ�����
	TQFMatchClientIDType	ClientID;
	///�����û�����
	TQFMatchUserIDType	UserID;
	///����
	TQFMatchVolumeType	Volume;
	///��Լ����
	TQFMatchInstrumentIDType	InstrumentID;
	///���ر��۱��
	TQFMatchOrderLocalIDType	QuoteLocalID;
	///ҵ��Ԫ
	TQFMatchBusinessUnitType	BusinessUnit;
	///����Ͽ�ƽ��־
	TQFMatchCombOffsetFlagType	BidCombOffsetFlag;
	///������ױ���־
	TQFMatchCombHedgeFlagType	BidCombHedgeFlag;
	///�򷽼۸�
	TQFMatchPriceType	BidPrice;
	///������Ͽ�ƽ��־
	TQFMatchCombOffsetFlagType	AskCombOffsetFlag;
	///��������ױ���־
	TQFMatchCombHedgeFlagType	AskCombHedgeFlag;
	///�����۸�
	TQFMatchPriceType	AskPrice;
};
///���۲���
struct CQFMatchQuoteActionField
{
	///���۱��
	TQFMatchQuoteSysIDType	QuoteSysID;
	///���ر��۱��
	TQFMatchOrderLocalIDType	QuoteLocalID;
	///����������־
	TQFMatchActionFlagType	ActionFlag;
	///��Ա����
	TQFMatchParticipantIDType	ParticipantID;
	///�ͻ�����
	TQFMatchClientIDType	ClientID;
	///�����û�����
	TQFMatchUserIDType	UserID;
	///�������ر��
	TQFMatchOrderLocalIDType	ActionLocalID;
	///ҵ��Ԫ
	TQFMatchBusinessUnitType	BusinessUnit;
};
///����ִ������
struct CQFMatchInputExecOrderField
{
	///��Լ���
	TQFMatchInstrumentIDType	InstrumentID;
	///��Ա����
	TQFMatchParticipantIDType	ParticipantID;
	///�ͻ�����
	TQFMatchClientIDType	ClientID;
	///�����û�����
	TQFMatchUserIDType	UserID;
	///����ִ��������
	TQFMatchOrderLocalIDType	ExecOrderLocalID;
	///����
	TQFMatchVolumeType	Volume;
	///ҵ��Ԫ
	TQFMatchBusinessUnitType	BusinessUnit;
};
///ִ���������
struct CQFMatchExecOrderActionField
{
	///ִ��������
	TQFMatchExecOrderSysIDType	ExecOrderSysID;
	///����ִ��������
	TQFMatchOrderLocalIDType	ExecOrderLocalID;
	///����������־
	TQFMatchActionFlagType	ActionFlag;
	///��Ա����
	TQFMatchParticipantIDType	ParticipantID;
	///�ͻ�����
	TQFMatchClientIDType	ClientID;
	///�����û�����
	TQFMatchUserIDType	UserID;
	///�������ر��
	TQFMatchOrderLocalIDType	ActionLocalID;
	///ҵ��Ԫ
	TQFMatchBusinessUnitType	BusinessUnit;
};
///�û���¼�˳�
struct CQFMatchUserLogoutField
{
	///�����û�����
	TQFMatchUserIDType	UserID;
	///��Ա����
	TQFMatchParticipantIDType	ParticipantID;
};
///�û������޸�
struct CQFMatchUserPasswordUpdateField
{
	///�����û�����
	TQFMatchUserIDType	UserID;
	///��Ա����
	TQFMatchParticipantIDType	ParticipantID;
	///������
	TQFMatchPasswordType	OldPassword;
	///������
	TQFMatchPasswordType	NewPassword;
};
///����Ǳ���ϱ���
struct CQFMatchInputCombOrderField
{
	///��ϱ������
	TQFMatchOrderSysIDType	CombOrderSysID;
	///��Ա����
	TQFMatchParticipantIDType	ParticipantID;
	///�ͻ�����
	TQFMatchClientIDType	ClientID;
	///�����û�����
	TQFMatchUserIDType	UserID;
	///�۸�
	TQFMatchPriceType	LimitPrice;
	///����
	TQFMatchVolumeType	VolumeTotalOriginal;
	///���ر������
	TQFMatchOrderLocalIDType	CombOrderLocalID;
	///ҵ��Ԫ
	TQFMatchBusinessUnitType	BusinessUnit;
	///��Լ����1
	TQFMatchInstrumentIDType	InstrumentID1;
	///��������1
	TQFMatchDirectionType	Direction1;
	///���ȳ���1
	TQFMatchLegMultipleType	LegMultiple1;
	///��ƽ��־1
	TQFMatchOffsetFlagType	OffsetFlag1;
	///Ͷ���ױ���־1
	TQFMatchHedgeFlagType	HedgeFlag1;
	///��Լ����2
	TQFMatchInstrumentIDType	InstrumentID2;
	///��������2
	TQFMatchDirectionType	Direction2;
	///���ȳ���2
	TQFMatchLegMultipleType	LegMultiple2;
	///��ƽ��־2
	TQFMatchOffsetFlagType	OffsetFlag2;
	///Ͷ���ױ���־2
	TQFMatchHedgeFlagType	HedgeFlag2;
	///��Լ����3
	TQFMatchInstrumentIDType	InstrumentID3;
	///��������3
	TQFMatchDirectionType	Direction3;
	///���ȳ���3
	TQFMatchLegMultipleType	LegMultiple3;
	///��ƽ��־3
	TQFMatchOffsetFlagType	OffsetFlag3;
	///Ͷ���ױ���־3
	TQFMatchHedgeFlagType	HedgeFlag3;
	///��Լ����4
	TQFMatchInstrumentIDType	InstrumentID4;
	///��������4
	TQFMatchDirectionType	Direction4;
	///���ȳ���4
	TQFMatchLegMultipleType	LegMultiple4;
	///��ƽ��־4
	TQFMatchOffsetFlagType	OffsetFlag4;
	///Ͷ���ױ���־4
	TQFMatchHedgeFlagType	HedgeFlag4;
};
///ǿ���û��˳�
struct CQFMatchForceUserExitField
{
	///��Ա����
	TQFMatchParticipantIDType	ParticipantID;
	///�����û�����
	TQFMatchUserIDType	UserID;
};
///�����ڴ��
struct CQFMatchDumpMemTableField
{
	///�ڴ������
	TQFMatchTableNameType	TableName;
};
///�ʽ��˻������
struct CQFMatchAccountDepositField
{
	///���������
	TQFMatchSettlementGroupIDType	SettlementGroupID;
	///����𱾵غ�
	TQFMatchOrderLocalIDType	DepositLocalID;
	///��Ա����
	TQFMatchParticipantIDType	ParticipantID;
	///���׽�ɫ
	TQFMatchTradingRoleType	TradingRole;
	///�ʽ��˺�
	TQFMatchAccountIDType	AccountID;
	///�������
	TQFMatchMoneyType	Deposit;
	///ȫ�ֳ������ˮ���
	TQFMatchSequenceNoType	DepositNo;
	///����
	TQFMatchCurrencyType	Currency;
	///�ʽ��������
	TQFMatchAccountActionTypeType	ActionType;
	///��ע
	TQFMatchComeFromType	Comments;
};
///�����
struct CQFMatchAccountDepositDetailField
{
	///���������
	TQFMatchSettlementGroupIDType	SettlementGroupID;
	///����𱾵غ�
	TQFMatchOrderLocalIDType	DepositLocalID;
	///��Ա����
	TQFMatchParticipantIDType	ParticipantID;
	///���׽�ɫ
	TQFMatchTradingRoleType	TradingRole;
	///�ʽ��˺�
	TQFMatchAccountIDType	AccountID;
	///�������
	TQFMatchMoneyType	Deposit;
	///ȫ�ֳ������ˮ���
	TQFMatchSequenceNoType	DepositNo;
	///����
	TQFMatchCurrencyType	Currency;
	///�ʽ��������
	TQFMatchAccountActionTypeType	ActionType;
	///��ע
	TQFMatchComeFromType	Comments;
	///������
	TQFMatchTransStatusType	Status;
	///��������
	TQFMatchDateType	CalendarDate;
	///����ʱ��
	TQFMatchTimeType	InsertTime;
};
///ʵʱ�ϳ�
struct CQFMatchTBCommandDetailField
{
	///������
	TQFMatchDateType	TradingDay;
	///���������
	TQFMatchSettlementGroupIDType	SettlementGroupID;
	///������
	TQFMatchSettlementIDType	SettlementID;
	///DB����غ�
	TQFMatchOrderLocalIDType	CommandLocalID;
	///ȫ��DB�������
	TQFMatchSequenceNoType	CommandNo;
	///DB��������
	TQFMatchCommandTypeType	CommandType;
	///�ֶ���
	TQFMatchFieldNameType	FieldName;
	///�ֶ�����
	TQFMatchFieldContentType	FieldContent;
	///��ע
	TQFMatchComeFromType	Comments;
	///������
	TQFMatchTransStatusType	Status;
	///��������
	TQFMatchDateType	CalendarDate;
	///����ʱ��
	TQFMatchTimeType	InsertTime;
};
///������
struct CQFMatchPartClientFeeField
{
	///���������
	TQFMatchSettlementGroupIDType	SettlementGroupID;
	///��Ա����
	TQFMatchParticipantIDType	ParticipantID;
	///�ͻ���
	TQFMatchClientIDType	ClientID;
	///��Լ�ı��
	TQFMatchInstrumentIDType	InstrumentID;
	///�ɽ���ɫ
	TQFMatchMatchRoleType	MatchRole;
	///���������Ѱ�����
	TQFMatchRatioType	OpenFeeRate;
	///���������Ѱ�����
	TQFMatchRatioType	OpenFeeAmt;
	///ƽ�������Ѱ�����
	TQFMatchRatioType	OffsetFeeRate;
	///ƽ�������Ѱ�����
	TQFMatchRatioType	OffsetFeeAmt;
	///ƽ��������Ѱ�����
	TQFMatchRatioType	OTFeeRate;
	///ƽ��������Ѱ�����
	TQFMatchRatioType	OTFeeAmt;
};
///�ͻ��ֲ���ϸ
struct CQFMatchClientPositionDetailField
{
	///������
	TQFMatchDateType	TradingDay;
	///���������
	TQFMatchSettlementGroupIDType	SettlementGroupID;
	///������
	TQFMatchSettlementIDType	SettlementID;
	///��Ա����
	TQFMatchParticipantIDType	ParticipantID;
	///�ͻ�����
	TQFMatchClientIDType	ClientID;
	///�ɽ�����
	TQFMatchDateType	TradeDate;
	///��Լ����
	TQFMatchInstrumentIDType	InstrumentID;
	///��������
	TQFMatchDirectionType	Direction;
	///�ɽ����
	TQFMatchTradeIDType	TradeID;
	///�ɽ�����
	TQFMatchTradeTypeType	TradeType;
	///���տ�ƽ����
	TQFMatchVolumeType	Position;
	///�ɽ��۸�
	TQFMatchPriceType	Price;
	///�ֲֳɱ����������ѵ�
	TQFMatchMoneyType	PositionCost;
	///�ֲֳɱ�
	TQFMatchMoneyType	PositionMoney;
	///�Ƿ���ղ�
	TQFMatchBoolType	IsToday;
	///ռ�õı�֤��
	TQFMatchMoneyType	UseMargin;
	///������
	TQFMatchMoneyType	Fee;
	///Ͷ���ױ���־
	TQFMatchHedgeFlagType	HedgeFlag;
};
///��Ա
struct CQFMatchParticipantField
{
	///��Ա����
	TQFMatchParticipantIDType	ParticipantID;
	///��Ա����
	TQFMatchParticipantNameType	ParticipantName;
	///��Ա���
	TQFMatchParticipantAbbrType	ParticipantAbbr;
	///��Ա����
	TQFMatchMemberTypeType	MemberType;
	///�Ƿ��Ծ
	TQFMatchBoolType	IsActive;
};
///�û�
struct CQFMatchUserField
{
	///��Ա����
	TQFMatchParticipantIDType	ParticipantID;
	///�����û�����
	TQFMatchUserIDType	UserID;
	///�����û�����
	TQFMatchUserTypeType	UserType;
	///����
	TQFMatchPasswordType	Password;
	///����ԱȨ��
	TQFMatchUserActiveType	IsActive;
};
///�ͻ�
struct CQFMatchClientField
{
	///�ͻ�����
	TQFMatchClientIDType	ClientID;
	///�ͻ�����
	TQFMatchPartyNameType	ClientName;
	///֤������
	TQFMatchIdCardTypeType	IdentifiedCardType;
	///֤������
	TQFMatchIdentifiedCardNoType	IdentifiedCardNo;
	///���׽�ɫ
	TQFMatchTradingRoleType	TradingRole;
	///�ͻ�����
	TQFMatchClientTypeType	ClientType;
	///�Ƿ��Ծ
	TQFMatchBoolType	IsActive;
	///�ͻ���������
	TQFMatchHedgeFlagType	HedgeFlag;
};
///�û��Ự
struct CQFMatchUserSessionField
{
	///ǰ�ñ��
	TQFMatchFrontIDType	FrontID;
	///�����û�����
	TQFMatchUserIDType	UserID;
	///�����û�����
	TQFMatchUserTypeType	UserType;
	///�Ự���
	TQFMatchSessionIDType	SessionID;
	///��¼ʱ��
	TQFMatchTimeType	LoginTime;
	///��Ա����
	TQFMatchParticipantIDType	ParticipantID;
	///IP��ַ
	TQFMatchIPAddressType	IPAddress;
	///�û��˲�Ʒ��Ϣ
	TQFMatchProductInfoType	UserProductInfo;
	///�ӿڶ˲�Ʒ��Ϣ
	TQFMatchProductInfoType	InterfaceProductInfo;
	///Э����Ϣ
	TQFMatchProtocolInfoType	ProtocolInfo;
};
///��Ʒ��
struct CQFMatchProductGroupField
{
	///���������
	TQFMatchSettlementGroupIDType	SettlementGroupID;
	///��Ʒ�����
	TQFMatchProductGroupIDType	ProductGroupID;
	///��Ʒ������
	TQFMatchProductGroupNameType	ProductGroupName;
	///��Ʒ����
	TQFMatchCommodityIDType	CommodityID;
};
///��Ʒ
struct CQFMatchProductField
{
	///���������
	TQFMatchSettlementGroupIDType	SettlementGroupID;
	///��Ʒ����
	TQFMatchProductIDType	ProductID;
	///��Ʒ�����
	TQFMatchProductGroupIDType	ProductGroupID;
	///��Ʒ����
	TQFMatchProductNameType	ProductName;
	///��Ʒ����
	TQFMatchProductClassType	ProductClass;
};
///��Լ
struct CQFMatchInstrumentField
{
	///���������
	TQFMatchSettlementGroupIDType	SettlementGroupID;
	///��Ʒ����
	TQFMatchProductIDType	ProductID;
	///��Ʒ�����
	TQFMatchProductGroupIDType	ProductGroupID;
	///������Ʒ����
	TQFMatchInstrumentIDType	UnderlyingInstrID;
	///��Ʒ����
	TQFMatchProductClassType	ProductClass;
	///�ֲ�����
	TQFMatchPositionTypeType	PositionType;
	///ִ�м�
	TQFMatchPriceType	StrikePrice;
	///��Ȩ����
	TQFMatchOptionsTypeType	OptionsType;
	///��Լ��������
	TQFMatchVolumeMultipleType	VolumeMultiple;
	///��Լ������Ʒ����
	TQFMatchUnderlyingMultipleType	UnderlyingMultiple;
	///��Լ����
	TQFMatchInstrumentIDType	InstrumentID;
	///��Լ����
	TQFMatchInstrumentNameType	InstrumentName;
	///�������
	TQFMatchYearType	DeliveryYear;
	///������
	TQFMatchMonthType	DeliveryMonth;
	///��ǰ�·�
	TQFMatchAdvanceMonthType	AdvanceMonth;
	///��ǰ�Ƿ���
	TQFMatchBoolType	IsTrading;
	///�Ƽ۱���
	TQFMatchCurrencyType	PriceCurrency;
	///�������
	TQFMatchCurrencyType	ClearCurrency;
	///�Ƿ����Լ
	TQFMatchBoolType	IsInverse;
	///��Լ��������
	TQFMatchCurrencyType	BaseCurrency;
};
///��Ͻ��׺�Լ�ĵ���
struct CQFMatchCombinationLegField
{
	///���������
	TQFMatchSettlementGroupIDType	SettlementGroupID;
	///��Ϻ�Լ����
	TQFMatchInstrumentIDType	CombInstrumentID;
	///���ȱ��
	TQFMatchLegIDType	LegID;
	///���Ⱥ�Լ����
	TQFMatchInstrumentIDType	LegInstrumentID;
	///��������
	TQFMatchDirectionType	Direction;
	///���ȳ���
	TQFMatchLegMultipleType	LegMultiple;
	///�Ƶ�����
	TQFMatchImplyLevelType	ImplyLevel;
};
///��Ա��Լ�ֲ�
struct CQFMatchPartPositionField
{
	///������
	TQFMatchDateType	TradingDay;
	///���������
	TQFMatchSettlementGroupIDType	SettlementGroupID;
	///������
	TQFMatchSettlementIDType	SettlementID;
	///Ͷ���ױ���־
	TQFMatchHedgeFlagType	HedgeFlag;
	///�ֲֶ�շ���
	TQFMatchPosiDirectionType	PosiDirection;
	///���ճֲ�
	TQFMatchVolumeType	YdPosition;
	///���ճֲ�
	TQFMatchVolumeType	Position;
	///��ͷ����
	TQFMatchVolumeType	LongFrozen;
	///��ͷ����
	TQFMatchVolumeType	ShortFrozen;
	///���ն�ͷ����
	TQFMatchVolumeType	YdLongFrozen;
	///���տ�ͷ����
	TQFMatchVolumeType	YdShortFrozen;
	///��Լ����
	TQFMatchInstrumentIDType	InstrumentID;
	///��Ա����
	TQFMatchParticipantIDType	ParticipantID;
	///���׽�ɫ
	TQFMatchTradingRoleType	TradingRole;
};
///�ͻ���Լ�ֲ�
struct CQFMatchClientPositionField
{
	///������
	TQFMatchDateType	TradingDay;
	///���������
	TQFMatchSettlementGroupIDType	SettlementGroupID;
	///������
	TQFMatchSettlementIDType	SettlementID;
	///Ͷ���ױ���־
	TQFMatchHedgeFlagType	HedgeFlag;
	///�ֲֶ�շ���
	TQFMatchPosiDirectionType	PosiDirection;
	///���ճֲ�
	TQFMatchVolumeType	YdPosition;
	///���ճֲ�
	TQFMatchVolumeType	Position;
	///��ͷ����
	TQFMatchVolumeType	LongFrozen;
	///��ͷ����
	TQFMatchVolumeType	ShortFrozen;
	///���ն�ͷ����
	TQFMatchVolumeType	YdLongFrozen;
	///���տ�ͷ����
	TQFMatchVolumeType	YdShortFrozen;
	///������ɽ���
	TQFMatchVolumeType	BuyTradeVolume;
	///�������ɽ���
	TQFMatchVolumeType	SellTradeVolume;
	///�ֲֳɱ�
	TQFMatchMoneyType	PositionCost;
	///���ճֲֳɱ�
	TQFMatchMoneyType	YdPositionCost;
	///ռ�õı�֤��
	TQFMatchMoneyType	UseMargin;
	///����ı�֤��
	TQFMatchMoneyType	FrozenMargin;
	///��ͷ����ı�֤��
	TQFMatchMoneyType	LongFrozenMargin;
	///��ͷ����ı�֤��
	TQFMatchMoneyType	ShortFrozenMargin;
	///�����Ȩ����
	TQFMatchMoneyType	FrozenPremium;
	///��Լ����
	TQFMatchInstrumentIDType	InstrumentID;
	///��Ա����
	TQFMatchParticipantIDType	ParticipantID;
	///�ͻ�����
	TQFMatchClientIDType	ClientID;
	///�ϴν���֮��ƽ��ӯ��
	TQFMatchMoneyType	CloseProfit;
	///�ֲ�ӯ��
	TQFMatchMoneyType	PositionProfit;
	///�ۼƿ��ֳɱ�
	TQFMatchMoneyType	TotalPositionCost;
	///�ۼ�ƽ��ӯ��
	TQFMatchMoneyType	TotalCloseProfit;
	///�ۼƳֲ�ӯ��
	TQFMatchMoneyType	TotalPositionProfit;
	///�ܸ˱���
	TQFMatchRatioType	Leverage;
	///�ӹܼ۸�
	TQFMatchRatioType	LiquidationPrice;
	///�ʽ��ʺ�
	TQFMatchAccountIDType	AccountID;
	///����
	TQFMatchCurrencyType	ClearCurrency;
};
///��ֵ�����
struct CQFMatchHedgeVolumeField
{
	///������
	TQFMatchDateType	TradingDay;
	///���������
	TQFMatchSettlementGroupIDType	SettlementGroupID;
	///������
	TQFMatchSettlementIDType	SettlementID;
	///��Ա����
	TQFMatchParticipantIDType	ParticipantID;
	///�ͻ�����
	TQFMatchClientIDType	ClientID;
	///��Լ����
	TQFMatchInstrumentIDType	InstrumentID;
	///��ͷ��ֵ������������
	TQFMatchVolumeType	LongVolumeOriginal;
	///��ͷ��ֵ������������
	TQFMatchVolumeType	ShortVolumeOriginal;
	///��ͷ��ֵ���
	TQFMatchVolumeType	LongVolume;
	///��ͷ��ֵ���
	TQFMatchVolumeType	ShortVolume;
};
///�г�����
struct CQFMatchMarketDataField
{
	///������
	TQFMatchDateType	TradingDay;
	///���������
	TQFMatchSettlementGroupIDType	SettlementGroupID;
	///������
	TQFMatchSettlementIDType	SettlementID;
	///���¼�
	TQFMatchPriceType	LastPrice;
	///�����
	TQFMatchPriceType	PreSettlementPrice;
	///������
	TQFMatchPriceType	PreClosePrice;
	///��ֲ���
	TQFMatchLargeVolumeType	PreOpenInterest;
	///����
	TQFMatchPriceType	OpenPrice;
	///��߼�
	TQFMatchPriceType	HighestPrice;
	///��ͼ�
	TQFMatchPriceType	LowestPrice;
	///����
	TQFMatchVolumeType	Volume;
	///�ɽ����
	TQFMatchMoneyType	Turnover;
	///�ֲ���
	TQFMatchLargeVolumeType	OpenInterest;
	///������
	TQFMatchPriceType	ClosePrice;
	///�����
	TQFMatchPriceType	SettlementPrice;
	///��ͣ���
	TQFMatchPriceType	UpperLimitPrice;
	///��ͣ���
	TQFMatchPriceType	LowerLimitPrice;
	///����ʵ��
	TQFMatchRatioType	PreDelta;
	///����ʵ��
	TQFMatchRatioType	CurrDelta;
	///����޸�ʱ��
	TQFMatchTimeType	UpdateTime;
	///����޸ĺ���
	TQFMatchMillisecType	UpdateMillisec;
	///��Լ����
	TQFMatchInstrumentIDType	InstrumentID;
	///�ʽ����
	TQFMatchPriceType	FundingRate;
	///����۸�
	TQFMatchPriceType	FairPrice;
};
///����г�����
struct CQFMatchDepthMarketDataField
{
	///������
	TQFMatchDateType	TradingDay;
	///���������
	TQFMatchSettlementGroupIDType	SettlementGroupID;
	///������
	TQFMatchSettlementIDType	SettlementID;
	///���¼�
	TQFMatchPriceType	LastPrice;
	///�����
	TQFMatchPriceType	PreSettlementPrice;
	///������
	TQFMatchPriceType	PreClosePrice;
	///��ֲ���
	TQFMatchLargeVolumeType	PreOpenInterest;
	///����
	TQFMatchPriceType	OpenPrice;
	///��߼�
	TQFMatchPriceType	HighestPrice;
	///��ͼ�
	TQFMatchPriceType	LowestPrice;
	///����
	TQFMatchVolumeType	Volume;
	///�ɽ����
	TQFMatchMoneyType	Turnover;
	///�ֲ���
	TQFMatchLargeVolumeType	OpenInterest;
	///������
	TQFMatchPriceType	ClosePrice;
	///�����
	TQFMatchPriceType	SettlementPrice;
	///��ͣ���
	TQFMatchPriceType	UpperLimitPrice;
	///��ͣ���
	TQFMatchPriceType	LowerLimitPrice;
	///����ʵ��
	TQFMatchRatioType	PreDelta;
	///����ʵ��
	TQFMatchRatioType	CurrDelta;
	///����޸�ʱ��
	TQFMatchTimeType	UpdateTime;
	///����޸ĺ���
	TQFMatchMillisecType	UpdateMillisec;
	///��Լ����
	TQFMatchInstrumentIDType	InstrumentID;
	///�����һ
	TQFMatchPriceType	BidPrice1;
	///������һ
	TQFMatchVolumeType	BidVolume1;
	///������һ
	TQFMatchPriceType	AskPrice1;
	///������һ
	TQFMatchVolumeType	AskVolume1;
	///����۶�
	TQFMatchPriceType	BidPrice2;
	///��������
	TQFMatchVolumeType	BidVolume2;
	///�����۶�
	TQFMatchPriceType	AskPrice2;
	///��������
	TQFMatchVolumeType	AskVolume2;
	///�������
	TQFMatchPriceType	BidPrice3;
	///��������
	TQFMatchVolumeType	BidVolume3;
	///��������
	TQFMatchPriceType	AskPrice3;
	///��������
	TQFMatchVolumeType	AskVolume3;
	///�������
	TQFMatchPriceType	BidPrice4;
	///��������
	TQFMatchVolumeType	BidVolume4;
	///��������
	TQFMatchPriceType	AskPrice4;
	///��������
	TQFMatchVolumeType	AskVolume4;
	///�������
	TQFMatchPriceType	BidPrice5;
	///��������
	TQFMatchVolumeType	BidVolume5;
	///��������
	TQFMatchPriceType	AskPrice5;
	///��������
	TQFMatchVolumeType	AskVolume5;
	///��Ȼ����
	TQFMatchDateType	CalendarDate;
	///�ʽ����
	TQFMatchPriceType	FundingRate;
	///����۸�
	TQFMatchPriceType	FairPrice;
};
///�ּ۱�
struct CQFMatchMBLMarketDataField
{
	///��Լ����
	TQFMatchInstrumentIDType	InstrumentID;
	///��������
	TQFMatchDirectionType	Direction;
	///�۸�
	TQFMatchPriceType	Price;
	///����
	TQFMatchVolumeType	Volume;
};
///��������
struct CQFMatchAliasDefineField
{
	///��ʼλ��
	TQFMatchStartPosType	StartPos;
	///����
	TQFMatchAliasType	Alias;
	///ԭ��
	TQFMatchOriginalTextType	OriginalText;
};
///�����������
struct CQFMatchMarketDataBaseField
{
	///������
	TQFMatchDateType	TradingDay;
	///���������
	TQFMatchSettlementGroupIDType	SettlementGroupID;
	///������
	TQFMatchSettlementIDType	SettlementID;
	///�����
	TQFMatchPriceType	PreSettlementPrice;
	///������
	TQFMatchPriceType	PreClosePrice;
	///��ֲ���
	TQFMatchLargeVolumeType	PreOpenInterest;
	///����ʵ��
	TQFMatchRatioType	PreDelta;
};
///���龲̬����
struct CQFMatchMarketDataStaticField
{
	///����
	TQFMatchPriceType	OpenPrice;
	///��߼�
	TQFMatchPriceType	HighestPrice;
	///��ͼ�
	TQFMatchPriceType	LowestPrice;
	///������
	TQFMatchPriceType	ClosePrice;
	///��ͣ���
	TQFMatchPriceType	UpperLimitPrice;
	///��ͣ���
	TQFMatchPriceType	LowerLimitPrice;
	///�����
	TQFMatchPriceType	SettlementPrice;
	///����ʵ��
	TQFMatchRatioType	CurrDelta;
};
///�������³ɽ�����
struct CQFMatchMarketDataLastMatchField
{
	///���¼�
	TQFMatchPriceType	LastPrice;
	///����
	TQFMatchVolumeType	Volume;
	///�ɽ����
	TQFMatchMoneyType	Turnover;
	///�ֲ���
	TQFMatchLargeVolumeType	OpenInterest;
};
///�������ż�����
struct CQFMatchMarketDataBestPriceField
{
	///�����һ
	TQFMatchPriceType	BidPrice1;
	///������һ
	TQFMatchVolumeType	BidVolume1;
	///������һ
	TQFMatchPriceType	AskPrice1;
	///������һ
	TQFMatchVolumeType	AskVolume1;
};
///�����������������
struct CQFMatchMarketDataBid23Field
{
	///����۶�
	TQFMatchPriceType	BidPrice2;
	///��������
	TQFMatchVolumeType	BidVolume2;
	///�������
	TQFMatchPriceType	BidPrice3;
	///��������
	TQFMatchVolumeType	BidVolume3;
};
///������������������
struct CQFMatchMarketDataAsk23Field
{
	///�����۶�
	TQFMatchPriceType	AskPrice2;
	///��������
	TQFMatchVolumeType	AskVolume2;
	///��������
	TQFMatchPriceType	AskPrice3;
	///��������
	TQFMatchVolumeType	AskVolume3;
};
///���������ġ�������
struct CQFMatchMarketDataBid45Field
{
	///�������
	TQFMatchPriceType	BidPrice4;
	///��������
	TQFMatchVolumeType	BidVolume4;
	///�������
	TQFMatchPriceType	BidPrice5;
	///��������
	TQFMatchVolumeType	BidVolume5;
};
///���������ġ�������
struct CQFMatchMarketDataAsk45Field
{
	///��������
	TQFMatchPriceType	AskPrice4;
	///��������
	TQFMatchVolumeType	AskVolume4;
	///��������
	TQFMatchPriceType	AskPrice5;
	///��������
	TQFMatchVolumeType	AskVolume5;
};
///�������ʱ������
struct CQFMatchMarketDataUpdateTimeField
{
	///��Լ����
	TQFMatchInstrumentIDType	InstrumentID;
	///����޸�ʱ��
	TQFMatchTimeType	UpdateTime;
	///����޸ĺ���
	TQFMatchMillisecType	UpdateMillisec;
	///Calendar Date
	TQFMatchDateType	CalendarDate;
};
///����
struct CQFMatchQuoteField
{
	///������
	TQFMatchDateType	TradingDay;
	///���������
	TQFMatchSettlementGroupIDType	SettlementGroupID;
	///������
	TQFMatchSettlementIDType	SettlementID;
	///���۱��
	TQFMatchQuoteSysIDType	QuoteSysID;
	///��Ա����
	TQFMatchParticipantIDType	ParticipantID;
	///�ͻ�����
	TQFMatchClientIDType	ClientID;
	///�����û�����
	TQFMatchUserIDType	UserID;
	///����
	TQFMatchVolumeType	Volume;
	///��Լ����
	TQFMatchInstrumentIDType	InstrumentID;
	///���ر��۱��
	TQFMatchOrderLocalIDType	QuoteLocalID;
	///ҵ��Ԫ
	TQFMatchBusinessUnitType	BusinessUnit;
	///����Ͽ�ƽ��־
	TQFMatchCombOffsetFlagType	BidCombOffsetFlag;
	///������ױ���־
	TQFMatchCombHedgeFlagType	BidCombHedgeFlag;
	///�򷽼۸�
	TQFMatchPriceType	BidPrice;
	///������Ͽ�ƽ��־
	TQFMatchCombOffsetFlagType	AskCombOffsetFlag;
	///��������ױ���־
	TQFMatchCombHedgeFlagType	AskCombHedgeFlag;
	///�����۸�
	TQFMatchPriceType	AskPrice;
	///����ʱ��
	TQFMatchTimeType	InsertTime;
	///����ʱ��
	TQFMatchTimeType	CancelTime;
	///�ɽ�ʱ��
	TQFMatchTimeType	TradeTime;
	///�򷽱������
	TQFMatchOrderSysIDType	BidOrderSysID;
	///�����������
	TQFMatchOrderSysIDType	AskOrderSysID;
	///�����Ա���
	TQFMatchParticipantIDType	ClearingPartID;
	///��Ȼ����
	TQFMatchDateType	CalendarDate;
};
///�ɽ�
struct CQFMatchTradeField
{
	///������
	TQFMatchDateType	TradingDay;
	///���������
	TQFMatchSettlementGroupIDType	SettlementGroupID;
	///������
	TQFMatchSettlementIDType	SettlementID;
	///�ɽ����
	TQFMatchTradeIDType	TradeID;
	///��������
	TQFMatchDirectionType	Direction;
	///�������
	TQFMatchOrderSysIDType	OrderSysID;
	///��Ա����
	TQFMatchParticipantIDType	ParticipantID;
	///�ͻ�����
	TQFMatchClientIDType	ClientID;
	///���׽�ɫ
	TQFMatchTradingRoleType	TradingRole;
	///�ʽ��ʺ�
	TQFMatchAccountIDType	AccountID;
	///��Լ����
	TQFMatchInstrumentIDType	InstrumentID;
	///��ƽ��־
	TQFMatchOffsetFlagType	OffsetFlag;
	///Ͷ���ױ���־
	TQFMatchHedgeFlagType	HedgeFlag;
	///�۸�
	TQFMatchPriceType	Price;
	///����
	TQFMatchVolumeType	Volume;
	///�ɽ�ʱ��
	TQFMatchTimeType	TradeTime;
	///�ɽ�����
	TQFMatchTradeTypeType	TradeType;
	///�ɽ�����Դ
	TQFMatchPriceSourceType	PriceSource;
	///�����û�����
	TQFMatchUserIDType	UserID;
	///���ر������
	TQFMatchOrderLocalIDType	OrderLocalID;
	///�����Ա���
	TQFMatchParticipantIDType	ClearingPartID;
	///ҵ��Ԫ
	TQFMatchBusinessUnitType	BusinessUnit;
	///��Ȼ����
	TQFMatchDateType	CalendarDate;
	///�ɽ���ɫ
	TQFMatchMatchRoleType	MatchRole;
	///������
	TQFMatchMoneyType	Fee;
	///ƽ��ӯ��
	TQFMatchMoneyType	CloseProfit;
};
///����
struct CQFMatchOrderField
{
	///������
	TQFMatchDateType	TradingDay;
	///���������
	TQFMatchSettlementGroupIDType	SettlementGroupID;
	///������
	TQFMatchSettlementIDType	SettlementID;
	///�������
	TQFMatchOrderSysIDType	OrderSysID;
	///��Ա����
	TQFMatchParticipantIDType	ParticipantID;
	///�ͻ�����
	TQFMatchClientIDType	ClientID;
	///�����û�����
	TQFMatchUserIDType	UserID;
	///��Լ����
	TQFMatchInstrumentIDType	InstrumentID;
	///�����۸�����
	TQFMatchOrderPriceTypeType	OrderPriceType;
	///��������
	TQFMatchDirectionType	Direction;
	///��Ͽ�ƽ��־
	TQFMatchCombOffsetFlagType	CombOffsetFlag;
	///���Ͷ���ױ���־
	TQFMatchCombHedgeFlagType	CombHedgeFlag;
	///�۸�
	TQFMatchPriceType	LimitPrice;
	///����
	TQFMatchVolumeType	VolumeTotalOriginal;
	///��Ч������
	TQFMatchTimeConditionType	TimeCondition;
	///GTD����
	TQFMatchDateType	GTDDate;
	///�ɽ�������
	TQFMatchVolumeConditionType	VolumeCondition;
	///��С�ɽ���
	TQFMatchVolumeType	MinVolume;
	///��������
	TQFMatchContingentConditionType	ContingentCondition;
	///ֹ���
	TQFMatchPriceType	StopPrice;
	///ǿƽԭ��
	TQFMatchForceCloseReasonType	ForceCloseReason;
	///���ر������
	TQFMatchOrderLocalIDType	OrderLocalID;
	///�Զ������־
	TQFMatchBoolType	IsAutoSuspend;
	///������Դ
	TQFMatchOrderSourceType	OrderSource;
	///����״̬
	TQFMatchOrderStatusType	OrderStatus;
	///��������
	TQFMatchOrderTypeType	OrderType;
	///��ɽ�����
	TQFMatchVolumeType	VolumeTraded;
	///ʣ������
	TQFMatchVolumeType	VolumeTotal;
	///��������
	TQFMatchDateType	InsertDate;
	///����ʱ��
	TQFMatchTimeType	InsertTime;
	///����ʱ��
	TQFMatchTimeType	ActiveTime;
	///����ʱ��
	TQFMatchTimeType	SuspendTime;
	///����޸�ʱ��
	TQFMatchTimeType	UpdateTime;
	///����ʱ��
	TQFMatchTimeType	CancelTime;
	///����޸Ľ����û�����
	TQFMatchUserIDType	ActiveUserID;
	///����Ȩ
	TQFMatchPriorityType	Priority;
	///��ʱ���Ŷӵ����
	TQFMatchTimeSortIDType	TimeSortID;
	///�����Ա���
	TQFMatchParticipantIDType	ClearingPartID;
	///ҵ��Ԫ
	TQFMatchBusinessUnitType	BusinessUnit;
	///��Ȼ����
	TQFMatchDateType	CalendarDate;
};
///ִ������
struct CQFMatchExecOrderField
{
	///������
	TQFMatchDateType	TradingDay;
	///���������
	TQFMatchSettlementGroupIDType	SettlementGroupID;
	///������
	TQFMatchSettlementIDType	SettlementID;
	///��Լ���
	TQFMatchInstrumentIDType	InstrumentID;
	///��Ա����
	TQFMatchParticipantIDType	ParticipantID;
	///�ͻ�����
	TQFMatchClientIDType	ClientID;
	///�����û�����
	TQFMatchUserIDType	UserID;
	///����ִ��������
	TQFMatchOrderLocalIDType	ExecOrderLocalID;
	///����
	TQFMatchVolumeType	Volume;
	///ҵ��Ԫ
	TQFMatchBusinessUnitType	BusinessUnit;
	///ִ��������
	TQFMatchExecOrderSysIDType	ExecOrderSysID;
	///��������
	TQFMatchDateType	InsertDate;
	///����ʱ��
	TQFMatchTimeType	InsertTime;
	///����ʱ��
	TQFMatchTimeType	CancelTime;
	///ִ�н��
	TQFMatchExecResultType	ExecResult;
	///�����Ա���
	TQFMatchParticipantIDType	ClearingPartID;
	///��Ȼ����
	TQFMatchDateType	CalendarDate;
};
///�Ǳ���ϱ���
struct CQFMatchCombOrderField
{
	///������
	TQFMatchDateType	TradingDay;
	///���������
	TQFMatchSettlementGroupIDType	SettlementGroupID;
	///������
	TQFMatchSettlementIDType	SettlementID;
	///��ϱ������
	TQFMatchOrderSysIDType	CombOrderSysID;
	///��Ա����
	TQFMatchParticipantIDType	ParticipantID;
	///�ͻ�����
	TQFMatchClientIDType	ClientID;
	///�����û�����
	TQFMatchUserIDType	UserID;
	///�۸�
	TQFMatchPriceType	LimitPrice;
	///����
	TQFMatchVolumeType	VolumeTotalOriginal;
	///���ر������
	TQFMatchOrderLocalIDType	CombOrderLocalID;
	///ҵ��Ԫ
	TQFMatchBusinessUnitType	BusinessUnit;
	///��Լ����1
	TQFMatchInstrumentIDType	InstrumentID1;
	///��������1
	TQFMatchDirectionType	Direction1;
	///���ȳ���1
	TQFMatchLegMultipleType	LegMultiple1;
	///��ƽ��־1
	TQFMatchOffsetFlagType	OffsetFlag1;
	///Ͷ���ױ���־1
	TQFMatchHedgeFlagType	HedgeFlag1;
	///��Լ����2
	TQFMatchInstrumentIDType	InstrumentID2;
	///��������2
	TQFMatchDirectionType	Direction2;
	///���ȳ���2
	TQFMatchLegMultipleType	LegMultiple2;
	///��ƽ��־2
	TQFMatchOffsetFlagType	OffsetFlag2;
	///Ͷ���ױ���־2
	TQFMatchHedgeFlagType	HedgeFlag2;
	///��Լ����3
	TQFMatchInstrumentIDType	InstrumentID3;
	///��������3
	TQFMatchDirectionType	Direction3;
	///���ȳ���3
	TQFMatchLegMultipleType	LegMultiple3;
	///��ƽ��־3
	TQFMatchOffsetFlagType	OffsetFlag3;
	///Ͷ���ױ���־3
	TQFMatchHedgeFlagType	HedgeFlag3;
	///��Լ����4
	TQFMatchInstrumentIDType	InstrumentID4;
	///��������4
	TQFMatchDirectionType	Direction4;
	///���ȳ���4
	TQFMatchLegMultipleType	LegMultiple4;
	///��ƽ��־4
	TQFMatchOffsetFlagType	OffsetFlag4;
	///Ͷ���ױ���־4
	TQFMatchHedgeFlagType	HedgeFlag4;
	///������Դ
	TQFMatchOrderSourceType	OrderSource;
	///��ɽ�����
	TQFMatchVolumeType	VolumeTraded;
	///ʣ������
	TQFMatchVolumeType	VolumeTotal;
	///��������
	TQFMatchDateType	InsertDate;
	///����ʱ��
	TQFMatchTimeType	InsertTime;
	///�����Ա���
	TQFMatchParticipantIDType	ClearingPartID;
	///��Ȼ����
	TQFMatchDateType	CalendarDate;
};
///�ʽ�
struct CQFMatchTradingAccountField
{
	///������
	TQFMatchDateType	TradingDay;
	///���������
	TQFMatchSettlementGroupIDType	SettlementGroupID;
	///������
	TQFMatchSettlementIDType	SettlementID;
	///�ϴν���׼����
	TQFMatchMoneyType	PreBalance;
	///��ǰ��֤���ܶ�
	TQFMatchMoneyType	CurrMargin;
	///ƽ��ӯ��
	TQFMatchMoneyType	CloseProfit;
	///��ȨȨ������֧
	TQFMatchMoneyType	Premium;
	///�����
	TQFMatchMoneyType	Deposit;
	///������
	TQFMatchMoneyType	Withdraw;
	///�ڻ�����׼����
	TQFMatchMoneyType	Balance;
	///�����ʽ�
	TQFMatchMoneyType	Available;
	///�ʽ��ʺ�
	TQFMatchAccountIDType	AccountID;
	///����ı�֤��
	TQFMatchMoneyType	FrozenMargin;
	///�����Ȩ����
	TQFMatchMoneyType	FrozenPremium;
	///��Ա����
	TQFMatchParticipantIDType	ParticipantID;
	///����
	TQFMatchCurrencyType	Currency;
	///��ȡ�ʽ�
	TQFMatchMoneyType	Useable;
	///�����ʽ�
	TQFMatchMoneyType	FrozenMoney;
	///������֧��
	TQFMatchMoneyType	Fee;
};
///������
struct CQFMatchAdminOrderField
{
	///��Լ����
	TQFMatchInstrumentIDType	InstrumentID;
	///����������
	TQFMatchAdminOrderCommandFlagType	AdminOrderCommand;
	///�����Ա���
	TQFMatchParticipantIDType	ClearingPartID;
	///���׻�Ա���
	TQFMatchParticipantIDType	ParticipantID;
	///���
	TQFMatchMoneyType	Amount;
	///���������
	TQFMatchSettlementGroupIDType	SettlementGroupID;
};
///����������
struct CQFMatchInputAdminOrderField
{
	///��Լ����
	TQFMatchInstrumentIDType	InstrumentID;
	///����������
	TQFMatchAdminOrderCommandFlagType	AdminOrderCommand;
	///�����Ա���
	TQFMatchParticipantIDType	ClearingPartID;
	///���׻�Ա���
	TQFMatchParticipantIDType	ParticipantID;
	///���
	TQFMatchMoneyType	Amount;
	///���������
	TQFMatchSettlementGroupIDType	SettlementGroupID;
};
///����
struct CQFMatchBulletinField
{
	///������
	TQFMatchDateType	TradingDay;
	///������
	TQFMatchBulletinIDType	BulletinID;
	///���к�
	TQFMatchSequenceNoType	SequenceNo;
	///��������
	TQFMatchNewsTypeType	NewsType;
	///�����̶�
	TQFMatchNewsUrgencyType	NewsUrgency;
	///����ʱ��
	TQFMatchTimeType	SendTime;
	///��ϢժҪ
	TQFMatchAbstractType	Abstract;
	///��Ϣ��Դ
	TQFMatchComeFromType	ComeFrom;
	///��Ϣ����
	TQFMatchContentType	Content;
	///WEB��ַ
	TQFMatchURLLinkType	URLLink;
	///�г�����
	TQFMatchMarketIDType	MarketID;
	///��Ȼ����
	TQFMatchDateType	CalendarDate;
};
///����������ͬ��״̬
struct CQFMatchExchangeDataSyncStatusField
{
	///������
	TQFMatchDateType	TradingDay;
	///����������
	TQFMatchExchangeIDType	ExchangeID;
	///����������ͬ��״̬
	TQFMatchExchangeDataSyncStatusType	ExchangeDataSyncStatus;
};
///����������ͬ��״̬
struct CQFMatchSGDataSyncStatusField
{
	///���������
	TQFMatchSettlementGroupIDType	SettlementGroupID;
	///������
	TQFMatchDateType	TradingDay;
	///������
	TQFMatchSettlementIDType	SettlementID;
	///����������ͬ��״̬
	TQFMatchSGDataSyncStatusType	SGDataSyncStatus;
};
///��Լ״̬
struct CQFMatchInstrumentStatusField
{
	///���������
	TQFMatchSettlementGroupIDType	SettlementGroupID;
	///��Լ����
	TQFMatchInstrumentIDType	InstrumentID;
	///��Լ����״̬
	TQFMatchInstrumentStatusType	InstrumentStatus;
	///���׽׶α��
	TQFMatchTradingSegmentSNType	TradingSegmentSN;
	///���뱾״̬ʱ��
	TQFMatchTimeType	EnterTime;
	///���뱾״̬ԭ��
	TQFMatchInstStatusEnterReasonType	EnterReason;
	///��Ȼ����
	TQFMatchDateType	CalendarDate;
};
///ʵʱ�ϳ�
struct CQFMatchTBCommandField
{
	///DB����غ�
	TQFMatchOrderLocalIDType	CommandLocalID;
	///ȫ��DB�������
	TQFMatchSequenceNoType	CommandNo;
	///DB��������
	TQFMatchCommandTypeType	CommandType;
	///�ֶ���
	TQFMatchFieldNameType	FieldName;
	///�ֶ�����
	TQFMatchFieldContentType	FieldContent;
	///��ע
	TQFMatchComeFromType	Comments;
};
///������ѯ
struct CQFMatchQryOrderField
{
	///��ʼ��Ա����
	TQFMatchParticipantIDType	PartIDStart;
	///������Ա����
	TQFMatchParticipantIDType	PartIDEnd;
	///�������
	TQFMatchOrderSysIDType	OrderSysID;
	///��Լ����
	TQFMatchInstrumentIDType	InstrumentID;
	///�ͻ�����
	TQFMatchClientIDType	ClientID;
	///�����û�����
	TQFMatchUserIDType	UserID;
	///��ʼʱ��
	TQFMatchTimeType	TimeStart;
	///����ʱ��
	TQFMatchTimeType	TimeEnd;
};
///���۲�ѯ
struct CQFMatchQryQuoteField
{
	///��ʼ��Ա����
	TQFMatchParticipantIDType	PartIDStart;
	///������Ա����
	TQFMatchParticipantIDType	PartIDEnd;
	///���۱��
	TQFMatchQuoteSysIDType	QuoteSysID;
	///�ͻ�����
	TQFMatchClientIDType	ClientID;
	///��Լ����
	TQFMatchInstrumentIDType	InstrumentID;
	///�����û�����
	TQFMatchUserIDType	UserID;
};
///�ɽ���ѯ
struct CQFMatchQryTradeField
{
	///��ʼ��Ա����
	TQFMatchParticipantIDType	PartIDStart;
	///������Ա����
	TQFMatchParticipantIDType	PartIDEnd;
	///��ʼ��Լ����
	TQFMatchInstrumentIDType	InstIDStart;
	///������Լ����
	TQFMatchInstrumentIDType	InstIDEnd;
	///�ɽ����
	TQFMatchTradeIDType	TradeID;
	///�ͻ�����
	TQFMatchClientIDType	ClientID;
	///�����û�����
	TQFMatchUserIDType	UserID;
	///��ʼʱ��
	TQFMatchTimeType	TimeStart;
	///����ʱ��
	TQFMatchTimeType	TimeEnd;
};
///�����ѯ
struct CQFMatchQryMarketDataField
{
	///��Ʒ����
	TQFMatchProductIDType	ProductID;
	///��Լ����
	TQFMatchInstrumentIDType	InstrumentID;
};
///�ͻ���ѯ
struct CQFMatchQryClientField
{
	///��ʼ��Ա����
	TQFMatchParticipantIDType	PartIDStart;
	///������Ա����
	TQFMatchParticipantIDType	PartIDEnd;
	///��ʼ�ͻ�����
	TQFMatchClientIDType	ClientIDStart;
	///�����ͻ�����
	TQFMatchClientIDType	ClientIDEnd;
};
///��Ա�ֲֲ�ѯ
struct CQFMatchQryPartPositionField
{
	///��ʼ��Ա����
	TQFMatchParticipantIDType	PartIDStart;
	///������Ա����
	TQFMatchParticipantIDType	PartIDEnd;
	///��ʼ��Լ����
	TQFMatchInstrumentIDType	InstIDStart;
	///������Լ����
	TQFMatchInstrumentIDType	InstIDEnd;
};
///�ͻ��ֲֲ�ѯ
struct CQFMatchQryClientPositionField
{
	///��ʼ��Ա����
	TQFMatchParticipantIDType	PartIDStart;
	///������Ա����
	TQFMatchParticipantIDType	PartIDEnd;
	///��ʼ�ͻ�����
	TQFMatchClientIDType	ClientIDStart;
	///�����ͻ�����
	TQFMatchClientIDType	ClientIDEnd;
	///��ʼ��Լ����
	TQFMatchInstrumentIDType	InstIDStart;
	///������Լ����
	TQFMatchInstrumentIDType	InstIDEnd;
	///�ͻ�����
	TQFMatchClientTypeType	ClientType;
};
///�ͻ��ֲֲ�ѯ
struct CQFMatchQryClientPositionV1Field
{
	///��ʼ��Ա����
	TQFMatchParticipantIDType	PartIDStart;
	///������Ա����
	TQFMatchParticipantIDType	PartIDEnd;
	///��ʼ�ͻ�����
	TQFMatchClientIDType	ClientIDStart;
	///�����ͻ�����
	TQFMatchClientIDType	ClientIDEnd;
	///��ʼ��Լ����
	TQFMatchInstrumentIDType	InstIDStart;
	///������Լ����
	TQFMatchInstrumentIDType	InstIDEnd;
};
///�����ʽ��ѯ
struct CQFMatchQryPartAccountField
{
	///��ʼ��Ա����
	TQFMatchParticipantIDType	PartIDStart;
	///������Ա����
	TQFMatchParticipantIDType	PartIDEnd;
	///�ʽ��ʺ�
	TQFMatchAccountIDType	AccountID;
	///����
	TQFMatchCurrencyType	Currency;
};
///��Լ��ѯ
struct CQFMatchQryInstrumentField
{
	///���������
	TQFMatchSettlementGroupIDType	SettlementGroupID;
	///��Ʒ�����
	TQFMatchProductGroupIDType	ProductGroupID;
	///��Ʒ����
	TQFMatchProductIDType	ProductID;
	///��Լ����
	TQFMatchInstrumentIDType	InstrumentID;
};
///��Լ״̬��ѯ
struct CQFMatchQryInstrumentStatusField
{
	///��ʼ��Լ����
	TQFMatchInstrumentIDType	InstIDStart;
	///������Լ����
	TQFMatchInstrumentIDType	InstIDEnd;
};
///������״̬��ѯ
struct CQFMatchQrySGDataSyncStatusField
{
	///���������
	TQFMatchSettlementGroupIDType	SettlementGroupID;
};
///�û����߲�ѯ
struct CQFMatchQryUserSessionField
{
	///��ʼ�����û�����
	TQFMatchUserIDType	UserIDStart;
	///���������û�����
	TQFMatchUserIDType	UserIDEnd;
};
///�û���ѯ
struct CQFMatchQryUserField
{
	///��ʼ�����û�����
	TQFMatchUserIDType	UserIDStart;
	///���������û�����
	TQFMatchUserIDType	UserIDEnd;
};
///�����ѯ
struct CQFMatchQryBulletinField
{
	///������
	TQFMatchDateType	TradingDay;
	///�г�����
	TQFMatchMarketIDType	MarketID;
	///������
	TQFMatchBulletinIDType	BulletinID;
	///��������
	TQFMatchNewsTypeType	NewsType;
	///�����̶�
	TQFMatchNewsUrgencyType	NewsUrgency;
};
///��Ա��ѯ
struct CQFMatchQryParticipantField
{
	///��ʼ��Ա����
	TQFMatchParticipantIDType	PartIDStart;
	///������Ա����
	TQFMatchParticipantIDType	PartIDEnd;
};
///��ֵ��Ȳ�ѯ
struct CQFMatchQryHedgeVolumeField
{
	///��ʼ��Ա����
	TQFMatchParticipantIDType	PartIDStart;
	///������Ա����
	TQFMatchParticipantIDType	PartIDEnd;
	///��ʼ�ͻ�����
	TQFMatchClientIDType	ClientIDStart;
	///�����ͻ�����
	TQFMatchClientIDType	ClientIDEnd;
	///��ʼ��Լ����
	TQFMatchInstrumentIDType	InstIDStart;
	///������Լ����
	TQFMatchInstrumentIDType	InstIDEnd;
};
///��Լ��λ��ѯ
struct CQFMatchQryMBLMarketDataField
{
	///��ʼ��Լ����
	TQFMatchInstrumentIDType	InstIDStart;
	///������Լ����
	TQFMatchInstrumentIDType	InstIDEnd;
	///��������
	TQFMatchDirectionType	Direction;
};
///�����޶��ѯ
struct CQFMatchQryCreditLimitField
{
	///���׻�Ա���
	TQFMatchParticipantIDType	ParticipantID;
	///�����Ա���
	TQFMatchParticipantIDType	ClearingPartID;
};
///�Ǳ���ϱ�����ѯ
struct CQFMatchQryCombOrderField
{
	///��ʼ��Ա����
	TQFMatchParticipantIDType	PartIDStart;
	///������Ա����
	TQFMatchParticipantIDType	PartIDEnd;
	///��ϱ������
	TQFMatchOrderSysIDType	CombOrderSysID;
	///�ͻ�����
	TQFMatchClientIDType	ClientID;
	///�����û�����
	TQFMatchUserIDType	UserID;
};
///��Ա�ʽ�Ӧ��
struct CQFMatchRspPartAccountField
{
	///������
	TQFMatchDateType	TradingDay;
	///���������
	TQFMatchSettlementGroupIDType	SettlementGroupID;
	///������
	TQFMatchSettlementIDType	SettlementID;
	///�ϴν���׼����
	TQFMatchMoneyType	PreBalance;
	///��ǰ��֤���ܶ�
	TQFMatchMoneyType	CurrMargin;
	///ƽ��ӯ��
	TQFMatchMoneyType	CloseProfit;
	///��ȨȨ������֧
	TQFMatchMoneyType	Premium;
	///�����
	TQFMatchMoneyType	Deposit;
	///������
	TQFMatchMoneyType	Withdraw;
	///�ڻ�����׼����
	TQFMatchMoneyType	Balance;
	///�����ʽ�
	TQFMatchMoneyType	Available;
	///�ʽ��ʺ�
	TQFMatchAccountIDType	AccountID;
	///����ı�֤��
	TQFMatchMoneyType	FrozenMargin;
	///�����Ȩ����
	TQFMatchMoneyType	FrozenPremium;
	///����׼����
	TQFMatchMoneyType	BaseReserve;
	///��Ա����
	TQFMatchParticipantIDType	ParticipantID;
	///��ȡ�ʽ�
	TQFMatchMoneyType	Useable;
	///�����ʽ�
	TQFMatchMoneyType	FrozenMoney;
	///����
	TQFMatchCurrencyType	Currency;
	///������֧��
	TQFMatchMoneyType	Fee;
};
///��Ա�ֲ�Ӧ��
struct CQFMatchRspPartPositionField
{
	///������
	TQFMatchDateType	TradingDay;
	///���������
	TQFMatchSettlementGroupIDType	SettlementGroupID;
	///������
	TQFMatchSettlementIDType	SettlementID;
	///Ͷ���ױ���־
	TQFMatchHedgeFlagType	HedgeFlag;
	///�ֲֶ�շ���
	TQFMatchPosiDirectionType	PosiDirection;
	///���ճֲ�
	TQFMatchVolumeType	YdPosition;
	///���ճֲ�
	TQFMatchVolumeType	Position;
	///��ͷ����
	TQFMatchVolumeType	LongFrozen;
	///��ͷ����
	TQFMatchVolumeType	ShortFrozen;
	///���ն�ͷ����
	TQFMatchVolumeType	YdLongFrozen;
	///���տ�ͷ����
	TQFMatchVolumeType	YdShortFrozen;
	///��Լ����
	TQFMatchInstrumentIDType	InstrumentID;
	///��Ա����
	TQFMatchParticipantIDType	ParticipantID;
	///���׽�ɫ
	TQFMatchTradingRoleType	TradingRole;
};
///�ͻ��ֲ�Ӧ��
struct CQFMatchRspClientPositionField
{
	///������
	TQFMatchDateType	TradingDay;
	///���������
	TQFMatchSettlementGroupIDType	SettlementGroupID;
	///������
	TQFMatchSettlementIDType	SettlementID;
	///Ͷ���ױ���־
	TQFMatchHedgeFlagType	HedgeFlag;
	///�ֲֶ�շ���
	TQFMatchPosiDirectionType	PosiDirection;
	///���ճֲ�
	TQFMatchVolumeType	YdPosition;
	///���ճֲ�
	TQFMatchVolumeType	Position;
	///��ͷ����
	TQFMatchVolumeType	LongFrozen;
	///��ͷ����
	TQFMatchVolumeType	ShortFrozen;
	///���ն�ͷ����
	TQFMatchVolumeType	YdLongFrozen;
	///���տ�ͷ����
	TQFMatchVolumeType	YdShortFrozen;
	///������ɽ���
	TQFMatchVolumeType	BuyTradeVolume;
	///�������ɽ���
	TQFMatchVolumeType	SellTradeVolume;
	///�ֲֳɱ�
	TQFMatchMoneyType	PositionCost;
	///���ճֲֳɱ�
	TQFMatchMoneyType	YdPositionCost;
	///ռ�õı�֤��
	TQFMatchMoneyType	UseMargin;
	///����ı�֤��
	TQFMatchMoneyType	FrozenMargin;
	///��ͷ����ı�֤��
	TQFMatchMoneyType	LongFrozenMargin;
	///��ͷ����ı�֤��
	TQFMatchMoneyType	ShortFrozenMargin;
	///�����Ȩ����
	TQFMatchMoneyType	FrozenPremium;
	///��Լ����
	TQFMatchInstrumentIDType	InstrumentID;
	///��Ա����
	TQFMatchParticipantIDType	ParticipantID;
	///�ͻ�����
	TQFMatchClientIDType	ClientID;
	///�ϴν���֮��ƽ��ӯ��
	TQFMatchMoneyType	CloseProfit;
	///�ֲ�ӯ��
	TQFMatchMoneyType	PositionProfit;
	///�ۼƿ��ֳɱ�
	TQFMatchMoneyType	TotalPositionCost;
	///�ۼ�ƽ��ӯ��
	TQFMatchMoneyType	TotalCloseProfit;
	///�ۼƳֲ�ӯ��
	TQFMatchMoneyType	TotalPositionProfit;
	///�ܸ˱���
	TQFMatchRatioType	Leverage;
	///�ӹܼ۸�
	TQFMatchRatioType	LiquidationPrice;
	///�ʽ��ʺ�
	TQFMatchAccountIDType	AccountID;
	///����
	TQFMatchCurrencyType	ClearCurrency;
};
///��Լ��ѯӦ��
struct CQFMatchRspInstrumentField
{
	///���������
	TQFMatchSettlementGroupIDType	SettlementGroupID;
	///��Ʒ����
	TQFMatchProductIDType	ProductID;
	///��Ʒ�����
	TQFMatchProductGroupIDType	ProductGroupID;
	///������Ʒ����
	TQFMatchInstrumentIDType	UnderlyingInstrID;
	///��Ʒ����
	TQFMatchProductClassType	ProductClass;
	///�ֲ�����
	TQFMatchPositionTypeType	PositionType;
	///ִ�м�
	TQFMatchPriceType	StrikePrice;
	///��Ȩ����
	TQFMatchOptionsTypeType	OptionsType;
	///��Լ��������
	TQFMatchVolumeMultipleType	VolumeMultiple;
	///��Լ������Ʒ����
	TQFMatchUnderlyingMultipleType	UnderlyingMultiple;
	///��Լ����
	TQFMatchInstrumentIDType	InstrumentID;
	///��Լ����
	TQFMatchInstrumentNameType	InstrumentName;
	///�������
	TQFMatchYearType	DeliveryYear;
	///������
	TQFMatchMonthType	DeliveryMonth;
	///��ǰ�·�
	TQFMatchAdvanceMonthType	AdvanceMonth;
	///��ǰ�Ƿ���
	TQFMatchBoolType	IsTrading;
	///������
	TQFMatchDateType	CreateDate;
	///������
	TQFMatchDateType	OpenDate;
	///������
	TQFMatchDateType	ExpireDate;
	///��ʼ������
	TQFMatchDateType	StartDelivDate;
	///��󽻸���
	TQFMatchDateType	EndDelivDate;
	///���ƻ�׼��
	TQFMatchPriceType	BasisPrice;
	///�м۵�����µ���
	TQFMatchVolumeType	MaxMarketOrderVolume;
	///�м۵���С�µ���
	TQFMatchVolumeType	MinMarketOrderVolume;
	///�޼۵�����µ���
	TQFMatchVolumeType	MaxLimitOrderVolume;
	///�޼۵���С�µ���
	TQFMatchVolumeType	MinLimitOrderVolume;
	///��С�䶯��λ
	TQFMatchPriceType	PriceTick;
	///��������Ȼ�˿���
	TQFMatchMonthCountType	AllowDelivPersonOpen;
	///����
	TQFMatchCurrencyType	Currency;
};
///��Ϣ��ѯ
struct CQFMatchQryInformationField
{
	///��ʼ��Ϣ����
	TQFMatchInformationIDType	InformationIDStart;
	///������Ϣ����
	TQFMatchInformationIDType	InformationIDEnd;
};
///��Ϣ��ѯ
struct CQFMatchInformationField
{
	///��Ϣ���
	TQFMatchInformationIDType	InformationID;
	///���к�
	TQFMatchSequenceNoType	SequenceNo;
	///��Ϣ����
	TQFMatchContentType	Content;
	///���ĳ���
	TQFMatchContentLengthType	ContentLength;
	///�Ƿ����
	TQFMatchBoolType	IsAccomplished;
};
///�����޶�
struct CQFMatchCreditLimitField
{
	///������
	TQFMatchDateType	TradingDay;
	///���������
	TQFMatchSettlementGroupIDType	SettlementGroupID;
	///������
	TQFMatchSettlementIDType	SettlementID;
	///�ϴν���׼����
	TQFMatchMoneyType	PreBalance;
	///��ǰ��֤���ܶ�
	TQFMatchMoneyType	CurrMargin;
	///ƽ��ӯ��
	TQFMatchMoneyType	CloseProfit;
	///��ȨȨ������֧
	TQFMatchMoneyType	Premium;
	///�����
	TQFMatchMoneyType	Deposit;
	///������
	TQFMatchMoneyType	Withdraw;
	///�ڻ�����׼����
	TQFMatchMoneyType	Balance;
	///�����ʽ�
	TQFMatchMoneyType	Available;
	///���׻�Ա���
	TQFMatchParticipantIDType	ParticipantID;
	///�����Ա���
	TQFMatchParticipantIDType	ClearingPartID;
	///����ı�֤��
	TQFMatchMoneyType	FrozenMargin;
	///�����Ȩ����
	TQFMatchMoneyType	FrozenPremium;
	///������֧��
	TQFMatchMoneyType	Fee;
};
///�ͻ���ѯӦ��
struct CQFMatchRspClientField
{
	///�ͻ�����
	TQFMatchClientIDType	ClientID;
	///�ͻ�����
	TQFMatchPartyNameType	ClientName;
	///֤������
	TQFMatchIdCardTypeType	IdentifiedCardType;
	///ԭ֤������
	TQFMatchIdentifiedCardNoV1Type	UseLess;
	///���׽�ɫ
	TQFMatchTradingRoleType	TradingRole;
	///�ͻ�����
	TQFMatchClientTypeType	ClientType;
	///�Ƿ��Ծ
	TQFMatchBoolType	IsActive;
	///��Ա��
	TQFMatchParticipantIDType	ParticipantID;
	///֤������
	TQFMatchIdentifiedCardNoType	IdentifiedCardNo;
};
///����������
struct CQFMatchFlowMessageCancelField
{
	///����ϵ�к�
	TQFMatchSequenceSeriesType	SequenceSeries;
	///������
	TQFMatchDateType	TradingDay;
	///�������Ĵ���
	TQFMatchDataCenterIDType	DataCenterID;
	///������ʼ���к�
	TQFMatchSequenceNoType	StartSequenceNo;
	///���˽������к�
	TQFMatchSequenceNoType	EndSequenceNo;
};
///����
struct CQFMatchMultiHeartbeatField
{
	///Current Time
	TQFMatchTimeType	CurrTime;
	///MultiCastIP
	TQFMatchMultiIPAddressType	MultiCastIP;
};
///������ѯ
struct CQFMatchQryAccountDepositDetailField
{
	///�������ˮ���
	TQFMatchSequenceNoType	DepositNo;
	///��ʼ��Ա����
	TQFMatchAccountIDType	AccountIDStart;
	///������Ա����
	TQFMatchAccountIDType	AccountIDEnd;
};
///ʵʱ�ϳ���ѯ
struct CQFMatchQryTBCommandDetailField
{
	///ȫ��DB�������
	TQFMatchSequenceNoType	CommandNo;
	///DB��������
	TQFMatchCommandTypeType	CommandType;
};
///��ѯ������
struct CQFMatchQryPartClientFeeField
{
	///��Ա����
	TQFMatchParticipantIDType	ParticipantID;
	///�ͻ�����
	TQFMatchClientIDType	ClientID;
	///��Ʒ��Լ����
	TQFMatchInstrumentIDType	InstrumentID;
};
///��ѯ�ͻ��ֲ���ϸ
struct CQFMatchQryClientPositionDetailField
{
	///��ʼ��Ա����
	TQFMatchParticipantIDType	PartIDStart;
	///������Ա����
	TQFMatchParticipantIDType	PartIDEnd;
	///��ʼ�ͻ�����
	TQFMatchClientIDType	ClientIDStart;
	///�����ͻ�����
	TQFMatchClientIDType	ClientIDEnd;
	///��ʼ��Լ����
	TQFMatchInstrumentIDType	InstIDStart;
	///������Լ����
	TQFMatchInstrumentIDType	InstIDEnd;
};
///���볡��ɽ���
struct CQFMatchInputOTCTradeField
{
	///�ɽ����
	TQFMatchTradeIDType	TradeID;
	///�����û�����
	TQFMatchUserIDType	UserID;
	///�ɽ��Ա��ر��
	TQFMatchOrderLocalIDType	TradeLocalID;
	///��Լ����
	TQFMatchInstrumentIDType	InstrumentID;
	///�۸�
	TQFMatchPriceType	Price;
	///����
	TQFMatchVolumeType	Volume;
	///�򷽻�Ա����
	TQFMatchParticipantIDType	BuyParticipantID;
	///�򷽿ͻ�����
	TQFMatchClientIDType	BuyClientID;
	///�򷽽����û�����
	TQFMatchUserIDType	BuyUserID;
	///�򷽱��ر������
	TQFMatchOrderLocalIDType	BuyOrderLocalID;
	///����Ͽ�ƽ��־
	TQFMatchCombOffsetFlagType	BuyCombOffsetFlag;
	///�����Ͷ���ױ���־
	TQFMatchCombHedgeFlagType	BuyCombHedgeFlag;
	///��������Ա����
	TQFMatchParticipantIDType	SellParticipantID;
	///�����ͻ�����
	TQFMatchClientIDType	SellClientID;
	///���������û�����
	TQFMatchUserIDType	SellUserID;
	///������Ͽ�ƽ��־
	TQFMatchCombOffsetFlagType	SellCombOffsetFlag;
	///��������ױ���־
	TQFMatchCombHedgeFlagType	SellCombHedgeFlag;
	///�������ر������
	TQFMatchOrderLocalIDType	SellOrderLocalID;
	///OTC����
	TQFMatchOTCTypeType	OTCType;
	///״̬
	TQFMatchOTCStatusType	Status;
	///�������
	TQFMatchErrorIDType	OTCErrorID;
	///������Ϣ
	TQFMatchErrorMsgType	OTCErrorMsg;
	///��ע
	TQFMatchComeFromType	Comments;
};
///����ɽ���
struct CQFMatchOTCTradeField
{
	///������
	TQFMatchDateType	TradingDay;
	///���������
	TQFMatchSettlementGroupIDType	SettlementGroupID;
	///������
	TQFMatchSettlementIDType	SettlementID;
	///�ɽ����
	TQFMatchTradeIDType	TradeID;
	///�����û�����
	TQFMatchUserIDType	UserID;
	///�ɽ��Ա��ر��
	TQFMatchOrderLocalIDType	TradeLocalID;
	///��Լ����
	TQFMatchInstrumentIDType	InstrumentID;
	///�۸�
	TQFMatchPriceType	Price;
	///����
	TQFMatchVolumeType	Volume;
	///�򷽻�Ա����
	TQFMatchParticipantIDType	BuyParticipantID;
	///�򷽿ͻ�����
	TQFMatchClientIDType	BuyClientID;
	///�򷽽����û�����
	TQFMatchUserIDType	BuyUserID;
	///�򷽱��ر������
	TQFMatchOrderLocalIDType	BuyOrderLocalID;
	///����Ͽ�ƽ��־
	TQFMatchCombOffsetFlagType	BuyCombOffsetFlag;
	///�����Ͷ���ױ���־
	TQFMatchCombHedgeFlagType	BuyCombHedgeFlag;
	///��������Ա����
	TQFMatchParticipantIDType	SellParticipantID;
	///�����ͻ�����
	TQFMatchClientIDType	SellClientID;
	///���������û�����
	TQFMatchUserIDType	SellUserID;
	///������Ͽ�ƽ��־
	TQFMatchCombOffsetFlagType	SellCombOffsetFlag;
	///��������ױ���־
	TQFMatchCombHedgeFlagType	SellCombHedgeFlag;
	///�������ر������
	TQFMatchOrderLocalIDType	SellOrderLocalID;
	///OTC����
	TQFMatchOTCTypeType	OTCType;
	///״̬
	TQFMatchOTCStatusType	Status;
	///�������
	TQFMatchErrorIDType	OTCErrorID;
	///������Ϣ
	TQFMatchErrorMsgType	OTCErrorMsg;
	///��ע
	TQFMatchComeFromType	Comments;
};
///��������
struct CQFMatchUpdateMarketDataField
{
	///��Լ����
	TQFMatchInstrumentIDType	InstrumentID;
	///�ʽ����
	TQFMatchRatioType	FundingRate;
	///����۸�
	TQFMatchPriceType	FairPrice;
	///�����
	TQFMatchPriceType	SettlementPrice;
};
///��λ��֤�����
struct CQFMatchPositionMarginActionField
{
	///���������
	TQFMatchSettlementGroupIDType	SettlementGroupID;
	///��Լ����
	TQFMatchInstrumentIDType	InstrumentID;
	///��Ա����
	TQFMatchParticipantIDType	ParticipantID;
	///�ͻ�����
	TQFMatchClientIDType	ClientID;
	///Ͷ���ױ���־
	TQFMatchHedgeFlagType	HedgeFlag;
	///�ֲֶ�շ���
	TQFMatchPosiDirectionType	PosiDirection;
	///ֵ
	TQFMatchRatioType	Value;
	///��������
	TQFMatchPositionActionTypeType	ActionType;
	///��ע
	TQFMatchComeFromType	Comments;
};

#endif
