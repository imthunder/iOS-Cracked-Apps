//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class NSString, UIButton, UITextView;

@interface FBAccountKitConfirmationCodeViewController : UIViewController
{
    NSString *_confirmationCode;
    UITextView *_confirmationCodeText;
    UIButton *_copyButton;
}

- (void).cxx_destruct;
- (_Bool)fb_showAuxiliaryViewController;
- (_Bool)fb_showNavBarSearchField;
- (void)viewDidLayoutSubviews;
- (void)viewWillLayoutSubviews;
- (void)loadView;
- (void)copyConfirmationCode;
- (id)initWithConfirmationCode:(id)arg1;

@end
