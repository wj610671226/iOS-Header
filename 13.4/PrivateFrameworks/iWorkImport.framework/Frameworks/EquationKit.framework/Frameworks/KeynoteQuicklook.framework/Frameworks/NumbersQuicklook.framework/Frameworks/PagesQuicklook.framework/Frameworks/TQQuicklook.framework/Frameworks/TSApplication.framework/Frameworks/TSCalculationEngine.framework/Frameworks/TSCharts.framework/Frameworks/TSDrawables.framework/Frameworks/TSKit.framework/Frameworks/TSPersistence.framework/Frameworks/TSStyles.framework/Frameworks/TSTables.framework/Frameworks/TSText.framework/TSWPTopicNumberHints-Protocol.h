//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TSText/NSCopying-Protocol.h>
#import <TSText/NSObject-Protocol.h>

@class NSDictionary, NSObject, TSWPListStyle;
@protocol TSWPTopicNumberHints;

@protocol TSWPTopicNumberHints <NSObject, NSCopying>
- (NSDictionary *)entries;
- (unsigned long long)previousCharIndexForList:(TSWPListStyle *)arg1 level:(unsigned long long)arg2;
- (unsigned long long)nextTopicNumberForList:(TSWPListStyle *)arg1 level:(unsigned long long)arg2;
- (_Bool)isEquivalentStateToTopicNumberHints:(NSObject<TSWPTopicNumberHints> *)arg1;
- (unsigned long long)charIndexValidThrough;
- (unsigned long long)charIndex;
@end

