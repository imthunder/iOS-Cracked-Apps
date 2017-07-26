//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary;

@interface QQVIPFunctionUserCollectInfo : NSObject
{
    NSMutableDictionary *_seqCompletionDict;
    NSMutableDictionary *_seqUserDataDict;
    int _xo;
}

- (void).cxx_destruct;
- (id)getAllOfflineCollectionData:(_Bool)arg1;
- (void)queryCollectComicPageStart:(long long)arg1 end:(long long)arg2 preferLocalData:(_Bool)arg3 offlineData:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)queryCollectComicPageStart:(long long)arg1 end:(long long)arg2 preferLocalData:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (void)collectComicBatch:(id)arg1 userData:(id)arg2 completion:(CDUnknownBlockType)arg3 pageId:(id)arg4;
- (void)collectComicBatch:(id)arg1 completion:(CDUnknownBlockType)arg2 pageId:(id)arg3;
- (void)queryCollectModelsByComicIds:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)getLocalCollectModelOfComicId:(id)arg1;
- (void)onRecievedCollectComicMsg:(id)arg1;
- (void)onRecievedQueryCollectComicMsg:(id)arg1;
- (void)onRecieveNetData:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(retain, nonatomic) NSMutableDictionary *seqCompletionDict; // @dynamic seqCompletionDict;
@property(retain, nonatomic) NSMutableDictionary *seqUserDataDict; // @dynamic seqUserDataDict;

@end
