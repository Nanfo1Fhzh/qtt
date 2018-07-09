//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class QKContentModel, UIButton, UIImageView, UILabel;

@interface QKNextVideoTitleView : UIView
{
    _Bool _isFullScreen;
    _Bool _isHor;
    QKContentModel *_model;
    CDUnknownBlockType _nextBtnClickBlock;
    UIImageView *_bgImageView;
    UILabel *_titleLabel;
    UIButton *_clickBtn;
}

+ (id)nextVideoTitleView;
@property(retain, nonatomic) UIButton *clickBtn; // @synthesize clickBtn=_clickBtn;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *bgImageView; // @synthesize bgImageView=_bgImageView;
@property(nonatomic) _Bool isHor; // @synthesize isHor=_isHor;
@property(nonatomic) _Bool isFullScreen; // @synthesize isFullScreen=_isFullScreen;
@property(copy, nonatomic) CDUnknownBlockType nextBtnClickBlock; // @synthesize nextBtnClickBlock=_nextBtnClickBlock;
@property(retain, nonatomic) QKContentModel *model; // @synthesize model=_model;
- (void).cxx_destruct;
- (void)clikBtnClick:(id)arg1;
- (void)makeLayout;
- (void)setup;
- (id)init;
- (void)layoutSubviews;
- (void)configureWithIsFullScreen:(_Bool)arg1;
- (void)showWithAnimation;

@end
