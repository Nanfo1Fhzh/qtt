//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "LCBaseModel.h"

@class NSString;

@interface HtmlEntity : LCBaseModel
{
    NSString *_title;
    NSString *_body;
    NSString *_css;
    NSString *_js;
}

@property(retain, nonatomic) NSString *js; // @synthesize js=_js;
@property(retain, nonatomic) NSString *css; // @synthesize css=_css;
@property(retain, nonatomic) NSString *body; // @synthesize body=_body;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;

@end
