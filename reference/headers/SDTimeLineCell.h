//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class NSIndexPath, QKContentModel, QKContentView, SDTimeLineCellCommentView, SDTimeLineCellModel, UIButton, UIImageView, UILabel, UIView;
@protocol SDTimeLineCellDelegate;

@interface SDTimeLineCell : UITableViewCell
{
    UIImageView *_iconView;
    UILabel *_nameLable;
    _Bool _shouldOpenContentLabel;
    UILabel *_countLabel;
    UIButton *_likeButton;
    UIButton *_goodCommentButton;
    UIView *_line;
    UIButton *_allButton;
    id <SDTimeLineCellDelegate> _delegate;
    SDTimeLineCellModel *_model;
    QKContentModel *_contentModel;
    NSIndexPath *_indexPath;
    UILabel *_timeLabel;
    SDTimeLineCellCommentView *_commentView;
    UILabel *_contentLabel;
    QKContentView *_refContent;
    CDUnknownBlockType _moreButtonClickedBlock;
    CDUnknownBlockType _didClickCommentLabelBlock;
}

@property(copy, nonatomic) CDUnknownBlockType didClickCommentLabelBlock; // @synthesize didClickCommentLabelBlock=_didClickCommentLabelBlock;
@property(copy, nonatomic) CDUnknownBlockType moreButtonClickedBlock; // @synthesize moreButtonClickedBlock=_moreButtonClickedBlock;
@property(retain, nonatomic) QKContentView *refContent; // @synthesize refContent=_refContent;
@property(retain, nonatomic) UILabel *contentLabel; // @synthesize contentLabel=_contentLabel;
@property(retain, nonatomic) SDTimeLineCellCommentView *commentView; // @synthesize commentView=_commentView;
@property(retain, nonatomic) UILabel *timeLabel; // @synthesize timeLabel=_timeLabel;
@property(retain, nonatomic) NSIndexPath *indexPath; // @synthesize indexPath=_indexPath;
@property(retain, nonatomic) QKContentModel *contentModel; // @synthesize contentModel=_contentModel;
@property(retain, nonatomic) SDTimeLineCellModel *model; // @synthesize model=_model;
@property(nonatomic) __weak id <SDTimeLineCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)resetCommitHighlightState;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)gotoComment;
- (void)showContent;
- (void)report;
- (void)comment:(id)arg1;
- (void)like;
- (void)freeze;
- (void)remove;
- (void)ensconce;
- (_Bool)canBecomeFirstResponder;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (void)showMenu:(id)arg1;
- (void)moreButtonClicked;
- (void)doLikeAnimation:(id)arg1;
- (void)likeAction:(id)arg1;
- (void)updateLikeUIStatusWith:(_Bool)arg1;
- (void)setLike:(id)arg1;
- (void)setDataInit;
- (id)allButton;
- (id)nameLable;
- (id)goodCommentButton;
- (id)countLabel;
- (id)likeButton;
- (id)iconView;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)dealloc;

@end

