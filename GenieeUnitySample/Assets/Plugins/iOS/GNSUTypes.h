typedef const void *GNSUTypeRef;
typedef const void *GNSUTypeRewardVideoAdClientRef;
typedef const void *GNSUTypeRewardVideoAdRef;

typedef void (*GNSURewardVideoAdDidReceiveAdCallback)(GNSUTypeRewardVideoAdClientRef *rewardVideoClient);
typedef void (*GNSURewardVideoAdDidStartPlayingCallback)(GNSUTypeRewardVideoAdClientRef *rewardVideoClient);
typedef void (*GNSURewardVideoAdCallback)(GNSUTypeRewardVideoAdClientRef *rewardVideoClient, const char* rewardType, double rewardAmount);
typedef void (*GNSURewardVideoAdDidCloseCallback)(GNSUTypeRewardVideoAdClientRef *rewardVideoClient);
typedef void (*GNSURewardVideoAdErrorCallback)(GNSUTypeRewardVideoAdClientRef *rewardVideoClient, int errorCode, const char* errorDescription);

typedef const void *GNSUTypeFullscreenInterstitialAdClientRef;
typedef const void *GNSUTypeFullscreenInterstitialAdRef;

typedef void (*GNSUFullscreenInterstitialAdDidReceiveAdCallback)(GNSUTypeFullscreenInterstitialAdClientRef *fullscreenInterstitialClient);
typedef void (*GNSUFullscreenInterstitialAdWillPresentScreenCallback)(GNSUTypeFullscreenInterstitialAdClientRef *fullscreenInterstitialClient);
typedef void (*GNSUFullscreenInterstitialAdDidCloseCallback)(GNSUTypeFullscreenInterstitialAdClientRef *fullscreenInterstitialClient);
typedef void (*GNSUFullscreenInterstitialAdErrorCallback)(GNSUTypeFullscreenInterstitialAdClientRef *fullscreenInterstitialClient, int errorCode, const char* errorDescription);

