//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSOperation.h>

@class NSDictionary, NSString;

@interface DFStartApplicationOperation : NSOperation
{
    NSString *_appName;
    NSDictionary *_params;
    long long _launchMode;
}

@property(nonatomic) long long launchMode; // @synthesize launchMode=_launchMode;
@property(retain, nonatomic) NSDictionary *params; // @synthesize params=_params;
@property(copy, nonatomic) NSString *appName; // @synthesize appName=_appName;
- (void).cxx_destruct;
- (void)start;

@end

