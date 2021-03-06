//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class QYPPPubRecordBtn, UIButton, UILabel;

@interface QYPPPubRecordBtnPanel : UIView
{
    _Bool _prompterBtnSelected;
    _Bool _doneBtnHidden;
    _Bool _recordBtnEnable;
    QYPPPubRecordBtn *_recordBtn;
    UIButton *_prompterBtn;
    CDUnknownBlockType _recordStartBlock;
    CDUnknownBlockType _recordFinishBlock;
    CDUnknownBlockType _recordProgressBlock;
    UIButton *_doneBtn;
    UILabel *_startShootLab;
}

@property(nonatomic) _Bool recordBtnEnable; // @synthesize recordBtnEnable=_recordBtnEnable;
@property(nonatomic) _Bool doneBtnHidden; // @synthesize doneBtnHidden=_doneBtnHidden;
@property(retain, nonatomic) UILabel *startShootLab; // @synthesize startShootLab=_startShootLab;
@property(retain, nonatomic) UIButton *doneBtn; // @synthesize doneBtn=_doneBtn;
@property(copy, nonatomic) CDUnknownBlockType recordProgressBlock; // @synthesize recordProgressBlock=_recordProgressBlock;
@property(copy, nonatomic) CDUnknownBlockType recordFinishBlock; // @synthesize recordFinishBlock=_recordFinishBlock;
@property(copy, nonatomic) CDUnknownBlockType recordStartBlock; // @synthesize recordStartBlock=_recordStartBlock;
@property(nonatomic) _Bool prompterBtnSelected; // @synthesize prompterBtnSelected=_prompterBtnSelected;
@property(retain, nonatomic) UIButton *prompterBtn; // @synthesize prompterBtn=_prompterBtn;
@property(retain, nonatomic) QYPPPubRecordBtn *recordBtn; // @synthesize recordBtn=_recordBtn;
- (void).cxx_destruct;
- (void)endTimer;
- (void)dealloc;
- (void)endRecord;
- (void)clickDone;
- (void)startRecord;
- (void)finishRecording;
- (void)doneButtonHidden:(_Bool)arg1;
- (void)enablePress:(_Bool)arg1;
- (void)resetStatus;
- (void)startAnimation;
- (void)updateMinDuration:(double)arg1 maxDuration:(double)arg2;
- (void)pingbackForSwitchPrompter:(long long)arg1;
- (void)commandPrompter:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 minDuration:(double)arg2 maxDuration:(double)arg3;

@end

