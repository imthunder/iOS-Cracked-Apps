//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface SEvaluateViewSingleTagModel : NSObject
{
    _Bool _selected;
    NSString *_title;
    long long _index;
}

@property(nonatomic) _Bool selected; // @synthesize selected=_selected;
@property(nonatomic) long long index; // @synthesize index=_index;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (id)initWithTitle:(id)arg1 index:(long long)arg2 selected:(_Bool)arg3;

@end
