//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQAVEffectFilterGroup.h"

@class NSArray, QQAVEffectExposureAndOverlayFilter, QQAVEffectHighPassFilter, QQAVEffectNewHighPassSkinSmoothingRadius, QQAVEffectSharpenAndExposureFilter, QQAVEffectSkinCurveAndComposeFilter;

@interface QQAVEffectNewSkinSmoothingFilter : QQAVEffectFilterGroup
{
    QQAVEffectExposureAndOverlayFilter *exposureAndOverlayFilter;
    QQAVEffectHighPassFilter *highPassFilter;
    QQAVEffectSkinCurveAndComposeFilter *skinCurveAndComposeFilter;
    QQAVEffectSharpenAndExposureFilter *sharpenAndExposureFilter;
    double _amount;
    double _beauty;
    double _sharpness;
    double _exposure;
    QQAVEffectNewHighPassSkinSmoothingRadius *_radius;
    struct CGSize _currentInputSize;
}

@property(nonatomic) struct CGSize currentInputSize; // @synthesize currentInputSize=_currentInputSize;
@property(copy, nonatomic) QQAVEffectNewHighPassSkinSmoothingRadius *radius; // @synthesize radius=_radius;
@property(nonatomic) double exposure; // @synthesize exposure=_exposure;
@property(nonatomic) double sharpness; // @synthesize sharpness=_sharpness;
@property(nonatomic) double beauty; // @synthesize beauty=_beauty;
@property(nonatomic) double amount; // @synthesize amount=_amount;
- (void)dealloc;
@property(copy, nonatomic) NSArray *controlPoints;
- (void)updateHighPassRadius;
- (void)setInputSize:(struct CGSize)arg1 atIndex:(long long)arg2;
- (id)init;

@end
