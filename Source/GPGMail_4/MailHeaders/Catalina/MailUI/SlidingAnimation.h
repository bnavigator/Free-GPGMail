//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol SlidingAnimationDelegate;

@interface SlidingAnimation : NSObject
{
    NSMutableDictionary *_views;
    BOOL _isSliding;
    BOOL _isPaused;
    id /*<SlidingAnimationDelegate>*/ _delegate;
}

@property(nonatomic) BOOL isPaused; // @synthesize isPaused=_isPaused;
@property(nonatomic) BOOL isSliding; // @synthesize isSliding=_isSliding;
@property(nonatomic) __weak id /*<SlidingAnimationDelegate>*/ delegate; // @synthesize delegate=_delegate;
//- (void).cxx_destruct;
- (id)_runLoopModesForAnimation;
- (void)resume;
- (void)pause;
- (void)stop;
- (void)stopView:(id)arg1;
- (struct CGRect)destinationForView:(id)arg1;
- (void)_sendViewToDestination:(id)arg1;
- (void)setDestinationForView:(id)arg1 to:(struct CGRect)arg2 duration:(double)arg3;
- (void)_showNextFrame;
- (void)_updateTimer;
- (void)_updateViewPosition:(id)arg1 forTime:(double)arg2;
- (void)dealloc;
- (id)init;

@end

