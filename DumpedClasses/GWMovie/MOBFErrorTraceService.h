//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug  6 2017 20:42:30).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray;

@interface MOBFErrorTraceService : NSObject
{
    NSMutableArray *_traceLogs;
}

+ (id)getCacheKeysDict;
+ (id)setCacheKeysDict;
+ (void)writeTraceMsg:(id)arg1;
+ (id)traceLogArray;
+ (id)traceLogs;
+ (void)cancelTraceGetCacheDataForKey:(id)arg1 domain:(id)arg2;
+ (void)traceGetCacheDataForKey:(id)arg1 domain:(id)arg2;
+ (void)cancelTraceSetCacheDataForKey:(id)arg1 domain:(id)arg2;
+ (void)traceSetCacheData:(id)arg1 forKey:(id)arg2 domain:(id)arg3;
@property(retain, nonatomic) NSMutableArray *traceLogs; // @synthesize traceLogs=_traceLogs;
- (void).cxx_destruct;

@end
