//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class HKHeartRateSummary, HKQuantitySample, NTKHeartRateQueryManager;

@protocol NTKHeartRateQueryObserver
- (void)manager:(NTKHeartRateQueryManager *)arg1 receivedLatestHeartRateSample:(HKQuantitySample *)arg2;

@optional
- (void)manager:(NTKHeartRateQueryManager *)arg1 receivedLatestHeartRateSummary:(HKHeartRateSummary *)arg2;
@end

