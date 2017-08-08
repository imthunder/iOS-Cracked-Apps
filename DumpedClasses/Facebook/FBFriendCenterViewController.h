//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "FBFriendCenterMenuViewDelegate-Protocol.h"

@class FBFriendCenterConfiguration, FBFriendCenterView, FBUserSession, NSMutableDictionary, NSString, UIView;
@protocol FBFriendCenterItem><FBFriendingViewControllerLoggingProtocol, FBFriendCenterMenuView;

@interface FBFriendCenterViewController : UIViewController <FBFriendCenterMenuViewDelegate>
{
    FBFriendCenterView *_friendCenterView;
    UIView<FBFriendCenterMenuView> *_menuView;
    FBUserSession *_session;
    FBFriendCenterConfiguration *_configuration;
    unsigned long long _selectedMenuItem;
    NSMutableDictionary *_viewControllerMap;
    _Bool _isFirstTimePresented;
    _Bool _needToRedirect;
    unsigned long long _redirectMenuItem;
    UIViewController<FBFriendCenterItem><FBFriendingViewControllerLoggingProtocol> *_selectedViewController;
}

+ (_Bool)_listKitFriendCenterFriendsEnabledInSession:(id)arg1;
@property(readonly, nonatomic) UIView<FBFriendCenterMenuView> *menuView; // @synthesize menuView=_menuView;
@property(nonatomic) unsigned long long selectedMenuItem; // @synthesize selectedMenuItem=_selectedMenuItem;
@property(nonatomic) __weak UIViewController<FBFriendCenterItem><FBFriendingViewControllerLoggingProtocol> *selectedViewController; // @synthesize selectedViewController=_selectedViewController;
- (void).cxx_destruct;
- (void)_logImpression;
- (void)_logNavigationEventFromViewController:(id)arg1 toViewController:(id)arg2;
- (id)analyticsModule;
- (void)_logSectionTouched:(id)arg1;
- (id)_viewControllerForMenuItem:(unsigned long long)arg1;
- (id)_getViewControllerForAccessFromMenuItem:(unsigned long long)arg1;
- (Class)_viewControllerClassForMenuItem:(unsigned long long)arg1;
- (void)_friendRequestCountHandler:(id)arg1;
- (void)_switchToMenuItem:(unsigned long long)arg1 fromMenuItem:(unsigned long long)arg2;
- (void)_initSelectedMenuItem:(unsigned long long)arg1;
- (id)_stringMenuItemForFriendCenterMenuItem:(unsigned long long)arg1;
- (void)menuItemTapped:(unsigned long long)arg1;
- (_Bool)fb_showNavBarSearchField;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (long long)preferredInterfaceOrientationForPresentation;
- (unsigned long long)supportedInterfaceOrientations;
- (void)dealloc;
- (void)_didEnterBackground;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithSession:(id)arg1 configuration:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
