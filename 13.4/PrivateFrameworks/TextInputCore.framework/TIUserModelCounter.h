//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSNumber, NSString;

@interface TIUserModelCounter : NSObject
{
    unsigned long long _persisted;
    unsigned long long _current;
    NSString *_name;
    NSDate *_creationDate;
    NSDate *_lastUpdateDate;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSDate *lastUpdateDate; // @synthesize lastUpdateDate=_lastUpdateDate;
@property(readonly, nonatomic) NSDate *creationDate; // @synthesize creationDate=_creationDate;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
- (void)add:(int)arg1;
@property(readonly, nonatomic) NSNumber *count;
- (void)doPersist:(id)arg1 forDate:(id)arg2;
- (id)initWithName:(id)arg1 initialCount:(id)arg2 creationDate:(id)arg3 lastUpdateDate:(id)arg4;
- (id)initWithName:(id)arg1;

@end

