//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIButton.h>

@class CRInsetsLabel, UIImageView, V5Article;

@interface CRHeaderArticleView : UIButton
{
    CRInsetsLabel *_headerTitle;
    UIImageView *_headerPic;
    V5Article *_article;
}

@property(retain, nonatomic) V5Article *article; // @synthesize article=_article;
@property(retain, nonatomic) UIImageView *headerPic; // @synthesize headerPic=_headerPic;
@property(retain, nonatomic) CRInsetsLabel *headerTitle; // @synthesize headerTitle=_headerTitle;
- (void).cxx_destruct;
- (void)contentWithArticle:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

