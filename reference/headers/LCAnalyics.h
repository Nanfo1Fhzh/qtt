//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDate, NSDictionary, NSMutableArray, NSMutableDictionary;

@interface LCAnalyics : NSObject
{
    NSDate *_startTime;
    NSDate *_endTime;
    NSDate *_activeStartTime;
    NSDate *_activeEndTime;
    NSMutableDictionary *_displayItems;
    NSMutableArray *_outputs;
    NSMutableArray *_memoryEvents;
    NSDictionary *_appAwakeInfo;
    NSDictionary *_appAwakeInfoForReadTime;
}

+ (id)sharedInstance;
@property(copy, nonatomic) NSDictionary *appAwakeInfoForReadTime; // @synthesize appAwakeInfoForReadTime=_appAwakeInfoForReadTime;
@property(copy, nonatomic) NSDictionary *appAwakeInfo; // @synthesize appAwakeInfo=_appAwakeInfo;
@property(retain, nonatomic) NSMutableArray *memoryEvents; // @synthesize memoryEvents=_memoryEvents;
@property(retain, nonatomic) NSMutableArray *outputs; // @synthesize outputs=_outputs;
@property(retain, nonatomic) NSMutableDictionary *displayItems; // @synthesize displayItems=_displayItems;
@property(retain, nonatomic) NSDate *activeEndTime; // @synthesize activeEndTime=_activeEndTime;
@property(retain, nonatomic) NSDate *activeStartTime; // @synthesize activeStartTime=_activeStartTime;
@property(retain, nonatomic) NSDate *endTime; // @synthesize endTime=_endTime;
@property(retain, nonatomic) NSDate *startTime; // @synthesize startTime=_startTime;
- (void).cxx_destruct;
- (id)getAppAwakeInfoForReadTime;
- (void)cleanAppWakeInfoForReadTime;
- (void)cleanAppAwakeInfo;
- (void)recordAppAwakeInfo:(id)arg1;
- (void)reportReadTimeEventList;
- (void)readTimeEvent:(id)arg1 action:(id)arg2 metric:(id)arg3 info:(id)arg4 cache:(_Bool)arg5;
- (void)readTimeEvent:(id)arg1 action:(id)arg2 metric:(id)arg3 info:(id)arg4;
- (void)setSwitchRedpacket:(_Bool)arg1;
- (void)eventInfo:(id)arg1;
- (void)batchEvent:(id)arg1;
- (void)event:(id)arg1;
- (void)event:(id)arg1 action:(id)arg2 metric:(id)arg3 info:(id)arg4;
- (void)event:(id)arg1 action:(id)arg2 metric:(id)arg3;
- (void)eventForShareActionWithType:(id)arg1;
- (void)eventForShareBottomWithType:(id)arg1;
- (void)setDisplayItems:(id)arg1 padding:(double)arg2;
- (void)activeEnd;
- (void)activeStart;
- (void)resignActive;
- (void)becomeActive;
- (void)background;
- (void)foreground;
- (void)end;
- (void)start;
- (id)init;

@end
