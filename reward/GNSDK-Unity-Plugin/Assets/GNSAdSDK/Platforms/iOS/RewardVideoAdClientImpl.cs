#if (UNITY_5 && UNITY_IOS) || UNITY_IPHONE
using System;
using System.Runtime.InteropServices;

using GNSAdSDK.Clients;
using GNSAdSDK.Api;

namespace GNSAdSDK.iOS
{
  // 動画広告クライアント実装クラス
  internal class RewardVideoAdClientImpl : IDisposable, RewardVideoAdClient
  {
    // RewardVideoAdポインタ
    private IntPtr rewardVideoAdPtr;
    // RewardVideoAdClientポインタ
    private IntPtr rewardVideoAdClientPtr;
    // 動画広告のロードが完了した際のコールバックデリゲート
    internal delegate void GNSURewardVideoAdDidReceiveAdCallback(IntPtr rewardVideoAdClient);
    // 動画広告が再生された際のコールバックデリゲート
    internal delegate void GNSURewardVideoAdDidStartPlayingCallback(IntPtr rewardVideoAdClient);
    // ユーザーにリワードが付与された際のコールバックデリゲート
    internal delegate void GNSURewardVideoAdCallback(IntPtr rewardVideoAdClient, string rewardType, double rewardAmount);
    // 動画広告が閉じられた際のコールバックデリゲート
    internal delegate void GNSURewardVideoAdDidCloseCallback(IntPtr rewardVideoAdClient);
    // 動画広告のロードが失敗した際のコールバックデリゲート
    internal delegate void GNSURewardVideoAdErrorCallback(IntPtr rewardVideoAdClient, int errorCode, string errorDescription);

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

    private IntPtr RewardVideoAdPtr
    {
			get { return this.rewardVideoAdPtr; }

      set {
        Externs.GNSURelease(this.rewardVideoAdPtr);
        this.rewardVideoAdPtr = value;
      }
    }

    // コンストラクタ
    public RewardVideoAdClientImpl()
    {
      CreateRewardVideoAd();
    }

    // RewardVideoAdを作成
    public void CreateRewardVideoAd()
    {
      this.rewardVideoAdClientPtr = (IntPtr)GCHandle.Alloc(this);
      this.RewardVideoAdPtr = Externs.GNSUCreateRewardVideoAd(this.rewardVideoAdClientPtr);
      Externs.GNSURewardVideoAdCallbacks(
        this.RewardVideoAdPtr,
        RewardVideoAdDidReceiveAd,
        RewardVideoAdDidStartPlaying,
        DidRewardUserWithReward,
        RewardVideoAdDidClose,
        DidFailToLoadWithError);
    }

    // RewardVideoAdの削除
    public void DestroyRewardVideoAd()
    {
      this.RewardVideoAdPtr = IntPtr.Zero;
    }

    // Dispose
    public void Dispose()
    {
      this.DestroyRewardVideoAd();
      ((GCHandle)this.rewardVideoAdClientPtr).Free();
    }

    ~RewardVideoAdClientImpl()
    {
      this.Dispose();
    }

    #region RewardVideoAdClient implementation

    // 動画広告をロード
    public void LoadAd(string zoneId)
    {
      Externs.GNSURewardVideoAdLoadRequest(this.RewardVideoAdPtr, zoneId);
    }

    // 動画広告のロード完了確認
    public bool IsLoaded()
    {
      return Externs.GNSURewardVideoAdCanShow(this.RewardVideoAdPtr);
    }

    // 動画広告を再生する
    public void ShowAd()
    {
      Externs.GNSURewardVideoAdShow(this.RewardVideoAdPtr);
    }
    // 広告の破棄処理
    public void DisposeAd()
    {
      // iOSは処理なし
    }

    #endregion

    #region Callbacks

    [AOT.MonoPInvokeCallback(typeof(GNSURewardVideoAdDidReceiveAdCallback))]
    private static void RewardVideoAdDidReceiveAd(IntPtr rewardVideoAdClient)
    {
        RewardVideoAdClientImpl client = IntPtrToRewardVideoAdClientImpl(rewardVideoAdClient);
        if (client.OnAdLoaded != null)
        {
            client.OnAdLoaded(client, EventArgs.Empty);
        }
    }

    [AOT.MonoPInvokeCallback(typeof(GNSURewardVideoAdDidStartPlayingCallback))]
    private static void RewardVideoAdDidStartPlaying(IntPtr rewardVideoAdClient)
    {
        RewardVideoAdClientImpl client = IntPtrToRewardVideoAdClientImpl(rewardVideoAdClient);
        if (client.OnAdStarted != null)
        {
            client.OnAdStarted(client, new VideoRewardData());
        }
    }

    [AOT.MonoPInvokeCallback(typeof(GNSURewardVideoAdCallback))]
    private static void DidRewardUserWithReward(IntPtr rewardVideoAdClient, string rewardType, double rewardAmount)
    {
        RewardVideoAdClientImpl client = IntPtrToRewardVideoAdClientImpl(rewardVideoAdClient);
        if (client.OnAdRewarded != null)
        {
            client.OnAdRewarded(client, new VideoRewardData() {
                Amount = rewardAmount,
                Type = rewardType,
            });
        }
    }

    [AOT.MonoPInvokeCallback(typeof(GNSURewardVideoAdDidCloseCallback))]
    private static void RewardVideoAdDidClose(IntPtr rewardVideoAdClient)
    {
        RewardVideoAdClientImpl client = IntPtrToRewardVideoAdClientImpl(rewardVideoAdClient);
        if (client.OnAdClosed != null)
        {
            client.OnAdClosed(client, new VideoRewardData());
        }
    }

    [AOT.MonoPInvokeCallback(typeof(GNSURewardVideoAdErrorCallback))]
    private static void DidFailToLoadWithError(IntPtr rewardVideoAdClient, int errorCode, string errorDescription)
    {
        RewardVideoAdClientImpl client = IntPtrToRewardVideoAdClientImpl(rewardVideoAdClient);
        if (client.OnAdFailedToLoad != null)
        {
            client.OnAdFailedToLoad(client, new VideoRewardFailedData() {
                Code  = errorCode,
                Message  = errorDescription,
            });
        }
    }

    private static RewardVideoAdClientImpl IntPtrToRewardVideoAdClientImpl(IntPtr rewardVideoAdClient)
    {
      GCHandle handle = (GCHandle)rewardVideoAdClient;
      return handle.Target as RewardVideoAdClientImpl;
    }

    #endregion
  }
}
#endif
