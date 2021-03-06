//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <RemoteManagement/RMExtensionStatusPublisherRequestHandling-Protocol.h>

@class NSConditionLock, NSString;
@protocol RMExtensionStatusPublisherRequestHandling;

@interface RMExtensionStatusPublisher : NSObject <RMExtensionStatusPublisherRequestHandling>
{
    NSConditionLock *_requestHandlerLock;
    id <RMExtensionStatusPublisherRequestHandling> _requestHandler;
}

+ (id)sharedPublisher;
- (void).cxx_destruct;
@property(readonly, nonatomic) id <RMExtensionStatusPublisherRequestHandling> requestHandler; // @synthesize requestHandler=_requestHandler;
- (void)queryForStatusWithKeyPaths:(id)arg1 onBehalfOfManagementChannel:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)initWithRequestHandler:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

