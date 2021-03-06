//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class FBGraphQLQuery, FBUserSession;
@protocol FBBookmarksFetcherDelegate, FBServiceTransactionMutating;

@interface FBBookmarksFetcher : NSObject
{
    FBUserSession *_session;
    FBGraphQLQuery *_graphQLQuery;
    NSObject *_scenePath;
    _Bool _fetchedSavedEdges;
    id <FBServiceTransactionMutating> _token;
    id <FBBookmarksFetcherDelegate> _delegate;
}

@property(nonatomic) __weak id <FBBookmarksFetcherDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_processDownloadedResponse:(id)arg1 error:(id)arg2;
- (void)_processCachedResponse:(id)arg1;
- (void)fetchBookmarks;
- (id)initWithSession:(id)arg1 graphQLQuery:(id)arg2 scenePath:(id)arg3;

@end

