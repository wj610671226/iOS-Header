//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface DMFPrioritizedPolicy : NSObject
{
    long long _priority;
    long long _policy;
}

+ (id)prioritizedPoliciesForAppPolicy:(id)arg1 bundleIdentifier:(id)arg2 categoryPolicy:(id)arg3 categoryIdentifier:(id)arg4 webPolicy:(id)arg5 webDomains:(id)arg6;
+ (long long)arbitratePolicyForPrioritizedPolicies:(id)arg1;
@property(nonatomic) long long policy; // @synthesize policy=_policy;
@property(nonatomic) long long priority; // @synthesize priority=_priority;
- (long long)compare:(id)arg1;
- (id)initWithEffectivePolicy:(id)arg1 identifier:(id)arg2;

@end

