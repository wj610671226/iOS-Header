//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AVFoundation/AVKVOIntrospection-Protocol.h>
#import <AVFoundation/AVKVONotifier-Protocol.h>

@class AVCallbackContextRegistry, NSString;

__attribute__((visibility("hidden")))
@interface AVClientBlockKVONotifier : NSObject <AVKVONotifier, AVKVOIntrospection>
{
    AVCallbackContextRegistry *_callbackContextRegistry;
    void *_callbackContextToken;
    NSObject *_observer;
    NSObject *_object;
    NSString *_keyPath;
    unsigned long long _options;
    CDUnknownBlockType _block;
}

- (void)cancelCallbacks;
- (void)callbackDidFireWithChangeDictionary:(id)arg1;
- (void)start;
@property(readonly, nonatomic) NSObject *observedObject;
- (void)dealloc;
- (id)initWithCallbackContextRegistry:(id)arg1 observer:(id)arg2 object:(id)arg3 keyPath:(id)arg4 options:(unsigned long long)arg5 block:(CDUnknownBlockType)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

