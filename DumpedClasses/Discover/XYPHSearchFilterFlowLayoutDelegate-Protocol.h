//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSIndexPath, NSString, XYPHSearchFilterFlowLayout;

@protocol XYPHSearchFilterFlowLayoutDelegate <NSObject>
- (long long)searchFilterLayout:(XYPHSearchFilterFlowLayout *)arg1 numberOfLineInSection:(long long)arg2;
- (struct CGSize)searchFilterFlowLayout:(XYPHSearchFilterFlowLayout *)arg1 sizeForSupplementaryViewOfKind:(NSString *)arg2 atIndexPath:(NSIndexPath *)arg3;
- (struct CGSize)searchFilterFlowLayout:(XYPHSearchFilterFlowLayout *)arg1 sizeForItemAtIndexPath:(NSIndexPath *)arg2;
@end
