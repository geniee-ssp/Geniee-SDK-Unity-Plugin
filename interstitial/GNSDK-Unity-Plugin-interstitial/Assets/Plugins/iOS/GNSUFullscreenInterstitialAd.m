#import "GNSUFullscreenInterstitialAd.h"

@import CoreGraphics;
@import UIKit;

#import "UnityAppController.h"

@interface GNSUFullscreenInterstitialAd () <GNSFullscreenInterstitialAdDelegate>
@end

@implementation GNSUFullscreenInterstitialAd

+ (UIViewController *)unityGLViewController {
  UnityAppController *applicationDelegate = [UIApplication sharedApplication].delegate;
  return applicationDelegate.rootViewController;
}

- (instancetype)initWithFullscreenInterstitialClientReference:
  (GNSUTypeFullscreenInterstitialAdClientRef *)fullscreenInterstitialAdClient {
  self = [super init];
  if (self) {
    _fullscreenInterstitialAdClient = fullscreenInterstitialAdClient;
    [GNSFullscreenInterstitialAd sharedInstance].delegate = self;
  }
  return self;
}

- (void)dealloc {
  [GNSFullscreenInterstitialAd sharedInstance].delegate = nil;
}

- (void)loadAd:(NSString *)zoneId {
  GNSRequest *request = [GNSRequest request];
  [[GNSFullscreenInterstitialAd sharedInstance] loadRequest:request withZoneID:zoneId];
}

- (void)show {
  [[GNSFullscreenInterstitialAd sharedInstance] show:[GNSUFullscreenInterstitialAd unityGLViewController]];
}

- (BOOL)canShow {
  return [[GNSFullscreenInterstitialAd sharedInstance] canShow];
}

- (void)fullscreenInterstitialDidReceiveAd:(GNSFullscreenInterstitialAd *)fullscreenInterstitialAd {
  self.fullscreenInterstitialAdDidReceiveAdCallback(self.fullscreenInterstitialAdClient);
}

- (void)fullscreenInterstitialWillPresentScreen:(GNSFullscreenInterstitialAd *)fullscreenInterstitialAd {
  self.fullscreenInterstitialWillPresentScreenCallback(self.fullscreenInterstitialAdClient);
}

- (void)fullscreenInterstitialAdDidClose:(GNSFullscreenInterstitialAd *)fullscreenInterstitialAd {
  self.fullscreenInterstitialAdDidCloseCallback(self.fullscreenInterstitialAdClient);
}

- (void)fullscreenInterstitial:(GNSFullscreenInterstitialAd *)fullscreenInterstitialAd
  didFailToLoadWithError:(NSError *)error {
  self.fullscreenInterstitialAdErrorCallback(self.fullscreenInterstitialAdClient, (int)error.code, [error.localizedDescription cStringUsingEncoding:NSUTF8StringEncoding]);
}
@end
