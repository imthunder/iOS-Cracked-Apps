//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "DecoderDelegate-Protocol.h"
#import "FBQRCodeReaderDelegate-Protocol.h"
#import "UIImagePickerControllerDelegate-Protocol.h"
#import "UINavigationControllerDelegate-Protocol.h"

@class Decoder, FBQRCodeReaderView, FBUserSession, NSString;

@interface FBQRCodeScannerViewController : UIViewController <FBQRCodeReaderDelegate, DecoderDelegate, UINavigationControllerDelegate, UIImagePickerControllerDelegate>
{
    Decoder *_decoder;
    FBQRCodeReaderView *_qrCodeReaderView;
    FBUserSession *_session;
}

- (void).cxx_destruct;
- (void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(_Bool)arg3;
- (void)imagePickerControllerDidCancel:(id)arg1;
- (void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2;
- (void)decoder:(id)arg1 failedToDecodeImage:(id)arg2 usingSubset:(id)arg3 reason:(id)arg4;
- (void)decoder:(id)arg1 didDecodeImage:(id)arg2 usingSubset:(id)arg3 withResult:(id)arg4;
- (void)_addFunnelLoggingAction:(id)arg1 tag:(id)arg2;
- (void)_logQRCodeScanForString:(id)arg1 success:(_Bool)arg2 openedFriendCard:(_Bool)arg3 openedFB:(_Bool)arg4;
- (void)_logImportFromLibrary:(id)arg1;
- (void)_cannotDecode:(id)arg1;
- (void)_pushToWebView:(id)arg1;
- (void)_redirectToWebView:(id)arg1;
- (id)_bestPossibleURL:(id)arg1;
- (id)_URLWithStringWithSpecialChars:(id)arg1;
- (void)_failedRequest:(id)arg1;
- (void)_succeedRequest:(id)arg1 response:(id)arg2 fromString:(id)arg3;
- (void)_fetchAndRedirectToEntityForFBID:(id)arg1 fromString:(id)arg2;
- (void)_openProfileForUserID:(id)arg1;
- (void)_openComponentURLString:(id)arg1;
- (void)chooseFromPhotoAlbum;
- (id)handleDecodedString:(id)arg1;
- (id)analyticsModule;
- (long long)preferredInterfaceOrientationForPresentation;
- (unsigned long long)supportedInterfaceOrientations;
- (void)dealloc;
- (void)startRunning;
- (void)stopRunning;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (void)loadView;
- (id)initWithSession:(id)arg1;
- (void)setTopLayoutGuide:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
