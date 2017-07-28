//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NVMTableViewCell.h"

#import "NVMOccultTrackerProtocol.h"

@class NSString, NSTimer, NVMLogoView, NVMOrder, OAStackView, UIButton, UIImageView, UILabel;

@interface NVMOrderCell : NVMTableViewCell <NVMOccultTrackerProtocol>
{
    NVMOrder *_order;
    CDUnknownBlockType _payOrderAction;
    CDUnknownBlockType _confirmOrderAction;
    CDUnknownBlockType _rateOrderAction;
    CDUnknownBlockType _gotoRestaurantAction;
    CDUnknownBlockType _rebuyAction;
    CDUnknownBlockType _needRefresh;
    UILabel *_statusLabel;
    UILabel *_priceLabel;
    UILabel *_timeDescriptionLabel;
    UILabel *_nameLabel;
    UILabel *_detailLabel;
    UILabel *_itemCountLabel;
    NVMLogoView *_logoView;
    UIImageView *_coOrderIcon;
    UIButton *_shopButton;
    UIButton *_payButton;
    UIButton *_confirmButton;
    UIButton *_rateButton;
    UIButton *_rebuyButton;
    UIButton *_refundDetailButton;
    NSTimer *_timer;
    OAStackView *_buttonStackView;
}

+ (double)heightForOrder:(id)arg1;
@property(retain, nonatomic) OAStackView *buttonStackView; // @synthesize buttonStackView=_buttonStackView;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(retain, nonatomic) UIButton *refundDetailButton; // @synthesize refundDetailButton=_refundDetailButton;
@property(retain, nonatomic) UIButton *rebuyButton; // @synthesize rebuyButton=_rebuyButton;
@property(retain, nonatomic) UIButton *rateButton; // @synthesize rateButton=_rateButton;
@property(retain, nonatomic) UIButton *confirmButton; // @synthesize confirmButton=_confirmButton;
@property(retain, nonatomic) UIButton *payButton; // @synthesize payButton=_payButton;
@property(retain, nonatomic) UIButton *shopButton; // @synthesize shopButton=_shopButton;
@property(retain, nonatomic) UIImageView *coOrderIcon; // @synthesize coOrderIcon=_coOrderIcon;
@property(retain, nonatomic) NVMLogoView *logoView; // @synthesize logoView=_logoView;
@property(retain, nonatomic) UILabel *itemCountLabel; // @synthesize itemCountLabel=_itemCountLabel;
@property(retain, nonatomic) UILabel *detailLabel; // @synthesize detailLabel=_detailLabel;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) UILabel *timeDescriptionLabel; // @synthesize timeDescriptionLabel=_timeDescriptionLabel;
@property(retain, nonatomic) UILabel *priceLabel; // @synthesize priceLabel=_priceLabel;
@property(retain, nonatomic) UILabel *statusLabel; // @synthesize statusLabel=_statusLabel;
@property(copy, nonatomic) CDUnknownBlockType needRefresh; // @synthesize needRefresh=_needRefresh;
@property(copy, nonatomic) CDUnknownBlockType rebuyAction; // @synthesize rebuyAction=_rebuyAction;
@property(copy, nonatomic) CDUnknownBlockType gotoRestaurantAction; // @synthesize gotoRestaurantAction=_gotoRestaurantAction;
@property(copy, nonatomic) CDUnknownBlockType rateOrderAction; // @synthesize rateOrderAction=_rateOrderAction;
@property(copy, nonatomic) CDUnknownBlockType confirmOrderAction; // @synthesize confirmOrderAction=_confirmOrderAction;
@property(copy, nonatomic) CDUnknownBlockType payOrderAction; // @synthesize payOrderAction=_payOrderAction;
@property(retain, nonatomic) NVMOrder *order; // @synthesize order=_order;
- (void).cxx_destruct;
- (void)setTrackInfo;
- (id)nvm_occultTrackerBussinessParamValue;
- (long long)nvm_occultTrackerBusinessParamType;
- (id)labelForFont:(id)arg1 color:(id)arg2 text:(id)arg3;
- (id)accessibilityLabel;
- (void)stopAnimating;
- (void)startAnimating;
- (void)refreshTimeInfo:(id)arg1;
- (void)updateTime;
- (void)setOrderPayTime:(id)arg1;
- (void)gotoRestaurant;
- (void)gotoRefundDetail;
- (void)didPressRebuy:(id)arg1;
- (void)didPressRate:(id)arg1;
- (void)didPressConfirm:(id)arg1;
- (void)didPressPay:(id)arg1;
- (void)updateBottomView;
- (void)addBottomView;
- (void)loadSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
