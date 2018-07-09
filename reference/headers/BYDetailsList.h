//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIScrollView.h>

@class BYListItem, NSMutableArray, UIView;

@interface BYDetailsList : UIScrollView
{
    NSMutableArray *_topView;
    NSMutableArray *_bottomView;
    NSMutableArray *_listAll;
    CDUnknownBlockType _longPressedBlock;
    CDUnknownBlockType _opertionFromItemBlock;
    UIView *_sectionHeaderView;
    NSMutableArray *_allItems;
    BYListItem *_itemSelect;
}

@property(retain, nonatomic) BYListItem *itemSelect; // @synthesize itemSelect=_itemSelect;
@property(retain, nonatomic) NSMutableArray *allItems; // @synthesize allItems=_allItems;
@property(retain, nonatomic) UIView *sectionHeaderView; // @synthesize sectionHeaderView=_sectionHeaderView;
@property(copy, nonatomic) CDUnknownBlockType opertionFromItemBlock; // @synthesize opertionFromItemBlock=_opertionFromItemBlock;
@property(copy, nonatomic) CDUnknownBlockType longPressedBlock; // @synthesize longPressedBlock=_longPressedBlock;
@property(retain, nonatomic) NSMutableArray *listAll; // @synthesize listAll=_listAll;
@property(retain, nonatomic) NSMutableArray *bottomView; // @synthesize bottomView=_bottomView;
@property(retain, nonatomic) NSMutableArray *topView; // @synthesize topView=_topView;
- (void).cxx_destruct;
- (void)setSelectedChannel:(id)arg1;
- (void)itemRespondFromListBarClickWithItemName:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
