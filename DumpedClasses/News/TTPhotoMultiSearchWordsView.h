//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSArray;

@interface TTPhotoMultiSearchWordsView : UIView
{
    NSArray *_searchWordsItems;
    NSArray *_itemViews;
}

@property(retain, nonatomic) NSArray *itemViews; // @synthesize itemViews=_itemViews;
@property(copy, nonatomic) NSArray *searchWordsItems; // @synthesize searchWordsItems=_searchWordsItems;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (double)maxHeight;
- (id)initWithFrame:(struct CGRect)arg1;

@end
