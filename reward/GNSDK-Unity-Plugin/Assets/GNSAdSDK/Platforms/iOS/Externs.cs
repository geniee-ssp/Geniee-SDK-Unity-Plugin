#if (UNITY_5 && UNITY_IOS) || UNITY_IPHONE
using System;
using System.Runtime.InteropServices;
namespace GNSAdSDK.iOS
{
  internal class Externs {

    [DllImport("__Internal")]
    internal static extern IntPtr GNSUCreateRewardVideoAd(IntPtr rewardVideoAdClient);

    [DllImport("__Internal")]
    internal static extern void GNSURewardVideoAdCallbacks(
      IntPtr rewardVideoAd,
      RewardVideoAdClientImpl.GNSURewardVideoAdDidReceiveAdCallback rewardVideoAdDidReceiveAdCallback,
      RewardVideoAdClientImpl.GNSURewardVideoAdDidStartPlayingCallback rewardVideoAdDidStartPlayingCallback,
      RewardVideoAdClientImpl.GNSURewardVideoAdCallback rewardVideoAdCallback,
      RewardVideoAdClientImpl.GNSURewardVideoAdDidCloseCallback rewardVideoAdDidCloseCallback,
      RewardVideoAdClientImpl.GNSURewardVideoAdErrorCallback rewardVideoAdErrorCallback);

    [DllImport("__Internal")]
    internal static extern void GNSURelease(IntPtr rewardVideoAd);

    [DllImport("__Internal")]
    internal static extern void GNSURewardVideoAdLoadRequest(IntPtr rewardVideoAd, string zoneId);

    [DllImport("__Internal")]
    internal static extern bool GNSURewardVideoAdCanShow(IntPtr rewardVideoAd);

    [DllImport("__Internal")]
    internal static extern void GNSURewardVideoAdShow(IntPtr rewardVideoAd);
  }
}
#endif
