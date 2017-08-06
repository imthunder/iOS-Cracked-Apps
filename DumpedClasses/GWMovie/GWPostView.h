//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug  6 2017 20:42:30).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "PostButtonViewForChangCiDelegate-Protocol.h"

@class NSMutableArray, NSString, UIScrollView;
@protocol GWPostViewDelegate;

@interface GWPostView : UIView <PostButtonViewForChangCiDelegate>
{
    _Bool _isShowSelected;
    id <GWPostViewDelegate> _delegate;
    UIScrollView *_scrollView;
    NSMutableArray *_movieListArray;
}

@property(retain, nonatomic) NSMutableArray *movieListArray; // @synthesize movieListArray=_movieListArray;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(nonatomic) __weak id <GWPostViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool isShowSelected; // @synthesize isShowSelected=_isShowSelected;
- (void).cxx_destruct;
- (long long)selectedIndex;
- (void)onPostButtonClicked:(int)arg1;
- (void)showViewWithMovieList:(id)arg1 isClickFirst:(_Bool)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
