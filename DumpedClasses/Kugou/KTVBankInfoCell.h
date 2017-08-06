//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "KFCommedTableViewCell.h"

@class KGThemeLabel, KGThemeLine, KTVBankInfo, UIImageView;

@interface KTVBankInfoCell : KFCommedTableViewCell
{
    KTVBankInfo *_bankInfo;
    UIImageView *_iconImgView;
    KGThemeLabel *_bankNameLabel;
    KGThemeLine *_bottomLine;
}

@property(retain, nonatomic) KGThemeLine *bottomLine; // @synthesize bottomLine=_bottomLine;
@property(retain, nonatomic) KGThemeLabel *bankNameLabel; // @synthesize bankNameLabel=_bankNameLabel;
@property(retain, nonatomic) UIImageView *iconImgView; // @synthesize iconImgView=_iconImgView;
@property(retain, nonatomic) KTVBankInfo *bankInfo; // @synthesize bankInfo=_bankInfo;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setupContentViews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
