//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class WaypointSet;
@protocol GEORouteAttributesBuilder;

@protocol TransportTypeRequestInfoProvider <NSObject>
@property(readonly, nonatomic) unsigned long long maximumRouteCount;
- (void)updateWithRefinedWaypoints:(WaypointSet *)arg1;
- (id <GEORouteAttributesBuilder>)makeRouteAttributesBuilderWithNavigationMode:(unsigned long long)arg1;
@end

