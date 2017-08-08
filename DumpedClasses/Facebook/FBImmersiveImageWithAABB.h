//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, UIImage;

@interface FBImmersiveImageWithAABB : NSObject
{
    UIImage *_image;
    NSArray *_aabb;
    struct CGSize _fullEquirectSize;
}

@property(copy, nonatomic) NSArray *aabb; // @synthesize aabb=_aabb;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(nonatomic) struct CGSize fullEquirectSize; // @synthesize fullEquirectSize=_fullEquirectSize;
- (void).cxx_destruct;
- (_Bool)hasAABBValues;
- (id)initWithUIImage:(id)arg1 aabb:(id)arg2 equirectSize:(struct CGSize)arg3;

@end
