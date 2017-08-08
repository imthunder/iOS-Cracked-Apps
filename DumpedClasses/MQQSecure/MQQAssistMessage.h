//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSSecureCoding-Protocol.h"

@class NSDate, NSDictionary, NSMutableDictionary, NSString;

@interface MQQAssistMessage : NSObject <NSSecureCoding>
{
    _Bool _shouldCache;
    _Bool _shouldResponseError;
    _Bool _fromHistory;
    long long _sender;
    long long _sendState;
    long long _type;
    NSDate *_date;
    NSString *_text;
    NSString *_subtext;
    NSDictionary *_extensionContent;
    NSMutableDictionary *_uncachedExtensionContent;
}

+ (_Bool)supportsSecureCoding;
+ (id)messageWithMessage:(id)arg1;
+ (id)messageWithSender:(long long)arg1 type:(long long)arg2;
+ (id)message;
+ (id)mqqMessageForNewsWithPushItem:(id)arg1;
+ (id)messageForURLWithTitle:(id)arg1 URLString:(id)arg2;
+ (id)networkErrorMessage;
+ (id)welcomeMessage;
+ (id)mqqMessageForSearchFeedback:(_Bool)arg1;
+ (id)mqqMessageForSearchWithQuestion:(id)arg1 results:(id)arg2;
+ (id)mqqMessageForFAQ:(id)arg1;
+ (id)mqqRandomArrayForFAQ:(id)arg1;
+ (id)userMessageForFAQ;
@property(nonatomic) _Bool fromHistory; // @synthesize fromHistory=_fromHistory;
@property(nonatomic) _Bool shouldResponseError; // @synthesize shouldResponseError=_shouldResponseError;
@property(nonatomic) _Bool shouldCache; // @synthesize shouldCache=_shouldCache;
@property(retain, nonatomic) NSMutableDictionary *uncachedExtensionContent; // @synthesize uncachedExtensionContent=_uncachedExtensionContent;
@property(retain, nonatomic) NSDictionary *extensionContent; // @synthesize extensionContent=_extensionContent;
@property(copy, nonatomic) NSString *subtext; // @synthesize subtext=_subtext;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
@property(retain, nonatomic) NSDate *date; // @synthesize date=_date;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(nonatomic) long long sendState; // @synthesize sendState=_sendState;
@property(nonatomic) long long sender; // @synthesize sender=_sender;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)summaryForNewsItem;
- (id)dateStringForNewsItem;
- (id)dateForNewsItem;
- (id)imageURLForNewsItem;
- (id)messageForNewsAtIndex:(unsigned long long)arg1;
- (unsigned long long)countForNews;
- (id)buttonMessagesForText;
- (long long)feedbackStatusForSearch;
- (void)setFeedbackStatusForSearch:(long long)arg1;
- (id)questionItems;

@end
