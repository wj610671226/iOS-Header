//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreData/NSManagedObject.h>

#import <WorkflowKit/WFRecordStorage-Protocol.h>

@class NSData, NSString, WFCoreDataRunEvent, WFCoreDataWorkflow;

@interface WFCoreDataTrigger : NSManagedObject <WFRecordStorage>
{
}

+ (id)fetchRequest;
- (id)trigger;
@property(retain, nonatomic) NSString *workflowID;
- (id)descriptor;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic) _Bool enabled; // @dynamic enabled;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) WFCoreDataRunEvent *runEvents; // @dynamic runEvents;
@property(nonatomic) _Bool shouldPrompt; // @dynamic shouldPrompt;
@property(readonly) Class superclass;
@property(retain, nonatomic) NSData *triggerData; // @dynamic triggerData;
@property(copy, nonatomic) NSString *triggerID; // @dynamic triggerID;
@property(retain, nonatomic) WFCoreDataWorkflow *workflow; // @dynamic workflow;

@end

