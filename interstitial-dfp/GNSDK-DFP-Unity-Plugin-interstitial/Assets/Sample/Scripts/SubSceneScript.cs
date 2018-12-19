using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using GoogleMobileAds.Api;
using System;
using UnityEngine.SceneManagement;

public class SubSceneScript : MonoBehaviour
{
    string adUnitIdKey = "adUnitIdKey";
    private InterstitialAd interstitialAd;

    public void Start()
    {
        ManageScrollContent.Logging("SubScene Start");
        GameObject.Find("LoadButton").GetComponent<Button>().onClick.AddListener(LoadInterstitialAd);
        GameObject.Find("ShowButton").GetComponent<Button>().onClick.AddListener(ShowInterstitialAd);
        GameObject.Find("NextSceneButton").GetComponent<Button>().onClick.AddListener(OnClickNextScene);
    }
    void LoadInterstitialAd()
    {
        ManageScrollContent.Logging("Load Click");
        string adUnitId = PlayerPrefs.GetString(adUnitIdKey, "");
        ManageScrollContent.Logging("adUnitId=" + adUnitId);
        interstitialAd = new InterstitialAd(adUnitId);
        interstitialAd.OnAdLoaded += HandleOnAdLoaded;
        interstitialAd.OnAdFailedToLoad += HandleOnAdFailedToLoad;
        interstitialAd.OnAdOpening += HandleOnAdOpened;
        interstitialAd.OnAdClosed += HandleOnAdClosed;
        interstitialAd.OnAdLeavingApplication += HandleOnAdLeftApplication;
        AdRequest request = new AdRequest.Builder().Build();
        interstitialAd.LoadAd(request);
    }

    void ShowInterstitialAd()
    {
        ManageScrollContent.Logging("Show Click");
        if (interstitialAd.IsLoaded())
        {
            interstitialAd.Show();
        }
        else
        {
            ManageScrollContent.Logging("Not yet been loaded");
        }
    }

    public void HandleOnAdLoaded(object sender, EventArgs args)
    {
        ManageScrollContent.Logging("HandleOnAdLoaded event received");
    }

    public void HandleOnAdFailedToLoad(object sender, AdFailedToLoadEventArgs args)
    {
        ManageScrollContent.Logging(
            "HandleOnAdFailedToLoad event received with message: "
                             + args.Message);
    }

    public void HandleOnAdOpened(object sender, EventArgs args)
    {
        ManageScrollContent.Logging("HandleOnAdOpened event received");
    }

    public void HandleOnAdClosed(object sender, EventArgs args)
    {
        ManageScrollContent.Logging("HandleOnAdClosed event received");
    }

    public void HandleOnAdLeftApplication(object sender, EventArgs args)
    {
        ManageScrollContent.Logging("HandleOnAdLeftApplication event received");
    }

    void OnClickNextScene()
    {
        SceneManager.LoadScene("MainScene");
    }
}
