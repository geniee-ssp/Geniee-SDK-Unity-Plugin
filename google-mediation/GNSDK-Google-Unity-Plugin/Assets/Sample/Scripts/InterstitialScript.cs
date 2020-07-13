using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;
using System;
using GoogleMobileAds.Api;

public class InterstitialScript : MonoBehaviour
{

    private static string adUnitIdKey = "UnitIdKeyInterstitial";
    private InterstitialAd interstitialAd;

    // Start is called before the first frame update
    void Start()
    {
        ScrollRect sr = GameObject.Find("ScrollViewLog").GetComponent<ScrollRect>();
        ManageScrollContent.InitManageScrollContent(sr);
        ManageScrollContent.Logging("InterstitialScene Start");

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
        GameObject.Find("ShowButton").GetComponent<Button>().onClick.AddListener(onClickShowButton);
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

        GameObject text = GameObject.Find("/Canvas/InputField/Text");
        string adUnitId = text.GetComponent<Text>().text;
        PlayerPrefs.SetString(adUnitIdKey, adUnitId);
        ManageScrollContent.Logging("adUnitId=" + adUnitId);

        interstitialAd = new InterstitialAd(adUnitId);
        interstitialAd.OnAdLoaded += HandleOnAdLoaded;
        interstitialAd.OnAdFailedToLoad += HandleOnAdFailedToLoad;
        interstitialAd.OnAdOpening += HandleOnAdOpened;
        interstitialAd.OnAdClosed += HandleOnAdClosed;
        interstitialAd.OnAdLeavingApplication += HandleOnAdLeftApplication;

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
        // Load the interstitial with the request.
        interstitialAd.LoadAd(request);
    }

    void onClickShowButton()
    {
        ManageScrollContent.Logging("Show Click");
        if (interstitialAd.IsLoaded())
        {
            interstitialAd.Show();
        } else {
            ManageScrollContent.Logging("Not yet been loaded");
        }
    }

#region Interstitial callback
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
#endregion
}
