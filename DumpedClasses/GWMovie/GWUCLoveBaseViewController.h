//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug  6 2017 20:42:30).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GWPagingTableViewController.h"

@class NSIndexPath;

@interface GWUCLoveBaseViewController : GWPagingTableViewController
{
    _Bool _collectionStatus;
    NSIndexPath *_selectIndexpath;
}

@property(nonatomic) _Bool collectionStatus; // @synthesize collectionStatus=_collectionStatus;
@property(retain, nonatomic) NSIndexPath *selectIndexpath; // @synthesize selectIndexpath=_selectIndexpath;
- (void).cxx_destruct;
- (void)requestDidFinished:(id)arg1;
- (void)requestWillStart;
- (void)updateTable;
- (void)requestData;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;

@end
