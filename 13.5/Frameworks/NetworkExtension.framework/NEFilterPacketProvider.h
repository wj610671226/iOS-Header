//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NetworkExtension/NEFilterProvider.h>

@interface NEFilterPacketProvider : NEFilterProvider
{
    CDUnknownBlockType _packetHandler;
}

- (void).cxx_destruct;
@property(copy) CDUnknownBlockType packetHandler; // @synthesize packetHandler=_packetHandler;
- (void)allowPacket:(id)arg1;
- (id)delayCurrentPacket:(id)arg1;

@end

