//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "KugouObject.h"

@class NSArray, NSString;

@interface CloudListEntity : KugouObject
{
    _Bool _isOffLine;
    unsigned int _listID;
    unsigned int _listFMVersion;
    unsigned int _listOrderWeight;
    unsigned int _listFileCount;
    unsigned int _lmVersion;
    int _opType;
    int _listType;
    unsigned int _lver;
    unsigned int _sver;
    int _source;
    unsigned int _oid;
    unsigned int _orid;
    unsigned int _aid;
    unsigned long long _id;
    NSString *_listName;
    NSString *_userID;
    NSString *_icon;
    NSString *_oname;
    NSString *_defaulticon;
    NSArray *_tags;
    NSString *_intro;
    unsigned long long _sortType;
    NSString *_maxFieldHash;
    unsigned long long _musicLibID;
    long long _ifpublish;
}

+ (id)createCloudListEntityWithCollectListEntity:(id)arg1;
+ (id)createSongMenuWithDic:(id)arg1;
@property(nonatomic) long long ifpublish; // @synthesize ifpublish=_ifpublish;
@property(nonatomic) unsigned long long musicLibID; // @synthesize musicLibID=_musicLibID;
@property(copy, nonatomic) NSString *maxFieldHash; // @synthesize maxFieldHash=_maxFieldHash;
@property(nonatomic) unsigned long long sortType; // @synthesize sortType=_sortType;
@property(copy, nonatomic) NSString *intro; // @synthesize intro=_intro;
@property(copy, nonatomic) NSArray *tags; // @synthesize tags=_tags;
@property(copy, nonatomic) NSString *defaulticon; // @synthesize defaulticon=_defaulticon;
@property(copy, nonatomic) NSString *oname; // @synthesize oname=_oname;
@property(nonatomic) unsigned int aid; // @synthesize aid=_aid;
@property(nonatomic) unsigned int orid; // @synthesize orid=_orid;
@property(nonatomic) unsigned int oid; // @synthesize oid=_oid;
@property(nonatomic) int source; // @synthesize source=_source;
@property(nonatomic) unsigned int sver; // @synthesize sver=_sver;
@property(nonatomic) unsigned int lver; // @synthesize lver=_lver;
@property(copy, nonatomic) NSString *icon; // @synthesize icon=_icon;
@property(nonatomic) int listType; // @synthesize listType=_listType;
@property(nonatomic) _Bool isOffLine; // @synthesize isOffLine=_isOffLine;
@property(nonatomic) int opType; // @synthesize opType=_opType;
@property(nonatomic) unsigned int lmVersion; // @synthesize lmVersion=_lmVersion;
@property(copy, nonatomic) NSString *userID; // @synthesize userID=_userID;
@property(copy, nonatomic) NSString *listName; // @synthesize listName=_listName;
@property(nonatomic) unsigned int listFileCount; // @synthesize listFileCount=_listFileCount;
@property(nonatomic) unsigned int listOrderWeight; // @synthesize listOrderWeight=_listOrderWeight;
@property(nonatomic) unsigned int listFMVersion; // @synthesize listFMVersion=_listFMVersion;
@property(nonatomic) unsigned int listID; // @synthesize listID=_listID;
@property(nonatomic) unsigned long long id; // @synthesize id=_id;
- (void).cxx_destruct;
- (id)filterAlbumIconWithUrlRule;
- (void)copyFromDic:(id)arg1;
- (_Bool)isUpdate:(id)arg1;
- (void)setTagsWithString:(id)arg1;
- (_Bool)isLocalIconPath;
- (id)tagsToString;
- (_Bool)hasUpload;
- (void)dealloc;
- (id)init;

@end
