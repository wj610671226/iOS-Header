//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "MapsThemeView.h"

__attribute__((visibility("hidden")))
@interface HairlineView : MapsThemeView
{
    double _intrinsicHeight;
    _Bool _autoUpdateTheme;
}

@property(nonatomic) _Bool autoUpdateTheme; // @synthesize autoUpdateTheme=_autoUpdateTheme;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (struct CGSize)intrinsicContentSize;
- (void)didMoveToWindow;
- (void)updateTheme;
- (void)customInit;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

@end

