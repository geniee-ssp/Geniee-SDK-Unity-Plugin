#import "GNSUFullscreenInterstitialAd.h"
#import "GNSUTypes.h"
#import "GNSUObjectCache.h"

static NSString *GNSUStringFromUTF8String(const char *bytes) { return bytes ? @(bytes) : nil; }

GNSUTypeFullscreenInterstitialAdRef GNSUCreateFullscreenInterstitialAd(GNSUTypeFullscreenInterstitialAdClientRef *fullscreenInterstitialAdClient) {
  GNSUFullscreenInterstitialAd *fullscreenInterstitialAd = [[GNSUFullscreenInterstitialAd alloc]initWithFullscreenInterstitialClientReference:fullscreenInterstitialAdClient];
  GNSUObjectCache *cache = [GNSUObjectCache sharedInstance];
  [cache.references setObject:fullscreenInterstitialAd forKey:[fullscreenInterstitialAd gnsu_referenceKey]];
  return (__bridge GNSUTypeFullscreenInterstitialAdRef)fullscreenInterstitialAd;
}

BOOL GNSUFullscreenInterstitialAdCanShow(GNSUTypeFullscreenInterstitialAdRef fullscreenInterstitial) {
  GNSUFullscreenInterstitialAd *internalFullscreenInterstitialAd = (__bridge GNSUFullscreenInterstitialAd *)fullscreenInterstitial;
  return [internalFullscreenInterstitialAd canShow];
}

void GNSUFullscreenInterstitialAdShow(GNSUTypeFullscreenInterstitialAdRef fullscreenInterstitial) {
  GNSUFullscreenInterstitialAd *internalFullscreenInterstitialAd = (__bridge GNSUFullscreenInterstitialAd *)fullscreenInterstitial;
  [internalFullscreenInterstitialAd show];
}

void GNSUFullscreenInterstitialAdLoadRequest(GNSUTypeFullscreenInterstitialAdRef fullscreenInterstitial, const char *zoneId) {
  GNSUFullscreenInterstitialAd *internalFullscreenInterstitialAd = (__bridge GNSUFullscreenInterstitialAd *)fullscreenInterstitial;
  [internalFullscreenInterstitialAd loadAd:GNSUStringFromUTF8String(zoneId)];
}

void GNSUFullscreenInterstitialAdCallbacks(
  GNSUTypeFullscreenInterstitialAdRef fullscreenInterstitial,
  GNSUFullscreenInterstitialAdDidReceiveAdCallback fullscreenInterstitialAdDidReceiveAdCallback,
  GNSUFullscreenInterstitialAdWillPresentScreenCallback fullscreenInterstitialAdWillPresentScreenCallback,
  GNSUFullscreenInterstitialAdDidCloseCallback fullscreenInterstitialAdDidCloseCallback,
  GNSUFullscreenInterstitialAdErrorCallback fullscreenInterstitialAdErrorCallback) {
  GNSUFullscreenInterstitialAd *internalFullscreenInterstitialAd = (__bridge GNSUFullscreenInterstitialAd *)fullscreenInterstitial;
  internalFullscreenInterstitialAd.fullscreenInterstitialAdDidReceiveAdCallback = fullscreenInterstitialAdDidReceiveAdCallback;
  internalFullscreenInterstitialAd.fullscreenInterstitialWillPresentScreenCallback = fullscreenInterstitialAdWillPresentScreenCallback;
  internalFullscreenInterstitialAd.fullscreenInterstitialAdDidCloseCallback = fullscreenInterstitialAdDidCloseCallback;
  internalFullscreenInterstitialAd.fullscreenInterstitialAdErrorCallback = fullscreenInterstitialAdErrorCallback;
}

void GNSURelease(GNSUTypeRef ref) {
  if (ref) {
    GNSUObjectCache *cache = [GNSUObjectCache sharedInstance];
    [cache.references removeObjectForKey:[(__bridge NSObject *)ref gnsu_referenceKey]];
  }
}
