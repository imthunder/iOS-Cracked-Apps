//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NMShortVideoBgm, NMShortVideoBgmListViewController;

@protocol NMShortVideoBgmListDelegate <NSObject>
- (void)bgmListViewController:(NMShortVideoBgmListViewController *)arg1 didPlayBgm:(NMShortVideoBgm *)arg2;
- (void)bgmListViewController:(NMShortVideoBgmListViewController *)arg1 didSelectBgm:(NMShortVideoBgm *)arg2;
@end
