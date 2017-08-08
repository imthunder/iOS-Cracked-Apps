//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NRMAConnection.h"

@class NSFileManager, NSString;

@interface NRMACrashDataUploader : NRMAConnection
{
    NSFileManager *_fileManager;
    NSString *_crashCollectorHost;
    _Bool _useSSL;
}

- (void).cxx_destruct;
- (_Bool)shouldUploadFileWithUniqueIdentifier:(id)arg1;
- (void)stopTrackingFileUploadWithUniqueIdentifier:(id)arg1;
- (id)buildPostFromFilePath:(id)arg1;
- (void)uploadFileAtPath:(id)arg1;
- (void)uploadCrashReports;
- (id)crashReportURLs:(id *)arg1;
- (id)initWithCrashCollectorURL:(id)arg1 applicationToken:(id)arg2 connectionInformation:(id)arg3 useSSL:(_Bool)arg4;

@end
