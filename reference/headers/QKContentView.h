//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QKView.h"

@class SDTimeLineCellModel, UIImageView, UILabel;

@interface QKContentView : QKView
{
    UIImageView *_imageView;
    UILabel *_textLabel;
    SDTimeLineCellModel *_model;
}

@property(retain, nonatomic) SDTimeLineCellModel *model; // @synthesize model=_model;
@property(retain, nonatomic) UILabel *textLabel; // @synthesize textLabel=_textLabel;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
- (void).cxx_destruct;
- (void)getContent:(id)arg1;
- (void)update:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
