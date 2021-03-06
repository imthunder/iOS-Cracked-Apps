//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIButton, UILabel;

@interface QLPlayerSleepModeTipsView : UIView
{
    _Bool _isInFullscreen;
    id <QLPlayerSleepModeTipsViewDelegate> _delegate;
    UIButton *_cancleButton;
    UILabel *_tipsLabel;
}

@property(nonatomic) _Bool isInFullscreen; // @synthesize isInFullscreen=_isInFullscreen;
@property(retain, nonatomic) UILabel *tipsLabel; // @synthesize tipsLabel=_tipsLabel;
@property(retain, nonatomic) UIButton *cancleButton; // @synthesize cancleButton=_cancleButton;
@property(nonatomic) __weak id <QLPlayerSleepModeTipsViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)didClickCancleBtn:(id)arg1;
- (void)layoutSubviews;
- (void)updateTimeCount:(int)arg1;
- (void)layoutSubviewWithScreenStatus:(_Bool)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

