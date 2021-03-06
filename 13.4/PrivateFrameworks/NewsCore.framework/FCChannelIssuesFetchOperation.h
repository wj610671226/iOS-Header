//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NewsCore/FCOperation.h>

@class FCCachePolicy, NSArray, NSDictionary;
@protocol FCContentContext;

@interface FCChannelIssuesFetchOperation : FCOperation
{
    FCCachePolicy *_cachePolicy;
    CDUnknownBlockType _fetchCompletionHandler;
    id <FCContentContext> _context;
    NSArray *_channelIDs;
    long long _issueSet;
    NSDictionary *_resultIssuesByChannel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSDictionary *resultIssuesByChannel; // @synthesize resultIssuesByChannel=_resultIssuesByChannel;
@property(nonatomic) long long issueSet; // @synthesize issueSet=_issueSet;
@property(retain, nonatomic) NSArray *channelIDs; // @synthesize channelIDs=_channelIDs;
@property(retain, nonatomic) id <FCContentContext> context; // @synthesize context=_context;
@property(copy, nonatomic) CDUnknownBlockType fetchCompletionHandler; // @synthesize fetchCompletionHandler=_fetchCompletionHandler;
@property(copy, nonatomic) FCCachePolicy *cachePolicy; // @synthesize cachePolicy=_cachePolicy;
- (void)operationWillFinishWithError:(id)arg1;
- (void)performOperation;
- (_Bool)validateOperation;
- (id)initWithContext:(id)arg1 channelIDs:(id)arg2 issueSet:(long long)arg3;
- (id)init;

@end

