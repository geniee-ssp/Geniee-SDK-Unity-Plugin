#import "GNSURewardVideoAd.h"
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

void GNSURewardVideoAdLoadRequest(GNSUTypeRewardVideoAdRef rewardVideo, const char *zoneId) {
  GNSURewardVideoAd *internalRewardVideoAd = (__bridge GNSURewardVideoAd *)rewardVideo;
  [internalRewardVideoAd loadAd:GNSUStringFromUTF8String(zoneId)];
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

void GNSURelease(GNSUTypeRef ref) {
  if (ref) {
    GNSUObjectCache *cache = [GNSUObjectCache sharedInstance];
    [cache.references removeObjectForKey:[(__bridge NSObject *)ref gnsu_referenceKey]];
  }
}
