//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary;

@interface FamilyInfoLookupResult : NSObject
{
    _Bool _cached;
    NSArray *_familyMembers;
}

+ (id)_familyMembersFromDictionaryRepresentation:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *familyMembers; // @synthesize familyMembers=_familyMembers;
@property(readonly, nonatomic, getter=isCached) _Bool cached; // @synthesize cached=_cached;
- (id)description;
@property(readonly, nonatomic) NSDictionary *dictionaryRepresentation;
- (id)initWithDictionaryRepresentation:(id)arg1 cached:(_Bool)arg2;

@end

