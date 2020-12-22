#if UNITY_ANDROID
using System;
using UnityEngine;
using GNSAdSDK.Clients;
using GNSAdSDK.Api;

namespace GNSAdSDK.Android
{
    // 動画広告クライアント実装クラス
    internal class RewardVideoAdClientImpl : RewardVideoAdClient
    {
        // Unity Player
        private const string UnityPlayer = "com.unity3d.player.UnityPlayer";
        // 現在のActivity
        private const string CurrentActivityName = "currentActivity";
        // GNSRewardVideoAdのクラス名
        private const string GNSRewardVideoAdClassName = "jp.co.geniee.gnadsdk.rewardvideo.GNSRewardVideoAd";
        // GNSRewardVideoAdListenerのクラス名
        private const string GNSRewardVideoAdListenerClassName = "jp.co.geniee.gnadsdk.rewardvideo.GNSRewardVideoAdListener";
        // GNSRewardVideoAdのインスタンス
        private AndroidJavaObject gnsRewardVideoAd;
        private AndroidJavaObject GnsRewardVideoAd
        {
            get
            {
                if (gnsRewardVideoAd == null)
                {
                    gnsRewardVideoAd = buildGnsRewardVideoAd();
                }
                return gnsRewardVideoAd;
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

        // 動画広告のロードが完了した際に発生するイベント
        public event EventHandler<EventArgs> OnAdLoaded = delegate {};
        // 動画広告が再生された際に発生するイベント
        public event EventHandler<VideoRewardData> OnAdStarted = delegate {};
        // ユーザーにリワードを付与した際に発生するイベント
        public event EventHandler<VideoRewardData> OnAdRewarded = delegate {};
        // 動画広告が閉じられた際に発生するイベント
        public event EventHandler<VideoRewardData> OnAdClosed = delegate {};
        // 動画広告のロードが失敗した際に発生するイベント
        public event EventHandler<VideoRewardFailedData> OnAdFailedToLoad = delegate {};

        #region RewardVideoAdClient implementation

        // 動画広告をロード
        public void LoadAd(string zoneId)
        {
            CurrentActivity.Call("runOnUiThread", new AndroidJavaRunnable(() =>
				{
                    GnsRewardVideoAd.Call("setZoneId", zoneId);
                    GnsRewardVideoAd.Call<bool>("loadRequest", true);
                }));
        }
        // 動画広告のロード完了確認
        public bool IsLoaded()
        {
            if (this.gnsRewardVideoAd == null) {
                return false;
            }
            return GnsRewardVideoAd.Call<bool>("canShow");
        }
        // 動画広告を再生する
        public void ShowAd()
        {
			CurrentActivity.Call("runOnUiThread", new AndroidJavaRunnable(() =>
				{
                    GnsRewardVideoAd.Call<bool>("show");
				}));
        }
        // 広告破棄処理
        public void DisposeAd()
        {
            if (isDisposedAd) { return; }

            GnsRewardVideoAd.Call("onDestroy");
            gnsRewardVideoAd = null;
            isDisposedAd = true;
        }

        private AndroidJavaObject buildCurrentActivity()
        {
            AndroidJavaClass playerClass = new AndroidJavaClass(UnityPlayer);
            return playerClass.GetStatic<AndroidJavaObject>(CurrentActivityName);
        }

        private AndroidJavaObject buildGnsRewardVideoAd()
        {
            isDisposedAd = false;

            AndroidJavaObject androidJavaObject = new AndroidJavaObject(GNSRewardVideoAdClassName, "", CurrentActivity);
            androidJavaObject.Call("setRewardVideoAdListener", new RewardVideoAdListener(this));
			androidJavaObject.Call("onStart");
			androidJavaObject.Call("onResume");
            try {
                CurrentActivity.Call("setLifecycleListener", new LifecycleListener(androidJavaObject));
            } catch (AndroidJavaException) {
				Debug.LogError ("GNSURewardVideoAdError: Received an error when calling setLifecycleListener." +
                    "In order to process correctly according to the android lifecycle," +
                    "please set the correct class name in GNSAdSDK.Android.Utils.LifecycleListenerClassName.");
			}
            return androidJavaObject;
        }

        #endregion

        class RewardVideoAdListener : AndroidJavaProxy
        {
            private RewardVideoAdClientImpl rewardVideoAdClientImpl;

            public RewardVideoAdListener(RewardVideoAdClientImpl rewardVideoAdClientImpl) : base(GNSRewardVideoAdListenerClassName)
            {
                this.rewardVideoAdClientImpl = rewardVideoAdClientImpl;
            }

            public void rewardVideoAdDidReceiveAd()
            {
                if (this.rewardVideoAdClientImpl.OnAdLoaded != null)
                {
                    this.rewardVideoAdClientImpl.OnAdLoaded(this, EventArgs.Empty);
                }
            }

            public void rewardVideoAdDidStartPlaying(AndroidJavaObject data)
            {
                if (this.rewardVideoAdClientImpl.OnAdStarted != null)
                {
                    this.rewardVideoAdClientImpl.OnAdStarted(this, BuildVideoRewardData(data));
                }
            }

            public void didRewardUserWithReward(AndroidJavaObject data)
            {
                if (this.rewardVideoAdClientImpl.OnAdRewarded != null)
                {
                    this.rewardVideoAdClientImpl.OnAdRewarded(this, BuildVideoRewardData(data));
                }
            }

            public void rewardVideoAdDidClose(AndroidJavaObject data)
            {
                if (this.rewardVideoAdClientImpl.OnAdClosed != null)
                {
                    this.rewardVideoAdClientImpl.OnAdClosed(this, BuildVideoRewardData(data));
                }
            }

            public void didFailToLoadWithError(AndroidJavaObject data)
            {
                if (this.rewardVideoAdClientImpl.OnAdFailedToLoad != null)
                {
                    this.rewardVideoAdClientImpl.OnAdFailedToLoad(this, BuildVideoRewardFailedData(data));
                }
            }

            // VideoRewardDataの生成
            private VideoRewardData BuildVideoRewardData(AndroidJavaObject data)
            {
                return new VideoRewardData() {
                    AdName = data.Get<string> ("adName"),
                    Amount = data.Get<double> ("amount"),
                    Type = data.Get<string> ("type"),
                };
            }

            // VideoRewardFailedDataの生成
            private VideoRewardFailedData BuildVideoRewardFailedData(AndroidJavaObject data)
            {
                return new VideoRewardFailedData() {
                    AdnetworkName  = data.Call<string> ("getAdnetworkName"),
                    Code  = data.Call<int> ("getCode"),
                    Message  = data.Call<string> ("getMessage"),
                };
            }
        }

        class LifecycleListener : AndroidJavaProxy
        {
            private AndroidJavaObject gnsRewardVideoAd;

            public LifecycleListener(AndroidJavaObject gnsRewardVideoAd) : base(Utils.LifecycleListenerClassName)
            {
                this.gnsRewardVideoAd = gnsRewardVideoAd;
            }
            public void onStart()
			{
				if (this.gnsRewardVideoAd != null)
                {
                    this.gnsRewardVideoAd.Call("onStart");
                }
			}

    		public void onResume()
			{
                if (this.gnsRewardVideoAd != null)
                {
                    this.gnsRewardVideoAd.Call("onResume");
                }
			}

    		public void onPause()
            {
                if (this.gnsRewardVideoAd != null)
                {
                    this.gnsRewardVideoAd.Call("onPause");
                }
            }

            public void onStop()
            {
                if (this.gnsRewardVideoAd != null)
                {
                    this.gnsRewardVideoAd.Call("onStop");
                }
            }
        }
    }
}
#endif
