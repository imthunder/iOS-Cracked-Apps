//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "QLPanelColorTemplateAdaptProtocol.h"

@class AVAudioRecorder, NSString, Waver;

@interface QLRecordWaverView : UIView <QLPanelColorTemplateAdaptProtocol>
{
    id <QLPanelColorTemplateProtocol> _colorTemplate;
    Waver *_curveView;
    UIView *_lineView;
    AVAudioRecorder *_recorder;
}

+ (double)heightOfSelf;
@property(retain, nonatomic) AVAudioRecorder *recorder; // @synthesize recorder=_recorder;
@property(retain, nonatomic) UIView *lineView; // @synthesize lineView=_lineView;
@property(retain, nonatomic) Waver *curveView; // @synthesize curveView=_curveView;
@property(retain, nonatomic) id <QLPanelColorTemplateProtocol> colorTemplate; // @synthesize colorTemplate=_colorTemplate;
- (void).cxx_destruct;
- (void)stopWave;
- (void)startWave;
- (void)setupRecorder;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
