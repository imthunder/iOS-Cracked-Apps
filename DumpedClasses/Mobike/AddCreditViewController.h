//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "Mobike_ViewController.h"

#import "UITextFieldDelegate.h"

@class NSString, UIButton, UITextField;

@interface AddCreditViewController : Mobike_ViewController <UITextFieldDelegate>
{
    _Bool _isDelNumber;
    _Bool _isDelDate;
    UITextField *_CardNoTextFiled;
    UITextField *_DateTextFiled;
    UITextField *_CvvTextField;
    UIButton *_saveButton;
}

@property _Bool isDelDate; // @synthesize isDelDate=_isDelDate;
@property _Bool isDelNumber; // @synthesize isDelNumber=_isDelNumber;
@property(retain, nonatomic) UIButton *saveButton; // @synthesize saveButton=_saveButton;
@property(retain, nonatomic) UITextField *CvvTextField; // @synthesize CvvTextField=_CvvTextField;
@property(retain, nonatomic) UITextField *DateTextFiled; // @synthesize DateTextFiled=_DateTextFiled;
@property(retain, nonatomic) UITextField *CardNoTextFiled; // @synthesize CardNoTextFiled=_CardNoTextFiled;
- (void).cxx_destruct;
- (void)requestAddCreditFailed:(id)arg1;
- (void)requestAddCreditSucc:(id)arg1;
- (void)dealloc;
- (void)saveButtonClicked:(id)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (_Bool)textFieldShouldClear:(id)arg1;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (_Bool)textFieldShouldBeginEditing:(id)arg1;
- (void)didReceiveMemoryWarning;
- (void)cvvTextFiledEditChanged:(id)arg1;
- (void)textFiledEditChanged:(id)arg1;
- (void)cardTextFiledEditChanged:(id)arg1;
- (void)setupController;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
