//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class MQQCircleLoadingView;

@interface MQQAssistLoadingCell : UITableViewCell
{
    MQQCircleLoadingView *_loadingView;
}

@property(retain, nonatomic) MQQCircleLoadingView *loadingView; // @synthesize loadingView=_loadingView;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)removeFromSuperview;
- (void)willMoveToSuperview:(id)arg1;
- (void)prepareForReuse;
- (void)dealloc;
- (id)init;

@end
