//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class CAShapeLayer, DOCTagIconView;

@interface DOCTagCheckableDotView : UIView
{
    _Bool _checked;
    DOCTagIconView *_tagDotView;
    CAShapeLayer *_borderLayer;
}

@property(readonly, nonatomic) CAShapeLayer *borderLayer; // @synthesize borderLayer=_borderLayer;
@property(readonly, nonatomic) DOCTagIconView *tagDotView; // @synthesize tagDotView=_tagDotView;
@property(nonatomic) _Bool checked; // @synthesize checked=_checked;
- (void).cxx_destruct;
- (void)updateLayoutOfLayers;
- (void)layoutSublayersOfLayer:(id)arg1;
@property(nonatomic) long long tagColor;
- (id)initWithFrame:(struct CGRect)arg1;

@end

