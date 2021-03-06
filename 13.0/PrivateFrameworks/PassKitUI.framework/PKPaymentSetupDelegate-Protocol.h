//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitUI/NSObject-Protocol.h>

@class NSError, PKPaymentSetupNavigationController, UIViewController;

@protocol PKPaymentSetupDelegate <NSObject>
- (void)paymentSetupDidFinish:(PKPaymentSetupNavigationController *)arg1;

@optional
- (void)paymentSetupRequestPasscodeUpgradeWithVisibleViewController:(UIViewController *)arg1 completion:(void (^)(_Bool, NSError *))arg2;
- (void)paymentSetupDidShowEligibilityIssue;
- (void)paymentSetupDidShowError:(NSError *)arg1;
@end

