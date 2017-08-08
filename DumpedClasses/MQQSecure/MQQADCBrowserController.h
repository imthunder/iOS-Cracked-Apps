//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MQQBaseViewController.h"

#import "MQQImagePreviewViewDataSource-Protocol.h"
#import "MQQImagePreviewViewDelegate-Protocol.h"
#import "UIActionSheetDelegate-Protocol.h"

@class MQQADCDeletionUIHelper, MQQImagePreviewView, MQQPhotoFilterBrowserBottomBar, NSMutableArray, NSString, UIActionSheet, UIColor, UINavigationController;

@interface MQQADCBrowserController : MQQBaseViewController <UIActionSheetDelegate, MQQImagePreviewViewDataSource, MQQImagePreviewViewDelegate>
{
    MQQPhotoFilterBrowserBottomBar *_bottomBar;
    _Bool _canTapToQuit;
    MQQADCDeletionUIHelper *_deletionHelper;
    UIColor *_preNavigationBarBackground;
    UIActionSheet *_actionSheet;
    MQQImagePreviewView *_imagePreviewView;
    NSMutableArray *_assetArray;
    long long _currentIndex;
    UINavigationController *_navController;
}

@property(retain, nonatomic) UINavigationController *navController; // @synthesize navController=_navController;
@property(nonatomic) long long currentIndex; // @synthesize currentIndex=_currentIndex;
@property(retain, nonatomic) NSMutableArray *assetArray; // @synthesize assetArray=_assetArray;
@property(retain, nonatomic) MQQImagePreviewView *imagePreviewView; // @synthesize imagePreviewView=_imagePreviewView;
@property(retain, nonatomic) UIActionSheet *actionSheet; // @synthesize actionSheet=_actionSheet;
@property(retain, nonatomic) UIColor *preNavigationBarBackground; // @synthesize preNavigationBarBackground=_preNavigationBarBackground;
@property(retain, nonatomic) MQQADCDeletionUIHelper *deletionHelper; // @synthesize deletionHelper=_deletionHelper;
@property(nonatomic) _Bool canTapToQuit; // @synthesize canTapToQuit=_canTapToQuit;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)cleanSelected;
- (void)cleanButtonClicked:(id)arg1;
- (void)didScroll;
- (void)imagePreviewViewDidScroll:(id)arg1;
- (void)willScrollToIndex:(long long)arg1;
- (void)imagePreviewView:(id)arg1 willScrollToIndex:(long long)arg2;
- (void)willBeginDragging;
- (void)imagePreviewViewWillBeginDragging:(id)arg1;
- (id)imagePreviewView:(id)arg1 imageCellForIndex:(long long)arg2 isAssetsDataChange:(_Bool)arg3;
- (void)updateDisplay:(long long)arg1;
- (struct CGSize)mininumPaddingOfImageCellAtIndex:(long long)arg1;
- (_Bool)shouldLoadImageWithAsync;
- (id)imageForAsset:(id)arg1 index:(long long)arg2;
- (id)imageCellForIndex:(long long)arg1;
- (void)deleteAssets:(id)arg1;
- (void)reloadWithAssets:(id)arg1;
- (void)reloadWithResultSets:(id)arg1;
- (void)tapToQuit:(id)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithResultSet:(id)arg1 currentIndex:(long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
