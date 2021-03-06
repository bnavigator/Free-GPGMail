//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WebView.h"

@interface TilingWebView : WebView
{
    BOOL _disableSizeToFit;	// 160 = 0xa0
    double _leftMargin;	// 168 = 0xa8
    double _minHeight;	// 176 = 0xb0
}

@property(nonatomic) double minHeight; // @synthesize minHeight=_minHeight;
@property(nonatomic) double leftMargin; // @synthesize leftMargin=_leftMargin;
@property(nonatomic) BOOL disableSizeToFit; // @synthesize disableSizeToFit=_disableSizeToFit;
- (void)sizeToFit;	// IMP=0x000000010030dbc1
- (void)_tilingWebViewCommonInit;	// IMP=0x000000010030db8d
- (id)initWithCoder:(id)arg1;	// IMP=0x000000010030db48
- (id)initWithFrame:(struct CGRect)arg1 frameName:(id)arg2 groupName:(id)arg3;	// IMP=0x000000010030dab7

@end

