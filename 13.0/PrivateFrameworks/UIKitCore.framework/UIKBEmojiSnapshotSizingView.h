//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UIView.h>

__attribute__((visibility("hidden")))
@interface UIKBEmojiSnapshotSizingView : UIView
{
    struct CGSize _snapshotSize;
    UIView *_snapshotView;
}

@property(readonly, nonatomic) UIView *snapshotView; // @synthesize snapshotView=_snapshotView;
- (struct CGSize)intrinsicContentSize;
- (void)dealloc;
- (id)initWithSnapshotView:(id)arg1;

@end

