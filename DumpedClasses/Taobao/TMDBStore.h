//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>, NSString;

@interface TMDBStore : NSObject
{
    NSObject<OS_dispatch_queue> *_trashQueue;
    NSString *_path;
    NSString *_dbPath;
    NSString *_dataPath;
    NSString *_trashPath;
    struct sqlite3 *_db;
    struct __CFDictionary *_dbStmtCache;
    _Bool _invalidated;
    _Bool _dbIsClosing;
    _Bool _errorLogsEnabled;
    unsigned long long _type;
}

@property(nonatomic) _Bool errorLogsEnabled; // @synthesize errorLogsEnabled=_errorLogsEnabled;
@property(readonly, nonatomic) unsigned long long type; // @synthesize type=_type;
@property(readonly, nonatomic) NSString *path; // @synthesize path=_path;
- (void).cxx_destruct;
- (int)getItemsSize:(id)arg1;
- (int)getItemsCount:(id)arg1;
- (_Bool)itemExistsForKey:(id)arg1 moduleName:(id)arg2;
- (id)getItemValueForKeys:(id)arg1 moduleName:(id)arg2;
- (id)getItemInfoForKeys:(id)arg1 moduleName:(id)arg2;
- (id)getItemForKeys:(id)arg1 moduleName:(id)arg2;
- (id)getItemValueForKey:(id)arg1 moduleName:(id)arg2;
- (id)getItemInfoForKey:(id)arg1 moduleName:(id)arg2;
- (id)getItemForKey:(id)arg1 moduleName:(id)arg2;
- (void)removeAllItems:(id)arg1 progressBlock:(CDUnknownBlockType)arg2 endBlock:(CDUnknownBlockType)arg3;
- (_Bool)removeAllItems:(id)arg1;
- (_Bool)removeItemsToFitCount:(int)arg1 moduleName:(id)arg2;
- (_Bool)removeItemsToFitSize:(int)arg1 moduleName:(id)arg2;
- (_Bool)removeItemsEarlierThanTime:(int)arg1 moduleName:(id)arg2;
- (_Bool)removeItemsLargerThanSize:(int)arg1 moduleName:(id)arg2;
- (_Bool)removeItemForKeys:(id)arg1 moduleName:(id)arg2;
- (_Bool)removeItemForKey:(id)arg1 moduleName:(id)arg2;
- (_Bool)saveItemWithKey:(id)arg1 value:(id)arg2 filename:(id)arg3 moduleName:(id)arg4 extendedData:(id)arg5;
- (_Bool)saveItemWithKey:(id)arg1 value:(id)arg2 moduleName:(id)arg3;
- (_Bool)saveItem:(id)arg1 moduleName:(id)arg2;
- (void)dealloc;
- (id)initWithPath:(id)arg1 type:(unsigned long long)arg2;
- (id)init;
- (void)_appWillBeTerminated;
- (void)_reset;
- (void)_fileEmptyTrashInBackground;
- (_Bool)_fileMoveAllToTrash;
- (_Bool)_fileDeleteWithName:(id)arg1;
- (id)_fileReadWithName:(id)arg1;
- (_Bool)_fileWriteWithName:(id)arg1 data:(id)arg2;
- (int)_dbGetTotalItemCount:(id)arg1;
- (int)_dbGetTotalItemSize:(id)arg1;
- (int)_dbGetItemCountWithKey:(id)arg1 moduleName:(id)arg2;
- (id)_dbGetItemSizeInfoOrderByTimeDescWithLimit:(int)arg1 moduleName:(id)arg2;
- (id)_dbGetFilenamesWithTimeEarlierThan:(int)arg1 moduleName:(id)arg2;
- (id)_dbGetFilenamesWithSizeLargerThan:(int)arg1 moduleName:(id)arg2;
- (id)_dbGetFilenameWithKeys:(id)arg1 moduleName:(id)arg2;
- (id)_dbGetFilenameWithKey:(id)arg1 moduleName:(id)arg2;
- (id)_dbGetValueWithKey:(id)arg1 moduleName:(id)arg2;
- (id)_dbGetItemWithKeys:(id)arg1 moduleName:(id)arg2 excludeInlineData:(_Bool)arg3;
- (id)_dbGetItemWithKey:(id)arg1 moduleName:(id)arg2 excludeInlineData:(_Bool)arg3;
- (id)_dbGetItemFromStmt:(struct sqlite3_stmt *)arg1 excludeInlineData:(_Bool)arg2;
- (_Bool)_dbDeleteItemsWithTimeEarlierThan:(int)arg1 moduleName:(id)arg2;
- (_Bool)_dbDeleteItemsWithSizeLargerThan:(int)arg1 moduleName:(id)arg2;
- (_Bool)_dbDeleteItemWithKeys:(id)arg1 moduleName:(id)arg2;
- (_Bool)_dbDeleteItemWithKey:(id)arg1 moduleName:(id)arg2;
- (_Bool)_dbUpdateAccessTimeWithKeys:(id)arg1 moduleName:(id)arg2;
- (_Bool)_dbUpdateAccessTimeWithKey:(id)arg1 moduleName:(id)arg2;
- (_Bool)_dbSaveWithKey:(id)arg1 value:(id)arg2 fileName:(id)arg3 moduleName:(id)arg4 extendedData:(id)arg5;
- (void)_dbBindJoinedKeys:(id)arg1 stmt:(struct sqlite3_stmt *)arg2 fromIndex:(int)arg3;
- (id)_dbJoinedKeys:(id)arg1;
- (struct sqlite3_stmt *)_dbPrepareStmt:(id)arg1;
- (_Bool)_dbExecute:(id)arg1;
- (void)_dbCheckpoint;
- (_Bool)_dbInitialize;
- (_Bool)_dbIsReady;
- (_Bool)_dbClose;
- (_Bool)_dbOpen;

@end
