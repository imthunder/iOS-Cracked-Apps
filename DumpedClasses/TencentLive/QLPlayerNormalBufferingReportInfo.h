//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QLPlayerVideoBufferingReportInfo.h"

@class NSString;

@interface QLPlayerNormalBufferingReportInfo : QLPlayerVideoBufferingReportInfo
{
    long long _normalBufferingReason;
    long long _format;
    long long _videoPlayTime;
    NSString *_url;
    NSString *_errorCode;
    long long _scene;
    long long _levent;
}

@property(nonatomic) long long levent; // @synthesize levent=_levent;
@property(nonatomic) long long scene; // @synthesize scene=_scene;
@property(copy, nonatomic) NSString *errorCode; // @synthesize errorCode=_errorCode;
@property(copy, nonatomic) NSString *url; // @synthesize url=_url;
@property(nonatomic) long long videoPlayTime; // @synthesize videoPlayTime=_videoPlayTime;
@property(nonatomic) long long format; // @synthesize format=_format;
@property(nonatomic) long long normalBufferingReason; // @synthesize normalBufferingReason=_normalBufferingReason;
- (void).cxx_destruct;
- (id)initWithNormalBufferingReason:(long long)arg1 format:(long long)arg2 videoPlayTime:(long long)arg3 url:(id)arg4 errorCode:(id)arg5 isSeekBuffering:(_Bool)arg6 scene:(long long)arg7 levent:(long long)arg8;

@end
