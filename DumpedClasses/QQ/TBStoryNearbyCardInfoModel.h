//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQModel.h"

@class NSString, TBStoryNormalCardInfoModel;

@interface TBStoryNearbyCardInfoModel : QQModel
{
    TBStoryNormalCardInfoModel *_cardInfo;
    NSString *_distance;
}

+ (id)createWithPBData:(struct CPBMessageDecoder *)arg1;
@property(retain, nonatomic) NSString *distance; // @synthesize distance=_distance;
@property(retain, nonatomic) TBStoryNormalCardInfoModel *cardInfo; // @synthesize cardInfo=_cardInfo;
- (void)dealloc;

@end
