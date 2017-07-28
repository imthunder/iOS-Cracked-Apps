//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "BaseOverlayDelegate.h"

@class MapScaleOverlay, MapView, NSString;

@interface BaseMapScaleView : UIView <BaseOverlayDelegate>
{
    double _fMapLevel;
    NSString *_scaleText;
    MapScaleOverlay *_scaleLay;
    struct CGRect _scaleFrame;
    MapView *_matchInternalMap;
}

@property(nonatomic) __weak MapView *matchInternalMap; // @synthesize matchInternalMap=_matchInternalMap;
- (void).cxx_destruct;
- (void)updateScale;
- (_Bool)GetScaleData:(double *)arg1;
- (int)getScaleImageWidth:(int)arg1;
- (id)getScaleText:(int)arg1;
- (int)getScaleDistance:(int)arg1;
- (void)drawInContext:(struct CGContext *)arg1;
- (void)dealloc;
- (void)drawRect:(struct CGRect)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)setMapScaleShow:(_Bool)arg1;
- (id)initWithFrame:(struct CGRect)arg1 andMapView:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
