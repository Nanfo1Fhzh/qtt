//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSMutableDictionary;

@interface LCSystem : NSObject
{
    NSMutableDictionary *_services;
    NSArray *_serviceIdBlackList;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSArray *serviceIdBlackList; // @synthesize serviceIdBlackList=_serviceIdBlackList;
@property(retain, nonatomic) NSMutableDictionary *services; // @synthesize services=_services;
- (void).cxx_destruct;
- (void)clearAllServices;
- (void)removeServiceWithIdentifier:(id)arg1;
- (_Bool)containServiceWithIdentifier:(id)arg1;
- (id)serviceWithIdentifier:(id)arg1;
- (void)addService:(id)arg1;
- (id)init;

@end

