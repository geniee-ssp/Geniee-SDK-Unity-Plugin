using GNSAdSDK.Clients;

namespace GNSAdSDK
{
    // 広告クライアント生成クラス
    internal class AdClientFactory
    {
        // 動画広告クライアントの生成
        internal static RewardVideoAdClient CreateRewardVideoAdClient()
        {
#if UNITY_EDITOR
                return new GNSAdSDK.Clients.MockClient();
#elif UNITY_ANDROID
                return new GNSAdSDK.Android.RewardVideoAdClientImpl();
#elif (UNITY_5 && UNITY_IOS) || UNITY_IPHONE
                return new GNSAdSDK.iOS.RewardVideoAdClientImpl();
#else
                return new GNSAdSDK.Clients.MockClient();
#endif
        }

        internal static FullscreenInterstitialAdClient CreateFullscreenInterstitialAdClient()
        {
#if UNITY_EDITOR
            return new GNSAdSDK.Clients.FullscreenInterstitialAdClientImpl();
#elif UNITY_ANDROID
            return new GNSAdSDK.Android.FullscreenInterstitialAdClientImpl();
#elif (UNITY_5 && UNITY_IOS) || UNITY_IPHONE
            return new GNSAdSDK.iOS.FullscreenInterstitialAdClientImpl();
#else
            return new GNSAdSDK.Clients.MockClient();
#endif
        }
    }
    
}
