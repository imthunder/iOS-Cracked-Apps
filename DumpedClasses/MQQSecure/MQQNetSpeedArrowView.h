//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIColor;

@interface MQQNetSpeedArrowView : UIView
{
    double _topMargin;
    double _bottomMargin;
    UIColor *_lineColor;
    double _lineWidth;
    double _sideLineLength;
    double _angle;
}

@property(nonatomic) double angle; // @synthesize angle=_angle;
@property(nonatomic) double bottomMargin; // @synthesize bottomMargin=_bottomMargin;
@property(nonatomic) double sideLineLength; // @synthesize sideLineLength=_sideLineLength;
@property(nonatomic) double lineWidth; // @synthesize lineWidth=_lineWidth;
@property(retain, nonatomic) UIColor *lineColor; // @synthesize lineColor=_lineColor;
- (void)drawRect:(struct CGRect)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end
