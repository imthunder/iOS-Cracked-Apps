//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FBSharedFramework/CKCompositeComponent.h>

@class CKComponent;

@interface FBVideoHomeSectionHeaderComponent : CKCompositeComponent
{
    CKComponent *_innerComponent;
}

+ (id)newWithHeaderMessage:(id)arg1 headerSubMessage:(id)arg2 componentPositionIsFirst:(_Bool)arg3 options:(struct FBVideoHomeSectionHeaderComponentOptions)arg4 feedToolbox:(id)arg5;
@property(readonly, nonatomic) CKComponent *innerComponent; // @synthesize innerComponent=_innerComponent;
- (void).cxx_destruct;

@end
