//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FMPersonalListActionModel.h"

@class NSMutableArray, NSString;

@interface FMPersonalListTitleModel : FMPersonalListActionModel
{
    _Bool _isDateShow;
    _Bool _isDeleteShow;
    _Bool _isTody;
    _Bool _topLineHidden;
    _Bool _underYear;
    NSMutableArray *_cardList;
    NSString *_desc;
}

@property(nonatomic) _Bool underYear; // @synthesize underYear=_underYear;
@property(nonatomic) _Bool topLineHidden; // @synthesize topLineHidden=_topLineHidden;
@property(nonatomic) _Bool isTody; // @synthesize isTody=_isTody;
@property(copy, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(retain, nonatomic) NSMutableArray *cardList; // @synthesize cardList=_cardList;
@property(nonatomic) _Bool isDeleteShow; // @synthesize isDeleteShow=_isDeleteShow;
@property(nonatomic) _Bool isDateShow; // @synthesize isDateShow=_isDateShow;
- (void).cxx_destruct;
- (double)height;

@end

