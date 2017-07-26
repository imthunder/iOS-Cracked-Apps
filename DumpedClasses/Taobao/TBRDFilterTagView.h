//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSArray, NSMutableArray, TBRDTagRateData, UIButton, UILabel;

@interface TBRDFilterTagView : UIView
{
    _Bool _isExpand;
    float _tagViewMinHeigh;
    float _tagViewMaxHeigh;
    CDUnknownBlockType _cbExpand;
    CDUnknownBlockType _cbSelectedTag;
    TBRDTagRateData *_rateData;
    NSArray *_tagsInfoArray;
    NSMutableArray *_btnArray;
    UIView *_tagView;
    UIView *_expandView;
    UILabel *_lbArrow;
    UIButton *_btnCurrent;
}

@property(nonatomic) _Bool isExpand; // @synthesize isExpand=_isExpand;
@property(nonatomic) float tagViewMaxHeigh; // @synthesize tagViewMaxHeigh=_tagViewMaxHeigh;
@property(nonatomic) float tagViewMinHeigh; // @synthesize tagViewMinHeigh=_tagViewMinHeigh;
@property(retain, nonatomic) UIButton *btnCurrent; // @synthesize btnCurrent=_btnCurrent;
@property(retain, nonatomic) UILabel *lbArrow; // @synthesize lbArrow=_lbArrow;
@property(retain, nonatomic) UIView *expandView; // @synthesize expandView=_expandView;
@property(retain, nonatomic) UIView *tagView; // @synthesize tagView=_tagView;
@property(retain, nonatomic) NSMutableArray *btnArray; // @synthesize btnArray=_btnArray;
@property(retain, nonatomic) NSArray *tagsInfoArray; // @synthesize tagsInfoArray=_tagsInfoArray;
@property(retain, nonatomic) TBRDTagRateData *rateData; // @synthesize rateData=_rateData;
@property(copy, nonatomic) CDUnknownBlockType cbSelectedTag; // @synthesize cbSelectedTag=_cbSelectedTag;
@property(copy, nonatomic) CDUnknownBlockType cbExpand; // @synthesize cbExpand=_cbExpand;
- (void).cxx_destruct;
- (void)setDefaultSelected:(long long)arg1;
- (void)tagSelectedActon:(id)arg1;
- (id)createButton:(id)arg1;
- (float)calculateTagViewHeightWithRowNum:(long long)arg1;
- (void)expandViewTapAction;
- (void)setupTagView;
- (id)initWithData:(id)arg1;

@end
