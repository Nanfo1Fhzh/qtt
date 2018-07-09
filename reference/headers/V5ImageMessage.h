//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "V5Message.h"

@class NSString, UIImage;

@interface V5ImageMessage : V5Message
{
    _Bool _isUpload;
    NSString *_picUrl;
    NSString *_mediaId;
    UIImage *_image;
    NSString *_format;
    NSString *_fileName;
}

@property(retain, nonatomic) NSString *fileName; // @synthesize fileName=_fileName;
@property(retain, nonatomic) NSString *format; // @synthesize format=_format;
@property(nonatomic) _Bool isUpload; // @synthesize isUpload=_isUpload;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(retain, nonatomic) NSString *mediaId; // @synthesize mediaId=_mediaId;
@property(retain, nonatomic) NSString *picUrl; // @synthesize picUrl=_picUrl;
- (void).cxx_destruct;
- (id)getMimeType;
- (id)getFileName;
- (id)getImageData;
- (id)toJSONString;
- (id)initWithJSON:(id)arg1;
- (id)initWithImage:(id)arg1;
- (id)initWithPicUrl:(id)arg1 mediaId:(id)arg2;
- (id)init;

@end
