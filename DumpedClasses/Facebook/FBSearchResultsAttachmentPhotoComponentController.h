//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FBSharedFramework/CKComponentController.h>

#import "FBPhotoDisplayingComponentPhotoViewProviderDelegate-Protocol.h"

@class FBFeedComponentPhotoHandler, FBPhotoDisplayingComponentPhotoViewProvider, NSString;

@interface FBSearchResultsAttachmentPhotoComponentController : CKComponentController <FBPhotoDisplayingComponentPhotoViewProviderDelegate>
{
    FBFeedComponentPhotoHandler *_photoHandler;
    FBPhotoDisplayingComponentPhotoViewProvider *_photoViewProvider;
}

- (void).cxx_destruct;
- (id)photoAttachmentPhotoViewProvider:(id)arg1 needsOverlayComponentForPhoto:(id)arg2;
- (id)photoAttachmentPhotoViewProvider:(id)arg1 needsPhotoDisplayingComponentForPhoto:(id)arg2 isPresenting:(_Bool)arg3;
- (void)_openPhotoWithTaggingMode:(_Bool)arg1;
- (void)handlePhotoTap:(id)arg1;
- (void)handleTagBadgeTap:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
