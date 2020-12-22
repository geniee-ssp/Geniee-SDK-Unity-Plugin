using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using GoogleMobileAds.Api;
using System;
using UnityEngine.SceneManagement;

public class MainSceneScript : MonoBehaviour
{
    static bool isRegistedRewardVideoEventHandler = false;
    AdRequest request;
    string adUnitIdKey = "adUnitIdKey";
    string adUnitId = "";
    void RegistRewardVideoAdEventHandler()
    {
        if (!isRegistedRewardVideoEventHandler)
        {
            // Get singleton reward based video ad reference.
            RewardBasedVideoAd rewardBasedVideo = RewardBasedVideoAd.Instance;
            // Called when an ad request has successfully loaded.
            rewardBasedVideo.OnAdLoaded += HandleRewardBasedVideoLoaded;
            // Called when an ad request failed to load.
            rewardBasedVideo.OnAdFailedToLoad += HandleRewardBasedVideoFailedToLoad;
            // Called when an ad is shown.
            rewardBasedVideo.OnAdOpening += HandleRewardBasedVideoOpened;
            // Called when the ad starts to play.
            rewardBasedVideo.OnAdStarted += HandleRewardBasedVideoStarted;
            // Called when the user should be rewarded for watching a video.
            rewardBasedVideo.OnAdRewarded += HandleRewardBasedVideoRewarded;
            // Called when the ad is closed.
            rewardBasedVideo.OnAdClosed += HandleRewardBasedVideoClosed;
            // Called when the ad click caused the user to leave the application.
            rewardBasedVideo.OnAdLeavingApplication += HandleRewardBasedVideoLeftApplication;
        }
        isRegistedRewardVideoEventHandler = true;
    }
    public void Start()
    {
        ManageScrollContent.Logging("MainScene Start");
        RegistRewardVideoAdEventHandler();
        GameObject.Find("LoadButton").GetComponent<Button>().onClick.AddListener(LoadRewardVideoAd);
        GameObject.Find("ShowButton").GetComponent<Button>().onClick.AddListener(ShowRewardVideoAd);
        GameObject.Find("NextSceneButton").GetComponent<Button>().onClick.AddListener(OnClickNextScene);
        request = new AdRequest.Builder()
                               // .AddTestDevice(AdMobUtility.GetTestDeviceId()) // Please remove it in the production environment
                               .Build();
        adUnitId = PlayerPrefs.GetString(adUnitIdKey, "");
        if (adUnitId.Equals(""))
        {
            adUnitId = GetDefaultAdUnitId();
        }
        GameObject.Find("/Canvas/InputField").GetComponent<InputField>().text = adUnitId;
    }
    string GetDefaultAdUnitId()
    {
        string defaultUnitId = "";
#if UNITY_ANDROID
        defaultUnitId = "ここにUnitIdを入れてください";
#elif UNITY_IPHONE
        defaultUnitId = "ここにUnitIdを入れてください";
#endif
        return defaultUnitId;
    }
    void LoadRewardVideoAd()
    {
        ManageScrollContent.Logging("Load Click");
        RewardBasedVideoAd rewardBasedVideo = RewardBasedVideoAd.Instance;
        GameObject text = GameObject.Find("/Canvas/InputField/Text");
        adUnitId = text.GetComponent<Text>().text;
        PlayerPrefs.SetString(adUnitIdKey, adUnitId);
        Debug.Log("adUnitIdDefault input=" + adUnitId);
        ManageScrollContent.Logging("adUnitId=" + adUnitId);
        rewardBasedVideo.LoadAd(request, adUnitId);
    }

    void ShowRewardVideoAd()
    {
        ManageScrollContent.Logging("Show Click");
        RewardBasedVideoAd rewardBasedVideo = RewardBasedVideoAd.Instance;
        if (rewardBasedVideo.IsLoaded())
        {
            rewardBasedVideo.Show();
        }
        else
        {
            ManageScrollContent.Logging("Not yet been loaded");
        }
    }

    public void HandleOnAdFailedToLoad(object sender, AdFailedToLoadEventArgs args)
    {
        ManageScrollContent.Logging("Rewarded video ad failed to load: " + args.Message);
        // Handle the ad failed to load event.
    }

    public void HandleRewardBasedVideoLoaded(object sender, EventArgs args)
    {
        ManageScrollContent.Logging("HandleRewardBasedVideoLoaded event received");

    }

    public void HandleRewardBasedVideoFailedToLoad(object sender, AdFailedToLoadEventArgs args)
    {
        ManageScrollContent.Logging(
            "HandleRewardBasedVideoFailedToLoad event received with message: "
                             + args.Message);
    }

    public void HandleRewardBasedVideoOpened(object sender, EventArgs args)
    {
        ManageScrollContent.Logging("HandleRewardBasedVideoOpened event received");
    }

    public void HandleRewardBasedVideoStarted(object sender, EventArgs args)
    {
        ManageScrollContent.Logging("HandleRewardBasedVideoStarted event received");
    }

    public void HandleRewardBasedVideoClosed(object sender, EventArgs args)
    {
        ManageScrollContent.Logging("HandleRewardBasedVideoClosed event received");
    }

    public void HandleRewardBasedVideoRewarded(object sender, Reward args)
    {
        string type = args.Type;
        double amount = args.Amount;
        RewardBasedVideoAd rewardBasedVideo = RewardBasedVideoAd.Instance;
        ManageScrollContent.Logging(
            "HandleRewardBasedVideoRewarded event received for "
            + amount.ToString() + " " + type + " " + rewardBasedVideo.MediationAdapterClassName());
    }

    public void HandleRewardBasedVideoLeftApplication(object sender, EventArgs args)
    {
        ManageScrollContent.Logging("HandleRewardBasedVideoLeftApplication event received");
    }

    void OnClickNextScene()
    {
        SceneManager.LoadScene("SubScene");
    }
}
