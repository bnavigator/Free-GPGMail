//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

//#import "NSEnumerator.h"

@interface _MFMailboxEnumerator : NSEnumerator
{
    struct __CFTree *_startTree;
    struct __CFTree *_lastTree;
}

- (id)nextObject;
- (void)dealloc;
- (id)init;
- (id)initWithTree:(struct __CFTree *)arg1;

@end

