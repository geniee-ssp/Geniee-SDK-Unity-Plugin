using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using GoogleMobileAds.Api;
using System;
using UnityEngine.SceneManagement;

public class MainSceneScript : MonoBehaviour
{
    string adUnitIdKey = "adUnitIdKey";
    string adUnitId = "";
    private InterstitialAd interstitialAd;

    public void Start()
    {
        ManageScrollContent.Logging("MainScene Start");
        GameObject.Find("LoadButton").GetComponent<Button>().onClick.AddListener(LoadInterstitialAd);
        GameObject.Find("ShowButton").GetComponent<Button>().onClick.AddListener(ShowInterstitialAd);
        GameObject.Find("NextSceneButton").GetComponent<Button>().onClick.AddListener(OnClickNextScene);
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
        defaultUnitId = "";
#elif UNITY_IPHONE
        defaultUnitId = "ここにUnitIdを入れてください";
#endif
        return defaultUnitId;
    }
    void LoadInterstitialAd()
    {
        ManageScrollContent.Logging("Load Click");
        GameObject text = GameObject.Find("/Canvas/InputField/Text");
        adUnitId = text.GetComponent<Text>().text;
        PlayerPrefs.SetString(adUnitIdKey, adUnitId);
        Debug.Log("adUnitIdDefault input=" + adUnitId);

        interstitialAd = new InterstitialAd(adUnitId);
        AdRequest request =  new AdRequest.Builder()
                               //.AddTestDevice("YOUR_DEVICE_ID")
                               .Build();
        interstitialAd.LoadAd(request);
        interstitialAd.OnAdLoaded += HandleOnAdLoaded;
        interstitialAd.OnAdFailedToLoad += HandleOnAdFailedToLoad;
        interstitialAd.OnAdOpening += HandleOnAdOpened;
        interstitialAd.OnAdClosed += HandleOnAdClosed;
        interstitialAd.OnAdLeavingApplication += HandleOnAdLeftApplication;

        ManageScrollContent.Logging("adUnitId=" + adUnitId);
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
        SceneManager.LoadScene("SubScene");
    }
}
