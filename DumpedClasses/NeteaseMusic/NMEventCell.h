//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class NMEvent, NSString;

@interface NMEventCell : UITableViewCell
{
    NMEvent *_event;
    NSString *_eventUserId;
    _Bool _highlightedColorEnabled;
    _Bool _shouldAdjustForDetailView;
    _Bool _usedForActivityDetail;
    _Bool _enableRelativeTimeStamp;
    _Bool _disableDropMenu;
    _Bool _supportStickiedTip;
    _Bool _showFocusButton;
    _Bool _shouldShowFooter;
    id <NMEventCellDelegate> _delegate;
}

+ (double)heightForEvent:(id)arg1 shouldShowFooter:(_Bool)arg2 adjustForDetailView:(_Bool)arg3;
+ (double)heightForEvent:(id)arg1 shouldShowFooter:(_Bool)arg2;
+ (double)heightForEvent:(id)arg1;
+ (Class)cellClassForEvent:(id)arg1;
+ (id)cellForEvent:(id)arg1 shouldShowFooter:(_Bool)arg2 adjustForDetailView:(_Bool)arg3;
+ (id)cellForEvent:(id)arg1 shouldShowFooter:(_Bool)arg2;
+ (id)cellForEvent:(id)arg1;
+ (id)cellIdentifierForEvent:(id)arg1;
+ (id)cellIdentifierForCellClass:(Class)arg1;
@property(nonatomic) _Bool shouldShowFooter; // @synthesize shouldShowFooter=_shouldShowFooter;
@property(nonatomic) _Bool showFocusButton; // @synthesize showFocusButton=_showFocusButton;
@property(nonatomic) _Bool supportStickiedTip; // @synthesize supportStickiedTip=_supportStickiedTip;
@property(nonatomic) _Bool disableDropMenu; // @synthesize disableDropMenu=_disableDropMenu;
@property(nonatomic) _Bool enableRelativeTimeStamp; // @synthesize enableRelativeTimeStamp=_enableRelativeTimeStamp;
@property(nonatomic) _Bool usedForActivityDetail; // @synthesize usedForActivityDetail=_usedForActivityDetail;
@property(nonatomic) _Bool shouldAdjustForDetailView; // @synthesize shouldAdjustForDetailView=_shouldAdjustForDetailView;
@property(retain, nonatomic) NMEvent *event; // @synthesize event=_event;
@property(nonatomic) id <NMEventCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)deleteMenuItemPressed:(id)arg1;
- (void)longPressed:(id)arg1;
- (struct CGRect)listenButtonFrame;
- (void)addAnimationToPraiseButton;
@property(nonatomic) _Bool highlightedColorEnabled;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 adjustForDetailView:(_Bool)arg3;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
