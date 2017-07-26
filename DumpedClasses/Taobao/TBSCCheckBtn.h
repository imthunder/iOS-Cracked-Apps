//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIButton.h"

@class UIView;

@interface TBSCCheckBtn : UIButton
{
    _Bool _checked;
    CDUnknownBlockType _checkBlock;
    UIView *_checkedView;
    UIView *_unCheckedView;
}

@property(retain, nonatomic) UIView *unCheckedView; // @synthesize unCheckedView=_unCheckedView;
@property(retain, nonatomic) UIView *checkedView; // @synthesize checkedView=_checkedView;
@property(copy, nonatomic) CDUnknownBlockType checkBlock; // @synthesize checkBlock=_checkBlock;
@property(nonatomic) _Bool checked; // @synthesize checked=_checked;
- (void).cxx_destruct;
- (void)checkBtnClick;
- (void)updateCheckBtnView;
- (id)getCheckViewWithFrame:(struct CGRect)arg1 title:(id)arg2 color:(id)arg3;
- (id)initWithFrame:(struct CGRect)arg1 checkedTitle:(id)arg2 unCheckedTitle:(id)arg3 checkBlock:(CDUnknownBlockType)arg4;

@end
