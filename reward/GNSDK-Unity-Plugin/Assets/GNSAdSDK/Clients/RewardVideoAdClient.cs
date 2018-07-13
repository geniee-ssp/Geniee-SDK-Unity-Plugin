using System;
using GNSAdSDK.Api;

namespace GNSAdSDK.Clients
{
    // 動画広告クライアント
    internal interface RewardVideoAdClient
    {
        // 動画広告のロードが完了した際に発生するイベント
        event EventHandler<EventArgs> OnAdLoaded;
        // 動画広告が再生された際に発生するイベント
        event EventHandler<VideoRewardData> OnAdStarted;
        // ユーザーにリワードを付与した際に発生するイベント
        event EventHandler<VideoRewardData> OnAdRewarded;
        // 動画広告が閉じられた際に発生するイベント
        event EventHandler<VideoRewardData> OnAdClosed;
        // 動画広告のロードが失敗した際に発生するイベント
        event EventHandler<VideoRewardFailedData> OnAdFailedToLoad;

        // 動画広告をロード
        void LoadAd(string zoneId);
        // 動画広告のロード完了確認
        bool IsLoaded();
        // 動画広告を再生する
        void ShowAd();
        // 広告の破棄処理
        void DisposeAd();
    }
}
