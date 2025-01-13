#if (UNITY_5 && UNITY_IOS) || UNITY_IPHONE
using System;
using System.Runtime.InteropServices;

namespace GNSAdSDK.iOS
{
    internal class Externs
    {
        // Fullscreen Interstitial Ad Methods
        [DllImport("__Internal")]
        internal static extern IntPtr GNSUCreateFullscreenInterstitialAd(IntPtr fullscreenInterstitialAdClient);

        [DllImport("__Internal")]
        internal static extern void GNSUFullscreenInterstitialAdCallbacks(
            IntPtr fullscreenInterstitialAd,
            FullscreenInterstitialAdClientImpl.GNSUFullscreenInterstitialAdDidReceiveAdCallback fullscreenInterstitialAdDidReceiveAdCallback,
            FullscreenInterstitialAdClientImpl.GNSUFullscreenInterstitialAdWillPresentScreenCallback fullscreenInterstitialAdWillPresentScreenCallback,
            FullscreenInterstitialAdClientImpl.GNSUFullscreenInterstitialAdDidCloseCallback fullscreenInterstitialAdDidCloseCallback,
            FullscreenInterstitialAdClientImpl.GNSUFullscreenInterstitialAdErrorCallback fullscreenInterstitialAdErrorCallback
        );

        [DllImport("__Internal")]
        internal static extern void GNSUFullscreenInterstitialAdLoadRequest(IntPtr fullscreenInterstitialAd, string zoneId);

        [DllImport("__Internal")]
        internal static extern bool GNSUFullscreenInterstitialAdCanShow(IntPtr fullscreenInterstitialAd);

        [DllImport("__Internal")]
        internal static extern void GNSUFullscreenInterstitialAdShow(IntPtr fullscreenInterstitialAd);


        // Reward Video Ad Methods
        [DllImport("__Internal")]
        internal static extern IntPtr GNSUCreateRewardVideoAd(IntPtr rewardVideoAdClient);

        [DllImport("__Internal")]
        internal static extern void GNSURewardVideoAdCallbacks(
            IntPtr rewardVideoAd,
            RewardVideoAdClientImpl.GNSURewardVideoAdDidReceiveAdCallback rewardVideoAdDidReceiveAdCallback,
            RewardVideoAdClientImpl.GNSURewardVideoAdDidStartPlayingCallback rewardVideoAdDidStartPlayingCallback,
            RewardVideoAdClientImpl.GNSURewardVideoAdCallback rewardVideoAdCallback,
            RewardVideoAdClientImpl.GNSURewardVideoAdDidCloseCallback rewardVideoAdDidCloseCallback,
            RewardVideoAdClientImpl.GNSURewardVideoAdErrorCallback rewardVideoAdErrorCallback
        );

        [DllImport("__Internal")]
        internal static extern void GNSURewardVideoAdLoadRequest(IntPtr rewardVideoAd, string zoneId, bool isRTB);

        [DllImport("__Internal")]
        internal static extern bool GNSURewardVideoAdCanShow(IntPtr rewardVideoAd);

        [DllImport("__Internal")]
        internal static extern void GNSURewardVideoAdShow(IntPtr rewardVideoAd);

        [DllImport("__Internal")]
        internal static extern void GNSURelease(IntPtr fullscreenInterstitialAd);
    }
}
#endif
