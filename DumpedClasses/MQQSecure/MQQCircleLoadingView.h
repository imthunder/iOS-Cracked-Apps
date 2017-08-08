//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSMutableArray, UIColor;

@interface MQQCircleLoadingView : UIView
{
    NSMutableArray *_circles;
    long long _numOfCircles;
    double _circleSize;
    UIColor *_circleColor;
    double _duration;
    long long _animationDirection;
}

@property(nonatomic) long long animationDirection; // @synthesize animationDirection=_animationDirection;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(retain, nonatomic) UIColor *circleColor; // @synthesize circleColor=_circleColor;
@property(nonatomic) double circleSize; // @synthesize circleSize=_circleSize;
@property(nonatomic) long long numOfCircles; // @synthesize numOfCircles=_numOfCircles;
- (void)stopLoading;
- (void)startLoading;
- (void)reloadData;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end
