//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTBusinessBean.h"

@class HotelTagInformationModel, NSString;

@interface HotelPriceSummaryModel : CTBusinessBean
{
    int _crossLine;
    NSString *_summaryText;
    NSString *_summaryTextColor;
    NSString *_priceColor;
    HotelTagInformationModel *_tagDesc;
    NSString *_bottomSummaryText;
    NSString *_bottomSummaryTextColor;
}

@property(copy, nonatomic) NSString *bottomSummaryTextColor; // @synthesize bottomSummaryTextColor=_bottomSummaryTextColor;
@property(copy, nonatomic) NSString *bottomSummaryText; // @synthesize bottomSummaryText=_bottomSummaryText;
@property(nonatomic) int crossLine; // @synthesize crossLine=_crossLine;
@property(retain, nonatomic) HotelTagInformationModel *tagDesc; // @synthesize tagDesc=_tagDesc;
@property(copy, nonatomic) NSString *priceColor; // @synthesize priceColor=_priceColor;
@property(copy, nonatomic) NSString *summaryTextColor; // @synthesize summaryTextColor=_summaryTextColor;
@property(copy, nonatomic) NSString *summaryText; // @synthesize summaryText=_summaryText;
- (void).cxx_destruct;
- (id)getPBAnnotationArray;
- (id)init;

@end

