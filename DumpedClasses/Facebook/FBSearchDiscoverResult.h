//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary;
@protocol FBSearchDiscoverModelProtocol;

@interface FBSearchDiscoverResult : NSObject
{
    id <FBSearchDiscoverModelProtocol> _model;
    NSDictionary *_userInfo;
}

@property(readonly, copy, nonatomic) NSDictionary *userInfo; // @synthesize userInfo=_userInfo;
@property(readonly, nonatomic) id <FBSearchDiscoverModelProtocol> model; // @synthesize model=_model;
- (void).cxx_destruct;
- (id)initWithModel:(id)arg1 userInfo:(id)arg2;

@end
