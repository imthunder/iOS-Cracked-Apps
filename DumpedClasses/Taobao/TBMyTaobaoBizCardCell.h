//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class UIImageView, UILabel;

@interface TBMyTaobaoBizCardCell : UITableViewCell
{
    id <TBMyTaobaoBizCardCellDelegate> _delegate;
    UIImageView *_descImgView;
    UILabel *_descLabel;
}

@property(retain, nonatomic) UILabel *descLabel; // @synthesize descLabel=_descLabel;
@property(retain, nonatomic) UIImageView *descImgView; // @synthesize descImgView=_descImgView;
@property(nonatomic) __weak id <TBMyTaobaoBizCardCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)onRecommendAddBtnClick:(id)arg1;
- (void)layoutSubviews;
- (void)setData:(id)arg1;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
