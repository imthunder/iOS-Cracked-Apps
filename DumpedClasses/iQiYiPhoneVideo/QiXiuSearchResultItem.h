//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface QiXiuSearchResultItem : NSObject
{
    _Bool _isLiveon;
    NSString *_userIDStr;
    NSString *_nickNameStr;
    NSString *_userIconStr;
    NSString *_showIDStr;
    NSString *_shortIDStr;
    NSString *_roomIDStr;
    NSString *_anchorLevelStr;
    NSString *_liveImageStr;
}

+ (id)searchResultItemFromDic:(id)arg1;
@property(nonatomic) _Bool isLiveon; // @synthesize isLiveon=_isLiveon;
@property(copy, nonatomic) NSString *liveImageStr; // @synthesize liveImageStr=_liveImageStr;
@property(copy, nonatomic) NSString *anchorLevelStr; // @synthesize anchorLevelStr=_anchorLevelStr;
@property(copy, nonatomic) NSString *roomIDStr; // @synthesize roomIDStr=_roomIDStr;
@property(copy, nonatomic) NSString *shortIDStr; // @synthesize shortIDStr=_shortIDStr;
@property(copy, nonatomic) NSString *showIDStr; // @synthesize showIDStr=_showIDStr;
@property(copy, nonatomic) NSString *userIconStr; // @synthesize userIconStr=_userIconStr;
@property(copy, nonatomic) NSString *nickNameStr; // @synthesize nickNameStr=_nickNameStr;
@property(copy, nonatomic) NSString *userIDStr; // @synthesize userIDStr=_userIDStr;
- (void).cxx_destruct;

@end

