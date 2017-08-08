//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MQQBaseViewController.h"

#import "MQQAlertViewDelegate-Protocol.h"
#import "MQQSystemAlbumViewControllerDelegate-Protocol.h"
#import "MQQWallpaperTabBarDelegate-Protocol.h"

@class MQQBarButtonItem, MQQSystemAlbumViewController, MQQWallpaperTabBar, MQQWallpaperTableViewController, NSString, UIViewController;

@interface MQQWallpaperViewController : MQQBaseViewController <MQQWallpaperTabBarDelegate, MQQSystemAlbumViewControllerDelegate, MQQAlertViewDelegate>
{
    MQQWallpaperTabBar *_tabBar;
    MQQWallpaperTableViewController *_onlineViewController;
    MQQSystemAlbumViewController *_albumViewController;
    UIViewController *_currentViewController;
    struct CGPoint _lastContentOffset;
    _Bool _isDraggingTableView;
    _Bool _hasBeenNetworkObserver;
    MQQBarButtonItem *_moreBarButtonItem;
}

@property(retain, nonatomic) MQQBarButtonItem *moreBarButtonItem; // @synthesize moreBarButtonItem=_moreBarButtonItem;
@property(retain, nonatomic) UIViewController *currentViewController; // @synthesize currentViewController=_currentViewController;
@property(retain, nonatomic) MQQSystemAlbumViewController *albumViewController; // @synthesize albumViewController=_albumViewController;
@property(retain, nonatomic) MQQWallpaperTableViewController *onlineViewController; // @synthesize onlineViewController=_onlineViewController;
@property(retain, nonatomic) MQQWallpaperTabBar *tabBar; // @synthesize tabBar=_tabBar;
- (void)mqqAlertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)systemAlbumViewController:(id)arg1 didClickWithAsset:(id)arg2;
- (void)moreButtonClicked:(id)arg1;
- (void)transitionToViewController:(id)arg1;
- (void)wpTabBarDidSelectTag:(long long)arg1;
- (void)loadTabBar;
- (void)checkNetwork;
- (void)networkDidChanged:(id)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)dealloc;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (id)initWithOnlineCategory:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
