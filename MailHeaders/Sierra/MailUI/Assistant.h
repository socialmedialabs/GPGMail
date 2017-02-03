//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

//#import "NSObject.h"

@class NSButton, NSString, NSView;

@interface Assistant : NSObject
{
    id <AssistantDelegate> _delegate;	// 8 = 0x8
    NSView *_parentView;	// 16 = 0x10
    NSButton *_backButton;	// 24 = 0x18
    NSButton *_forwardButton;	// 32 = 0x20
    NSButton *_cancelButton;	// 40 = 0x28
}

@property(readonly, nonatomic) NSButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(readonly, nonatomic) NSButton *forwardButton; // @synthesize forwardButton=_forwardButton;
@property(readonly, nonatomic) NSButton *backButton; // @synthesize backButton=_backButton;
@property(readonly, nonatomic) NSView *parentView; // @synthesize parentView=_parentView;
@property(nonatomic) __weak id <AssistantDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;	// IMP=0x00000001000d2bc8
- (void)setupKeyViewLoop;	// IMP=0x00000001000d2b51
@property(readonly, copy, nonatomic) NSString *windowTitle;
- (void)weAreDone;	// IMP=0x00000001000d2ae6
@property(readonly, nonatomic) BOOL shouldStop;
- (void)goBackward;	// IMP=0x00000001000d2ad5
- (void)goForward;	// IMP=0x00000001000d2acf
- (void)stop;	// IMP=0x00000001000d2ac9
- (void)start;	// IMP=0x00000001000d2ac3
- (id)init;	// IMP=0x00000001000d29f4
- (id)initWithAssistantManager:(id)arg1;	// IMP=0x00000001000d28e8

@end
