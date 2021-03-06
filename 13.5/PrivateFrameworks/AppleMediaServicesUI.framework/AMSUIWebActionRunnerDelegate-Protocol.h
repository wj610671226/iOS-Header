//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppleMediaServicesUI/NSObject-Protocol.h>

@class AMSAuthenticateRequest, AMSDialogRequest, AMSPromise, NSDictionary;
@protocol AMSUIWebActionRunnable;

@protocol AMSUIWebActionRunnerDelegate <NSObject>
- (AMSPromise *)action:(id <AMSUIWebActionRunnable>)arg1 pauseTimeouts:(_Bool)arg2 handleDialogRequest:(AMSDialogRequest *)arg3;
- (AMSPromise *)action:(id <AMSUIWebActionRunnable>)arg1 pauseTimeouts:(_Bool)arg2 handleAuthenticateRequest:(AMSAuthenticateRequest *)arg3;
- (AMSPromise *)action:(id <AMSUIWebActionRunnable>)arg1 handleActionObject:(NSDictionary *)arg2;
@end

