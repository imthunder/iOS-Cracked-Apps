//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MQQCPLDataBaseRequest.h"

@class MQQCPLPhotoUploadInfo, MQQCPLPhotoUploadPacket, MQQCloudPhotoLibrary, NSData;

@interface MQQCPLUploadPacketDataRequest : MQQCPLDataBaseRequest
{
    MQQCloudPhotoLibrary *_cloudPhotoLibrary;
    MQQCPLPhotoUploadInfo *_uploadInfo;
    MQQCPLPhotoUploadPacket *_uploadPacket;
    NSData *_uploadPacketData;
    long long _cplRetCode;
}

@property(nonatomic) long long cplRetCode; // @synthesize cplRetCode=_cplRetCode;
@property(retain, nonatomic) NSData *uploadPacketData; // @synthesize uploadPacketData=_uploadPacketData;
@property(retain, nonatomic) MQQCPLPhotoUploadPacket *uploadPacket; // @synthesize uploadPacket=_uploadPacket;
@property(retain, nonatomic) MQQCPLPhotoUploadInfo *uploadInfo; // @synthesize uploadInfo=_uploadInfo;
@property(nonatomic) MQQCloudPhotoLibrary *cloudPhotoLibrary; // @synthesize cloudPhotoLibrary=_cloudPhotoLibrary;
- (long long)retCodeFromResponseData:(id)arg1;
- (void)notifyDelegate:(_Bool)arg1;
- (void)startAsynchronous;
- (id)generatePostBody;
- (void)dealloc;
- (id)initWithUploadInfo:(id)arg1 packet:(id)arg2 data:(id)arg3;

@end
