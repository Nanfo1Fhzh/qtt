//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class MLLink, MLLinkLabel, NSString;

@protocol MLLinkLabelDelegate <NSObject>
- (void)didClickLink:(MLLink *)arg1 linkText:(NSString *)arg2 linkLabel:(MLLinkLabel *)arg3;

@optional
- (void)didLongPressLink:(MLLink *)arg1 linkText:(NSString *)arg2 linkLabel:(MLLinkLabel *)arg3;
@end
