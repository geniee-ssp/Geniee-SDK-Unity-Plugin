using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;
using System;
using GoogleMobileAds.Api;

public class RewardScript : MonoBehaviour
{

    private static string adUnitIdKey = "UnitIdKeyReward";
    private RewardedAd rewardedAd;

    // Start is called before the first frame update
    void Start()
    {
        ScrollRect sr = GameObject.Find("ScrollViewLog").GetComponent<ScrollRect>();
        ManageScrollContent.InitManageScrollContent(sr);
        ManageScrollContent.Logging("RewardScene Start");

        string adUnitId = PlayerPrefs.GetString(adUnitIdKey, "");
        if (adUnitId.Equals(""))
        {
#if UNITY_ANDROID
            adUnitId = "ここにUnitIdを入れてください";
#elif UNITY_IPHONE
            adUnitId = "ここにUnitIdを入れてください";
#endif
        }
        GameObject.Find("/Canvas/InputField").GetComponent<InputField>().text = adUnitId;

        GameObject.Find("BackButton").GetComponent<Button>().onClick.AddListener(OnClickBackButton);
        GameObject.Find("LoadButton").GetComponent<Button>().onClick.AddListener(OnClickLoadButton);
        GameObject.Find("ShowButton").GetComponent<Button>().onClick.AddListener(OnClickShowButton);
    }

    // Update is called once per frame
    void Update()
    {
    }

    void OnClickBackButton()
    {
        SceneManager.LoadScene("MainScene");
    }

    void OnClickLoadButton()
    {
        ManageScrollContent.Logging("Load Click");

        // Get UnitId
        GameObject text = GameObject.Find("/Canvas/InputField/Text");
        string adUnitId = text.GetComponent<Text>().text;
        PlayerPrefs.SetString(adUnitIdKey, adUnitId);
        ManageScrollContent.Logging("adUnitId=" + adUnitId);

        this.rewardedAd = new RewardedAd(adUnitId);
        // Called when an ad request has successfully loaded.
        this.rewardedAd.OnAdLoaded += HandleRewardedAdLoaded;
        // Called when an ad request failed to load.
        this.rewardedAd.OnAdFailedToLoad += HandleRewardedAdFailedToLoad;
        // Called when an ad is shown.
        this.rewardedAd.OnAdOpening += HandleRewardedAdOpening;
        // Called when an ad request failed to show.
        this.rewardedAd.OnAdFailedToShow += HandleRewardedAdFailedToShow;
        // Called when the user should be rewarded for interacting with the ad.
        this.rewardedAd.OnUserEarnedReward += HandleUserEarnedReward;
        // Called when the ad is closed.
        this.rewardedAd.OnAdClosed += HandleRewardedAdClosed;

        // Create an empty ad request.
        //Please enter your test device ID
        //.AddTestDevice("YOUR_DEVICE_ID")
#if UNITY_ANDROID
        AdRequest request = new AdRequest.Builder()
            //.AddTestDevice("YOUR_DEVICE_ID")
            .Build();
#elif UNITY_IPHONE
        AdRequest request = new AdRequest.Builder()
            //.AddTestDevice("YOUR_DEVICE_ID")
            .Build();
#else
        AdRequest request = new AdRequest.Builder().Build();
#endif
        // Load the rewarded ad with the request.
        this.rewardedAd.LoadAd(request);
    }

    void OnClickShowButton()
    {
        ManageScrollContent.Logging("Show Click");
        if (this.rewardedAd.IsLoaded())
        {
            this.rewardedAd.Show();
        } else {
            ManageScrollContent.Logging("Not yet been loaded");
        }
    }

#region Reward callback
    public void HandleRewardedAdLoaded(object sender, EventArgs args)
    {
        ManageScrollContent.Logging("HandleRewardedAdLoaded event received");
    }

    public void HandleRewardedAdFailedToLoad(object sender, AdErrorEventArgs args)
    {
        ManageScrollContent.Logging(
            "HandleRewardedAdFailedToLoad event received with message: "
                             + args.Message);
    }

    public void HandleRewardedAdOpening(object sender, EventArgs args)
    {
        ManageScrollContent.Logging("HandleRewardedAdOpening event received");
    }

    public void HandleRewardedAdFailedToShow(object sender, AdErrorEventArgs args)
    {
        ManageScrollContent.Logging(
            "HandleRewardedAdFailedToShow event received with message: "
                             + args.Message);
    }

    public void HandleRewardedAdClosed(object sender, EventArgs args)
    {
        ManageScrollContent.Logging("HandleRewardedAdClosed event received");
        this.rewardedAd = null;
    }

    public void HandleUserEarnedReward(object sender, Reward args)
    {
        string type = args.Type;
        double amount = args.Amount;
        ManageScrollContent.Logging(
            "HandleRewardedAdRewarded event received for "
                        + amount.ToString() + " " + type
                        + " " + this.rewardedAd.MediationAdapterClassName());
    }
#endregion
}
