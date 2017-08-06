//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SSofaBaseModel.h"

@class NSArray, NSArray<Optional>, NSDictionary, NSString, SSofaMessageModel<Optional>, SSofaOperationTimeModel<Optional>, SSofaShareAndFeedModel<Optional>, SSofaShareModel<Optional>;

@interface SSofaConfigModel : SSofaBaseModel
{
    _Bool _isAutoOpenAfterPayComponent;
    NSString *_confVersion;
    NSString *_userGuideExpired;
    NSString *_showNewUserTime;
    NSString *_walkingSpeed;
    NSString *_estimateTimeout;
    NSString *_locDriverRadius;
    NSString *_waitingTakeTime;
    NSString *_stationStayTime;
    NSString *_etaTimeInterval;
    NSString *_pollingInterval;
    NSString *_recvPushInterval;
    NSString *_stopTipShowCount;
    NSString *_startTipText;
    NSString *_endTipText;
    NSString *_runtimeEtaBeforeOrder;
    NSString *_isDisplayPayCompleteAd;
    NSString *_payCompleteTimesDisplayAd;
    NSDictionary *_selectPeopleNumber;
    NSString *_preMatchLoadingDuration;
    NSArray<Optional> *_shareChannel;
    SSofaMessageModel<Optional> *_userGuideGetOffMessage;
    SSofaMessageModel<Optional> *_getOffMessage;
    SSofaMessageModel<Optional> *_matchingTooLongMessage;
    SSofaMessageModel<Optional> *_carWillPickUpCarMateMessage;
    SSofaMessageModel<Optional> *_orderCreatedMessageNewUserMessage;
    SSofaMessageModel<Optional> *_orderCreatedMessage;
    SSofaMessageModel<Optional> *_carWillArriveMessage;
    SSofaMessageModel<Optional> *_carWillArriveLateMessage;
    SSofaMessageModel<Optional> *_carWillArriveNewUserMessage;
    SSofaMessageModel<Optional> *_carArriveAtOneceMessage;
    SSofaMessageModel<Optional> *_carWillArriveButCountdownDidNotFinishMessage;
    SSofaMessageModel<Optional> *_carWillAtOneceNotLateNewUserMessage;
    SSofaMessageModel<Optional> *_onlyCarDidArriveMessage;
    SSofaMessageModel<Optional> *_onlyCarDidArriveIsNotDockedMessage;
    SSofaMessageModel<Optional> *_nextStopIsEndMessage;
    SSofaMessageModel<Optional> *_orderMappointmentMatchingMessage;
    SSofaMessageModel<Optional> *_orderRealtimeMatchingBefore10sMessage;
    SSofaMessageModel<Optional> *_orderWaitingMessage;
    SSofaMessageModel<Optional> *_checkTicketCntChangedMessage;
    SSofaMessageModel<Optional> *_checkTicketSuccessMessage;
    SSofaMessageModel<Optional> *_carTravelMessage;
    SSofaMessageModel<Optional> *_carTravelGuideMessage;
    SSofaMessageModel<Optional> *_expectCarWillArriveLateMessage;
    SSofaMessageModel<Optional> *_onlyCarDidArriveInAdvanceMessage;
    SSofaMessageModel<Optional> *_carArrivedWaitMessage;
    SSofaMessageModel<Optional> *_carArrivedWaitNewUserMessage;
    SSofaMessageModel<Optional> *_carWillAtOneceNotLateMessage;
    SSofaMessageModel<Optional> *_overEstimatedStopTimeMessage;
    SSofaShareModel<Optional> *_shareButton;
    SSofaOperationTimeModel<Optional> *_operateTime;
    SSofaShareAndFeedModel<Optional> *_evaluate;
    NSArray *_isOpenCity;
    NSString *_isDisplayHelpButton;
    NSString *_priceHint;
    NSString *_isUseEstimateEta;
    NSString *_estimateInterval;
    NSString *_highCancelTime;
    NSString *_highLateTime;
    NSString *_matchingToast;
    NSString *_doubleCheck;
}

@property(copy, nonatomic) NSString *doubleCheck; // @synthesize doubleCheck=_doubleCheck;
@property(copy, nonatomic) NSString *matchingToast; // @synthesize matchingToast=_matchingToast;
@property(nonatomic) _Bool isAutoOpenAfterPayComponent; // @synthesize isAutoOpenAfterPayComponent=_isAutoOpenAfterPayComponent;
@property(copy, nonatomic) NSString *highLateTime; // @synthesize highLateTime=_highLateTime;
@property(copy, nonatomic) NSString *highCancelTime; // @synthesize highCancelTime=_highCancelTime;
@property(copy, nonatomic) NSString *estimateInterval; // @synthesize estimateInterval=_estimateInterval;
@property(copy, nonatomic) NSString *isUseEstimateEta; // @synthesize isUseEstimateEta=_isUseEstimateEta;
@property(copy, nonatomic) NSString *priceHint; // @synthesize priceHint=_priceHint;
@property(copy, nonatomic) NSString *isDisplayHelpButton; // @synthesize isDisplayHelpButton=_isDisplayHelpButton;
@property(copy, nonatomic) NSArray *isOpenCity; // @synthesize isOpenCity=_isOpenCity;
@property(retain, nonatomic) SSofaShareAndFeedModel<Optional> *evaluate; // @synthesize evaluate=_evaluate;
@property(retain, nonatomic) SSofaOperationTimeModel<Optional> *operateTime; // @synthesize operateTime=_operateTime;
@property(retain, nonatomic) SSofaShareModel<Optional> *shareButton; // @synthesize shareButton=_shareButton;
@property(retain, nonatomic) SSofaMessageModel<Optional> *overEstimatedStopTimeMessage; // @synthesize overEstimatedStopTimeMessage=_overEstimatedStopTimeMessage;
@property(retain, nonatomic) SSofaMessageModel<Optional> *carWillAtOneceNotLateMessage; // @synthesize carWillAtOneceNotLateMessage=_carWillAtOneceNotLateMessage;
@property(retain, nonatomic) SSofaMessageModel<Optional> *carArrivedWaitNewUserMessage; // @synthesize carArrivedWaitNewUserMessage=_carArrivedWaitNewUserMessage;
@property(retain, nonatomic) SSofaMessageModel<Optional> *carArrivedWaitMessage; // @synthesize carArrivedWaitMessage=_carArrivedWaitMessage;
@property(retain, nonatomic) SSofaMessageModel<Optional> *onlyCarDidArriveInAdvanceMessage; // @synthesize onlyCarDidArriveInAdvanceMessage=_onlyCarDidArriveInAdvanceMessage;
@property(retain, nonatomic) SSofaMessageModel<Optional> *expectCarWillArriveLateMessage; // @synthesize expectCarWillArriveLateMessage=_expectCarWillArriveLateMessage;
@property(retain, nonatomic) SSofaMessageModel<Optional> *carTravelGuideMessage; // @synthesize carTravelGuideMessage=_carTravelGuideMessage;
@property(retain, nonatomic) SSofaMessageModel<Optional> *carTravelMessage; // @synthesize carTravelMessage=_carTravelMessage;
@property(retain, nonatomic) SSofaMessageModel<Optional> *checkTicketSuccessMessage; // @synthesize checkTicketSuccessMessage=_checkTicketSuccessMessage;
@property(retain, nonatomic) SSofaMessageModel<Optional> *checkTicketCntChangedMessage; // @synthesize checkTicketCntChangedMessage=_checkTicketCntChangedMessage;
@property(retain, nonatomic) SSofaMessageModel<Optional> *orderWaitingMessage; // @synthesize orderWaitingMessage=_orderWaitingMessage;
@property(retain, nonatomic) SSofaMessageModel<Optional> *orderRealtimeMatchingBefore10sMessage; // @synthesize orderRealtimeMatchingBefore10sMessage=_orderRealtimeMatchingBefore10sMessage;
@property(retain, nonatomic) SSofaMessageModel<Optional> *orderMappointmentMatchingMessage; // @synthesize orderMappointmentMatchingMessage=_orderMappointmentMatchingMessage;
@property(retain, nonatomic) SSofaMessageModel<Optional> *nextStopIsEndMessage; // @synthesize nextStopIsEndMessage=_nextStopIsEndMessage;
@property(retain, nonatomic) SSofaMessageModel<Optional> *onlyCarDidArriveIsNotDockedMessage; // @synthesize onlyCarDidArriveIsNotDockedMessage=_onlyCarDidArriveIsNotDockedMessage;
@property(retain, nonatomic) SSofaMessageModel<Optional> *onlyCarDidArriveMessage; // @synthesize onlyCarDidArriveMessage=_onlyCarDidArriveMessage;
@property(retain, nonatomic) SSofaMessageModel<Optional> *carWillAtOneceNotLateNewUserMessage; // @synthesize carWillAtOneceNotLateNewUserMessage=_carWillAtOneceNotLateNewUserMessage;
@property(retain, nonatomic) SSofaMessageModel<Optional> *carWillArriveButCountdownDidNotFinishMessage; // @synthesize carWillArriveButCountdownDidNotFinishMessage=_carWillArriveButCountdownDidNotFinishMessage;
@property(retain, nonatomic) SSofaMessageModel<Optional> *carArriveAtOneceMessage; // @synthesize carArriveAtOneceMessage=_carArriveAtOneceMessage;
@property(retain, nonatomic) SSofaMessageModel<Optional> *carWillArriveNewUserMessage; // @synthesize carWillArriveNewUserMessage=_carWillArriveNewUserMessage;
@property(retain, nonatomic) SSofaMessageModel<Optional> *carWillArriveLateMessage; // @synthesize carWillArriveLateMessage=_carWillArriveLateMessage;
@property(retain, nonatomic) SSofaMessageModel<Optional> *carWillArriveMessage; // @synthesize carWillArriveMessage=_carWillArriveMessage;
@property(retain, nonatomic) SSofaMessageModel<Optional> *orderCreatedMessage; // @synthesize orderCreatedMessage=_orderCreatedMessage;
@property(retain, nonatomic) SSofaMessageModel<Optional> *orderCreatedMessageNewUserMessage; // @synthesize orderCreatedMessageNewUserMessage=_orderCreatedMessageNewUserMessage;
@property(retain, nonatomic) SSofaMessageModel<Optional> *carWillPickUpCarMateMessage; // @synthesize carWillPickUpCarMateMessage=_carWillPickUpCarMateMessage;
@property(retain, nonatomic) SSofaMessageModel<Optional> *matchingTooLongMessage; // @synthesize matchingTooLongMessage=_matchingTooLongMessage;
@property(retain, nonatomic) SSofaMessageModel<Optional> *getOffMessage; // @synthesize getOffMessage=_getOffMessage;
@property(retain, nonatomic) SSofaMessageModel<Optional> *userGuideGetOffMessage; // @synthesize userGuideGetOffMessage=_userGuideGetOffMessage;
@property(copy, nonatomic) NSArray<Optional> *shareChannel; // @synthesize shareChannel=_shareChannel;
@property(copy, nonatomic) NSString *preMatchLoadingDuration; // @synthesize preMatchLoadingDuration=_preMatchLoadingDuration;
@property(copy, nonatomic) NSDictionary *selectPeopleNumber; // @synthesize selectPeopleNumber=_selectPeopleNumber;
@property(copy, nonatomic) NSString *payCompleteTimesDisplayAd; // @synthesize payCompleteTimesDisplayAd=_payCompleteTimesDisplayAd;
@property(copy, nonatomic) NSString *isDisplayPayCompleteAd; // @synthesize isDisplayPayCompleteAd=_isDisplayPayCompleteAd;
@property(copy, nonatomic) NSString *runtimeEtaBeforeOrder; // @synthesize runtimeEtaBeforeOrder=_runtimeEtaBeforeOrder;
@property(copy, nonatomic) NSString *endTipText; // @synthesize endTipText=_endTipText;
@property(copy, nonatomic) NSString *startTipText; // @synthesize startTipText=_startTipText;
@property(copy, nonatomic) NSString *stopTipShowCount; // @synthesize stopTipShowCount=_stopTipShowCount;
@property(copy, nonatomic) NSString *recvPushInterval; // @synthesize recvPushInterval=_recvPushInterval;
@property(copy, nonatomic) NSString *pollingInterval; // @synthesize pollingInterval=_pollingInterval;
@property(copy, nonatomic) NSString *etaTimeInterval; // @synthesize etaTimeInterval=_etaTimeInterval;
@property(copy, nonatomic) NSString *stationStayTime; // @synthesize stationStayTime=_stationStayTime;
@property(copy, nonatomic) NSString *waitingTakeTime; // @synthesize waitingTakeTime=_waitingTakeTime;
@property(copy, nonatomic) NSString *locDriverRadius; // @synthesize locDriverRadius=_locDriverRadius;
@property(copy, nonatomic) NSString *estimateTimeout; // @synthesize estimateTimeout=_estimateTimeout;
@property(copy, nonatomic) NSString *walkingSpeed; // @synthesize walkingSpeed=_walkingSpeed;
@property(copy, nonatomic) NSString *showNewUserTime; // @synthesize showNewUserTime=_showNewUserTime;
@property(copy, nonatomic) NSString *userGuideExpired; // @synthesize userGuideExpired=_userGuideExpired;
@property(copy, nonatomic) NSString *confVersion; // @synthesize confVersion=_confVersion;
- (void).cxx_destruct;

@end
