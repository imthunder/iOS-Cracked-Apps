//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MQQCPLOperation.h"

@class MQQCPLUploadPhotoRequest, NSArray, NSMutableArray, NSMutableDictionary;

@interface MQQENBFilterPhotosForBackupOperation : MQQCPLOperation
{
    long long _albumCount;
    long long _filteredAlbumCount;
    NSArray *_encPhotos;
    NSArray *_cplAlbumList;
    NSArray *_unbackupedEncPhotos;
    NSArray *_backupedEncPhotos;
    NSArray *_failedEncPhotos;
    NSMutableDictionary *_encPhotoDict;
    NSArray *_filteringEncPhotoArray;
    NSMutableDictionary *_cplAlbumDict;
    NSMutableArray *_tempUnbackupedEncPhotos;
    NSMutableArray *_tempBackupedEncPhotos;
    NSMutableArray *_tempFailedEncPhotos;
    MQQCPLUploadPhotoRequest *_uploadPhotoRequest;
    MQQCPLUploadPhotoRequest *_uploadThumbnailRequest;
}

@property(retain, nonatomic) MQQCPLUploadPhotoRequest *uploadThumbnailRequest; // @synthesize uploadThumbnailRequest=_uploadThumbnailRequest;
@property(retain, nonatomic) MQQCPLUploadPhotoRequest *uploadPhotoRequest; // @synthesize uploadPhotoRequest=_uploadPhotoRequest;
@property(retain, nonatomic) NSMutableArray *tempFailedEncPhotos; // @synthesize tempFailedEncPhotos=_tempFailedEncPhotos;
@property(retain, nonatomic) NSMutableArray *tempBackupedEncPhotos; // @synthesize tempBackupedEncPhotos=_tempBackupedEncPhotos;
@property(retain, nonatomic) NSMutableArray *tempUnbackupedEncPhotos; // @synthesize tempUnbackupedEncPhotos=_tempUnbackupedEncPhotos;
@property(retain, nonatomic) NSMutableDictionary *cplAlbumDict; // @synthesize cplAlbumDict=_cplAlbumDict;
@property(retain, nonatomic) NSArray *filteringEncPhotoArray; // @synthesize filteringEncPhotoArray=_filteringEncPhotoArray;
@property(retain, nonatomic) NSMutableDictionary *encPhotoDict; // @synthesize encPhotoDict=_encPhotoDict;
@property(retain, nonatomic) NSArray *failedEncPhotos; // @synthesize failedEncPhotos=_failedEncPhotos;
@property(retain, nonatomic) NSArray *backupedEncPhotos; // @synthesize backupedEncPhotos=_backupedEncPhotos;
@property(retain, nonatomic) NSArray *unbackupedEncPhotos; // @synthesize unbackupedEncPhotos=_unbackupedEncPhotos;
@property(retain, nonatomic) NSArray *cplAlbumList; // @synthesize cplAlbumList=_cplAlbumList;
@property(retain, nonatomic) NSArray *encPhotos; // @synthesize encPhotos=_encPhotos;
- (void)sharkRequestDidFail:(id)arg1;
- (void)sharkRequestDidFinish:(id)arg1 withInfo:(id)arg2;
- (void)startFilterRequestsWithUploadPhotoList:(id)arg1:(id)arg2;
- (void)requestFilterNextPhotos;
- (void)requestFilterPhotos;
- (void)_isRunning;
- (void)_didFinish;
- (void)_cancel;
- (void)_start;
- (void)dealloc;
- (id)init;

@end

