//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "FBAccessibilityInvalidationEventsListener-Protocol.h"

@class FBRichTextView, NSString;

@interface FBBookmarksSectionHeaderView : UIView <FBAccessibilityInvalidationEventsListener>
{
    FBRichTextView *_textView;
}

+ (double)height;
+ (id)textViewFont;
- (void).cxx_destruct;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)didReceiveAccessibilityInvalidation;
- (id)initWithText:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
