//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MMSuggestionSearcher;

@interface MMSuggestionSearchContext : NSObject
{
    MMSuggestionSearcher *_searcher;
}

@property(retain, nonatomic) MMSuggestionSearcher *searcher; // @synthesize searcher=_searcher;
- (void).cxx_destruct;
- (void)suggestionSearchWithRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithSearcher:(id)arg1;

@end
