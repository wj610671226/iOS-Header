//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Silex/SXVideoAdViewControllerProviding-Protocol.h>

@class NSString, UIViewController;
@protocol SXVideoAdViewControllerProviding;

@interface SXVideoAdViewControllerProvider : NSObject <SXVideoAdViewControllerProviding>
{
    id <SXVideoAdViewControllerProviding> _viewControllerProvider;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) __weak id <SXVideoAdViewControllerProviding> viewControllerProvider; // @synthesize viewControllerProvider=_viewControllerProvider;
@property(readonly, nonatomic) UIViewController *viewControllerForModalPresentation;
- (id)initWithViewControllerProvider:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

