//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "KTVViewController.h"

#import "KTVWealthVLLDelegate.h"

@class KGDefaultNetErrorView, KTVWealthVLL, KTVWealthVM, KTVWealthView, NSString, UIView;

@interface KTVWealthViewController : KTVViewController <KTVWealthVLLDelegate>
{
    int _wealthType;
    UIView *_emptyView;
    KGDefaultNetErrorView *_netErrorView;
    NSString *_cityName;
    long long _toPlayerId;
    KTVWealthView *_myView;
    KTVWealthVLL *_myVLL;
    KTVWealthVM *_myVM;
}

@property(retain, nonatomic) KTVWealthVM *myVM; // @synthesize myVM=_myVM;
@property(retain, nonatomic) KTVWealthVLL *myVLL; // @synthesize myVLL=_myVLL;
@property(retain, nonatomic) KTVWealthView *myView; // @synthesize myView=_myView;
@property(nonatomic) long long toPlayerId; // @synthesize toPlayerId=_toPlayerId;
@property(nonatomic) int wealthType; // @synthesize wealthType=_wealthType;
@property(retain, nonatomic) NSString *cityName; // @synthesize cityName=_cityName;
@property(retain, nonatomic) KGDefaultNetErrorView *netErrorView; // @synthesize netErrorView=_netErrorView;
@property(retain, nonatomic) UIView *emptyView; // @synthesize emptyView=_emptyView;
- (void).cxx_destruct;
- (void)goToUserSpacePage:(long long)arg1;
- (long long)showPlayBarWay;
- (void)didReceiveMemoryWarning;
- (void)dismissEmpty;
- (void)showEmptyOnView:(id)arg1;
- (void)dismissNetError;
- (void)showNetError;
- (void)showNetErrorOnView:(id)arg1;
- (void)refreshData;
- (void)KGUsingControllerState:(int)arg1;
- (void)viewDidLoad;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

