//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SpringBoardUIServices/SBUIRemoteAlertServiceViewController.h>

#import "VOTUIItemChooserDelegate-Protocol.h"

@class NSDictionary, VOTUIItemChooserController;

@interface AXSBVOTItemChooserRootViewController : SBUIRemoteAlertServiceViewController <VOTUIItemChooserDelegate>
{
    _Bool _itemChooserActivate;
    VOTUIItemChooserController *_itemChooserController;
    NSDictionary *_items;
    long long _itemChooserSelectedIndex;
}

+ (_Bool)_isSecureForRemoteViewService;
- (void).cxx_destruct;
@property(nonatomic) _Bool itemChooserActivate; // @synthesize itemChooserActivate=_itemChooserActivate;
@property(nonatomic) long long itemChooserSelectedIndex; // @synthesize itemChooserSelectedIndex=_itemChooserSelectedIndex;
@property(retain, nonatomic) NSDictionary *items; // @synthesize items=_items;
@property(retain, nonatomic) VOTUIItemChooserController *itemChooserController; // @synthesize itemChooserController=_itemChooserController;
- (_Bool)_canShowWhileLocked;
- (_Bool)accessibilityPostScreenChangedForChildViewController:(id)arg1 isAddition:(_Bool)arg2;
- (void)itemChooser:(id)arg1 didSelectItemAtIndex:(long long)arg2 activate:(_Bool)arg3;
- (void)_setupRemoteProxy;
- (void)_dismiss;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)configureWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)prepareForActivationWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end

