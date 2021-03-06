/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

@protocol NSTextInput
- (id)validAttributesForMarkedText;
- (unsigned long long)characterIndexForPoint:(struct CGPoint)arg1;
- (struct CGRect)firstRectForCharacterRange:(struct _NSRange)arg1;
- (struct _NSRange)selectedRange;
- (struct _NSRange)markedRange;
- (id)attributedSubstringFromRange:(struct _NSRange)arg1;
- (long long)conversationIdentifier;
- (BOOL)hasMarkedText;
- (void)unmarkText;
- (void)setMarkedText:(id)arg1 selectedRange:(struct _NSRange)arg2;
- (void)doCommandBySelector:(SEL)arg1;
- (void)insertText:(id)arg1;
@end

