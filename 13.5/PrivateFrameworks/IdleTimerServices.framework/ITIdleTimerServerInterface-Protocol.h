//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IdleTimerServices/NSObject-Protocol.h>

@class ITIdleTimerConfiguration, NSString;

@protocol ITIdleTimerServerInterface <NSObject>
- (void)removeIdleTimerConfiguration:(ITIdleTimerConfiguration *)arg1 forReason:(NSString *)arg2 error:(id *)arg3;
- (void)addIdleTimerConfiguration:(ITIdleTimerConfiguration *)arg1 forReason:(NSString *)arg2 error:(id *)arg3;
- (_Bool)isIdleTimerServiceAvailableWithError:(id *)arg1;
@end

