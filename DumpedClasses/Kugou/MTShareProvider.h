//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MTShareProtocol.h"

@class NSString;

@interface MTShareProvider : NSObject <MTShareProtocol>
{
}

- (id)requestWithAccessToken:(id)arg1 url:(id)arg2 httpMethod:(id)arg3 params:(id)arg4 delegate:(id)arg5 withTag:(id)arg6;
- (void)shareWeiboInAppWithStr:(id)arg1 imgData:(id)arg2 token:(id)arg3 successBlk:(CDUnknownBlockType)arg4 failBlk:(CDUnknownBlockType)arg5;
- (void)authWithType:(long long)arg1 callback:(CDUnknownBlockType)arg2;
- (void)shareWithModel:(id)arg1 type:(long long)arg2 callBack:(CDUnknownBlockType)arg3;
- (_Bool)isWeiboTokenValid:(id)arg1;
- (_Bool)isQQAppInstalled;
- (_Bool)isWXAppInstalled;
- (id)sharerWithDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
