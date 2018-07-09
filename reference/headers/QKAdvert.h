//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QKBaseContentModel.h"

#import "LCTableViewRowData-Protocol.h"

@class BaiduMobAdNativeAdObject, NSAttributedString, NSIndexPath, NSString, QKAdsNativeAdObject, UIFont;

@interface QKAdvert : QKBaseContentModel <LCTableViewRowData>
{
    _Bool _is_first_page;
    _Bool _report;
    _Bool _right_model_bottom_layout;
    int _iLoad;
    int _loadedTime;
    CDUnknownBlockType _completion;
    long long _row;
    NSString *_cmd;
    long long _s;
    long long _pos;
    NSString *_sloId;
    NSString *_origin_sloId;
    NSString *_appId;
    NSString *_type;
    long long _ad_source;
    long long _flag;
    NSString *_index;
    NSString *_cid;
    NSString *_page;
    UIFont *_titleFont;
    NSString *_op;
    NSString *_desc;
    NSString *_tips;
    long long _imageType;
    BaiduMobAdNativeAdObject *_baiduAdObject;
    QKAdsNativeAdObject *_adObject;
    double _titleHeight;
    NSAttributedString *_attributedTitle;
    NSString *_error_desc;
    struct CGPoint _touch_down_point;
    struct CGPoint _touch_up_point;
    struct CGSize _touch_up_size;
}

+ (id)advertWithModel:(id)arg1;
@property(copy, nonatomic) NSString *error_desc; // @synthesize error_desc=_error_desc;
@property(nonatomic) _Bool right_model_bottom_layout; // @synthesize right_model_bottom_layout=_right_model_bottom_layout;
@property(retain, nonatomic) NSAttributedString *attributedTitle; // @synthesize attributedTitle=_attributedTitle;
@property(nonatomic) struct CGSize touch_up_size; // @synthesize touch_up_size=_touch_up_size;
@property(nonatomic) struct CGPoint touch_up_point; // @synthesize touch_up_point=_touch_up_point;
@property(nonatomic) struct CGPoint touch_down_point; // @synthesize touch_down_point=_touch_down_point;
@property(nonatomic) double titleHeight; // @synthesize titleHeight=_titleHeight;
@property(retain, nonatomic) QKAdsNativeAdObject *adObject; // @synthesize adObject=_adObject;
@property(retain, nonatomic) BaiduMobAdNativeAdObject *baiduAdObject; // @synthesize baiduAdObject=_baiduAdObject;
@property(nonatomic) _Bool report; // @synthesize report=_report;
@property(nonatomic) int loadedTime; // @synthesize loadedTime=_loadedTime;
@property(nonatomic) int iLoad; // @synthesize iLoad=_iLoad;
@property(nonatomic) long long imageType; // @synthesize imageType=_imageType;
@property(copy, nonatomic) NSString *tips; // @synthesize tips=_tips;
@property(copy, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(copy, nonatomic) NSString *op; // @synthesize op=_op;
@property(retain, nonatomic) UIFont *titleFont; // @synthesize titleFont=_titleFont;
@property(nonatomic) _Bool is_first_page; // @synthesize is_first_page=_is_first_page;
@property(copy, nonatomic) NSString *page; // @synthesize page=_page;
@property(copy, nonatomic) NSString *cid; // @synthesize cid=_cid;
@property(copy, nonatomic) NSString *index; // @synthesize index=_index;
@property(nonatomic) long long flag; // @synthesize flag=_flag;
@property(nonatomic) long long ad_source; // @synthesize ad_source=_ad_source;
@property(copy, nonatomic) NSString *type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *appId; // @synthesize appId=_appId;
@property(copy, nonatomic) NSString *origin_sloId; // @synthesize origin_sloId=_origin_sloId;
@property(copy, nonatomic) NSString *sloId; // @synthesize sloId=_sloId;
@property(nonatomic) long long pos; // @synthesize pos=_pos;
@property(nonatomic) long long s; // @synthesize s=_s;
@property(copy, nonatomic) NSString *cmd; // @synthesize cmd=_cmd;
@property(nonatomic) long long row; // @synthesize row=_row;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
- (void).cxx_destruct;
- (double)content_pic_bottom;
- (double)content_commpent_bottom;
- (_Bool)layout_base_on_pic;
- (struct CGSize)titleSize;
- (id)videoAttributedTitle;
- (struct CGSize)textSizeWithFont:(id)arg1 numberOfLines:(long long)arg2 lineSpacing:(double)arg3 constrainedWidth:(double)arg4 isLimitedToLines:(_Bool)arg5;
- (double)rowHeight;
- (void)getImageType;
- (id)cellKey;
- (_Bool)isLoaded;
- (_Bool)isLoadFinish;
- (_Bool)isExpired:(long long)arg1;
- (void)unloadAdThing;
- (void)loadAdThingFrom:(id)arg1;
- (id)initWithAttribute:(id)arg1;
- (id)reusableIdentifier;
- (Class)cellClass;
- (double)cellRowHeight;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) NSIndexPath *indexPath;
@property(nonatomic) SEL rowAction;
@property(readonly) Class superclass;

@end
