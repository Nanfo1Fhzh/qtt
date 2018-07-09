//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "LCBaseModel.h"

@class NSArray, NSDictionary, NSMutableArray, NSMutableDictionary, NSString, QKAdsSourceNameModel, QKAppStoreScoreRemind, QKPersonTopImg, QKReadConfig, QKScoreRemind, QKTabbarConfig, QKTrackPoint;

@interface QKgloablConfig : LCBaseModel
{
    _Bool _video_auto_enable;
    _Bool _force_message_push;
    _Bool _mine_auth;
    _Bool _interest_collect;
    _Bool _license_force;
    _Bool _ios_content_native;
    _Bool _wemedia_jump_switch;
    _Bool _cpc_switch;
    _Bool _inno_switch;
    _Bool _native_video_switch;
    _Bool _native_article_switch;
    _Bool _h5_content_jump_reload;
    int _show_search;
    int _content_cache_time;
    int _tingYun_enabled;
    int _channel_cache_time;
    int _enable_cache;
    int _card_interval;
    int _ios_wkweb;
    NSString *_register_button;
    NSString *_login_warning;
    NSString *_index_content_type;
    NSString *_comment_tips;
    NSString *_comment_another_tips;
    NSString *_ios_push_tips;
    NSString *_ios_next_push_tips;
    NSDictionary *_video_list_play_enable;
    long long _video_auto_next_time;
    QKPersonTopImg *_personTopImg;
    NSDictionary *_show_like;
    QKTrackPoint *_track_point;
    NSDictionary *_content_type_color;
    QKTabbarConfig *_tabbarConfig;
    NSMutableArray *_cdn_services;
    long long _copy_kouling_login_index;
    long long _ad_report_rate;
    NSArray *_private_domains;
    NSMutableArray *_https;
    NSMutableDictionary *_https_hash;
    long long _wemedia_rank_switch;
    long long _app_store_grade_warn;
    QKReadConfig *_readConfig;
    QKScoreRemind *_remind;
    QKAppStoreScoreRemind *_scoreRemind;
    long long _push_remind_recent;
    long long _push_remind_long;
    NSMutableArray *_share_way;
    NSMutableArray *_unlike;
    NSString *_video_quality;
    NSString *_hobbyTips;
    NSMutableArray *_web_long_press_auth;
    QKAdsSourceNameModel *_adsSource;
    NSString *_search_tips;
    NSDictionary *_preheat_webview;
}

@property(nonatomic) int ios_wkweb; // @synthesize ios_wkweb=_ios_wkweb;
@property(copy, nonatomic) NSDictionary *preheat_webview; // @synthesize preheat_webview=_preheat_webview;
@property(copy, nonatomic) NSString *search_tips; // @synthesize search_tips=_search_tips;
@property(retain, nonatomic) QKAdsSourceNameModel *adsSource; // @synthesize adsSource=_adsSource;
@property(retain, nonatomic) NSMutableArray *web_long_press_auth; // @synthesize web_long_press_auth=_web_long_press_auth;
@property(nonatomic) int card_interval; // @synthesize card_interval=_card_interval;
@property(copy, nonatomic) NSString *hobbyTips; // @synthesize hobbyTips=_hobbyTips;
@property(copy, nonatomic) NSString *video_quality; // @synthesize video_quality=_video_quality;
@property(nonatomic) int enable_cache; // @synthesize enable_cache=_enable_cache;
@property(nonatomic) int channel_cache_time; // @synthesize channel_cache_time=_channel_cache_time;
@property(nonatomic) int tingYun_enabled; // @synthesize tingYun_enabled=_tingYun_enabled;
@property(nonatomic) int content_cache_time; // @synthesize content_cache_time=_content_cache_time;
@property(nonatomic) int show_search; // @synthesize show_search=_show_search;
@property(retain, nonatomic) NSMutableArray *unlike; // @synthesize unlike=_unlike;
@property(retain, nonatomic) NSMutableArray *share_way; // @synthesize share_way=_share_way;
@property(nonatomic) long long push_remind_long; // @synthesize push_remind_long=_push_remind_long;
@property(nonatomic) long long push_remind_recent; // @synthesize push_remind_recent=_push_remind_recent;
@property(retain, nonatomic) QKAppStoreScoreRemind *scoreRemind; // @synthesize scoreRemind=_scoreRemind;
@property(retain, nonatomic) QKScoreRemind *remind; // @synthesize remind=_remind;
@property(retain, nonatomic) QKReadConfig *readConfig; // @synthesize readConfig=_readConfig;
@property(nonatomic) long long app_store_grade_warn; // @synthesize app_store_grade_warn=_app_store_grade_warn;
@property(nonatomic) long long wemedia_rank_switch; // @synthesize wemedia_rank_switch=_wemedia_rank_switch;
@property(nonatomic) _Bool h5_content_jump_reload; // @synthesize h5_content_jump_reload=_h5_content_jump_reload;
@property(nonatomic) _Bool native_article_switch; // @synthesize native_article_switch=_native_article_switch;
@property(nonatomic) _Bool native_video_switch; // @synthesize native_video_switch=_native_video_switch;
@property(nonatomic) _Bool inno_switch; // @synthesize inno_switch=_inno_switch;
@property(nonatomic) _Bool cpc_switch; // @synthesize cpc_switch=_cpc_switch;
@property(nonatomic) _Bool wemedia_jump_switch; // @synthesize wemedia_jump_switch=_wemedia_jump_switch;
@property(nonatomic) _Bool ios_content_native; // @synthesize ios_content_native=_ios_content_native;
@property(nonatomic) _Bool license_force; // @synthesize license_force=_license_force;
@property(nonatomic) _Bool interest_collect; // @synthesize interest_collect=_interest_collect;
@property(nonatomic) _Bool mine_auth; // @synthesize mine_auth=_mine_auth;
@property(nonatomic) _Bool force_message_push; // @synthesize force_message_push=_force_message_push;
@property(retain, nonatomic) NSMutableDictionary *https_hash; // @synthesize https_hash=_https_hash;
@property(retain, nonatomic) NSMutableArray *https; // @synthesize https=_https;
@property(retain, nonatomic) NSArray *private_domains; // @synthesize private_domains=_private_domains;
@property(nonatomic) long long ad_report_rate; // @synthesize ad_report_rate=_ad_report_rate;
@property(nonatomic) long long copy_kouling_login_index; // @synthesize copy_kouling_login_index=_copy_kouling_login_index;
@property(retain, nonatomic) NSMutableArray *cdn_services; // @synthesize cdn_services=_cdn_services;
@property(retain, nonatomic) QKTabbarConfig *tabbarConfig; // @synthesize tabbarConfig=_tabbarConfig;
@property(retain, nonatomic) NSDictionary *content_type_color; // @synthesize content_type_color=_content_type_color;
@property(retain, nonatomic) QKTrackPoint *track_point; // @synthesize track_point=_track_point;
@property(retain, nonatomic) NSDictionary *show_like; // @synthesize show_like=_show_like;
@property(retain, nonatomic) QKPersonTopImg *personTopImg; // @synthesize personTopImg=_personTopImg;
@property(nonatomic) _Bool video_auto_enable; // @synthesize video_auto_enable=_video_auto_enable;
@property(nonatomic) long long video_auto_next_time; // @synthesize video_auto_next_time=_video_auto_next_time;
@property(copy, nonatomic) NSDictionary *video_list_play_enable; // @synthesize video_list_play_enable=_video_list_play_enable;
@property(copy, nonatomic) NSString *ios_next_push_tips; // @synthesize ios_next_push_tips=_ios_next_push_tips;
@property(copy, nonatomic) NSString *ios_push_tips; // @synthesize ios_push_tips=_ios_push_tips;
@property(copy, nonatomic) NSString *comment_another_tips; // @synthesize comment_another_tips=_comment_another_tips;
@property(copy, nonatomic) NSString *comment_tips; // @synthesize comment_tips=_comment_tips;
@property(copy, nonatomic) NSString *index_content_type; // @synthesize index_content_type=_index_content_type;
@property(copy, nonatomic) NSString *login_warning; // @synthesize login_warning=_login_warning;
@property(copy, nonatomic) NSString *register_button; // @synthesize register_button=_register_button;
- (void).cxx_destruct;
- (void)updateConfig:(id)arg1;
- (id)initWithAttribute:(id)arg1 realTime:(_Bool)arg2;
- (id)initWithAttribute:(id)arg1;

@end
