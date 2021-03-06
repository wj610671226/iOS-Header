//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MRDExternalDeviceHomeServerRecentlyPlayedEntry, MRDProximityController, NSMutableArray, NSString, NSUserDefaults;

@interface MRDExternalDeviceHomeServer : NSObject
{
    _Bool _sendingPlaybackStateToCompanion;
    MRDExternalDeviceHomeServerRecentlyPlayedEntry *_lastSentEntry;
    NSMutableArray *_entries;
    NSUserDefaults *_userDefaults;
    MRDProximityController *_proximityController;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MRDProximityController *proximityController; // @synthesize proximityController=_proximityController;
@property(nonatomic) _Bool sendingPlaybackStateToCompanion; // @synthesize sendingPlaybackStateToCompanion=_sendingPlaybackStateToCompanion;
@property(retain, nonatomic) NSUserDefaults *userDefaults; // @synthesize userDefaults=_userDefaults;
@property(retain, nonatomic) NSMutableArray *entries; // @synthesize entries=_entries;
@property(retain, nonatomic) MRDExternalDeviceHomeServerRecentlyPlayedEntry *lastSentEntry; // @synthesize lastSentEntry=_lastSentEntry;
- (id)decodeEntries;
- (id)encodeEntries;
- (void)_addEntry:(id)arg1;
- (_Bool)_shouldSendCompanionLinkMessage;
- (void)_maybeSendPlaybackStateMessageToCompanion;
- (void)_handleDidAddPersonalDeviceNotifciation:(id)arg1;
- (void)_maybeMostRecentlyPlayedDeviceChanged:(id)arg1;
- (void)_handleLocalPlaybackBeganNotification:(id)arg1;
@property(readonly, nonatomic) NSString *mostRecentDeviceUID;
- (id)initWithProximityController:(id)arg1;

@end

