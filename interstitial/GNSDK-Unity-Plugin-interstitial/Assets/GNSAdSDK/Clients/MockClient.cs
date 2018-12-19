#pragma warning disable 0067

using System;
using System.Reflection;
using GNSAdSDK.Api;
using UnityEngine;

namespace GNSAdSDK.Clients
{
    internal class MockClient : FullscreenInterstitialAdClient
    {
        public MockClient() {
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
