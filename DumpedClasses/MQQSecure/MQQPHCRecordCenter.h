//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MQQUserDefaults, NSMutableDictionary;

@interface MQQPHCRecordCenter : NSObject
{
    long long _currentProcessID;
    NSMutableDictionary *_compressionErrors;
    MQQUserDefaults *_userDefaults;
}

+ (id)defaultCenter;
@property(retain, nonatomic) MQQUserDefaults *userDefaults; // @synthesize userDefaults=_userDefaults;
- (void)compressionDidFinishAllAndRecordErrors;
- (void)compressionDidFailWithError:(id)arg1;
- (void)compressionDidFinishAndRecordWithTotalCount:(long long)arg1 successCount:(long long)arg2 duration:(double)arg3 sizeBeforeCompressing:(long long)arg4 sizeAfterCompressing:(long long)arg5;
- (void)processDidFinishAndRecord:(long long)arg1;
- (void)processWillCompressWithCount:(long long)arg1;
- (void)processDidFilterWithCount:(long long)arg1;
- (void)processDidFetchWithCount:(long long)arg1;
- (long long)processWillStartWithFetchingMethod:(long long)arg1 operationMethod:(long long)arg2;
- (void)dealloc;
- (id)init;

@end
