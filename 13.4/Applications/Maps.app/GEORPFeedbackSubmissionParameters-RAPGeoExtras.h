//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <GeoServices/GEORPFeedbackSubmissionParameters.h>

@interface GEORPFeedbackSubmissionParameters (RAPGeoExtras)
- (_Bool)isPersonalizedMapsFeedback;
- (_Bool)isTransitFeedback;
- (_Bool)isDirectionsFeedback;
- (void)_insertImageIdIntoMuninContext:(id)arg1;
- (void)_insertImageIdIntoCommonCorrections:(id)arg1;
- (void)_insertImageIdIntoMapViewContext:(id)arg1;
- (void)_insertOverviewDirectionsImageId:(id)arg1;
- (void)_insertDirectionStepCommentId:(id)arg1 withMatchingPhoto:(id)arg2;
- (void)_insertDirectionStepImageId:(id)arg1 withMatchingPhoto:(id)arg2;
- (void)appendServerImageId:(id)arg1 withMatchingPhoto:(id)arg2;
- (void)setFeedbackType;
- (void)addDirectionsContextWithReport:(id)arg1 recording:(id)arg2;
@end

