//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NVMViewController.h"

#import "AVCaptureVideoDataOutputSampleBufferDelegate.h"
#import "UIImagePickerControllerDelegate.h"
#import "UINavigationControllerDelegate.h"

@class AVCaptureDevice, AVCaptureSession, AVCaptureStillImageOutput, AVCaptureVideoDataOutput, NSArray, NSDate, NSObject<OS_dispatch_queue>, NSString, NVMCameraBottomBarView, NVMCameraMonitorView, NVMCameraSubmitView, NVMCameraTopBarView, NVMOrderRateFoodPhoto, UIButton, UIImage, UIImagePickerController;

@interface NVMImagePickerController : NVMViewController <AVCaptureVideoDataOutputSampleBufferDelegate, UIImagePickerControllerDelegate, UINavigationControllerDelegate>
{
    _Bool _imageFiltered;
    _Bool _shouldHideStatusBar;
    NVMOrderRateFoodPhoto *_ratePhoto;
    NSArray *_photoTags;
    unsigned long long _mode;
    NSString *_titleName;
    CDUnknownBlockType _didFinishPhotoBlock;
    CDUnknownBlockType _deleteAction;
    NSString *_restaurantId;
    NSString *_foodId;
    NSString *_orderID;
    NVMCameraTopBarView *_headerView;
    NVMCameraBottomBarView *_bottomView;
    NVMCameraMonitorView *_cameraView;
    NVMCameraSubmitView *_submitView;
    UIButton *_filterButton;
    UIImagePickerController *_imagePicker;
    AVCaptureSession *_session;
    AVCaptureDevice *_device;
    AVCaptureStillImageOutput *_imageOutput;
    AVCaptureVideoDataOutput *_videoOutput;
    NSObject<OS_dispatch_queue> *_videoProcessQueue;
    double _preBuffTimeStamp;
    NSDate *_captureSessionStartDate;
    UIImage *_oriImage;
    UIImage *_filteredImage;
    struct CGPoint _touchPoint;
}

@property(nonatomic) _Bool shouldHideStatusBar; // @synthesize shouldHideStatusBar=_shouldHideStatusBar;
@property(nonatomic, getter=isImageFiltered) _Bool imageFiltered; // @synthesize imageFiltered=_imageFiltered;
@property(retain, nonatomic) UIImage *filteredImage; // @synthesize filteredImage=_filteredImage;
@property(retain, nonatomic) UIImage *oriImage; // @synthesize oriImage=_oriImage;
@property(retain, nonatomic) NSDate *captureSessionStartDate; // @synthesize captureSessionStartDate=_captureSessionStartDate;
@property(nonatomic) double preBuffTimeStamp; // @synthesize preBuffTimeStamp=_preBuffTimeStamp;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *videoProcessQueue; // @synthesize videoProcessQueue=_videoProcessQueue;
@property(nonatomic) struct CGPoint touchPoint; // @synthesize touchPoint=_touchPoint;
@property(retain, nonatomic) AVCaptureVideoDataOutput *videoOutput; // @synthesize videoOutput=_videoOutput;
@property(retain, nonatomic) AVCaptureStillImageOutput *imageOutput; // @synthesize imageOutput=_imageOutput;
@property(retain, nonatomic) AVCaptureDevice *device; // @synthesize device=_device;
@property(retain, nonatomic) AVCaptureSession *session; // @synthesize session=_session;
@property(retain, nonatomic) UIImagePickerController *imagePicker; // @synthesize imagePicker=_imagePicker;
@property(retain, nonatomic) UIButton *filterButton; // @synthesize filterButton=_filterButton;
@property(retain, nonatomic) NVMCameraSubmitView *submitView; // @synthesize submitView=_submitView;
@property(retain, nonatomic) NVMCameraMonitorView *cameraView; // @synthesize cameraView=_cameraView;
@property(retain, nonatomic) NVMCameraBottomBarView *bottomView; // @synthesize bottomView=_bottomView;
@property(retain, nonatomic) NVMCameraTopBarView *headerView; // @synthesize headerView=_headerView;
@property(copy, nonatomic) NSString *orderID; // @synthesize orderID=_orderID;
@property(copy, nonatomic) NSString *foodId; // @synthesize foodId=_foodId;
@property(copy, nonatomic) NSString *restaurantId; // @synthesize restaurantId=_restaurantId;
@property(copy, nonatomic) CDUnknownBlockType deleteAction; // @synthesize deleteAction=_deleteAction;
@property(copy, nonatomic) CDUnknownBlockType didFinishPhotoBlock; // @synthesize didFinishPhotoBlock=_didFinishPhotoBlock;
@property(copy, nonatomic) NSString *titleName; // @synthesize titleName=_titleName;
@property(nonatomic) unsigned long long mode; // @synthesize mode=_mode;
@property(retain, nonatomic) NSArray *photoTags; // @synthesize photoTags=_photoTags;
@property(retain, nonatomic) NVMOrderRateFoodPhoto *ratePhoto; // @synthesize ratePhoto=_ratePhoto;
- (void).cxx_destruct;
- (id)filterImage;
- (void)dismissPicker;
- (void)imagePickerControllerDidCancel:(id)arg1;
- (void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2;
- (void)displayErrorOnMainQueue:(id)arg1;
- (long long)avOrientationForDeviceOrientation:(long long)arg1;
- (id)imageFromSampleBuffer:(struct opaqueCMSampleBuffer *)arg1;
- (void)captureOutput:(id)arg1 didOutputSampleBuffer:(struct opaqueCMSampleBuffer *)arg2 fromConnection:(id)arg3;
- (void)updateBrightness:(id)arg1;
- (void)reopenCamera;
- (void)suspendCamera;
- (void)updateUIOnMainThread:(CDUnknownBlockType)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)enterEditingModeWithImage:(id)arg1;
- (void)takePhoto;
- (id)formatImageData:(id)arg1 attachments:(struct __CFDictionary *)arg2;
- (void)takePhotoWithHandler:(CDUnknownBlockType)arg1;
- (void)focusOnPoint:(struct CGPoint)arg1;
- (struct CGPoint)convertToPointOfInterestFromViewCoordinates:(struct CGPoint)arg1;
- (void)teardownAVCapture;
- (void)setupAVCapture;
- (void)requestAuthorizationForPhotos;
- (void)showFilterButtonWithFilterStatus:(_Bool)arg1;
- (void)switchBottomContentToView:(id)arg1;
- (void)loadCameraView;
- (void)loadSubmitViewFromInitiationState:(_Bool)arg1;
- (void)loadBottomViewFromInitiationState:(_Bool)arg1;
- (void)loadHeaderView;
- (void)dealloc;
- (void)viewDidFirstAppear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (long long)preferredStatusBarUpdateAnimation;
- (_Bool)prefersStatusBarHidden;
- (void)loadCameraFailed:(id)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
