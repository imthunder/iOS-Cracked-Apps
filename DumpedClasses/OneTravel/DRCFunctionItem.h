//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIButton, UIImageView, UILabel;

@interface DRCFunctionItem : UIView
{
    UIButton *_btnBg;
    UIView *_container;
    UIImageView *_img;
    UILabel *_lbl;
    id _functionItemModel;
}

@property(retain, nonatomic) id functionItemModel; // @synthesize functionItemModel=_functionItemModel;
@property(retain, nonatomic) UILabel *lbl; // @synthesize lbl=_lbl;
@property(retain, nonatomic) UIImageView *img; // @synthesize img=_img;
@property(retain, nonatomic) UIView *container; // @synthesize container=_container;
@property(retain, nonatomic) UIButton *btnBg; // @synthesize btnBg=_btnBg;
- (void).cxx_destruct;
- (void)hideRedpoint;
- (void)makeConstraints;
- (void)addViews;
- (id)initWithItem:(id)arg1;

@end

