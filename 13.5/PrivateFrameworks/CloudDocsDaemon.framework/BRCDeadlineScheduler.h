//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CloudDocsDaemon/BRCLifeCycle-Protocol.h>
#import <CloudDocsDaemon/BRCSuspendable-Protocol.h>

@class BRCFairScheduler, BRCFairSource, BRCMinHeap, NSString;
@protocol OS_dispatch_queue, OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface BRCDeadlineScheduler : NSObject <BRCLifeCycle, BRCSuspendable>
{
    NSObject<OS_dispatch_queue> *_queue;
    BRCMinHeap *_minHeap;
    NSString *_name;
    BRCFairSource *_source;
    NSObject<OS_dispatch_source> *_delay;
    long long _leeway;
    long long _lastSchedule;
    _Bool _isResumed;
    BRCFairScheduler *_fairScheduler;
    _Bool _isCancelled;
    CDUnknownBlockType _computeNextAdmissibleDateForScheduling;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) BRCFairScheduler *fairScheduler; // @synthesize fairScheduler=_fairScheduler;
@property(readonly, nonatomic) _Bool isCancelled; // @synthesize isCancelled=_isCancelled;
@property(copy, nonatomic) CDUnknownBlockType computeNextAdmissibleDateForScheduling; // @synthesize computeNextAdmissibleDateForScheduling=_computeNextAdmissibleDateForScheduling;
@property(nonatomic) long long coalescingLeeway; // @synthesize coalescingLeeway=_leeway;
- (void)dealloc;
- (void)close;
- (void)_close;
- (void)cancel;
- (void)resume;
- (void)suspend;
- (void)addSource:(id)arg1 deadline:(long long)arg2;
- (void)_schedule;
- (void)runDeadlineSource:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)signal;
- (_Bool)_setupTimerRequiredForDeadline:(long long)arg1 now:(long long)arg2;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
- (id)initWithName:(id)arg1 fairScheduler:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

