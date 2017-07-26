//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQViewController.h"

@class NSDictionary, NSString, NSURL;

@interface TReactViewController : QQViewController
{
    unsigned long long _bundleID;
    unsigned long long _bundleVersion;
    NSURL *_moduleUrl;
    NSString *_moduleName;
    NSDictionary *_initialProperties;
    long long _createMode;
}

@property(nonatomic) long long createMode; // @synthesize createMode=_createMode;
@property(copy) NSDictionary *initialProperties; // @synthesize initialProperties=_initialProperties;
@property(copy, nonatomic) NSString *moduleName; // @synthesize moduleName=_moduleName;
@property(copy, nonatomic) NSURL *moduleUrl; // @synthesize moduleUrl=_moduleUrl;
@property(nonatomic) unsigned long long bundleVersion; // @synthesize bundleVersion=_bundleVersion;
@property(nonatomic) unsigned long long bundleID; // @synthesize bundleID=_bundleID;
- (void).cxx_destruct;
- (void)showErrorView;
- (void)showTReactView:(id)arg1;
- (void)loadView;
- (void)showWithJsOptions:(id)arg1 navigationController:(id)arg2;
- (void)pushToNavigationController;
- (void)dealloc;
- (id)initWithJsOptions:(id)arg1;
- (id)initWithTitle:(id)arg1 moduleUrl:(id)arg2 moduleName:(id)arg3 initialProperties:(id)arg4;
- (id)initWithTitle:(id)arg1 bundleID:(unsigned long long)arg2 bundleVersion:(unsigned long long)arg3 initialProperties:(id)arg4;

@end
