//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CalDAV/CalDAVOperation.h>

#import <CalDAV/CoreDAVContainerInfoSyncProvider-Protocol.h>
#import <CalDAV/CoreDAVContainerInfoTaskGroupDelegate-Protocol.h>
#import <CalDAV/CoreDAVPropPatchTaskDelegate-Protocol.h>
#import <CalDAV/CoreDAVTaskGroupDelegate-Protocol.h>

@class NSError, NSMutableDictionary, NSMutableSet, NSObject, NSString;
@protocol CalDAVCalendarPropertyRefreshDelegate, OS_dispatch_group;

@interface CalDAVCalendarPropertyRefreshOperation : CalDAVOperation <CoreDAVContainerInfoTaskGroupDelegate, CoreDAVContainerInfoSyncProvider, CoreDAVPropPatchTaskDelegate, CoreDAVTaskGroupDelegate>
{
    NSError *_savedError;
    NSMutableDictionary *_ctags;
    NSMutableDictionary *_syncTokens;
    NSMutableDictionary *_pathToLocalCalendar;
    NSMutableSet *_localCalendarsWithNoPath;
    NSMutableSet *_updatedCalendars;
    _Bool _didFinish;
    _Bool _didMakeCalendars;
    _Bool _isSecondRefresh;
    int _nextCalendarOrder;
    _Bool _useCalendarHomeSyncReport;
    _Bool _forceClearCalendarHomeSyncToken;
    NSString *_calendarHomeSyncToken;
    NSObject<OS_dispatch_group> *_outstandingTasksGroup;
}

@property(nonatomic) _Bool forceClearCalendarHomeSyncToken; // @synthesize forceClearCalendarHomeSyncToken=_forceClearCalendarHomeSyncToken;
@property(retain, nonatomic) NSObject<OS_dispatch_group> *outstandingTasksGroup; // @synthesize outstandingTasksGroup=_outstandingTasksGroup;
@property(retain, nonatomic) NSString *calendarHomeSyncToken; // @synthesize calendarHomeSyncToken=_calendarHomeSyncToken;
@property(nonatomic) _Bool useCalendarHomeSyncReport; // @synthesize useCalendarHomeSyncReport=_useCalendarHomeSyncReport;
- (void).cxx_destruct;
- (void)containerInfoSyncTask:(id)arg1 completedWithNewSyncToken:(id)arg2 error:(id)arg3;
- (void)containerInfoSyncTask:(id)arg1 retrievedAddedOrModifiedContainers:(id)arg2 removedContainerURLs:(id)arg3;
- (void)containerInfoTask:(id)arg1 completedWithContainers:(id)arg2 error:(id)arg3;
- (void)_getDefaultCalendarsTasksIfNeededForPrincipal:(id)arg1;
- (id)_getDefaultMkCalendarForPrincipalTaskGroup:(id)arg1 isEventCalendar:(_Bool)arg2;
- (void)_continueHandleContainerInfoTask:(id)arg1 completedWithContainers:(id)arg2 error:(id)arg3;
- (_Bool)_handleUpdateForCalendar:(id)arg1;
- (void)_initializePrincipalCalendarCache;
- (id)_getMkcalendarTaskGroupForCalendar:(id)arg1;
- (id)_generateTimeZoneString:(id)arg1;
- (id)_getSetPropertyStringTask:(id)arg1 forName:(id)arg2 andNamespace:(id)arg3 atURL:(id)arg4;
- (int)_sharingStatusForContainer:(id)arg1;
- (void)refreshCalendarProperties;
- (void)_sendShareActionTasks;
- (void)_prepareCalendarsBeforeRefresh;
- (void)_handleCalendarPublish;
- (void)_sendAddsForCalendars;
- (void)_sendDeletesForCalendars;
- (void)_reallyRefreshCalendarProperties;
- (void)_finishRefresh;
- (id)initWithPrincipal:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(nonatomic) id <CalDAVCalendarPropertyRefreshDelegate> delegate; // @dynamic delegate;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

