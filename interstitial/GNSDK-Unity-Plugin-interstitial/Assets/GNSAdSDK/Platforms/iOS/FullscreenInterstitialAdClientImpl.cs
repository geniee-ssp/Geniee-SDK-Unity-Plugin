#if (UNITY_5 && UNITY_IOS) || UNITY_IPHONE
using System;
using System.Runtime.InteropServices;

using GNSAdSDK.Clients;
using GNSAdSDK.Api;

namespace GNSAdSDK.iOS
{
    // 全画面広告クライアント実装クラス
    internal class FullscreenInterstitialAdClientImpl : IDisposable, FullscreenInterstitialAdClient
    {
        // FullscreenInterstitialAdポインタ
        private IntPtr fullscreenInterstitialAdPtr;
        // FullscreenInterstitialAdClientポインタ
        private IntPtr fullscreenInterstitialAdClientPtr;
        // 全画面広告のロードが完了した際のコールバックデリゲート
        internal delegate void GNSUFullscreenInterstitialAdDidReceiveAdCallback(IntPtr fullscreenInterstitialAdClient);
        // 全画面広告が再生された際のコールバックデリゲート
        internal delegate void GNSUFullscreenInterstitialAdWillPresentScreenCallback(IntPtr fullscreenInterstitialAdClient);
        // 全画面広告が閉じられた際のコールバックデリゲート
        internal delegate void GNSUFullscreenInterstitialAdDidCloseCallback(IntPtr fullscreenInterstitialAdClient);
        // 全画面広告のロードが失敗した際のコールバックデリゲート
        internal delegate void GNSUFullscreenInterstitialAdErrorCallback(IntPtr fullscreenInterstitialAdClient, int errorCode, string errorDescription);

        // 全画面広告のロードが完了した際に発生するイベント
        public event EventHandler<EventArgs> OnAdLoaded;
        // 全画面広告が再生された際に発生するイベント
        public event EventHandler<EventArgs> OnAdStarted;
        // 全画面広告が閉じられた際に発生するイベント
        public event EventHandler<EventArgs> OnAdClosed;
        // 全画面広告のロードが失敗した際に発生するイベント
        public event EventHandler<FullscreenInterstitialFailedData> OnAdFailedToLoad;

        private IntPtr FullscreenInterstitialAdPtr
        {
        	get { return this.fullscreenInterstitialAdPtr; }

            set {
                Externs.GNSURelease(this.fullscreenInterstitialAdPtr);
                this.fullscreenInterstitialAdPtr = value;
            }
        }

        // コンストラクタ
        public FullscreenInterstitialAdClientImpl()
        {
            CreateFullscreenInterstitialAd();
        }

        // FullscreenInterstitialAdを作成
        public void CreateFullscreenInterstitialAd()
        {
            this.fullscreenInterstitialAdClientPtr = (IntPtr)GCHandle.Alloc(this);
            this.FullscreenInterstitialAdPtr = Externs.GNSUCreateFullscreenInterstitialAd(this.fullscreenInterstitialAdClientPtr);
            Externs.GNSUFullscreenInterstitialAdCallbacks(
                this.FullscreenInterstitialAdPtr,
                FullscreenInterstitialAdDidReceiveAd,
                FullscreenInterstitialAdWillPresentScreen,
                FullscreenInterstitialAdDidClose,
                DidFailToLoadWithError
            );
        }

        // FullscreenInterstitialAdの削除
        public void DestroyFullscreenInterstitialAd()
        {
          this.FullscreenInterstitialAdPtr = IntPtr.Zero;
        }

        // Dispose
        public void Dispose()
        {
            this.DestroyFullscreenInterstitialAd();
            ((GCHandle)this.fullscreenInterstitialAdClientPtr).Free();
        }

        ~FullscreenInterstitialAdClientImpl()
        {
            this.Dispose();
        }

        #region FullscreenInterstitialAdClient implementation

        // 全画面広告をロード
        public void LoadAd(string zoneId)
        {
            Externs.GNSUFullscreenInterstitialAdLoadRequest(this.FullscreenInterstitialAdPtr, zoneId);
        }

        // 全画面広告のロード完了確認
        public bool IsLoaded()
        {
            return Externs.GNSUFullscreenInterstitialAdCanShow(this.FullscreenInterstitialAdPtr);
        }

        // 全画面広告を再生する
        public void ShowAd()
        {
            Externs.GNSUFullscreenInterstitialAdShow(this.FullscreenInterstitialAdPtr);
        }
        // 広告の破棄処理
        public void DisposeAd()
        {
            // iOSは処理なし
        }

        #endregion

        #region Callbacks

        [AOT.MonoPInvokeCallback(typeof(GNSUFullscreenInterstitialAdDidReceiveAdCallback))]
        private static void FullscreenInterstitialAdDidReceiveAd(IntPtr fullscreenInterstitialAdClient)
        {
            FullscreenInterstitialAdClientImpl client = IntPtrToFullscreenInterstitialAdClientImpl(fullscreenInterstitialAdClient);
            if (client.OnAdLoaded != null)
            {
                client.OnAdLoaded(client, EventArgs.Empty);
            }
        }

        [AOT.MonoPInvokeCallback(typeof(GNSUFullscreenInterstitialAdWillPresentScreenCallback))]
        private static void FullscreenInterstitialAdWillPresentScreen(IntPtr fullscreenInterstitialAdClient)
        {
            FullscreenInterstitialAdClientImpl client = IntPtrToFullscreenInterstitialAdClientImpl(fullscreenInterstitialAdClient);
            if (client.OnAdStarted != null)
            {
                client.OnAdStarted(client, EventArgs.Empty);
            }
        }

        [AOT.MonoPInvokeCallback(typeof(GNSUFullscreenInterstitialAdDidCloseCallback))]
        private static void FullscreenInterstitialAdDidClose(IntPtr fullscreenInterstitialAdClient)
        {
            FullscreenInterstitialAdClientImpl client = IntPtrToFullscreenInterstitialAdClientImpl(fullscreenInterstitialAdClient);
            if (client.OnAdClosed != null)
            {
                client.OnAdClosed(client, EventArgs.Empty);
            }
        }

        [AOT.MonoPInvokeCallback(typeof(GNSUFullscreenInterstitialAdErrorCallback))]
        private static void DidFailToLoadWithError(IntPtr fullscreenInterstitialAdClient, int errorCode, string errorDescription)
        {
            FullscreenInterstitialAdClientImpl client = IntPtrToFullscreenInterstitialAdClientImpl(fullscreenInterstitialAdClient);
            if (client.OnAdFailedToLoad != null)
            {
                client.OnAdFailedToLoad(client, new FullscreenInterstitialFailedData() {
                    Code  = errorCode,
                    Message  = errorDescription,
                });
            }
        }

        private static FullscreenInterstitialAdClientImpl IntPtrToFullscreenInterstitialAdClientImpl(IntPtr fullscreenInterstitialAdClient)
        {
            GCHandle handle = (GCHandle)fullscreenInterstitialAdClient;
            return handle.Target as FullscreenInterstitialAdClientImpl;
        }

        #endregion
    }
}
#endif
