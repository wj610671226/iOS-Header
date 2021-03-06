//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "ACXRemoteAppListObserver-Protocol.h"
#import "PSYSyncCoordinatorDelegate-Protocol.h"

@class ACXRemoteAppList, NSString, PSYServiceSyncSession, PSYSyncCoordinator;
@protocol OS_dispatch_queue;

@interface ACXPairedSyncAppStateDelegate : NSObject <PSYSyncCoordinatorDelegate, ACXRemoteAppListObserver>
{
    PSYSyncCoordinator *_coordinator;
    NSObject<OS_dispatch_queue> *_queue;
    PSYServiceSyncSession *_syncSession;
    ACXRemoteAppList *_remoteAppList;
}

+ (id)sharedAppStateSyncDelegate;
- (void).cxx_destruct;
@property(retain, nonatomic) ACXRemoteAppList *remoteAppList; // @synthesize remoteAppList=_remoteAppList;
@property(retain, nonatomic) PSYServiceSyncSession *syncSession; // @synthesize syncSession=_syncSession;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(readonly, nonatomic) PSYSyncCoordinator *coordinator; // @synthesize coordinator=_coordinator;
- (void)resyncCompleted;
- (void)applicationsUpdated:(id)arg1;
- (void)applicationsRemoved:(id)arg1;
- (void)applicationsAdded:(id)arg1;
- (void)_onQueue_triggerSyncSessionCompleteAndRemoveObserver;
- (void)syncCoordinator:(id)arg1 beginSyncSession:(id)arg2;
- (void)supportsMigrationSync;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

