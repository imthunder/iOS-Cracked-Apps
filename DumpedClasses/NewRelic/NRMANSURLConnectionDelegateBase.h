//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSURLConnectionDataDelegate-Protocol.h"
#import "NSURLConnectionDelegate-Protocol.h"

@class NRTimer, NSData, NSMutableData, NSString, NSURLRequest, NSURLResponse;
@protocol NSURLConnectionDelegate, NSURLConnectionDelegate><NSURLConnectionDataDelegate><NSURLConnectionDownloadDelegate><NSObject;

@interface NRMANSURLConnectionDelegateBase : NSObject <NSURLConnectionDataDelegate, NSURLConnectionDelegate>
{
    NSObject<NSURLConnectionDelegate><NSURLConnectionDataDelegate><NSURLConnectionDownloadDelegate><NSObject> *_realDelegate;
    NSURLRequest *_request;
    NSURLResponse *_response;
    NSMutableData *_responseData;
    NRTimer *_timer;
    unsigned long long _bytesReceived;
    unsigned long long _bytesSent;
}

@property(retain, nonatomic) NSURLRequest *request; // @synthesize request=_request;
@property(readonly, nonatomic) NSData *responseData; // @synthesize responseData=_responseData;
@property(readonly, nonatomic) NSURLResponse *response; // @synthesize response=_response;
@property(retain, nonatomic) id <NSURLConnectionDelegate> realDelegate; // @synthesize realDelegate=_realDelegate;
- (id)connection:(id)arg1 willSendRequest:(id)arg2 redirectResponse:(id)arg3;
- (void)connection:(id)arg1 didSendBodyData:(long long)arg2 totalBytesWritten:(long long)arg3 totalBytesExpectedToWrite:(long long)arg4;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)startDownloadTimer;
- (id)timer;
- (void)releaseChildren;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
