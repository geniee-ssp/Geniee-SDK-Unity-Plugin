using System;
using GNSAdSDK.Api;

namespace GNSAdSDK.Clients
{
    // 動画広告クライアント
    internal interface FullscreenInterstitialAdClient
    {
        // 全画面広告のロードが完了した際に発生するイベント
        event EventHandler<EventArgs> OnAdLoaded;
        // 全画面広告が再生された際に発生するイベント
        event EventHandler<EventArgs> OnAdStarted;
        // 全画面広告が閉じられた際に発生するイベント
        event EventHandler<EventArgs> OnAdClosed;
        // 全画面広告のロードが失敗した際に発生するイベント
        event EventHandler<FullscreenInterstitialFailedData> OnAdFailedToLoad;

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
