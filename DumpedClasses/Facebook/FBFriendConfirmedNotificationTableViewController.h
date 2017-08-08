//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "CKComponentProvider-Protocol.h"
#import "FBComponentScrollEventListener-Protocol.h"
#import "FBComponentTableViewDataSourceCellConfigProvider-Protocol.h"
#import "FBComponentTableViewDataSourceSelectionEventListener-Protocol.h"
#import "FBPYMKStreamListener-Protocol.h"
#import "FBPullToRefreshViewDelegate-Protocol.h"

@class FBComponentTableViewDataSource, FBFriendConfirmedNotificationTableViewSectionHelper, FBFriendingToolbox, FBPullToRefreshView, FBUserSession, NSMutableArray, NSObject, NSString, UITableView;
@protocol FBPYMKStreamProtocol;

@interface FBFriendConfirmedNotificationTableViewController : UIViewController <CKComponentProvider, FBComponentTableViewDataSourceSelectionEventListener, FBPullToRefreshViewDelegate, FBComponentScrollEventListener, FBPYMKStreamListener, FBComponentTableViewDataSourceCellConfigProvider>
{
    NSMutableArray *_confirmedNotificationsFriends;
    FBComponentTableViewDataSource *_dataSource;
    FBFriendingToolbox *_toolbox;
    FBPullToRefreshView *_pullToRefreshView;
    NSObject *_scenePath;
    FBUserSession *_session;
    UITableView *_tableView;
    FBFriendConfirmedNotificationTableViewSectionHelper *_dataSourceHelper;
    _Bool _shouldShowPYMK;
    id <FBPYMKStreamProtocol> _pymkStream;
}

+ (id)componentForModel:(id)arg1 context:(id)arg2;
- (void).cxx_destruct;
- (void)_didUpdateConfirmedFriend:(id)arg1;
- (void)_addConfirmedNotificationCLCObserver:(id)arg1;
- (void)_addConfirmedNotificationCLCObserverToPerson:(id)arg1;
- (void)pullToRefreshViewDidNotAnimateLoadingState:(id)arg1;
- (void)pullToRefreshView:(id)arg1 didChangeVisibility:(_Bool)arg2 userInitiated:(_Bool)arg3;
- (void)pullToRefreshViewDidStartAnimatingLoadingState:(id)arg1;
- (void)pullToRefreshViewDidAttemptToTriggerRefresh:(id)arg1;
- (void)pullToRefreshViewDidTriggerRefresh:(id)arg1;
- (void)scrollViewDidScrollToTop:(struct FBScrollViewState)arg1;
- (void)scrollViewDidEndDragging:(struct FBScrollViewState)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidScroll:(struct FBScrollViewState)arg1;
- (void)PYMKStream:(id)arg1 didRemoveSuggestion:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)PYMKStream:(id)arg1 didUpdateSuggestion:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)PYMKStream:(id)arg1 didFailLoadingWithError:(id)arg2 andCurrentSuggestions:(id)arg3;
- (void)PYMKStream:(id)arg1 didFinishedLoadingSuggestions:(id)arg2 andNumberOfNew:(unsigned long long)arg3;
- (struct FBComponentTableViewDataSourceCellConfig)configForTableCellInDataSource:(id)arg1;
- (void)dataSource:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (_Bool)fb_showNavBarSearchField;
- (_Bool)fb_automaticallyAdjustsTableViewInsets;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (long long)preferredInterfaceOrientationForPresentation;
- (unsigned long long)supportedInterfaceOrientations;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)dealloc;
- (id)initWithSession:(id)arg1 WithConfirmedNotificationsFriends:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
