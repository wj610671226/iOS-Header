//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <StoreServices/SSMetricsBaseEvent.h>

@class NSString;

@interface SSMetricsSearchEvent : SSMetricsBaseEvent
{
}

@property(retain, nonatomic) NSString *targetURL;
@property(retain, nonatomic) NSString *targetType;
@property(retain, nonatomic) NSString *targetIdentifier;
- (void)setLocationWithEventLocations:(id)arg1;
@property(retain, nonatomic) NSString *searchTerm;
@property(retain, nonatomic) NSString *actionType;
@property(retain, nonatomic) id actionDetails;
- (id)init;

@end

