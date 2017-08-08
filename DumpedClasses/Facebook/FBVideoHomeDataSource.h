//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "FBVideoHomeDataSourceAccessor-Protocol.h"
#import "FBVideoHomeDataSourceListenerSubscription-Protocol.h"
#import "FBVideoHomeDataSourceMutator-Protocol.h"

@class FBCache, FBUserSession, FBVideoHomeDataSourceUpdatesListenerAnnouncer, NSMutableArray, NSMutableDictionary, NSString;
@protocol FBReactionModelTransformer, FBVideoHomeDataSourceListener;

@interface FBVideoHomeDataSource : NSObject <FBVideoHomeDataSourceListenerSubscription, FBVideoHomeDataSourceMutator, FBVideoHomeDataSourceAccessor>
{
    NSMutableArray *_reactionComponentModels;
    NSMutableDictionary *_tokensDic;
    FBUserSession *_session;
    FBVideoHomeDataSourceUpdatesListenerAnnouncer *_announcer;
    id <FBReactionModelTransformer> _modelTransformer;
    FBCache *_storyStateCache;
    id <FBVideoHomeDataSourceListener> _dataSourceListener;
}

@property(nonatomic) __weak id <FBVideoHomeDataSourceListener> dataSourceListener; // @synthesize dataSourceListener=_dataSourceListener;
- (void).cxx_destruct;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;
- (id)tokens;
- (void)_handleStatusUpdate:(id)arg1 forStoryID:(id)arg2;
- (void)_subscribeToUnitComponent:(id)arg1 unit:(id)arg2;
- (void)_subscribeToUnit:(id)arg1;
- (void)_subscribeToItem:(id)arg1;
- (void)_deleteItemsAtRange:(struct _NSRange)arg1;
- (void)_updateObjectAtIndex:(unsigned long long)arg1 withObject:(id)arg2;
- (void)_insertItem:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)_removeTokenForStoryID:(id)arg1 unit:(id)arg2;
- (id)_tokenHolderForStoryID:(id)arg1 unitID:(id)arg2;
- (void)_removeTokensIfNotFoundAmongAllStories:(id)arg1 unitID:(id)arg2;
- (void)_cacheStory:(id)arg1 forID:(id)arg2;
- (id)_storyIDsFromUnit:(id)arg1;
- (id)_storyIDFromUnitComponent:(id)arg1;
- (id)_storyIDsFromDataModel:(id)arg1;
- (id)reactionUnitModels;
- (id)units;
- (id)videoForUnitComponent:(id)arg1;
- (void)updateWithDataModel:(id)arg1;
- (id)reactionComponentModels;
- (id)unitIDs;
- (struct _NSRange)rangeOfUnitWithID:(id)arg1;
- (void)removeAllItems;
- (void)addItem:(id)arg1 unitIndex:(unsigned long long)arg2 unitsCount:(unsigned long long)arg3;
- (id)initWithSession:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
