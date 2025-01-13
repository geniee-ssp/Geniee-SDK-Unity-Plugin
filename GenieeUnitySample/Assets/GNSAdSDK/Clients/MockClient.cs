#pragma warning disable 0067

using System;
using System.Reflection;
using GNSAdSDK.Api;
using UnityEngine;

namespace GNSAdSDK.Clients
{
    internal class MockClient : RewardVideoAdClient
    {
        public MockClient() {
            Debug.Log("Mock " + MethodBase.GetCurrentMethod().Name);
        }

        public event EventHandler<EventArgs> OnAdLoaded;
        public event EventHandler<VideoRewardData> OnAdStarted;
        public event EventHandler<VideoRewardData> OnAdRewarded;
        public event EventHandler<VideoRewardData> OnAdClosed;
        public event EventHandler<VideoRewardFailedData> OnAdFailedToLoad;

        public void LoadAd(string zoneId, bool isRTB)
        {
            Debug.Log("Mock " + MethodBase.GetCurrentMethod().Name);
        }
        public bool IsLoaded()
        {
            Debug.Log("Mock " + MethodBase.GetCurrentMethod().Name);
            return true;
        }
        public void ShowAd()
        {
             Debug.Log("Mock " + MethodBase.GetCurrentMethod().Name);
        }

        public void DisposeAd()
        {
            Debug.Log("Mock " + MethodBase.GetCurrentMethod().Name);
        }
    }

    internal class FullscreenInterstitialAdClientImpl : FullscreenInterstitialAdClient
    {
        public FullscreenInterstitialAdClientImpl()
        {
            Debug.Log("Mock " + MethodBase.GetCurrentMethod().Name);
        }

        public event EventHandler<EventArgs> OnAdLoaded;
        public event EventHandler<EventArgs> OnAdStarted;
        public event EventHandler<EventArgs> OnAdClosed;
        public event EventHandler<FullscreenInterstitialFailedData> OnAdFailedToLoad;

        public void LoadAd(string zoneId)
        {
            Debug.Log("Mock " + MethodBase.GetCurrentMethod().Name);
        }
        public bool IsLoaded()
        {
            Debug.Log("Mock " + MethodBase.GetCurrentMethod().Name);
            return true;
        }
        public void ShowAd()
        {
            Debug.Log("Mock " + MethodBase.GetCurrentMethod().Name);
        }

        public void DisposeAd()
        {
            Debug.Log("Mock " + MethodBase.GetCurrentMethod().Name);
        }
    }
}
