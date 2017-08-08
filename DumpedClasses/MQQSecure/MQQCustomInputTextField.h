//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITextField.h>

#import "MQQLaunchAdPresetationManagerDelegate-Protocol.h"

@class NSString, UILabel;

@interface MQQCustomInputTextField : UITextField <MQQLaunchAdPresetationManagerDelegate>
{
    _Bool _isCheckAfterLaunchAdDismiss;
    unsigned long long _disableActionOptions;
}

@property(nonatomic) _Bool isCheckAfterLaunchAdDismiss; // @synthesize isCheckAfterLaunchAdDismiss=_isCheckAfterLaunchAdDismiss;
@property(nonatomic) unsigned long long disableActionOptions; // @synthesize disableActionOptions=_disableActionOptions;
- (void)launchAdPresentationManager:(id)arg1 adDidDismiss:(id)arg2;
- (void)launchAdPresentationManager:(id)arg1 adDidPresent:(id)arg2;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (_Bool)resignFirstResponder;
- (_Bool)becomeFirstResponder;
@property(readonly, retain, nonatomic) UILabel *rightTextLabel;
@property(readonly, retain, nonatomic) UILabel *leftTextLabel;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
