//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NavdDoomConductorObserver-Protocol.h"

@class NSString, NavdDoomStorage;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface NavdDoomCache : NSObject <NavdDoomConductorObserver>
{
    NavdDoomStorage *_snapshot;
    NSObject<OS_dispatch_queue> *_queue;
}

+ (id)loadFromFilePath:(id)arg1;
+ (_Bool)saveToFilePath:(id)arg1 storage:(id)arg2;
+ (id)defaultPath;
- (void).cxx_destruct;
- (void)didEndUpdate;
- (void)didScheduleWakeup;
- (void)didFireAlert;
- (void)willFireAlert;
- (void)didUpdateRoutes;
- (void)willUpdateRoutes;
- (void)didUpdateDestinations;
- (void)willUpdateDestinations;
- (void)didUpdateWindow;
- (void)didInvalidateWindow;
- (void)didUpdateExitTime;
- (void)willUpdateExitTime;
- (void)willStartUpdate;
- (void)_writeToDisk;
- (void)updatedSnapshot:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

