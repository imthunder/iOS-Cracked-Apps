//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "UIApplicationDelegate-Protocol.h"

@class NSString, PTHWindow, UINavigationController, UIWindow;

@interface PTHTweetbotAppDelegate : NSObject <UIApplicationDelegate>
{
    _Bool _firstTime;
    _Bool _wasBackground;
    PTHWindow *_window;
    CDUnknownBlockType _openURLBlock;
    UINavigationController *_navigationController;
}

@property(retain, nonatomic) UINavigationController *navigationController; // @synthesize navigationController=_navigationController;
@property(copy, nonatomic) CDUnknownBlockType openURLBlock; // @synthesize openURLBlock=_openURLBlock;
- (void).cxx_destruct;
- (void)dealloc;
- (void)configureSupportMailController:(id)arg1;
- (void)application:(id)arg1 performFetchWithCompletionHandler:(CDUnknownBlockType)arg2;
- (_Bool)application:(id)arg1 openURL:(id)arg2 sourceApplication:(id)arg3 annotation:(id)arg4;
- (void)application:(id)arg1 didReceiveRemoteNotification:(id)arg2;
- (void)application:(id)arg1 handleActionWithIdentifier:(id)arg2 forRemoteNotification:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)_showNotification:(id)arg1;
- (void)application:(id)arg1 didFailToRegisterForRemoteNotificationsWithError:(id)arg2;
- (void)application:(id)arg1 didRegisterForRemoteNotificationsWithDeviceToken:(id)arg2;
- (void)application:(id)arg1 didRegisterUserNotificationSettings:(id)arg2;
- (void)applicationDidEnterBackground:(id)arg1;
- (void)applicationDidBecomeActive:(id)arg1;
- (_Bool)application:(id)arg1 willFinishLaunchingWithOptions:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(retain, nonatomic) UIWindow *window;

@end

