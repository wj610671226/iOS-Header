//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CLKUIAlmanacTransitInfo, CLLocation, NSArray, NSCalendar, NSDate, NSOrderedSet, NSString;
@protocol NTKSiderealDataSourceDelegate;

@interface NTKSiderealDataSource : NSObject
{
    float _altitudes[361];
    NSDate *_startOfDayForReferenceDate;
    NSDate *_endOfDayForReferenceDate;
    NSOrderedSet *_daytimeEvents;
    NSString *_locationManagerToken;
    NSCalendar *_currentCalendar;
    NSDate *_cachedDate;
    NSDate *_cachedStartOfDay;
    NSDate *_cachedStartOfNextDay;
    _Bool _isConstantSunUpOrDown;
    id <NTKSiderealDataSourceDelegate> _delegate;
    CLKUIAlmanacTransitInfo *_sunriseSunsetInfo;
    NSDate *_referenceDate;
    CLLocation *_referenceLocation;
    NSOrderedSet *_solarEvents;
    NSOrderedSet *_sectors;
    NSArray *_waypoints;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isConstantSunUpOrDown; // @synthesize isConstantSunUpOrDown=_isConstantSunUpOrDown;
@property(retain, nonatomic) NSArray *waypoints; // @synthesize waypoints=_waypoints;
@property(retain, nonatomic) NSOrderedSet *sectors; // @synthesize sectors=_sectors;
@property(retain, nonatomic) NSOrderedSet *solarEvents; // @synthesize solarEvents=_solarEvents;
@property(retain, nonatomic) CLLocation *referenceLocation; // @synthesize referenceLocation=_referenceLocation;
@property(retain, nonatomic) NSDate *referenceDate; // @synthesize referenceDate=_referenceDate;
@property(retain, nonatomic) CLKUIAlmanacTransitInfo *sunriseSunsetInfo; // @synthesize sunriseSunsetInfo=_sunriseSunsetInfo;
@property(nonatomic) __weak id <NTKSiderealDataSourceDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)date:(id)arg1 isBetweenDate:(id)arg2 andDate:(id)arg3;
- (long long)_endOfDayEventFollowingSolarEvent:(long long)arg1;
- (long long)_startOfDayEventPreceedingFirstSolarEvent:(long long)arg1;
- (double)reverseInterpolateBetweenCalendricalMidnights:(id)arg1;
- (id)interpolateBetweenCalendricalMidnights:(double)arg1;
- (_Bool)isDateInReferenceDate:(id)arg1;
- (CDStruct_869f9c67)altitudeForProgress:(double)arg1;
- (_Bool)_didLocationChangeSignificantlyFromOldLocation:(id)arg1 toNewLocation:(id)arg2;
- (void)_locationManagerUpdatedLocation:(id)arg1 error:(id)arg2;
- (void)ensureLocation:(id)arg1;
- (void)stopLocationUpdates;
- (void)startLocationUpdates;
- (id)_placeholderSolarEvents;
- (id)_allAvailableSolarEvents;
- (id)_eventWithType:(long long)arg1 time:(id)arg2;
- (void)_notifyDataDidUpdate;
- (void)_updateData;
- (void)_updateWaypoints;
- (void)_updateSolarSectors;
- (void)_updateDayEvents;
- (void)_updateSolarEvents;
- (void)updateForSignificantTimeChange;
- (void)updateForTimeZoneChange;
- (void)updateModelWithDate:(id)arg1;
- (CDStruct_c3b9c2ee)_geoLocationForReferenceLocation;
- (void)_loadStartEndDates;
- (id)daytimeEvents;
- (double)_solarPercentageToDegree:(double)arg1;
- (id)init;

@end

