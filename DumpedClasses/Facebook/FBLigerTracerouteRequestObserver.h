//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "FBLigerSamplingRequestObserver.h"

#import "FBLigerRequestObserver-Protocol.h"

@interface FBLigerTracerouteRequestObserver : FBLigerSamplingRequestObserver <FBLigerRequestObserver>
{
}

- (void)request:(id)arg1 requestProperties:(const struct FBLigerRequestProperties *)arg2 wasCancelledWithEvents:(const vector_31c84f95 *)arg3;
- (void)request:(id)arg1 requestProperties:(const struct FBLigerRequestProperties *)arg2 failedWithError:(id)arg3 events:(const vector_31c84f95 *)arg4;
- (void)logTracerouteData:(vector_cc32c110)arg1;
- (void)request:(id)arg1 requestProperties:(const struct FBLigerRequestProperties *)arg2 completedWithResponse:(id)arg3 events:(const vector_31c84f95 *)arg4;
- (void)requestStartedLoading:(id)arg1 requestProperties:(const struct FBLigerRequestProperties *)arg2;

@end
