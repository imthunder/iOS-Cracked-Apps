//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface NewRelicInternalUtils : NSObject
{
}

+ (_Bool)validateString:(id)arg1 usingRegularExpression:(id)arg2;
+ (id)cleanseStringForCollector:(id)arg1;
+ (id)normalizedStringFromString:(id)arg1;
+ (id)normalizedStringFromURL:(id)arg1;
+ (id)deviceModelViaSysCtrl;
+ (void)setMachModel:(id)arg1;
+ (id)machModel;
+ (id)deviceModel;
+ (id)reachability;
+ (id)getCurrentWanType;
+ (int)networkStatus;
+ (id)deviceOrientation;
+ (id)carrierName;
+ (id)stringFromNRMAApplicationPlatform:(unsigned long long)arg1;
+ (_Bool)isWebViewThread;
+ (id)agentName;
+ (id)osName;
+ (id)osVersion;
+ (id)deviceId;
+ (id)agentVersion;

@end
