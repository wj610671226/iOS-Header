//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKit/_HMAccessoryProfile.h>

@class NSSet;
@protocol _HMNetworkRouterProfileDelegate;

__attribute__((visibility("hidden")))
@interface _HMNetworkRouterProfile : _HMAccessoryProfile
{
    _Bool _satellite;
    unsigned long long _networkStatus;
    NSSet *_identifiersForSatelliteProfiles;
    id <_HMNetworkRouterProfileDelegate> _delegate;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) __weak id <_HMNetworkRouterProfileDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)handleRuntimeStateUpdate:(id)arg1;
- (void)_handleNetworkStatusUpdated:(id)arg1;
- (void)__handleNetworkStatusUpdated:(id)arg1;
- (void)_handleSatelliteProfilesUpdated:(id)arg1;
- (_Bool)checkForUpdatedNetworkStatus:(unsigned long long)arg1;
- (_Bool)checkForUpdatedIdentifiersForSatellites:(id)arg1;
- (id)messageReceiveQueue;
- (id)messageDestination;
- (id)messageTargetUUID;
- (void)setIdentifiersForSatelliteProfiles:(id)arg1;
@property(readonly) NSSet *identifiersForSatelliteProfiles; // @synthesize identifiersForSatelliteProfiles=_identifiersForSatelliteProfiles;
- (void)setSatellite:(_Bool)arg1;
@property(readonly, getter=isSatellite) _Bool satellite; // @synthesize satellite=_satellite;
- (void)setNetworkStatus:(unsigned long long)arg1;
@property(readonly) unsigned long long networkStatus; // @synthesize networkStatus=_networkStatus;
- (void)_registerNotificationHandlers;

@end

