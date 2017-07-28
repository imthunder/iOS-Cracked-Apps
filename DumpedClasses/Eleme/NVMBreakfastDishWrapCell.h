//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

#import "NVMBreakfastDishTableViewDelegate.h"
#import "NVMBreakfastTagPickerAdapter.h"

@class NSMutableArray, NVMBreakfastDateWarningView, NVMBreakfastDayDish, NVMBreakfastDishDeadlineView, NVMBreakfastDishTableView, NVMBreakfastHomeDishMenus, NVMBreakfastTagPicker, NVMBreakfastTagPickerViewModel;

@interface NVMBreakfastDishWrapCell : UICollectionViewCell <NVMBreakfastDishTableViewDelegate, NVMBreakfastTagPickerAdapter>
{
    _Bool _clicked;
    NVMBreakfastTagPicker *_tagPicker;
    NVMBreakfastHomeDishMenus *_dishMenus;
    NSMutableArray *_typeNames;
    NVMBreakfastDishDeadlineView *_deadLineView;
    NVMBreakfastDishTableView *_dishTableView;
    NVMBreakfastDateWarningView *_dateWarningView;
    NSMutableArray *_tags;
    NSMutableArray *_filterData;
    NVMBreakfastTagPickerViewModel *_currentFilterTagViewModel;
    NVMBreakfastDayDish *_specialDayDish;
    NSMutableArray *_data;
    NSMutableArray *_category;
    id <NVMBreakfastDishWrapCellDelegate> _delegate;
    double _tagScrollewContentOffset;
}

+ (id)reuseIdentifier;
@property(nonatomic) _Bool clicked; // @synthesize clicked=_clicked;
@property(nonatomic) double tagScrollewContentOffset; // @synthesize tagScrollewContentOffset=_tagScrollewContentOffset;
@property(nonatomic) __weak id <NVMBreakfastDishWrapCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak NSMutableArray *category; // @synthesize category=_category;
@property(nonatomic) __weak NSMutableArray *data; // @synthesize data=_data;
@property(nonatomic) __weak NVMBreakfastDayDish *specialDayDish; // @synthesize specialDayDish=_specialDayDish;
@property(nonatomic) __weak NVMBreakfastTagPickerViewModel *currentFilterTagViewModel; // @synthesize currentFilterTagViewModel=_currentFilterTagViewModel;
@property(retain, nonatomic) NSMutableArray *filterData; // @synthesize filterData=_filterData;
@property(retain, nonatomic) NSMutableArray *tags; // @synthesize tags=_tags;
@property(retain, nonatomic) NVMBreakfastDateWarningView *dateWarningView; // @synthesize dateWarningView=_dateWarningView;
@property(retain, nonatomic) NVMBreakfastDishTableView *dishTableView; // @synthesize dishTableView=_dishTableView;
@property(retain, nonatomic) NVMBreakfastDishDeadlineView *deadLineView; // @synthesize deadLineView=_deadLineView;
@property(retain, nonatomic) NSMutableArray *typeNames; // @synthesize typeNames=_typeNames;
@property(retain, nonatomic) NVMBreakfastHomeDishMenus *dishMenus; // @synthesize dishMenus=_dishMenus;
@property(retain, nonatomic) NVMBreakfastTagPicker *tagPicker; // @synthesize tagPicker=_tagPicker;
- (void).cxx_destruct;
- (void)NVMBreakfastDishTableViewDidEndDecelerating:(id)arg1;
- (void)NVMBreakfastDishTableViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)NVMBreakfastDishTableViewDidScroll:(id)arg1 firstVisibleIndexPath:(id)arg2;
- (void)NVMBreakfastDishTableViewWillBeginDragging:(id)arg1;
- (void)NVMBreakfastDishTableView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 dayDish:(id)arg3;
- (void)dealloc;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (_Bool)tagPickerShowHightlightAtRow:(long long)arg1;
- (void)tagPickerDidSelctAtRow:(long long)arg1;
- (id)tagPicker:(id)arg1 titleForRow:(long long)arg2;
- (id)numberOfRowInTagPicker:(id)arg1;
- (_Bool)checkTypeName:(id)arg1 atTypesNames:(id)arg2;
- (id)categoryForData;
- (id)filterDataForTypeNames:(id)arg1;
- (id)tagsForData:(id)arg1;
- (void)setCollectionTag:(unsigned long long)arg1;
- (void)orderBreakfast:(id)arg1;
- (void)layoutUI;
- (id)initWithFrame:(struct CGRect)arg1;

@end
