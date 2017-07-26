//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary;

@interface TMViewTrackerManager : NSObject
{
    _Bool _clickSwitch;
    _Bool _exposureSwitch;
    id <ATEventInterceptProtocol> _eventInterceptDelegate;
    id <TMViewTrackerCommitProtocol> _commitProtocol;
    unsigned long long _exposureTimeThreshold;
    double _exposureDimThreshold;
    unsigned long long _sampling;
    NSMutableDictionary *_data;
}

+ (id)sharedManager;
@property(retain, nonatomic) NSMutableDictionary *data; // @synthesize data=_data;
@property(nonatomic) unsigned long long sampling; // @synthesize sampling=_sampling;
@property(nonatomic) double exposureDimThreshold; // @synthesize exposureDimThreshold=_exposureDimThreshold;
@property(nonatomic) unsigned long long exposureTimeThreshold; // @synthesize exposureTimeThreshold=_exposureTimeThreshold;
@property(nonatomic) _Bool exposureSwitch; // @synthesize exposureSwitch=_exposureSwitch;
@property(nonatomic) _Bool clickSwitch; // @synthesize clickSwitch=_clickSwitch;
@property(nonatomic) __weak id <TMViewTrackerCommitProtocol> commitProtocol; // @synthesize commitProtocol=_commitProtocol;
@property(nonatomic) __weak id <ATEventInterceptProtocol> eventInterceptDelegate; // @synthesize eventInterceptDelegate=_eventInterceptDelegate;
- (void).cxx_destruct;
- (void)setTimes:(unsigned long long)arg1 forControlName:(id)arg2 inPage:(id)arg3;
- (unsigned long long)timesForControlName:(id)arg1 inPage:(id)arg2;
- (void)removeDataForControlName:(id)arg1 inPage:(id)arg2;
- (_Bool)isHitSampling;
- (void)handlerNotification:(id)arg1;
- (void)setClickSwitch:(_Bool)arg1 andExposureSwitch:(_Bool)arg2 exposureTimeThreshold:(unsigned long long)arg3 exposureDimThreshold:(double)arg4 sampling:(unsigned long long)arg5;
- (void)setClickSwitch:(_Bool)arg1 andExposureSwitch:(_Bool)arg2 sampling:(unsigned long long)arg3;
- (void)dealloc;
- (id)init;
- (void)destroyManager;

@end
