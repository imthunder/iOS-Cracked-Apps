//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class IOMFeedPlayerLayerView, NSString;
@protocol QYBasePlayerControllerDelegate;

@interface IOMFeedPlayerView : UIView
{
    id <QYBasePlayerControllerDelegate> _delegate;
    CDUnknownBlockType _pauseBtnClicked;
    CDUnknownBlockType _playBtnClicked;
    CDUnknownBlockType _feed4GPlayBtnClicked;
    IOMFeedPlayerLayerView *_playerLayerView;
    NSString *_albumId;
    NSString *_tvid;
}

@property(copy, nonatomic) NSString *tvid; // @synthesize tvid=_tvid;
@property(copy, nonatomic) NSString *albumId; // @synthesize albumId=_albumId;
@property(retain, nonatomic) IOMFeedPlayerLayerView *playerLayerView; // @synthesize playerLayerView=_playerLayerView;
@property(copy, nonatomic) CDUnknownBlockType feed4GPlayBtnClicked; // @synthesize feed4GPlayBtnClicked=_feed4GPlayBtnClicked;
@property(copy, nonatomic) CDUnknownBlockType playBtnClicked; // @synthesize playBtnClicked=_playBtnClicked;
@property(copy, nonatomic) CDUnknownBlockType pauseBtnClicked; // @synthesize pauseBtnClicked=_pauseBtnClicked;
@property(nonatomic) __weak id <QYBasePlayerControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)dealloc;
- (void)closePlayerView;
- (void)pausePlayerView;
- (void)hide4GAlertView;
- (void)show4GAlertView;
- (void)showFailView;
- (void)refreshControllInfo:(double)arg1 total:(double)arg2;
- (void)stopLoadingView;
- (void)startLoadingView;
- (void)showPlayerWithAlbumId:(id)arg1 tvid:(id)arg2 startTime:(double)arg3;
- (void)addPlayerSubview;
- (void)setFrame:(struct CGRect)arg1;
- (id)init;

@end

