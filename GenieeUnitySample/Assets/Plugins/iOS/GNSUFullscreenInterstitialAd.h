@import Foundation;

#import <GNAdSDK/GNSFullscreenInterstitialAd.h>
#import <GNAdSDK/GNSRequest.h>
#import <GNAdSDK/GNSAdReward.h>
#import <GNAdSDK/GNSFullscreenInterstitialAdDelegate.h>

#import "GNSUTypes.h"

@interface GNSUFullscreenInterstitialAd : NSObject

- (instancetype)initWithFullscreenInterstitialClientReference:
    (GNSUTypeFullscreenInterstitialAdClientRef *)fullscreenInterstitialAdClient;

@property(nonatomic, assign) GNSUTypeFullscreenInterstitialAdClientRef *fullscreenInterstitialAdClient;
@property(nonatomic, assign) GNSUFullscreenInterstitialAdDidReceiveAdCallback fullscreenInterstitialAdDidReceiveAdCallback;
@property(nonatomic, assign) GNSUFullscreenInterstitialAdWillPresentScreenCallback fullscreenInterstitialWillPresentScreenCallback;
@property(nonatomic, assign) GNSUFullscreenInterstitialAdDidCloseCallback fullscreenInterstitialAdDidCloseCallback;
@property(nonatomic, assign) GNSUFullscreenInterstitialAdErrorCallback fullscreenInterstitialAdErrorCallback;

- (BOOL) canShow;

- (void) show;

- (void) loadAd:(NSString *)zoneId;
@end
