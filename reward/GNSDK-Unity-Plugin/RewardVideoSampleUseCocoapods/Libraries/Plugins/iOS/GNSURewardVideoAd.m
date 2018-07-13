#import "GNSURewardVideoAd.h"

@import CoreGraphics;
@import UIKit;

#import "UnityAppController.h"

@interface GNSURewardVideoAd () <GNSRewardVideoAdDelegate>
@end

@implementation GNSURewardVideoAd

+ (UIViewController *)unityGLViewController {
  UnityAppController *applicationDelegate = [UIApplication sharedApplication].delegate;
  return applicationDelegate.rootViewController;
}

- (instancetype)initWithRewardVideoClientReference:
  (GNSUTypeRewardVideoAdClientRef *)rewardVideoAdClient {
  self = [super init];
  if (self) {
    _rewardVideoAdClient = rewardVideoAdClient;
    [GNSRewardVideoAd sharedInstance].delegate = self;
  }
  return self;
}

- (void)dealloc {
  [GNSRewardVideoAd sharedInstance].delegate = nil;
}

- (void)loadAd:(NSString *)zoneId {
  GNSRequest *request = [GNSRequest request];
  [[GNSRewardVideoAd sharedInstance] loadRequest:request withZoneID:zoneId];
}

- (void)show {
  [[GNSRewardVideoAd sharedInstance] show:[GNSURewardVideoAd unityGLViewController]];
}

- (BOOL)canShow {
  return [[GNSRewardVideoAd sharedInstance] canShow];
}

- (void)rewardVideoAdDidReceiveAd:(GNSRewardVideoAd *)rewardVideoAd {
  self.rewardVideoAdDidReceiveAdCallback(self.rewardVideoAdClient);
}

- (void)rewardVideoAdDidStartPlaying:(GNSRewardVideoAd *)rewardVideoAd {
  self.rewardVideoAdDidStartPlayingCallback(self.rewardVideoAdClient);
}

- (void)rewardVideoAdDidClose:(GNSRewardVideoAd *)rewardVideoAd {
  self.rewardVideoAdDidCloseCallback(self.rewardVideoAdClient);
}

- (void)rewardVideoAd:(GNSRewardVideoAd *)rewardVideoAd
  didRewardUserWithReward:(GNSAdReward *)reward {
  self.rewardVideoAdCallback(self.rewardVideoAdClient, [reward.type cStringUsingEncoding:NSUTF8StringEncoding], reward.amount.doubleValue);
}

- (void)rewardVideoAd:(GNSRewardVideoAd *)rewardVideoAd
  didFailToLoadWithError:(NSError *)error {
  self.rewardVideoAdErrorCallback(self.rewardVideoAdClient, (int)error.code, [error.localizedDescription cStringUsingEncoding:NSUTF8StringEncoding]);
}
@end
