//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "Mobike_ViewController.h"

#import "MBKBikeItemViewCellDelegate.h"
#import "MBKDataProviderDelegate.h"
#import "MMMapContextDelegate.h"
#import "UICollectionViewDataSource.h"
#import "UICollectionViewDelegate.h"

@class MBKBikeItemModel, MBKLockAdoptionManager, MBKNaviBarRefreshView, MBKNearBikesManager, MMMapContext, NSMutableArray, NSString, UIButton, UICollectionView, UIView;

@interface MBKSelectBikeViewController : Mobike_ViewController <UICollectionViewDelegate, UICollectionViewDataSource, MMMapContextDelegate, MBKBikeItemViewCellDelegate, MBKDataProviderDelegate>
{
    float lastContentOffset;
    _Bool _isLoading;
    UICollectionView *_collectionView;
    long long _page;
    NSMutableArray *_arrayModel;
    MBKBikeItemModel *_selectedModel;
    MMMapContext *_mapContext;
    UIView *_mapView;
    MBKNaviBarRefreshView *_refreshView;
    UIButton *_buttonRefresh;
    MBKNearBikesManager *_nearBikesManager;
    MBKLockAdoptionManager *_lockAdoptionManager;
    NSMutableArray *_greyViewArray;
}

@property(retain, nonatomic) NSMutableArray *greyViewArray; // @synthesize greyViewArray=_greyViewArray;
@property(retain, nonatomic) MBKLockAdoptionManager *lockAdoptionManager; // @synthesize lockAdoptionManager=_lockAdoptionManager;
@property(retain, nonatomic) MBKNearBikesManager *nearBikesManager; // @synthesize nearBikesManager=_nearBikesManager;
@property(nonatomic) _Bool isLoading; // @synthesize isLoading=_isLoading;
@property(retain, nonatomic) UIButton *buttonRefresh; // @synthesize buttonRefresh=_buttonRefresh;
@property(retain, nonatomic) MBKNaviBarRefreshView *refreshView; // @synthesize refreshView=_refreshView;
@property(retain, nonatomic) UIView *mapView; // @synthesize mapView=_mapView;
@property(retain, nonatomic) MMMapContext *mapContext; // @synthesize mapContext=_mapContext;
@property(retain, nonatomic) MBKBikeItemModel *selectedModel; // @synthesize selectedModel=_selectedModel;
@property(retain, nonatomic) NSMutableArray *arrayModel; // @synthesize arrayModel=_arrayModel;
@property(nonatomic) long long page; // @synthesize page=_page;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
- (void).cxx_destruct;
- (id)attributedStringWithNumber:(id)arg1 unit:(id)arg2;
- (float)getYearFrom:(id)arg1 to:(id)arg2;
- (void)setView:(id)arg1 originTo:(struct CGPoint)arg2;
- (void)fitLabelSize:(id)arg1 font:(id)arg2 edgeInsets:(struct UIEdgeInsets)arg3;
- (void)setMapCenterCoordinateWithBikeItemModel:(id)arg1;
- (void)scrollViewDidStop:(id)arg1;
- (void)collectionViewStopLoading;
- (void)collectionViewStartLoading;
- (void)buttonStopLoading;
- (void)buttonStartLoading;
- (void)stopRefreshAnimation;
- (void)startRefreshAnimation;
- (_Bool)isCoordinate00:(struct CLLocationCoordinate2D)arg1;
- (void)onTapRefreshButton:(id)arg1;
- (void)setRightBarItem;
- (void)setupModel;
- (void)setupView;
- (void)requestFailured:(id)arg1 error:(id)arg2;
- (void)requestSuccessed:(id)arg1;
- (void)onTapAdoptButton:(id)arg1;
- (id)mapContext:(id)arg1 viewForAnnotation:(id)arg2;
- (void)scrollViewWillBeginDecelerating:(id)arg1;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)dealloc;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
