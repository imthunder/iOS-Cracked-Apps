//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class NSString;

@interface FBLazyContainerViewController : UIViewController
{
    CDUnknownBlockType _block;
    UIViewController *_childViewController;
    NSString *_analyticsModule;
}

- (void).cxx_destruct;
- (id)analyticsModule;
- (id)childViewControllerForStatusBarHidden;
- (id)childViewControllerForStatusBarStyle;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (_Bool)shouldAutomaticallyForwardAppearanceMethods;
- (id)initWithViewControllerBlock:(CDUnknownBlockType)arg1 analyticsModule:(id)arg2;

@end
