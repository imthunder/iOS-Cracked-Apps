//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "MQQSharkRequestDelegate-Protocol.h"

@class MQQCBServerNumbersRequest, MQQFamilyCareBindedListRequest, MQQFamilyCareBindingRequest, MQQSCBEntranceModel, MQQSpamCallBlockerTipsModel, NSMutableArray, NSString;

@interface MQQSCBEntrancesManager : NSObject <MQQSharkRequestDelegate>
{
    _Bool _isCallBlockerSupported;
    MQQSCBEntranceModel *_mainEntranceModel;
    MQQSCBEntranceModel *_tipsEntranceModel;
    MQQSCBEntranceModel *_reportEntranceModel;
    MQQSCBEntranceModel *_moreEntranceModel;
    double _lastUpdateTime_ServerNumbers;
    _Bool _isBinded;
    NSMutableArray *_validReportedAccounts;
    MQQSpamCallBlockerTipsModel *_callBlockerTipsModel;
    long long _serverNumbersAddedCount;
    NSString *_familyDetailInfo;
    NSMutableArray *_reportedAccounts;
    MQQCBServerNumbersRequest *_serverNumbersRequest;
    MQQFamilyCareBindingRequest *_familyCareBindingRequest;
    MQQFamilyCareBindedListRequest *_familyCareBindedListRequest;
    NSMutableArray *_familyCareBindedInfoRequestArray;
}

+ (id)sharedManager;
@property(retain, nonatomic) NSMutableArray *familyCareBindedInfoRequestArray; // @synthesize familyCareBindedInfoRequestArray=_familyCareBindedInfoRequestArray;
@property(retain, nonatomic) MQQFamilyCareBindedListRequest *familyCareBindedListRequest; // @synthesize familyCareBindedListRequest=_familyCareBindedListRequest;
@property(retain, nonatomic) MQQFamilyCareBindingRequest *familyCareBindingRequest; // @synthesize familyCareBindingRequest=_familyCareBindingRequest;
@property(retain, nonatomic) MQQCBServerNumbersRequest *serverNumbersRequest; // @synthesize serverNumbersRequest=_serverNumbersRequest;
@property(retain, nonatomic) NSMutableArray *reportedAccounts; // @synthesize reportedAccounts=_reportedAccounts;
@property(nonatomic) _Bool isBinded; // @synthesize isBinded=_isBinded;
@property(copy, nonatomic) NSString *familyDetailInfo; // @synthesize familyDetailInfo=_familyDetailInfo;
@property(nonatomic) long long serverNumbersAddedCount; // @synthesize serverNumbersAddedCount=_serverNumbersAddedCount;
@property(retain, nonatomic) MQQSpamCallBlockerTipsModel *callBlockerTipsModel; // @synthesize callBlockerTipsModel=_callBlockerTipsModel;
@property(retain, nonatomic) NSMutableArray *validReportedAccounts; // @synthesize validReportedAccounts=_validReportedAccounts;
- (void)_updateFamilyDetailInfoWithAccounts:(id)arg1;
- (void)didClickFamilyCareEntrance;
- (long long)_getDeletedSpamRecordCount;
- (void)didDisplayReportEntrance;
- (_Bool)_shouldDisplayReportEntrance;
- (void)didClickTipsEntrance;
- (void)_didFinishFamilyCareBindedInfoRequest:(id)arg1;
- (void)sharkRequestDidFail:(id)arg1;
- (void)sharkRequestDidFinish:(id)arg1 withInfo:(id)arg2;
- (void)cancelFamilyCareBindedInfoRequests;
- (void)cancelFamilyCareBindedListRequest;
- (void)cancelFamilyCareBindingRequest;
- (void)cancelServerNumbersRequest;
- (void)cancel;
- (void)updateMoreEntranceData;
- (void)updateReportEntranceData;
- (_Bool)isCurrentNetworkValid;
- (id)itemsWithImageNames:(id)arg1 titles:(id)arg2 detailInfos:(id)arg3 tags:(id)arg4;
- (void)clearModels;
- (id)moreEntranceModel;
- (id)reportEntranceModel;
- (id)tipsEntranceModel;
- (id)mainEntranceModel;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
