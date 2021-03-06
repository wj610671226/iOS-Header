//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoard/SBSwitcherModifier.h>

@class NSUUID, SBGestureSwitcherModifierEvent;

@interface SBGestureSwitcherModifier : SBSwitcherModifier
{
    NSUUID *_gestureID;
    SBGestureSwitcherModifierEvent *_lastGestureEvent;
    unsigned long long _gesturePhase;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned long long gesturePhase; // @synthesize gesturePhase=_gesturePhase;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)handleMainTransitionEvent:(id)arg1;
- (id)handleGestureEvent:(id)arg1;
- (id)handleEvent:(id)arg1;
- (double)visibleMarginForItemContainerAtIndex:(unsigned long long)arg1;
- (_Bool)clipsToUnobscuredMarginAtIndex:(unsigned long long)arg1;
- (long long)layoutUpdateMode;
- (_Bool)isUpdatingLayout;
- (_Bool)isPreparingLayout;
- (id)initWithGestureID:(id)arg1;

@end

