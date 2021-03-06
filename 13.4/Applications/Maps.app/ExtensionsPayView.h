//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MapKit/MKViewWithHairline.h>

@class PaymentMethodView, UIButton;

__attribute__((visibility("hidden")))
@interface ExtensionsPayView : MKViewWithHairline
{
    UIButton *_changePaymentMethodButton;
    CDUnknownBlockType _performChangeCommand;
    PaymentMethodView *_paymentMethodView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) PaymentMethodView *paymentMethodView; // @synthesize paymentMethodView=_paymentMethodView;
@property(copy, nonatomic) CDUnknownBlockType performChangeCommand; // @synthesize performChangeCommand=_performChangeCommand;
@property(retain, nonatomic) UIButton *changePaymentMethodButton; // @synthesize changePaymentMethodButton=_changePaymentMethodButton;
- (void)_change:(id)arg1;
- (struct CGSize)intrinsicContentSize;
- (void)configureForTitle:(id)arg1 subtitle:(id)arg2 image:(id)arg3;
- (void)callChangeBlock;
- (void)_commonInit;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;

@end

