//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface StepItem : NSObject
{
    int _status;
    NSString *_key;
    double _request_time;
    double _response_time;
    double _terminal_time;
}

+ (id)startWithKey:(id)arg1;
+ (id)stepWithKey:(id)arg1;
@property(nonatomic) int status; // @synthesize status=_status;
@property(nonatomic) double terminal_time; // @synthesize terminal_time=_terminal_time;
@property(nonatomic) double response_time; // @synthesize response_time=_response_time;
@property(nonatomic) double request_time; // @synthesize request_time=_request_time;
@property(retain, nonatomic) NSString *key; // @synthesize key=_key;
- (void).cxx_destruct;
- (_Bool)isEnd;
- (unsigned int)parse_duration;
- (unsigned int)req_duration;
- (unsigned int)duration;
- (id)initWithDic:(id)arg1;

@end
