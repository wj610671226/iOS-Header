//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKitCore/_UIStatusBarVisualProvider_iOS.h>

@class NSTimer, _UIStatusBarDisplayItemPlacement, _UIStatusBarRegion;

@interface _UIStatusBarVisualProvider_Phone : _UIStatusBarVisualProvider_iOS
{
    _UIStatusBarDisplayItemPlacement *_backgroundActivityDetailPlacement;
    _UIStatusBarDisplayItemPlacement *_pillIconPlacement;
    _UIStatusBarRegion *_pillRegion;
    NSTimer *_backgroundActivityDetailTimer;
}

+ (Class)visualProviderSubclassForScreen:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSTimer *backgroundActivityDetailTimer; // @synthesize backgroundActivityDetailTimer=_backgroundActivityDetailTimer;
@property(retain, nonatomic) _UIStatusBarRegion *pillRegion; // @synthesize pillRegion=_pillRegion;
@property(retain, nonatomic) _UIStatusBarDisplayItemPlacement *pillIconPlacement; // @synthesize pillIconPlacement=_pillIconPlacement;
@property(retain, nonatomic) _UIStatusBarDisplayItemPlacement *backgroundActivityDetailPlacement; // @synthesize backgroundActivityDetailPlacement=_backgroundActivityDetailPlacement;
- (id)animationForBackgroundActivityPillWithDuration:(double)arg1 scale:(double)arg2;
- (id)_animationForBackgroundActivityPill;
- (id)_animationForBackgroundActivityIcon;
- (void)_hideActivityDetailAndUpdate:(_Bool)arg1;
- (void)updatePill;
- (void)_updateBackgroundActivityWithEntry:(id)arg1 timeEntry:(id)arg2 needsUpdate:(_Bool)arg3;
- (void)updateDataForBackgroundActivity:(id)arg1;
- (void)actionable:(id)arg1 highlighted:(_Bool)arg2 initialPress:(_Bool)arg3;
- (id)removalAnimationForDisplayItemWithIdentifier:(id)arg1 itemAnimation:(id)arg2;
- (id)additionAnimationForDisplayItemWithIdentifier:(id)arg1 itemAnimation:(id)arg2;
- (id)willUpdateWithData:(id)arg1;

@end

