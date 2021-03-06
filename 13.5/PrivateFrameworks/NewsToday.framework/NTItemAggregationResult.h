//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsToday/NSCopying-Protocol.h>

@class NSArray, NSDictionary, NSSet;

@interface NTItemAggregationResult : NSObject <NSCopying>
{
    NSDictionary *_aggregatedItemsBySectionDescriptor;
    NSSet *_itemIDsOfLeadingCells;
    NSDictionary *_slotAllocationByDynamicSlotItemID;
    NSArray *_unusedSectionDescriptors;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSArray *unusedSectionDescriptors; // @synthesize unusedSectionDescriptors=_unusedSectionDescriptors;
@property(copy, nonatomic) NSDictionary *slotAllocationByDynamicSlotItemID; // @synthesize slotAllocationByDynamicSlotItemID=_slotAllocationByDynamicSlotItemID;
@property(copy, nonatomic) NSSet *itemIDsOfLeadingCells; // @synthesize itemIDsOfLeadingCells=_itemIDsOfLeadingCells;
@property(copy, nonatomic) NSDictionary *aggregatedItemsBySectionDescriptor; // @synthesize aggregatedItemsBySectionDescriptor=_aggregatedItemsBySectionDescriptor;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithAggregatedItemsBySectionDescriptor:(id)arg1 itemIDsOfLeadingCells:(id)arg2 slotAllocationByDynamicSlotItemID:(id)arg3 unusedSectionDescriptors:(id)arg4;
- (id)init;

@end

