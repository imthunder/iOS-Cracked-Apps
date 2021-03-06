//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class SSThemedImageView, UIImageView;

@interface TTGradientView : UIView
{
    SSThemedImageView *_image1;
    SSThemedImageView *_image2;
    UIImageView *_maskImage;
    unsigned long long _themeMode;
}

@property(nonatomic) unsigned long long themeMode; // @synthesize themeMode=_themeMode;
@property(retain, nonatomic) UIImageView *maskImage; // @synthesize maskImage=_maskImage;
@property(retain, nonatomic) SSThemedImageView *image2; // @synthesize image2=_image2;
@property(retain, nonatomic) SSThemedImageView *image1; // @synthesize image1=_image1;
- (void).cxx_destruct;
- (void)changeImagesIfNeeded;
- (void)startAnimation;
- (void)setUpLayers;
- (void)willMoveToWindow:(id)arg1;
- (void)willMoveToSuperview:(id)arg1;

@end

