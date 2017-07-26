//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBViewController.h"

#import "TBModelStatusDelegate.h"
#import "TBSCBasicServiceDelegate.h"
#import "TBSCBasicViewProtocol.h"
#import "UITableViewDelegate.h"

@class NSString, TBModelStatusHandler, TBModelStatusInfo, TBSCModelStatusInfo, UIActivityIndicatorView, UIScrollViewSpeed, UITableView;

@interface TBSCBasicViewController : TBViewController <TBSCBasicServiceDelegate, TBModelStatusDelegate, TBSCBasicViewProtocol, UITableViewDelegate>
{
    TBSCModelStatusInfo *_info;
    double _timeData;
    _Bool _isLoading;
    unsigned long long _objId;
    UITableView *_dataTableView;
    TBModelStatusHandler *_handler;
    UIScrollViewSpeed *_scrollViewSpeed;
    UIActivityIndicatorView *_nextPageLoadingView;
}

+ (_Bool)tbNeedToolbar;
@property(retain, nonatomic) UIActivityIndicatorView *nextPageLoadingView; // @synthesize nextPageLoadingView=_nextPageLoadingView;
@property(retain, nonatomic) UIScrollViewSpeed *scrollViewSpeed; // @synthesize scrollViewSpeed=_scrollViewSpeed;
@property(retain, nonatomic) TBModelStatusHandler *handler; // @synthesize handler=_handler;
@property(retain, nonatomic) TBModelStatusInfo *info; // @synthesize info=_info;
@property(nonatomic) _Bool isLoading; // @synthesize isLoading=_isLoading;
@property(retain, nonatomic) UITableView *dataTableView; // @synthesize dataTableView=_dataTableView;
@property(nonatomic) unsigned long long objId; // @synthesize objId=_objId;
- (void).cxx_destruct;
- (void)setupTBToolbarItems;
- (void)backToPrePage:(id)arg1;
- (void)showEmptyView:(id)arg1;
- (_Bool)isNetReachable;
- (void)scrollViewDidScroll:(id)arg1;
- (void)configPullToRefresh;
- (SEL)selectorForEmpty;
- (SEL)selectorForError:(id)arg1;
- (void)serviceDataOperationFinished:(id)arg1;
- (void)serviceDidCancelLoad:(id)arg1;
- (void)service:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)serviceDidFinishLoad:(id)arg1;
- (void)serviceDidStartLoad:(id)arg1;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (void)showAlert:(id)arg1;
- (void)showNextPageLoadingView;
- (void)hideLodingView;
- (void)hideLodingViewWithOutStatus;
- (void)showLoadingView;
- (struct CGRect)defaultFrame;
- (void)loadImagesForOnscreenRows;
- (_Bool)needAlert;
- (_Bool)needLoadingView;
- (_Bool)needRefresh;
- (_Bool)needNextPage;
- (void)nextPage;
- (void)refresh;
- (void)setData;
- (void)reload;
- (void)loadData;
- (void)setUpView;
- (id)initWithNavigatorURL:(id)arg1 query:(id)arg2;
- (id)initWithObjId:(unsigned long long)arg1;
- (void)dealloc;
- (void)viewDidUnload;
- (void)viewDidAppearAtFirstTime;
- (void)viewDidLoad;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)didReceiveMemoryWarning;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
