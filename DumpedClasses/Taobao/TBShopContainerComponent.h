//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBShopBasicComponent.h"

@class NSDictionary, NSString;

@interface TBShopContainerComponent : TBShopBasicComponent
{
    NSString *_sourceTypeStr;
    unsigned long long _sourceType;
    NSDictionary *_source;
    NSString *_pageName;
    NSDictionary *_pageEventParams;
}

@property(retain, nonatomic) NSDictionary *pageEventParams; // @synthesize pageEventParams=_pageEventParams;
@property(retain, nonatomic) NSString *pageName; // @synthesize pageName=_pageName;
@property(retain, nonatomic) NSDictionary *source; // @synthesize source=_source;
@property(nonatomic) unsigned long long sourceType; // @synthesize sourceType=_sourceType;
@property(retain, nonatomic) NSString *sourceTypeStr; // @synthesize sourceTypeStr=_sourceTypeStr;
- (void).cxx_destruct;
- (id)initWithData:(id)arg1;

@end
