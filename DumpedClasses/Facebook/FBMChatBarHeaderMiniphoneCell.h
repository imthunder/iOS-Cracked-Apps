//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class NSString, UIColor, UIImage, UIImageView, UILabel;

@interface FBMChatBarHeaderMiniphoneCell : UITableViewCell
{
    UIImageView *_locationIconView;
    UIImageView *_arrowImageView;
    UILabel *_infoLabel;
    UILabel *_bylineLabel;
    UIColor *_bylineLabelTextHighLightedColor;
}

@property(retain, nonatomic) UIColor *bylineLabelTextHighLightedColor; // @synthesize bylineLabelTextHighLightedColor=_bylineLabelTextHighLightedColor;
@property(retain, nonatomic) UILabel *bylineLabel; // @synthesize bylineLabel=_bylineLabel;
@property(retain, nonatomic) UILabel *infoLabel; // @synthesize infoLabel=_infoLabel;
@property(retain, nonatomic) UIImageView *arrowImageView; // @synthesize arrowImageView=_arrowImageView;
@property(retain, nonatomic) UIImageView *locationIconView; // @synthesize locationIconView=_locationIconView;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;
@property(copy, nonatomic) UIColor *bylineTextHighlightedColor;
@property(copy, nonatomic) UIColor *bylineTextColor;
@property(copy, nonatomic) NSString *bylineText;
@property(copy, nonatomic) NSString *infoText;
@property(copy, nonatomic) UIImage *locationIcon;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
