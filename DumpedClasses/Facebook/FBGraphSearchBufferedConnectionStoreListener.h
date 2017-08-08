//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "FBGraphQLConnectionStoreListener-Protocol.h"
#import "FBSearchCombinedResultsEdgeBufferDelegate-Protocol.h"

@class FBSearchCombinedResultsEdgeBuffer, NSString;
@protocol FBGraphSearchBufferedConnectionStoreListenerDelegate;

@interface FBGraphSearchBufferedConnectionStoreListener : NSObject <FBSearchCombinedResultsEdgeBufferDelegate, FBGraphQLConnectionStoreListener>
{
    FBSearchCombinedResultsEdgeBuffer *_buffer;
    _Bool _useBufferForHeadLoads;
    id <FBGraphSearchBufferedConnectionStoreListenerDelegate> _delegate;
}

@property(nonatomic) _Bool useBufferForHeadLoads; // @synthesize useBufferForHeadLoads=_useBufferForHeadLoads;
@property(nonatomic) __weak id <FBGraphSearchBufferedConnectionStoreListenerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_processEdgesFromStoreState:(id)arg1 indexPathToEdgesMap:(id)arg2 userInfo:(id)arg3;
- (void)graphQLConnectionStore:(id)arg1 didModifyPreviousState:(id)arg2 byUpdatingLocations:(id)arg3 userInfo:(id)arg4;
- (void)graphQLConnectionStore:(id)arg1 didModifyPreviousState:(id)arg2 byRemovingEdgesAtIndexPaths:(id)arg3 deletionReason:(id)arg4;
- (void)graphQLConnectionStore:(id)arg1 didModifyPreviousState:(id)arg2 byMergingChunkAtIndexWithPrecedingChunk:(unsigned long long)arg3 userInfo:(id)arg4;
- (void)graphQLConnectionStore:(id)arg1 didModifyPreviousState:(id)arg2 byRemovingChunksAtIndexes:(id)arg3 userInfo:(id)arg4;
- (void)graphQLConnectionStoreDidFinishAttemptingToRestoreFirstPersistedPage:(id)arg1;
- (void)graphQLConnectionStore:(id)arg1 didModifyPreviousState:(id)arg2 byUpdatingEdgesAtIndexPaths:(id)arg3 userInfo:(id)arg4;
- (void)graphQLConnectionStore:(id)arg1 didModifyPreviousState:(id)arg2 byInsertingEdgesAtIndexPaths:(id)arg3 userInfo:(id)arg4;
- (void)graphQLConnectionStore:(id)arg1 didModifyPreviousState:(id)arg2 byInsertingChunkAtIndex:(unsigned long long)arg3 userInfo:(id)arg4;
- (void)combinedResultsEdgeBuffer:(id)arg1 didPopEdge:(id)arg2;
- (void)dealloc;
- (id)initWithConnectionStore:(id)arg1 bufferInterval:(double)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
