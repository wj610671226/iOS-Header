//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MDLTexture, MDLTextureFilter, MDLTransform;

@interface MDLTextureSampler : NSObject
{
    MDLTexture *texture;
    MDLTextureFilter *hardwareFilter;
    MDLTransform *transform;
    unsigned long long mappingChannel;
    long long textureComponents;
}

- (void).cxx_destruct;
@property(nonatomic) long long textureComponents; // @synthesize textureComponents;
@property(nonatomic) unsigned long long mappingChannel; // @synthesize mappingChannel;
@property(retain, nonatomic) MDLTransform *transform; // @synthesize transform;
@property(retain, nonatomic) MDLTextureFilter *hardwareFilter; // @synthesize hardwareFilter;
@property(retain, nonatomic) MDLTexture *texture; // @synthesize texture;
- (id)init;

@end

