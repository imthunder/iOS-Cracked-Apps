//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIControl.h"

@class UIImage, UIImageView;

@interface WYSlider : UIControl
{
    _Bool _cancelDalayHidden;
    UIImageView *_contentView;
    UIImage *_thumbImage;
    UIImageView *_thumbImageView;
    struct CGPoint _beginTrackingPoint;
    struct CGPoint _beginTrackingCenter;
}

@property(nonatomic, getter=isCancelDalayHidden) _Bool cancelDalayHidden; // @synthesize cancelDalayHidden=_cancelDalayHidden;
@property(nonatomic) struct CGPoint beginTrackingCenter; // @synthesize beginTrackingCenter=_beginTrackingCenter;
@property(nonatomic) struct CGPoint beginTrackingPoint; // @synthesize beginTrackingPoint=_beginTrackingPoint;
@property(readonly, nonatomic) UIImageView *thumbImageView; // @synthesize thumbImageView=_thumbImageView;
@property(retain, nonatomic) UIImage *thumbImage; // @synthesize thumbImage=_thumbImage;
@property(retain, nonatomic) UIImageView *contentView; // @synthesize contentView=_contentView;
- (void).cxx_destruct;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)cancelTrackingWithEvent:(id)arg1;
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (_Bool)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (_Bool)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
@property(nonatomic) double value;
- (void)setValue:(double)arg1 animated:(_Bool)arg2;
- (void)showContentView;
- (void)hideContentViewWithDelay;
- (void)hideContentViewDelay:(double)arg1;
- (void)willMoveToWindow:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
