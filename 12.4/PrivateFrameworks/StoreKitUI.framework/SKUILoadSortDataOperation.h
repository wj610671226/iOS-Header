//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <StoreKitUI/SKUILoadResourceOperation.h>

@class SKUISortDataRequest, SSVLoadURLOperation;

@interface SKUILoadSortDataOperation : SKUILoadResourceOperation
{
    SSVLoadURLOperation *_underlyingOperation;
}

@property __weak SSVLoadURLOperation *underlyingOperation; // @synthesize underlyingOperation=_underlyingOperation;
- (void).cxx_destruct;
- (void)cancel;
- (void)main;
- (id)initWithResourceRequest:(id)arg1;

// Remaining properties
@property(readonly, copy) SKUISortDataRequest *resourceRequest; // @dynamic resourceRequest;

@end

