//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGListDiffable.h"

@class NSArray;

@interface ESPSearchBannerViewModel : NSObject <IGListDiffable>
{
    NSArray *_banners;
    long long _trackType;
}

@property(nonatomic) long long trackType; // @synthesize trackType=_trackType;
@property(readonly, copy, nonatomic) NSArray *banners; // @synthesize banners=_banners;
- (void).cxx_destruct;
- (id)diffIdentifier;
- (_Bool)isEqualToDiffableObject:(id)arg1;
- (id)initWithBanners:(id)arg1;

@end
