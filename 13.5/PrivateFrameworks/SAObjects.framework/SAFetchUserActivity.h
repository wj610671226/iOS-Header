//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSString;

@interface SAFetchUserActivity : SABaseClientBoundCommand
{
}

+ (id)fetchUserActivityWithDictionary:(id)arg1 context:(id)arg2;
+ (id)fetchUserActivity;
- (_Bool)requiresResponse;
@property(copy, nonatomic) NSString *internalGUID;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

