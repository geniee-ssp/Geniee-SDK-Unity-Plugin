using System;
using GNSAdSDK.Clients;

namespace GNSAdSDK.Api
{
    // 全画面広告管理クラス
    public class FullscreenInterstitialAd
    {
        // 全画面広告クライアント
        private FullscreenInterstitialAdClient client;
        // 全画面広告のロードが完了した際に発生するイベント
        public event EventHandler<EventArgs> OnAdLoaded;
        // 全画面広告が再生された際に発生するイベント
        public event EventHandler<EventArgs> OnAdStarted;
        // 全画面広告が閉じられた際に発生するイベント
        public event EventHandler<EventArgs> OnAdClosed;
        // 全画面広告のロードが失敗した際に発生するイベント
        public event EventHandler<FullscreenInterstitialFailedData> OnAdFailedToLoad;

        // 全画面広告インスタンス
        private static FullscreenInterstitialAd instance;

        // 全画面広告インスタンス(シングルトン)
        public static FullscreenInterstitialAd Instance
        {
            get
            {
                if (instance == null)
                {
                    instance = new FullscreenInterstitialAd();
                }
                return instance;
            }
        }

        // コンストラクタ
        private FullscreenInterstitialAd()
        {
            client = AdClientFactory.CreateFullscreenInterstitialAdClient();

            client.OnAdLoaded += (sender, eventArgs) =>
            {
                if (this.OnAdLoaded != null)
                {
                    this.OnAdLoaded(this, eventArgs);
                }
            };
            client.OnAdStarted += (sender, eventArgs) =>
            {
                if (this.OnAdStarted != null)
                {
                    this.OnAdStarted(this, eventArgs);
                }
            };
            client.OnAdClosed += (sender, eventArgs) =>
            {
                if (this.OnAdClosed != null)
                {
                    this.OnAdClosed(this, eventArgs);
                }
            };
            client.OnAdFailedToLoad += (sender, eventArgs) =>
            {
                if (this.OnAdFailedToLoad != null)
                {
                    this.OnAdFailedToLoad(this, eventArgs);
                }
            };
        }

        // 全画面広告をロード
        public void LoadAd(string zoneId)
        {
            client.LoadAd(zoneId);
        }
        // 全画面広告のロード完了確認
        public bool IsLoaded()
        {
            return client.IsLoaded();
        }
        // 全画面広告を再生する
        public void ShowAd()
        {
            client.ShowAd();
        }
        // 広告破棄処理
        public void DisposeAd()
        {
            client.DisposeAd();
        }
    }
}
