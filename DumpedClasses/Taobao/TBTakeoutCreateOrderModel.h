//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBJSONModel.h"

@class NSArray, NSString;

@interface TBTakeoutCreateOrderModel : TBJSONModel
{
    NSString *_result;
    NSArray *_alipayOrderIds;
    NSArray *_orderIds;
}

@property(retain, nonatomic) NSArray *orderIds; // @synthesize orderIds=_orderIds;
@property(retain, nonatomic) NSArray *alipayOrderIds; // @synthesize alipayOrderIds=_alipayOrderIds;
@property(retain, nonatomic) NSString *result; // @synthesize result=_result;
- (void).cxx_destruct;

@end
