//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSString;

@interface QNBCloudVersionsModel : NSObject
{
    double _cloudDataVersion;
    double _localDelTimeInterval;
    double _localDelDataVersion;
    NSString *_cacheFilePath;
    NSMutableDictionary *_dicAccountVersions;
}

+ (id)sharedModel;
@property(retain) NSMutableDictionary *dicAccountVersions; // @synthesize dicAccountVersions=_dicAccountVersions;
@property(copy, nonatomic) NSString *cacheFilePath; // @synthesize cacheFilePath=_cacheFilePath;
- (void).cxx_destruct;
- (void)syncronize;
@property double localDelDataVersion; // @synthesize localDelDataVersion=_localDelDataVersion;
@property double localDelTimeInterval; // @synthesize localDelTimeInterval=_localDelTimeInterval;
@property double cloudDataVersion; // @synthesize cloudDataVersion=_cloudDataVersion;
- (void)reloadVersions;
- (void)resetVersions;
- (id)getAccountKey;
- (id)getDataCachePath;
- (id)init;

@end
