//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NLDataProvider, NLNumberGenerator, NSMutableData;

__attribute__((visibility("hidden")))
@interface NLDataEnumerator : NSObject
{
    NLDataProvider *_dataProvider;
    unsigned long long _idx;
    NLNumberGenerator *_generator;
    NSMutableData *_shuffleData;
}

- (void).cxx_destruct;
- (void)shuffle;
@property(readonly) unsigned long long index;
@property(readonly, retain) NLDataProvider *dataProvider;
- (void)rewindAndShuffle:(_Bool)arg1;
- (void)rewind;
- (id)instanceAtIndex:(unsigned long long)arg1;
- (id)nextInstance;
- (id)initWithDataProvider:(id)arg1;
- (id)initWithDataProvider:(id)arg1 numberGenerator:(id)arg2;

@end

