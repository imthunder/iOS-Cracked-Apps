//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FBSharedFramework/FBGraphQLDownloadRequest.h>

@class NSArray, NSString;

@interface FBFriendsNearbyPageableLoadMoreRequest : FBGraphQLDownloadRequest
{
    unsigned long long _countPerPage;
    NSString *_cursor;
    NSString *_sectionId;
    NSArray *_highlightFBIDs;
}

@property(copy, nonatomic) NSArray *highlightFBIDs; // @synthesize highlightFBIDs=_highlightFBIDs;
@property(copy, nonatomic) NSString *sectionId; // @synthesize sectionId=_sectionId;
@property(copy, nonatomic) NSString *cursor; // @synthesize cursor=_cursor;
@property(nonatomic) unsigned long long countPerPage; // @synthesize countPerPage=_countPerPage;
- (void).cxx_destruct;
- (id)newQuery;

@end
