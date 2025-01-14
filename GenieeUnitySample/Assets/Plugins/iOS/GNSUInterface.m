#import "GNSURewardVideoAd.h"
#import "GNSUFullscreenInterstitialAd.h"
#import "GNSUTypes.h"
#import "GNSUObjectCache.h"

static NSString *GNSUStringFromUTF8String(const char *bytes) { return bytes ? @(bytes) : nil; }

GNSUTypeRewardVideoAdRef GNSUCreateRewardVideoAd(GNSUTypeRewardVideoAdClientRef *rewardVideoAdClient) {
  GNSURewardVideoAd *rewardVideoAd = [[GNSURewardVideoAd alloc]initWithRewardVideoClientReference:rewardVideoAdClient];
  GNSUObjectCache *cache = [GNSUObjectCache sharedInstance];
  [cache.references setObject:rewardVideoAd forKey:[rewardVideoAd gnsu_referenceKey]];
  return (__bridge GNSUTypeRewardVideoAdRef)rewardVideoAd;
}

BOOL GNSURewardVideoAdCanShow(GNSUTypeRewardVideoAdRef rewardVideo) {
  GNSURewardVideoAd *internalRewardVideoAd = (__bridge GNSURewardVideoAd *)rewardVideo;
  return [internalRewardVideoAd canShow];
}

void GNSURewardVideoAdShow(GNSUTypeRewardVideoAdRef rewardVideo) {
  GNSURewardVideoAd *internalRewardVideoAd = (__bridge GNSURewardVideoAd *)rewardVideo;
  [internalRewardVideoAd show];
}

void GNSURewardVideoAdLoadRequest(GNSUTypeRewardVideoAdRef rewardVideo, const char *zoneId, BOOL isRTB) {
  GNSURewardVideoAd *internalRewardVideoAd = (__bridge GNSURewardVideoAd *)rewardVideo;
    [internalRewardVideoAd loadAd:GNSUStringFromUTF8String(zoneId) isRTB:isRTB];
}

void GNSURewardVideoAdCallbacks(
  GNSUTypeRewardVideoAdRef rewardVideo,
  GNSURewardVideoAdDidReceiveAdCallback rewardVideoAdDidReceiveAdCallback,
  GNSURewardVideoAdDidStartPlayingCallback rewardVideoAdDidStartPlayingCallback,
  GNSURewardVideoAdCallback rewardVideoAdCallback,
  GNSURewardVideoAdDidCloseCallback rewardVideoAdDidCloseCallback,
  GNSURewardVideoAdErrorCallback rewardVideoAdErrorCallback) {
  GNSURewardVideoAd *internalRewardVideoAd = (__bridge GNSURewardVideoAd *)rewardVideo;
  internalRewardVideoAd.rewardVideoAdDidReceiveAdCallback = rewardVideoAdDidReceiveAdCallback;
  internalRewardVideoAd.rewardVideoAdDidStartPlayingCallback = rewardVideoAdDidStartPlayingCallback;
  internalRewardVideoAd.rewardVideoAdCallback = rewardVideoAdCallback;
  internalRewardVideoAd.rewardVideoAdDidCloseCallback = rewardVideoAdDidCloseCallback;
  internalRewardVideoAd.rewardVideoAdErrorCallback = rewardVideoAdErrorCallback;
}

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
