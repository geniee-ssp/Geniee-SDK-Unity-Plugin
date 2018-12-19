#if (UNITY_5 && UNITY_IOS) || UNITY_IPHONE
using System;
using System.Runtime.InteropServices;
namespace GNSAdSDK.iOS
{
    internal class Externs {

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
        internal static extern void GNSURelease(IntPtr fullscreenInterstitialAd);

        [DllImport("__Internal")]
        internal static extern void GNSUFullscreenInterstitialAdLoadRequest(IntPtr fullscreenInterstitialAd, string zoneId);

        [DllImport("__Internal")]
        internal static extern bool GNSUFullscreenInterstitialAdCanShow(IntPtr fullscreenInterstitialAd);

        [DllImport("__Internal")]
        internal static extern void GNSUFullscreenInterstitialAdShow(IntPtr fullscreenInterstitialAd);
    }
}
#endif
