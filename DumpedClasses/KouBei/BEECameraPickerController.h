//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIImagePickerController.h>

@interface BEECameraPickerController : UIImagePickerController
{
}

+ (_Bool)supportPictureForSourceType:(long long)arg1;
+ (_Bool)supportPictureForCamera;
- (void)showNoAuthorizationAlertView;
- (void)requestCameraAuthorization;
- (_Bool)isCameraAuthorized;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (id)initWithCamera;

@end

