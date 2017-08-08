//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NRMAInteractionDataStamp, NRMATrace, NSMutableDictionary, NSMutableSet, NSString;

@interface NRMAActivityTrace : NSObject
{
    CDStruct_9170365d _lastCPUTime;
    _Bool _lastCPUTimeValid;
    double _lastRecordVitalsTime;
    _Bool _isComplete;
    NSMutableDictionary *_traces;
    NSString *_initiatingObjectIdentifier;
    NRMATrace *_rootTrace;
    NSMutableSet *_missingChildren;
    double _lastUpdated;
    NSString *_type;
    NSString *_name;
    NSMutableDictionary *_memoryVitals;
    NSMutableDictionary *_cpuVitals;
    double _totalExclusiveTimeMillis;
    double _totalNetworkTimeMillis;
    unsigned long long _nodes;
    double _startTime;
    double _endTime;
    NRMAInteractionDataStamp *_lastActivityStamp;
}

@property(retain) NRMAInteractionDataStamp *lastActivityStamp; // @synthesize lastActivityStamp=_lastActivityStamp;
@property(nonatomic) double endTime; // @synthesize endTime=_endTime;
@property(nonatomic) double startTime; // @synthesize startTime=_startTime;
@property(nonatomic) unsigned long long nodes; // @synthesize nodes=_nodes;
@property(nonatomic) double totalNetworkTimeMillis; // @synthesize totalNetworkTimeMillis=_totalNetworkTimeMillis;
@property(nonatomic) double totalExclusiveTimeMillis; // @synthesize totalExclusiveTimeMillis=_totalExclusiveTimeMillis;
@property(retain, nonatomic) NSMutableDictionary *cpuVitals; // @synthesize cpuVitals=_cpuVitals;
@property(retain, nonatomic) NSMutableDictionary *memoryVitals; // @synthesize memoryVitals=_memoryVitals;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSString *type; // @synthesize type=_type;
@property _Bool isComplete; // @synthesize isComplete=_isComplete;
@property(nonatomic) double lastUpdated; // @synthesize lastUpdated=_lastUpdated;
@property(retain) NSMutableSet *missingChildren; // @synthesize missingChildren=_missingChildren;
@property(retain, nonatomic) NRMATrace *rootTrace; // @synthesize rootTrace=_rootTrace;
@property(retain, nonatomic) NSString *initiatingObjectIdentifier; // @synthesize initiatingObjectIdentifier=_initiatingObjectIdentifier;
@property(retain, nonatomic) NSMutableDictionary *traces; // @synthesize traces=_traces;
- (void).cxx_destruct;
- (_Bool)shouldRecord;
- (double)durationInSeconds;
- (void)complete;
- (_Bool)hasMissingChildren;
- (void)recordVitals;
- (void)recordVitalsThrottled;
- (void)addTrace:(id)arg1;
- (id)initWithRootTrace:(id)arg1;

@end
