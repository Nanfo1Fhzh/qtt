//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSThread.h>

@class NSString;

@interface JPUSHThread : NSThread
{
    unsigned int _hasThreadName:1;
    NSString *threadName;
    unsigned int _hasThread:1;
    NSThread *myThread;
    unsigned int _hasType:1;
    unsigned long long _type;
    NSString *_threadName;
}

+ (id)builderWithPrototype:(id)arg1;
+ (id)builder:(unsigned long long)arg1;
+ (id)defaultAliveModeInstance;
+ (id)defaultNormalModeInstance;
+ (void)aliveModeinitialize;
+ (void)normalModeInitialize;
@property unsigned long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (void)clientThreadMain;
- (void)close;
- (void)closeMySelf;
- (void)invokeMethodWithTarget:(id)arg1 withSEL:(SEL)arg2 withArguments:(id)arg3;
- (_Bool)isEqual:(id)arg1;
- (id)toBuilder;
- (id)builder:(unsigned long long)arg1;
- (_Bool)isInitialized;
- (id)defaultAliveModeInstance;
- (id)defaultNormalModeInstance;
- (void)setHasType:(_Bool)arg1;
- (_Bool)hasType;
- (void)setHasThreadName:(_Bool)arg1;
- (_Bool)hasThreadName;
@property(retain) NSString *threadName; // @dynamic threadName;
- (id)initWithRunLoopMode:(unsigned long long)arg1;

@end

