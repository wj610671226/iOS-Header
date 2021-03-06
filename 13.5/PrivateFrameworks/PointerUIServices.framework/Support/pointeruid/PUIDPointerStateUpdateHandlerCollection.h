//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface PUIDPointerStateUpdateHandlerCollection : NSObject
{
    CDUnknownBlockType _portalSourceTransitionCompletion;
    CDUnknownBlockType _contentMatchMoveSourceTransitionCompletion;
    CDUnknownBlockType _overlayEffectTransitionCompletion;
    CDUnknownBlockType _shapeTransitionCompletion;
    CDUnknownBlockType _visibilityTransitionCompletion;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType visibilityTransitionCompletion; // @synthesize visibilityTransitionCompletion=_visibilityTransitionCompletion;
@property(copy, nonatomic) CDUnknownBlockType shapeTransitionCompletion; // @synthesize shapeTransitionCompletion=_shapeTransitionCompletion;
@property(copy, nonatomic) CDUnknownBlockType overlayEffectTransitionCompletion; // @synthesize overlayEffectTransitionCompletion=_overlayEffectTransitionCompletion;
@property(copy, nonatomic) CDUnknownBlockType contentMatchMoveSourceTransitionCompletion; // @synthesize contentMatchMoveSourceTransitionCompletion=_contentMatchMoveSourceTransitionCompletion;
@property(copy, nonatomic) CDUnknownBlockType portalSourceTransitionCompletion; // @synthesize portalSourceTransitionCompletion=_portalSourceTransitionCompletion;
- (void)performAllHandlersWithFinished:(_Bool)arg1 retargeted:(_Bool)arg2;

@end

