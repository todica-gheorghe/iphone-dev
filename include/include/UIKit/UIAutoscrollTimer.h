/*
 *     Generated by class-dump 3.1.1.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2006 by Steve Nygard.
 */

#import "NSObject.h"

@class NSTimer;

@interface UIAutoscrollTimer : NSObject
{
    id m_target;
    struct CGPoint m_point;
    int m_directions;
    float m_delta;
    NSTimer *m_timer;
}

- (void)dealloc;	// IMP=0x3246cc70
- (float)delta;	// IMP=0x3246ccfc
- (int)directions;	// IMP=0x3246ccf4
- (id)initWithTarget:(id)fp8 point:(struct CGPoint)fp12 directions:(int)fp20 repeatInterval:(double)fp24;	// IMP=0x3246cab8
- (void)invalidate;	// IMP=0x3246cd3c
- (struct CGPoint)point;	// IMP=0x3246cce4
- (void)timerFired:(id)fp8;	// IMP=0x3246cddc

@end
