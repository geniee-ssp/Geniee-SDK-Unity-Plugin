#if UNITY_ANDROID
using System;
using UnityEngine;
using GNSAdSDK.Clients;
using GNSAdSDK.Api;

namespace GNSAdSDK.Android
{
    // 全画面広告クライアント実装クラス
    internal class FullscreenInterstitialAdClientImpl : FullscreenInterstitialAdClient
    {
        // Unity Player
        private const string UnityPlayer = "com.unity3d.player.UnityPlayer";
        // 現在のActivity
        private const string CurrentActivityName = "currentActivity";
        // GNSRewardVideoAdのクラス名
        private const string GNSFullscreenInterstitialAdClassName = "jp.co.geniee.gnadsdk.fullscreeninterstitial.GNSFullscreenInterstitialAd";
        // GNSRewardVideoAdListenerのクラス名
        private const string GNSFullscreenInterstitialAdListenerClassName = "jp.co.geniee.gnadsdk.fullscreeninterstitial.GNSFullscreenInterstitialAdListener";
        // GNSRewardVideoAdのインスタンス
        private AndroidJavaObject gnsFullscreenInterstitialAd;
        private AndroidJavaObject GnsFullscreenInterstitialAd
        {
            get
            {
                if (gnsFullscreenInterstitialAd == null)
                {
                    gnsFullscreenInterstitialAd = buildGnsFullscreenInterstitialAd();
                }
                return gnsFullscreenInterstitialAd;
            }
        }
        // アクティビティ
        private AndroidJavaObject currentActivity;

        private AndroidJavaObject CurrentActivity
        {
            get
            {
                if (currentActivity == null)
                {
                    currentActivity = buildCurrentActivity();
                }
                return currentActivity;
            }
        }

        // RewardVideoAdを破棄処理したか判断するフラグ
        private bool isDisposedAd = false;

        // 全画面広告のロードが完了した際に発生するイベント
        public event EventHandler<EventArgs> OnAdLoaded = delegate {};
        // 全画面広告が再生された際に発生するイベント
        public event EventHandler<EventArgs> OnAdStarted = delegate {};
        // 全画面広告が閉じられた際に発生するイベント
        public event EventHandler<EventArgs> OnAdClosed = delegate {};
        // 全画面広告のロードが失敗した際に発生するイベント
        public event EventHandler<FullscreenInterstitialFailedData> OnAdFailedToLoad = delegate {};

        #region RewardVideoAdClient implementation

        // 全画面広告をロード
        public void LoadAd(string zoneId)
        {
            CurrentActivity.Call("runOnUiThread", new AndroidJavaRunnable(() =>
			{
                GnsFullscreenInterstitialAd.Call("setZoneId", zoneId);
                GnsFullscreenInterstitialAd.Call<bool>("loadRequest");
            }));
        }
        // 全画面広告のロード完了確認
        public bool IsLoaded()
        {
            if (this.gnsFullscreenInterstitialAd == null) {
                return false;
            }
            return GnsFullscreenInterstitialAd.Call<bool>("canShow");
        }
        // 全画面広告を再生する
        public void ShowAd()
        {
			CurrentActivity.Call("runOnUiThread", new AndroidJavaRunnable(() =>
			{
                GnsFullscreenInterstitialAd.Call<bool>("show");
			}));
        }
        // 広告破棄処理
        public void DisposeAd()
        {
            if (isDisposedAd) { return; }

            GnsFullscreenInterstitialAd.Call("onDestroy");
            gnsFullscreenInterstitialAd = null;
            isDisposedAd = true;
        }

        private AndroidJavaObject buildCurrentActivity()
        {
            AndroidJavaClass playerClass = new AndroidJavaClass(UnityPlayer);
            return playerClass.GetStatic<AndroidJavaObject>(CurrentActivityName);
        }

        private AndroidJavaObject buildGnsFullscreenInterstitialAd()
        {
            isDisposedAd = false;

            AndroidJavaObject androidJavaObject = new AndroidJavaObject(GNSFullscreenInterstitialAdClassName, "", CurrentActivity);
            androidJavaObject.Call("setFullscreenInterstitialAdListener", new FullscreenInterstitialAdListener(this));
			androidJavaObject.Call("onStart");
			androidJavaObject.Call("onResume");
            try {
                CurrentActivity.Call("setLifecycleListener", new LifecycleListener(androidJavaObject));
            } catch (AndroidJavaException) {
				Debug.LogError ("GNSUFullscreenInterstitialAdError: Received an error when calling setLifecycleListener." +
                    "In order to process correctly according to the android lifecycle," +
                    "please set the correct class name in GNSAdSDK.Android.Utils.LifecycleListenerClassName.");
			}
            return androidJavaObject;
        }

        #endregion

        class FullscreenInterstitialAdListener : AndroidJavaProxy
        {
            private FullscreenInterstitialAdClientImpl fullscreenInterstitialAdClientImpl;

            public FullscreenInterstitialAdListener(FullscreenInterstitialAdClientImpl fullscreenInterstitialAdClientImpl) : base(GNSFullscreenInterstitialAdListenerClassName)
            {
                this.fullscreenInterstitialAdClientImpl = fullscreenInterstitialAdClientImpl;
            }

            public void fullscreenInterstitialAdDidReceiveAd()
            {
                if (this.fullscreenInterstitialAdClientImpl.OnAdLoaded != null)
                {
                    this.fullscreenInterstitialAdClientImpl.OnAdLoaded(this, EventArgs.Empty);
                }
            }

            public void fullscreenInterstitialAdWillPresentScreen(string adName)
            {
                if (this.fullscreenInterstitialAdClientImpl.OnAdStarted != null)
                {
                    this.fullscreenInterstitialAdClientImpl.OnAdStarted(this, EventArgs.Empty);
                }
            }

            public void fullscreenInterstitialAdDidClose(string adName)
            {
                if (this.fullscreenInterstitialAdClientImpl.OnAdClosed != null)
                {
                    this.fullscreenInterstitialAdClientImpl.OnAdClosed(this, EventArgs.Empty);
                }
            }

            public void didFailToLoadWithError(AndroidJavaObject data)
            {
                if (this.fullscreenInterstitialAdClientImpl.OnAdFailedToLoad != null)
                {
                    this.fullscreenInterstitialAdClientImpl.OnAdFailedToLoad(this, BuildFullscreenInterstitialFailedData(data));
                }
            }

            // FullscreenInterstitialFailedDataの生成
            private FullscreenInterstitialFailedData BuildFullscreenInterstitialFailedData(AndroidJavaObject data)
            {
                return new FullscreenInterstitialFailedData() {
                    AdnetworkName  = data.Call<string> ("getAdnetworkName"),
                    Code  = data.Call<int> ("getCode"),
                    Message  = data.Call<string> ("getMessage"),
                };
            }
        }

        class LifecycleListener : AndroidJavaProxy
        {
            private AndroidJavaObject gnsFullscreenInterstitialAd;

            public LifecycleListener(AndroidJavaObject gnsFullscreenInterstitialAd) : base(Utils.LifecycleListenerClassName)
            {
                this.gnsFullscreenInterstitialAd = gnsFullscreenInterstitialAd;
            }
            public void onStart()
			{
                if (this.gnsFullscreenInterstitialAd != null)
                {
                    this.gnsFullscreenInterstitialAd.Call("onStart");
                }
			}

    		public void onResume()
			{
                if (this.gnsFullscreenInterstitialAd != null)
                {
                    this.gnsFullscreenInterstitialAd.Call("onResume");
                }
			}

    		public void onPause()
            {
                if (this.gnsFullscreenInterstitialAd != null)
                {
                    this.gnsFullscreenInterstitialAd.Call("onPause");
                }
            }

            public void onStop()
            {
                if (this.gnsFullscreenInterstitialAd != null)
                {
                    this.gnsFullscreenInterstitialAd.Call("onStop");
                }
            }
        }
    }
}
#endif
