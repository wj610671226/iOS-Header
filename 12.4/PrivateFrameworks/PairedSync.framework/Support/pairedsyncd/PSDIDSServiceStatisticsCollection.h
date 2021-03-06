//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSSecureCoding-Protocol.h"

@class NSMutableDictionary, NSString;

@interface PSDIDSServiceStatisticsCollection : NSObject <NSSecureCoding>
{
    NSMutableDictionary *_statistics;
    NSString *_channelName;
}

+ (id)knownChannelNames;
+ (id)statisticsCollectionWithChannelName:(id)arg1 statisticsDictionary:(id)arg2;
+ (_Bool)supportsSecureCoding;
@property(copy, nonatomic) NSString *channelName; // @synthesize channelName=_channelName;
- (void).cxx_destruct;
- (id)description;
- (id)statisticsCollectionByDiffingStatisticsCollection:(id)arg1;
- (void)addServiceStatistics:(id)arg1;
- (id)statisticsForServiceName:(id)arg1;
- (void)enumerateServiceStatisticsWithBlock:(CDUnknownBlockType)arg1;
- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

