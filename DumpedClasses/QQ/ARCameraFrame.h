//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData;

@interface ARCameraFrame : NSObject
{
    NSData *_yData;
    NSData *_uvData;
    struct CGSize _yDimensions;
    struct CGSize _uvDimensions;
}

@property(readonly, nonatomic) struct CGSize uvDimensions; // @synthesize uvDimensions=_uvDimensions;
@property(readonly, nonatomic) NSData *uvData; // @synthesize uvData=_uvData;
@property(readonly, nonatomic) struct CGSize yDimensions; // @synthesize yDimensions=_yDimensions;
@property(readonly, nonatomic) NSData *yData; // @synthesize yData=_yData;
- (void).cxx_destruct;
- (id)initWithYData:(id)arg1 yDimensions:(struct CGSize)arg2 uvData:(id)arg3 uvDimensions:(struct CGSize)arg4;

@end
