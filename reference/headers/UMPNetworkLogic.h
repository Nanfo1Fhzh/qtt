//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface UMPNetworkLogic : NSObject
{
}

+ (id)getCheckNumBy:(id)arg1;
+ (void)postStatisticsWithParams:(id)arg1 Response:(CDUnknownBlockType)arg2;
+ (void)postCardMessageByLabel:(id)arg1 pmode:(id)arg2 params:(id)arg3 Response:(CDUnknownBlockType)arg4;
+ (void)getCardMessageWithLabel:(id)arg1 WithPmode:(id)arg2 Response:(CDUnknownBlockType)arg3;
+ (void)getLaunchMessageWithPmode:(id)arg1 Response:(CDUnknownBlockType)arg2;
+ (void)post:(id)arg1 parameters:(id)arg2 response:(CDUnknownBlockType)arg3;
+ (void)removeAlias:(id)arg1 type:(id)arg2 response:(CDUnknownBlockType)arg3;
+ (void)setAlias:(id)arg1 type:(id)arg2 response:(CDUnknownBlockType)arg3;
+ (void)addAlias:(id)arg1 type:(id)arg2 response:(CDUnknownBlockType)arg3;
+ (void)deleteWeightedTags:(id)arg1 response:(CDUnknownBlockType)arg2;
+ (void)getWeightedTags:(CDUnknownBlockType)arg1;
+ (void)addWeightedTags:(id)arg1 response:(CDUnknownBlockType)arg2;
+ (void)deleteTags:(id)arg1 response:(CDUnknownBlockType)arg2;
+ (void)addTags:(id)arg1 response:(CDUnknownBlockType)arg2;
+ (void)getTags:(CDUnknownBlockType)arg1;
+ (void)sendClickMsgId:(id)arg1 actiontype:(id)arg2 ts:(unsigned long long)arg3;
+ (void)sendToken:(id)arg1 isRegister:(_Bool)arg2;
+ (void)sendLaunch:(id)arg1;
+ (void)sendRegister:(id)arg1;

@end
