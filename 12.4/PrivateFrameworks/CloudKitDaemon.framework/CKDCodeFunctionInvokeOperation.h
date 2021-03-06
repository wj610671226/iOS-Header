//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudKitDaemon/CKDDatabaseOperation.h>

@class CKDProtocolTranslator, NSArray, NSData, NSString;

__attribute__((visibility("hidden")))
@interface CKDCodeFunctionInvokeOperation : CKDDatabaseOperation
{
    _Bool _local;
    _Bool _shouldFetchAssetContentInMemory;
    CDUnknownBlockType _replaceLocalSerializationsBlobs;
    CDUnknownBlockType _initialResponseReceivedCallback;
    CDUnknownBlockType _replaceWireSerializations;
    CDUnknownBlockType _recordFetchCompletionBlock;
    CDUnknownBlockType _recordFetchProgressBlock;
    CDUnknownBlockType _recordFetchCommandBlock;
    NSString *_serviceName;
    NSString *_functionName;
    NSArray *_requestLocalSerializations;
    NSArray *_requestRecords;
    NSData *_serializedArguments;
    NSData *_serializedResponse;
    NSArray *_responseRecords;
    CKDProtocolTranslator *_translator;
}

+ (long long)isPredominatelyDownload;
@property(retain, nonatomic) CKDProtocolTranslator *translator; // @synthesize translator=_translator;
@property(copy, nonatomic) NSArray *responseRecords; // @synthesize responseRecords=_responseRecords;
@property(copy, nonatomic) NSData *serializedResponse; // @synthesize serializedResponse=_serializedResponse;
@property(copy, nonatomic) NSData *serializedArguments; // @synthesize serializedArguments=_serializedArguments;
@property(copy, nonatomic) NSArray *requestRecords; // @synthesize requestRecords=_requestRecords;
@property(nonatomic) _Bool shouldFetchAssetContentInMemory; // @synthesize shouldFetchAssetContentInMemory=_shouldFetchAssetContentInMemory;
@property(nonatomic) _Bool local; // @synthesize local=_local;
@property(copy, nonatomic) NSArray *requestLocalSerializations; // @synthesize requestLocalSerializations=_requestLocalSerializations;
@property(readonly, copy, nonatomic) NSString *functionName; // @synthesize functionName=_functionName;
@property(readonly, copy, nonatomic) NSString *serviceName; // @synthesize serviceName=_serviceName;
@property(copy, nonatomic) CDUnknownBlockType recordFetchCommandBlock; // @synthesize recordFetchCommandBlock=_recordFetchCommandBlock;
@property(copy, nonatomic) CDUnknownBlockType recordFetchProgressBlock; // @synthesize recordFetchProgressBlock=_recordFetchProgressBlock;
@property(copy, nonatomic) CDUnknownBlockType recordFetchCompletionBlock; // @synthesize recordFetchCompletionBlock=_recordFetchCompletionBlock;
@property(copy, nonatomic) CDUnknownBlockType replaceWireSerializations; // @synthesize replaceWireSerializations=_replaceWireSerializations;
@property(copy, nonatomic) CDUnknownBlockType initialResponseReceivedCallback; // @synthesize initialResponseReceivedCallback=_initialResponseReceivedCallback;
@property(copy, nonatomic) CDUnknownBlockType replaceLocalSerializationsBlobs; // @synthesize replaceLocalSerializationsBlobs=_replaceLocalSerializationsBlobs;
- (void).cxx_destruct;
- (void)main;
- (void)_postflightRecords;
- (void)_getDeserializedRecords;
- (void)_invokeLocalFunction;
- (void)_invokeFunction;
- (void)_getSerializedRequest;
- (void)_preflightRecords;
- (id)nameForState:(unsigned long long)arg1;
- (_Bool)makeStateTransition;
- (id)activityCreate;
- (id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2;

@end

