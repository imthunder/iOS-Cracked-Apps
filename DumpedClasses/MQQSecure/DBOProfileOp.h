//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MQQDBWrapper;

@interface DBOProfileOp : NSObject
{
    MQQDBWrapper *_dbWrapper;
}

- (id)getProfileItemsWithKeyIDs:(id)arg1;
- (_Bool)isEmpty;
- (id)profileItemForKeyID:(long long)arg1;
- (_Bool)insertProfileItems:(id)arg1;
- (void)dealloc;
- (id)initWithFilePath:(id)arg1;

@end
