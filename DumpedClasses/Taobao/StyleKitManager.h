//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary;

@interface StyleKitManager : NSObject
{
    NSMutableDictionary *_contextMap;
}

+ (_Bool)registerStylesWithModuleName:(id)arg1 mapPath:(id)arg2 stylePath:(id)arg3 aliasPath:(id)arg4;
+ (_Bool)removeContextWithModuleName:(id)arg1;
+ (id)contextWithModuleName:(id)arg1;
+ (_Bool)registerStylesWithContext:(id)arg1;
+ (id)sharedInstance;
@property(retain, nonatomic) NSMutableDictionary *contextMap; // @synthesize contextMap=_contextMap;
- (void).cxx_destruct;
- (_Bool)removeContextWithModuleName:(id)arg1;
- (_Bool)registerStylesWithContext:(id)arg1;
- (id)contextWithModuleName:(id)arg1;
- (id)init;

@end
