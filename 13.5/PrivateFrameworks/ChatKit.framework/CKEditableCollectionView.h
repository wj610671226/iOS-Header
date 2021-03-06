//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionView.h>

@interface CKEditableCollectionView : UICollectionView
{
    _Bool _editing;
    struct UIEdgeInsets _marginInsets;
}

@property(nonatomic, getter=isEditing) _Bool editing; // @synthesize editing=_editing;
@property(nonatomic) struct UIEdgeInsets marginInsets; // @synthesize marginInsets=_marginInsets;
- (struct UIEdgeInsets)safeAreaInsets;
- (void)setEditing:(_Bool)arg1 animated:(_Bool)arg2;
- (id)dequeueReusableCellWithReuseIdentifier:(id)arg1 forIndexPath:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1 collectionViewLayout:(id)arg2;

@end

