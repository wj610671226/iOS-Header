//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Photos/NSCopying-Protocol.h>

@interface PHAssetCreationAdjustmentBakeInOptions : NSObject <NSCopying>
{
    _Bool _shouldBakeInIfLivePhotoPlaybackDisabled;
    _Bool _shouldBakeInIfLivePhotoMuted;
    _Bool _shouldBakeInIfAdjustedByThirdParty;
    _Bool _shouldBakeInIfCropped;
    _Bool _shouldBakeInIfTimelineTrimmed;
    _Bool _shouldBakeInIfPortraitDepthEffectEnabled;
    _Bool _shouldBakeInIfContainsPenultimateResources;
    _Bool _flattenLivePhotoToStillIfNeeded;
}

+ (id)adjustmentBakeInOptionsForPublishingOriginals;
@property(nonatomic) _Bool flattenLivePhotoToStillIfNeeded; // @synthesize flattenLivePhotoToStillIfNeeded=_flattenLivePhotoToStillIfNeeded;
@property(nonatomic) _Bool shouldBakeInIfContainsPenultimateResources; // @synthesize shouldBakeInIfContainsPenultimateResources=_shouldBakeInIfContainsPenultimateResources;
@property(nonatomic) _Bool shouldBakeInIfPortraitDepthEffectEnabled; // @synthesize shouldBakeInIfPortraitDepthEffectEnabled=_shouldBakeInIfPortraitDepthEffectEnabled;
@property(nonatomic) _Bool shouldBakeInIfTimelineTrimmed; // @synthesize shouldBakeInIfTimelineTrimmed=_shouldBakeInIfTimelineTrimmed;
@property(nonatomic) _Bool shouldBakeInIfCropped; // @synthesize shouldBakeInIfCropped=_shouldBakeInIfCropped;
@property(nonatomic) _Bool shouldBakeInIfAdjustedByThirdParty; // @synthesize shouldBakeInIfAdjustedByThirdParty=_shouldBakeInIfAdjustedByThirdParty;
@property(nonatomic) _Bool shouldBakeInIfLivePhotoMuted; // @synthesize shouldBakeInIfLivePhotoMuted=_shouldBakeInIfLivePhotoMuted;
@property(nonatomic) _Bool shouldBakeInIfLivePhotoPlaybackDisabled; // @synthesize shouldBakeInIfLivePhotoPlaybackDisabled=_shouldBakeInIfLivePhotoPlaybackDisabled;
- (id)description;
- (void)encodeToXPCDict:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithXPCDict:(id)arg1;
- (id)init;

@end

