//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewLayout.h>

@interface LUIUserGridViewLayout : UICollectionViewLayout
{
}

- (double)contentViewTopEdgeInsetForCollectionViewFrame:(struct CGRect)arg1 contentHeight:(double)arg2;
- (struct UIEdgeInsets)edgeInsetsForCollectionViewFrame:(struct CGRect)arg1 layoutInfo:(id)arg2;
- (id)layoutInfoForItemCount:(unsigned long long)arg1;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;
- (_Bool)shouldInvalidateLayoutForBoundsChange:(struct CGRect)arg1;
- (struct CGSize)collectionViewContentSize;
- (void)prepareLayout;

@end

