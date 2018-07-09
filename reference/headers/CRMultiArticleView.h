//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CRHeaderArticleView, NSMutableArray;

@interface CRMultiArticleView : UIView
{
    CRHeaderArticleView *_headerArticleView;
    NSMutableArray *_itemArticleViewArray;
    CDUnknownBlockType _articleClickHandler;
    CDUnknownBlockType _articleLongClickHandler;
}

@property(copy, nonatomic) CDUnknownBlockType articleLongClickHandler; // @synthesize articleLongClickHandler=_articleLongClickHandler;
@property(copy, nonatomic) CDUnknownBlockType articleClickHandler; // @synthesize articleClickHandler=_articleClickHandler;
@property(retain, nonatomic) NSMutableArray *itemArticleViewArray; // @synthesize itemArticleViewArray=_itemArticleViewArray;
@property(retain, nonatomic) CRHeaderArticleView *headerArticleView; // @synthesize headerArticleView=_headerArticleView;
- (void).cxx_destruct;
- (void)contentLongClick:(id)arg1;
- (void)contentClick:(id)arg1;
- (void)clearViews;
- (void)contentWithArticles:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
