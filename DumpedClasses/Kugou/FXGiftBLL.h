//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface FXGiftBLL : NSObject
{
}

+ (id)getStorageGiftWithGiftId:(long long)arg1 successBlock:(CDUnknownBlockType)arg2 errorBlock:(CDUnknownBlockType)arg3;
+ (id)sendAlbumGiftFrom:(long long)arg1 to:(long long)arg2 giftId:(long long)arg3 numebr:(long long)arg4 inRoom:(long long)arg5 albumId:(long long)arg6 isBuy:(_Bool)arg7 isPKGift:(_Bool)arg8 successBlock:(CDUnknownBlockType)arg9 errorBlock:(CDUnknownBlockType)arg10;
+ (id)sendSongListStorageGiftFrom:(long long)arg1 to:(long long)arg2 storageId:(long long)arg3 songId:(long long)arg4 number:(long long)arg5 inRoom:(long long)arg6 successBlock:(CDUnknownBlockType)arg7 errorBlock:(CDUnknownBlockType)arg8;
+ (id)sendStarReturnNumFrom:(long long)arg1 to:(long long)arg2 number:(long long)arg3 inRoom:(long long)arg4 successBlock:(CDUnknownBlockType)arg5 errorBlock:(CDUnknownBlockType)arg6;
+ (id)sendSongListGiftFrom:(long long)arg1 to:(long long)arg2 giftId:(long long)arg3 number:(long long)arg4 inRoom:(long long)arg5 songId:(long long)arg6 successBlock:(CDUnknownBlockType)arg7 errorBlock:(CDUnknownBlockType)arg8;
+ (id)sendLowPriceGiftFrom:(long long)arg1 giftId:(long long)arg2 number:(long long)arg3 inRoom:(long long)arg4 isCustom:(_Bool)arg5 comboStatus:(unsigned long long)arg6 successBlock:(CDUnknownBlockType)arg7 errorBlock:(CDUnknownBlockType)arg8;
+ (id)sendBigGiftFrom:(long long)arg1 giftId:(long long)arg2 number:(long long)arg3 inRoom:(long long)arg4 isCustom:(_Bool)arg5 comboStatus:(unsigned long long)arg6 successBlock:(CDUnknownBlockType)arg7 errorBlock:(CDUnknownBlockType)arg8;
+ (id)sendStarGiftFrom:(long long)arg1 to:(long long)arg2 number:(long long)arg3 inRoom:(long long)arg4 successBlock:(CDUnknownBlockType)arg5 errorBlock:(CDUnknownBlockType)arg6;
+ (id)sendPropGiftV2:(long long)arg1 giftId:(long long)arg2 num:(long long)arg3 roomId:(long long)arg4 andSuccessCallback:(CDUnknownBlockType)arg5 errorCallback:(CDUnknownBlockType)arg6;
+ (id)getPropGiftNumV2:(long long)arg1 roomId:(long long)arg2 andSuccessCallback:(CDUnknownBlockType)arg3 errorCallback:(CDUnknownBlockType)arg4;
+ (id)getMammonCoinV2WithRoomId:(long long)arg1 userId:(long long)arg2 giftToken:(id)arg3 isGlobal:(_Bool)arg4 andSuccessCallback:(CDUnknownBlockType)arg5 errorCallback:(CDUnknownBlockType)arg6;
+ (id)getGiftPropListV2WithActivityId:(id)arg1 andSuccessCallback:(CDUnknownBlockType)arg2 errorCallback:(CDUnknownBlockType)arg3;
+ (id)deleteMountV2WithMountId:(int)arg1 andSuccessCallback:(CDUnknownBlockType)arg2 errorCallback:(CDUnknownBlockType)arg3;
+ (id)stopUseMountV2WithMountId:(int)arg1 andSuccessCallback:(CDUnknownBlockType)arg2 errorCallback:(CDUnknownBlockType)arg3;
+ (id)useMountV2WithMountId:(int)arg1 andSuccessCallback:(CDUnknownBlockType)arg2 errorCallback:(CDUnknownBlockType)arg3;
+ (id)retrieveMyMountListV2WithSuccessCallback:(CDUnknownBlockType)arg1 andErrorCallback:(CDUnknownBlockType)arg2;
+ (id)openLuckBoxV2NickName:(id)arg1 RoomId:(long long)arg2 successBlock:(CDUnknownBlockType)arg3 errorCallback:(CDUnknownBlockType)arg4;
+ (id)retrieveMountListV2WithSuccessCallback:(CDUnknownBlockType)arg1 andErrorCallback:(CDUnknownBlockType)arg2;
+ (id)bugMountV2WithMountID:(int)arg1 duration:(int)arg2 toUserName:(id)arg3 successCallback:(CDUnknownBlockType)arg4 andErrorCallback:(CDUnknownBlockType)arg5;
+ (id)sendStorageGiftV2From:(long long)arg1 to:(long long)arg2 storageId:(long long)arg3 number:(long long)arg4 inRoom:(long long)arg5 isCustom:(_Bool)arg6 comboStatus:(unsigned long long)arg7 successBlock:(CDUnknownBlockType)arg8 errorBlock:(CDUnknownBlockType)arg9;
+ (id)getGiftResourcesListV2WithSuccessBlock:(CDUnknownBlockType)arg1 errorBlock:(CDUnknownBlockType)arg2;
+ (id)getStorageGiftListV2WithUserId:(long long)arg1 successBlock:(CDUnknownBlockType)arg2 errorBlock:(CDUnknownBlockType)arg3;
+ (void)sendEditError:(id)arg1 AndOid:(long long)arg2 AndInput:(id)arg3;
+ (id)sendGiftV2From:(long long)arg1 to:(long long)arg2 giftId:(long long)arg3 number:(long long)arg4 inRoom:(long long)arg5 isCustom:(_Bool)arg6 comboStatus:(unsigned long long)arg7 successBlock:(CDUnknownBlockType)arg8 errorBlock:(CDUnknownBlockType)arg9;
+ (id)getGiftZipListResultV2WithSuccessBlock:(CDUnknownBlockType)arg1 errorBlock:(CDUnknownBlockType)arg2;
+ (id)getAppGiftListResultV2WithSuccessBlock:(CDUnknownBlockType)arg1 errorBlock:(CDUnknownBlockType)arg2;
+ (id)getGiftListV2WithRoomId:(long long)arg1 successBlock:(CDUnknownBlockType)arg2 errorBlock:(CDUnknownBlockType)arg3;
+ (id)getGiftListClassifyOriginDataWithSuccessBlock:(CDUnknownBlockType)arg1 errorBlock:(CDUnknownBlockType)arg2;
+ (id)getGiftListClassifyV2WithKugouId:(long long)arg1 successBlock:(CDUnknownBlockType)arg2 errorBlock:(CDUnknownBlockType)arg3;
- (id)queryGiveGiftListV2WithRoomID:(long long)arg1 AndRep:(CDUnknownBlockType)arg2 AndError:(CDUnknownBlockType)arg3;

@end
