//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface PASearchReportService : NSObject
{
    NSString *_sVer;
}

+ (void)setScene:(id)arg1 forVC:(id)arg2;
+ (id)shareInstance;
- (void).cxx_destruct;
- (void)doReport:(id)arg1 info:(id)arg2;
- (void)reportExposure:(unsigned long long)arg1;
- (void)reportEvent:(unsigned long long)arg1 model:(id)arg2;
- (void)setup;

@end
