using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using GoogleMobileAds.Api;
using System;
using UnityEngine.SceneManagement;

public class SubSceneScript : MonoBehaviour
{
    private AdRequest request;
    string adUnitIdKey = "adUnitIdKey";
    public void Start()
    {
        ManageScrollContent.Logging("SubScene Start");
        GameObject.Find("LoadButton").GetComponent<Button>().onClick.AddListener(LoadRewardVideoAd);
        GameObject.Find("ShowButton").GetComponent<Button>().onClick.AddListener(ShowRewardVideoAd);
        GameObject.Find("NextSceneButton").GetComponent<Button>().onClick.AddListener(OnClickNextScene);
        GameObject.Find("ExitButton").GetComponent<Button>().onClick.AddListener(OnClickExit);
        request = new AdRequest.Builder().Build();
    }
    void LoadRewardVideoAd()
    {
        ManageScrollContent.Logging("Load Click");
        RewardBasedVideoAd rewardBasedVideo = RewardBasedVideoAd.Instance;
        string adUnitId = PlayerPrefs.GetString(adUnitIdKey, "");
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
        SceneManager.LoadScene("MainScene");
    }

    void OnClickExit()
    {
        Application.Quit();
    }
}
