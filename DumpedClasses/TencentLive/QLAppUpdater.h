//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, QLASIHTTPRequest;

@interface QLAppUpdater : NSObject
{
    _Bool _bChecking;
    _Bool _inExperience;
    _Bool _isJBDEvice;
    _Bool _bAlerting;
    _Bool _isAutomatically;
    _Bool _bNotifyOutside;
    _Bool _manllyShouldNotify;
    int _osType;
    int _devPlatform;
    int _appPlatform;
    int _appBuildVersion;
    int _updateType;
    id <QLAppUpdaterDelegate> _delegate;
    NSString *_strItunesURL;
    NSString *_newestVersion;
    NSString *_osVersion;
    NSString *_userQQ;
    NSString *_devType;
    NSString *_deviceID;
    NSString *_guid;
    NSString *_appVersion;
    NSString *_strPackageUri;
    QLASIHTTPRequest *_dataRequest;
}

+ (id)sharedInstance;
@property(retain, nonatomic) QLASIHTTPRequest *dataRequest; // @synthesize dataRequest=_dataRequest;
@property(nonatomic) _Bool manllyShouldNotify; // @synthesize manllyShouldNotify=_manllyShouldNotify;
@property _Bool bNotifyOutside; // @synthesize bNotifyOutside=_bNotifyOutside;
@property(copy) NSString *strPackageUri; // @synthesize strPackageUri=_strPackageUri;
@property int updateType; // @synthesize updateType=_updateType;
@property _Bool isAutomatically; // @synthesize isAutomatically=_isAutomatically;
@property _Bool bAlerting; // @synthesize bAlerting=_bAlerting;
@property _Bool isJBDEvice; // @synthesize isJBDEvice=_isJBDEvice;
@property _Bool inExperience; // @synthesize inExperience=_inExperience;
@property int appBuildVersion; // @synthesize appBuildVersion=_appBuildVersion;
@property(copy, nonatomic) NSString *appVersion; // @synthesize appVersion=_appVersion;
@property int appPlatform; // @synthesize appPlatform=_appPlatform;
@property(copy, nonatomic) NSString *guid; // @synthesize guid=_guid;
@property(copy, nonatomic) NSString *deviceID; // @synthesize deviceID=_deviceID;
@property(copy, nonatomic) NSString *devType; // @synthesize devType=_devType;
@property(copy) NSString *userQQ; // @synthesize userQQ=_userQQ;
@property int devPlatform; // @synthesize devPlatform=_devPlatform;
@property(copy, nonatomic) NSString *osVersion; // @synthesize osVersion=_osVersion;
@property int osType; // @synthesize osType=_osType;
@property _Bool bChecking; // @synthesize bChecking=_bChecking;
@property(copy, nonatomic) NSString *newestVersion; // @synthesize newestVersion=_newestVersion;
@property(copy, nonatomic) NSString *strItunesURL; // @synthesize strItunesURL=_strItunesURL;
@property __weak id <QLAppUpdaterDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (_Bool)shouldUpdateOrNot;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)didChoseUpdateMethodWithcancelFlag:(_Bool)arg1;
- (void)showUpdateAlert:(id)arg1 message:(id)arg2;
- (_Bool)checkJBUpdate:(id)arg1;
- (_Bool)checkGrayUpdate:(id)arg1;
- (void)onUpdateInfo:(id)arg1;
- (void)onUpdateError;
- (void)onNoUpdate;
- (void)notifiCheckFinished;
- (void)cancelDataRequest;
- (void)checkAutomatically;
- (void)checkMannlyWithDelegate:(id)arg1 notify:(_Bool)arg2;
- (void)sendUpRequest;
- (void)resetDelegate;
- (void)refreshCheckParams;
- (id)init;

@end
