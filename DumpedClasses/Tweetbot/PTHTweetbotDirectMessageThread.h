//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PTHTweetbotObject.h"

@class NSArray, NSMutableArray, PTHTweetbotDirectMessage, PTHTweetbotUser;

@interface PTHTweetbotDirectMessageThread : PTHTweetbotObject
{
    NSMutableArray *_messagesAndDrafts;
    PTHTweetbotUser *_toUser;
    long long _lastReadTID;
    unsigned long long _unreadItemCount;
}

@property(readonly, nonatomic) unsigned long long unreadItemCount; // @synthesize unreadItemCount=_unreadItemCount;
@property(nonatomic) long long lastReadTID; // @synthesize lastReadTID=_lastReadTID;
@property(retain, nonatomic) PTHTweetbotUser *toUser; // @synthesize toUser=_toUser;
@property(copy, nonatomic) NSArray *messagesAndDrafts; // @synthesize messagesAndDrafts=_messagesAndDrafts;
- (void).cxx_destruct;
- (id)description;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)setAccount:(id)arg1;
- (_Bool)hasString:(id)arg1;
@property(readonly, nonatomic, getter=isRead) _Bool read;
- (void)markRead;
- (void)removeMessage:(id)arg1;
- (void)addMessage:(id)arg1;
- (_Bool)updateMessagesAndDrafts:(id)arg1;
- (void)resetUnreadItemCount;
- (unsigned long long)_unreadItemCount;
- (void)destroy:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) __weak PTHTweetbotDirectMessage *latestMessage;
@property(readonly, copy, nonatomic) NSArray *messages;
@property(readonly, nonatomic) long long toUserTID;

@end
