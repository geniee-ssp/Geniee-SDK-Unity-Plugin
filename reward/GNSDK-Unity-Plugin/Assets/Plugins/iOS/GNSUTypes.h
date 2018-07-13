typedef const void *GNSUTypeRef;
typedef const void *GNSUTypeRewardVideoAdClientRef;
typedef const void *GNSUTypeRewardVideoAdRef;

typedef void (*GNSURewardVideoAdDidReceiveAdCallback)(GNSUTypeRewardVideoAdClientRef *rewardVideoClient);
typedef void (*GNSURewardVideoAdDidStartPlayingCallback)(GNSUTypeRewardVideoAdClientRef *rewardVideoClient);
typedef void (*GNSURewardVideoAdCallback)(GNSUTypeRewardVideoAdClientRef *rewardVideoClient, const char* rewardType, double rewardAmount);
typedef void (*GNSURewardVideoAdDidCloseCallback)(GNSUTypeRewardVideoAdClientRef *rewardVideoClient);
typedef void (*GNSURewardVideoAdErrorCallback)(GNSUTypeRewardVideoAdClientRef *rewardVideoClient, int errorCode, const char* errorDescription);
