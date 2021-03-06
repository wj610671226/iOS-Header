//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UIContentSizeCategoryPreference.h>

__attribute__((visibility("hidden")))
@interface _UIContentSizeCategoryPreferenceSystem : UIContentSizeCategoryPreference
{
    _Bool _observingNotification;
    _Bool _didCheckForPreferredContentSizeCategoryOverride;
    _Bool _applicationOverridesPreferredContentSizeCategory;
    UIContentSizeCategoryPreference *_overridePreferences;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIContentSizeCategoryPreference *overridePreferences; // @synthesize overridePreferences=_overridePreferences;
- (void)_endObservingPreferredContentSizeChangedNotification;
- (void)_beginObservingPreferredContentSizeChangedNotification;
- (void)setPreferredContentSizeCategory:(id)arg1;
- (void)_postContentSizeCategoryDidChangeNotification;
- (void)_updateContentSizeCategory:(id)arg1 carPlay:(id)arg2 postingNotification:(_Bool)arg3;
- (void)_updateContentSizeCategoriesFromUserDefaultsPostingNotification:(_Bool)arg1;
- (id)description;
- (void)dealloc;
- (void)checkForChanges;
- (void)_readAndObservePreferences;
- (id)initAsSystem;

@end

