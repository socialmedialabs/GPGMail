//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

//#import "NSObject.h"

#import "MFMessageConsumer.h"
#import "MFQueryProgressMonitor.h"

@class NSArray, NSMutableArray, NSString;

@interface _MFMessageCollector : NSObject <MFMessageConsumer, MFQueryProgressMonitor>
{
    NSMutableArray *_messages;	// 8 = 0x8
    BOOL _didCancel;	// 16 = 0x10
}

@property(nonatomic) BOOL didCancel; // @synthesize didCancel=_didCancel;
- (void).cxx_destruct;	// IMP=0x0000000000140e8f
- (void)finishedSendingMessages;	// IMP=0x0000000000140e68
@property(readonly) BOOL shouldCancel;
- (void)newMessagesAvailable:(id)arg1 secondaryMessages:(id)arg2 options:(id)arg3;	// IMP=0x0000000000140ddd
@property(readonly, copy, nonatomic) NSArray *messages;
- (id)init;	// IMP=0x0000000000140d65

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
