//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <OfficeImport/OCXReader.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface EXReader : OCXReader
{
    NSString *mTemporaryDirectory;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *temporaryDirectory; // @synthesize temporaryDirectory=mTemporaryDirectory;
- (id)defaultPassphrase;
- (id)read;

@end

