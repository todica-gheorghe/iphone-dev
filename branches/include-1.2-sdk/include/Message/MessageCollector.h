/*
 *     Generated by class-dump 3.1.1.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2006 by Steve Nygard.
 */

#import "NSObject.h"

#import "MessageConsumerProtocol.h"

@class NSMutableArray;

@interface MessageCollector : NSObject <MessageConsumer>
{
    NSMutableArray *messages;
}

- (void)dealloc;	// IMP=0x30bae6bd
- (id)init;	// IMP=0x30bae689
- (id)messages;	// IMP=0x30bae6f9
- (void)newMessagesAvailable:(id)fp8;	// IMP=0x30bae71d
- (void)newMessagesAvailable:(id)fp8 ranks:(id)fp12;	// IMP=0x30bae735
- (BOOL)shouldCancel;	// IMP=0x30bae749

@end
