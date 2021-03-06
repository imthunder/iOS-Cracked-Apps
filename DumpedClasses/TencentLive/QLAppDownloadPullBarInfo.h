//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, UIImage;

@interface QLAppDownloadPullBarInfo : NSObject
{
    _Bool _isPortraitScreen;
    _Bool *_isDarkBackground;
    UIImage *_iconImg;
    NSString *_iconUrl;
    NSString *_title;
    NSString *_introductions;
    NSString *_jumpAppStoreUrl;
    NSString *_appScheme;
}

@property(retain, nonatomic) NSString *appScheme; // @synthesize appScheme=_appScheme;
@property(retain, nonatomic) NSString *jumpAppStoreUrl; // @synthesize jumpAppStoreUrl=_jumpAppStoreUrl;
@property(nonatomic) _Bool isPortraitScreen; // @synthesize isPortraitScreen=_isPortraitScreen;
@property(retain, nonatomic) NSString *introductions; // @synthesize introductions=_introductions;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSString *iconUrl; // @synthesize iconUrl=_iconUrl;
@property(retain, nonatomic) UIImage *iconImg; // @synthesize iconImg=_iconImg;
@property(nonatomic) _Bool *isDarkBackground; // @synthesize isDarkBackground=_isDarkBackground;
- (void).cxx_destruct;
- (id)initWithIsDarkBackground:(_Bool)arg1 iconImg:(id)arg2 iconUrl:(id)arg3 title:(id)arg4 introductions:(id)arg5 isPortraitScreen:(_Bool)arg6 jumpAppStoreUrl:(id)arg7 appScheme:(id)arg8;

@end

