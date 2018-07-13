@import Foundation;

#import <GNAdSDK/GNSRewardVideoAd.h>
#import <GNAdSDK/GNSRequest.h>
#import <GNAdSDK/GNSAdReward.h>
#import <GNAdSDK/GNSRewardVideoAdDelegate.h>

#import "GNSUTypes.h"

@interface GNSURewardVideoAd : NSObject

- (instancetype)initWithRewardVideoClientReference:
    (GNSUTypeRewardVideoAdClientRef *)rewardVideoAdClient;

@property(nonatomic, assign) GNSUTypeRewardVideoAdClientRef *rewardVideoAdClient;
@property(nonatomic, assign) GNSURewardVideoAdDidReceiveAdCallback rewardVideoAdDidReceiveAdCallback;
@property(nonatomic, assign) GNSURewardVideoAdDidStartPlayingCallback rewardVideoAdDidStartPlayingCallback;
@property(nonatomic, assign) GNSURewardVideoAdCallback rewardVideoAdCallback;
@property(nonatomic, assign) GNSURewardVideoAdDidCloseCallback rewardVideoAdDidCloseCallback;
@property(nonatomic, assign) GNSURewardVideoAdErrorCallback rewardVideoAdErrorCallback;

- (BOOL) canShow;

- (void) show;

- (void) loadAd:(NSString *)zoneId;
@end
