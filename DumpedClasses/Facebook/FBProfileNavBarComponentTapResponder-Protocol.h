//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class FBMemPerson;

@protocol FBProfileNavBarComponentTapResponder <NSObject>
- (void)didTapProtilesNavBarFollowersWithPerson:(FBMemPerson *)arg1;
- (void)didTapProtilesNavBarFriendsWithPerson:(FBMemPerson *)arg1;
- (void)didTapProtilesNavBarPhotosWithPerson:(FBMemPerson *)arg1;
- (void)didTapProtilesNavBarAboutWithPerson:(FBMemPerson *)arg1;
@end
