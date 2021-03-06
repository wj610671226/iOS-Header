//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class EKCalendarNotification, EKEventStore, EKObjectID, NSDate;

@interface EKCalendarNotificationReference : NSObject
{
    NSDate *_date;
    EKEventStore *_eventStore;
    EKCalendarNotification *_notification;
    int _type;
    EKObjectID *_objectID;
}

@property(readonly, nonatomic) EKObjectID *objectID; // @synthesize objectID=_objectID;
@property(readonly, nonatomic) int type; // @synthesize type=_type;
- (void).cxx_destruct;
- (id)description;
- (long long)_notificationTypeForResourceChange:(id)arg1 notificationType:(int)arg2;
@property(readonly, nonatomic) EKCalendarNotification *notification;
- (id)initWithType:(int)arg1 objectID:(id)arg2 eventStore:(id)arg3;
- (id)initWithType:(int)arg1 objectID:(id)arg2 date:(id)arg3 eventStore:(id)arg4;

@end

