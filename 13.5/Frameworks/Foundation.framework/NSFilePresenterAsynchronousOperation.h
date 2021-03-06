//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSOperation.h>

__attribute__((visibility("hidden")))
@interface NSFilePresenterAsynchronousOperation : NSOperation
{
    CDUnknownBlockType _block;
    _Bool _isFinished;
    _Bool _isExecuting;
}

+ (id)operationWithBlock:(CDUnknownBlockType)arg1;
- (void)finish;
- (_Bool)isFinished;
- (_Bool)isExecuting;
- (_Bool)isAsynchronous;
- (void)start;

@end

