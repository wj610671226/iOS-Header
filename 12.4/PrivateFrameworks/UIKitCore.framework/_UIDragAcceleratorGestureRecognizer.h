//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UIPanGestureRecognizer.h>

__attribute__((visibility("hidden")))
@interface _UIDragAcceleratorGestureRecognizer : UIPanGestureRecognizer
{
    double _requiredMovementTimer;
}

@property(nonatomic) double requiredMovementTimer; // @synthesize requiredMovementTimer=_requiredMovementTimer;
- (void)reset;
- (void)_movementTimeElapsed;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;

@end

