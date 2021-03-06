//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ApplicationRepair-Protocol.h"

@class ASDRepairOptions, ApplicationProxy, NSArray, NSString, TaskQueue;
@protocol ApplicationRepairDelegate;

@interface VPPRepair : NSObject <ApplicationRepair>
{
    ApplicationProxy *_application;
    struct os_unfair_lock_s _lock;
    NSString *_logUUID;
    ASDRepairOptions *_options;
    TaskQueue *_taskQueue;
    id <ApplicationRepairDelegate> _delegate;
    NSArray *_repairedBundleIDs;
}

+ (id)iTunesMetadataPlistForApplication:(id)arg1;
+ (_Bool)_wasInstalledByConfigurator:(id)arg1;
+ (_Bool)shouldAttemptToRepairApplication:(id)arg1 options:(id)arg2 logUUID:(id)arg3;
- (void).cxx_destruct;
- (_Bool)_handleVPPRecoveryWithOutError:(id *)arg1;
- (_Bool)repairApplication:(id)arg1 error:(id *)arg2;
- (void)setRepairedBundleIDs:(id)arg1;
@property(readonly, nonatomic) NSArray *repairedBundleIDs; // @synthesize repairedBundleIDs=_repairedBundleIDs;
@property(retain, nonatomic) NSString *logUUID; // @synthesize logUUID=_logUUID;
@property(nonatomic) __weak id <ApplicationRepairDelegate> delegate; // @synthesize delegate=_delegate;
- (id)initWithApplication:(id)arg1 options:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

