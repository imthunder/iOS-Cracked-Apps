//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug  6 2017 20:42:30).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GWObject.h"

@class Movie, NSArray, NSString;

@interface GWRemind : GWObject
{
    Movie *_movie;
    NSString *_movieScore;
    NSString *_num;
    NSArray *_commentList;
    NSString *_mobilePath;
}

@property(retain, nonatomic) NSString *mobilePath; // @synthesize mobilePath=_mobilePath;
@property(retain, nonatomic) NSArray *commentList; // @synthesize commentList=_commentList;
@property(retain, nonatomic) NSString *num; // @synthesize num=_num;
@property(retain, nonatomic) NSString *movieScore; // @synthesize movieScore=_movieScore;
@property(retain, nonatomic) Movie *movie; // @synthesize movie=_movie;
- (void).cxx_destruct;

@end
