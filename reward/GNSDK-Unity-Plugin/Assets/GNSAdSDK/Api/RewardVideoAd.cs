using System;
using GNSAdSDK.Clients;

namespace GNSAdSDK.Api
{
    // 動画広告管理クラス
    public class RewardVideoAd
    {
        // 動画広告クライアント
        private RewardVideoAdClient client;
        // 動画広告のロードが完了した際に発生するイベント
        public event EventHandler<EventArgs> OnAdLoaded;
        // 動画広告が再生された際に発生するイベント
        public event EventHandler<VideoRewardData> OnAdStarted;
        // ユーザーにリワードを付与した際に発生するイベント
        public event EventHandler<VideoRewardData> OnAdRewarded;
        // 動画広告が閉じられた際に発生するイベント
        public event EventHandler<VideoRewardData> OnAdClosed;
        // 動画広告のロードが失敗した際に発生するイベント
        public event EventHandler<VideoRewardFailedData> OnAdFailedToLoad;

        // 動画広告インスタンス
        private static RewardVideoAd instance;

        // 動画広告インスタンス(シングルトン)
        public static RewardVideoAd Instance
        {
            get
            {
                if (instance == null)
                {
                    instance = new RewardVideoAd();
                }
                return instance;
            }
        }

        // コンストラクタ
        private RewardVideoAd()
        {
            client = AdClientFactory.CreateRewardVideoAdClient();

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
            client.OnAdRewarded += (sender, eventArgs) =>
            {
                if (this.OnAdRewarded != null)
                {
                    this.OnAdRewarded(this, eventArgs);
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

        // 動画広告をロード
        public void LoadAd(string zoneId)
        {
            client.LoadAd(zoneId);
        }
        // 動画広告のロード完了確認
        public bool IsLoaded()
        {
            return client.IsLoaded();
        }
        // 動画広告を再生する
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
