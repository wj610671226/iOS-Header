//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosUICore/PXTitleSubtitleUILabel.h>

#import <PhotosUICore/PXAccessibilityView-Protocol.h>
#import <PhotosUICore/PXGReusableView-Protocol.h>

@class NSString, PXGTitleSubtitleViewConfiguration;

@interface PXGTitleSubtitleView : PXTitleSubtitleUILabel <PXGReusableView, PXAccessibilityView>
{
    PXGTitleSubtitleViewConfiguration *_userData;
    struct CGRect _clippingRect;
}

- (void).cxx_destruct;
@property(copy, nonatomic) PXGTitleSubtitleViewConfiguration *userData; // @synthesize userData=_userData;
@property(nonatomic) struct CGRect clippingRect; // @synthesize clippingRect=_clippingRect;
@property(readonly, copy, nonatomic) NSString *accessibilityLabel;
@property(readonly, nonatomic) _Bool isContainedInAsset;
@property(readonly, nonatomic) _Bool isAccessible;
- (void)prepareForReuse;
- (void)becomeReusable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

