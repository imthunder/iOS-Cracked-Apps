//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug  6 2017 20:42:30).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSMutableSet;

@interface EMLoggingContextSet : NSObject
{
    int _lock;
    NSMutableSet *_set;
}

- (void).cxx_destruct;
- (_Bool)isInSet:(unsigned long long)arg1;
@property(readonly, copy) NSArray *currentSet;
- (void)removeFromSet:(unsigned long long)arg1;
- (void)addToSet:(unsigned long long)arg1;
- (id)init;

@end
