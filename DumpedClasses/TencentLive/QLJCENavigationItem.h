//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JceObjectV2.h"

@class NSString;

@interface QLJCENavigationItem : JceObjectV2
{
    NSString *jcev2_p_0_r_title;
    NSString *jcev2_p_1_r_dataKey;
    long long jcev2_p_2_r_navigationItemType;
}

+ (id)jceType;
+ (void)initialize;
@property(nonatomic, getter=jce_navigationItemType, setter=setJce_navigationItemType:) long long jcev2_p_2_r_navigationItemType; // @synthesize jcev2_p_2_r_navigationItemType;
@property(retain, nonatomic, getter=jce_dataKey, setter=setJce_dataKey:) NSString *jcev2_p_1_r_dataKey; // @synthesize jcev2_p_1_r_dataKey;
@property(retain, nonatomic, getter=jce_title, setter=setJce_title:) NSString *jcev2_p_0_r_title; // @synthesize jcev2_p_0_r_title;
- (void).cxx_destruct;
- (id)init;

@end

