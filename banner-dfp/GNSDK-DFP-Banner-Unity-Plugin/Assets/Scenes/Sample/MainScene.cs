using System;
using UnityEngine;
using UnityEngine.UI;
using System.Collections.Generic;
using GoogleMobileAds.Api;


public class MainScene : MonoBehaviour {
    BannerView bannerView;
    Dropdown adSizeDropdown;
    Dropdown adPositionDropdown;
    Toggle customToggle;
    AdSize adSize = AdSize.Banner;
    List<AdSize> adSizes = new List<AdSize>();
    AdPosition adPosition = AdPosition.Bottom;
    List<AdPosition> adPositions = new List<AdPosition>();
    string adUnitIdKey = "AdUnitIdKey";
    string adUnitId = "";
	// Use this for initialization
	void Start () {
        adSizeDropdown = GameObject.Find("/Canvas/AdSizeDropdown").GetComponent<Dropdown>();
        adSizeDropdown.onValueChanged.AddListener(delegate {
            AdSizeDropdownValueChanged(adSizeDropdown);
        });
        adPositionDropdown = GameObject.Find("/Canvas/AdPositionDropdown").GetComponent<Dropdown>();
        adPositionDropdown.onValueChanged.AddListener(delegate {
            AdPositionDropdownValueChanged(adPositionDropdown);
        });
        GameObject.Find("LoadButton").GetComponent<Button>().onClick.AddListener(RequestBanner);

        adUnitId = PlayerPrefs.GetString(adUnitIdKey, "");
        if (adUnitId.Equals(""))
        {
            adUnitId = GetDefaultAdUnitId();
        }
        GameObject.Find("/Canvas/InputField").GetComponent<InputField>().text = adUnitId;
        customToggle = GameObject.Find("/Canvas/Toggle").GetComponent<Toggle>();
        customToggle.onValueChanged.AddListener(delegate {
            ToggleValueChanged(customToggle);
        });
        InitAdSizeDropdown();
        InitAdPositionDropdown();
    }
    void InitAdSizeDropdown() {
        adSizes.Add(AdSize.Banner);
        adSizes.Add(AdSize.MediumRectangle);
        adSizes.Add(AdSize.IABBanner);
        adSizes.Add(AdSize.Leaderboard);
        adSizes.Add(AdSize.SmartBanner);
        List<Dropdown.OptionData> optionMessages = new List<Dropdown.OptionData>();
        Dropdown optionDropdown = GameObject.Find("AdSizeDropdown").GetComponent<Dropdown>();
        optionDropdown.ClearOptions();
        foreach (AdSize ad in adSizes)
        {
            Dropdown.OptionData optionData;
            optionData = new Dropdown.OptionData();
            if (ad.IsSmartBanner == true) {
                optionData.text = "SmartBanner";
                optionMessages.Add(optionData);
            } else {
                optionData.text = ad.Width + "x" + ad.Height;
                optionMessages.Add(optionData);
            }
        }
        foreach (Dropdown.OptionData message in optionMessages)
        {
            optionDropdown.options.Add(message);
        }
        optionDropdown.value = adSizes.IndexOf(adSize);
    }
    void InitAdPositionDropdown()
    {
        adPositions.Add(AdPosition.Top);
        adPositions.Add(AdPosition.Center);
        adPositions.Add(AdPosition.Bottom);
        adPositions.Add(AdPosition.TopLeft);
        adPositions.Add(AdPosition.TopRight);
        adPositions.Add(AdPosition.BottomLeft);
        adPositions.Add(AdPosition.BottomRight);
        List<Dropdown.OptionData> optionMessages = new List<Dropdown.OptionData>();
        Dropdown optionDropdown = GameObject.Find("AdPositionDropdown").GetComponent<Dropdown>();
        optionDropdown.ClearOptions();
        foreach (AdPosition ad in adPositions)
        {
            Dropdown.OptionData optionData;
            optionData = new Dropdown.OptionData();
            optionData.text = ad.ToString();
            optionMessages.Add(optionData);
        }
        foreach (Dropdown.OptionData message in optionMessages)
        {
            optionDropdown.options.Add(message);
        }
        optionDropdown.value = adPositions.IndexOf(adPosition);
    }
	
	// Update is called once per frame
	void Update () {
		
	}

    void OnApplicationQuit()
    {
        // Clean up banner ad before creating a new one.
        if (this.bannerView != null)
        {
            ManageScrollContent.Logging("bannerView destory");
            this.bannerView.Destroy();
        }   
    }
    string GetDefaultAdUnitId()
    {
        string defaultAdUnitId = "ここにAdUnitIdを入れてください";
#if UNITY_ANDROID
        defaultAdUnitId = "ここにAdUnitIdを入れてください";
#elif UNITY_IPHONE
        defaultAdUnitId = "ここにAdUnitIdを入れてください";
#else 
        defaultAdUnitId = "ここにAdUnitIdを入れてください";
#endif
        return defaultAdUnitId;
    }
    private void RequestBanner()
    {
        ManageScrollContent.Logging("LoadAd Start");
        GameObject text = GameObject.Find("/Canvas/InputField/Text");
        adUnitId = text.GetComponent<Text>().text;
        PlayerPrefs.SetString(adUnitIdKey, adUnitId);
        ManageScrollContent.Logging("adUnitId=" + adUnitId);

        // Clean up banner ad before creating a new one.
        if (this.bannerView != null)
        {
            this.bannerView.Destroy();
        }

        AdSize size = adSize;
        if (customToggle.isOn)
        {
            size = new AdSize(
                int.Parse(GameObject.Find("/Canvas/WidthInputField/Text").GetComponent<Text>().text),
                int.Parse(GameObject.Find("/Canvas/HeightInputField/Text").GetComponent<Text>().text)
            );
        }
        if (size.IsSmartBanner) {
            ManageScrollContent.Logging("AdSize=SmartBanner");
        } else {
            ManageScrollContent.Logging("AdSize=" + size.Width + "x" + size.Height);
        }
        bannerView = new BannerView(adUnitId, size, adPosition);
        // Called when an ad request has successfully loaded.
        bannerView.OnAdLoaded += this.HandleAdLoaded;
        // Called when an ad request failed to load.
        bannerView.OnAdFailedToLoad += this.HandleOnAdFailedToLoad;
        // Called when an ad is clicked.
        bannerView.OnAdOpening += this.HandleOnAdOpened;
        // Called when the user returned from the app after an ad click.
        bannerView.OnAdClosed += this.HandleOnAdClosed;
        // Called when the ad click caused the user to leave the application.
        bannerView.OnAdLeavingApplication += HandleOnAdLeavingApplication;

        // Create an empty ad request.
        AdRequest adRequest = new AdRequest.Builder().
                                         //Please enter your test device ID
                                         //AddTestDevice("ADD_YOUR_TEST_DEVICE").
                                           Build();
        // Load the banner with the request.
        bannerView.LoadAd(adRequest);
    }

    public void HandleAdLoaded(object sender, EventArgs args)
    {
        ManageScrollContent.Logging("HandleAdLoaded event received");
    }

    public void HandleOnAdFailedToLoad(object sender, AdFailedToLoadEventArgs args)
    {
        ManageScrollContent.Logging("HandleFailedToReceiveAd event received with message: "
                            + args.Message);
    }

    public void HandleOnAdOpened(object sender, EventArgs args)
    {
        ManageScrollContent.Logging("HandleAdOpened event received");
    }

    public void HandleOnAdClosed(object sender, EventArgs args)
    {
        ManageScrollContent.Logging("HandleAdClosed event received");
    }

    public void HandleOnAdLeavingApplication(object sender, EventArgs args)
    {
        ManageScrollContent.Logging("HandleAdLeavingApplication event received");
    }

    void AdSizeDropdownValueChanged(Dropdown change)
    {
        adSize = adSizes[change.value];
    }
    void AdPositionDropdownValueChanged(Dropdown change)
    {
        adPosition = adPositions[change.value];
    }
    void ToggleValueChanged(Toggle change)
    {
        if (customToggle.isOn)
        {
            GameObject.Find("/Canvas/AdSizeDropdown").transform.localPosition = new Vector3(-120f, 976f, 0f); // hidden
            GameObject.Find("/Canvas/WidthInputField").transform.localPosition = new Vector3(-274f, 425f, 0f); // show
            GameObject.Find("/Canvas/HeightInputField").transform.localPosition = new Vector3(-86f, 425f, 0f); // show
        }
        else
        {
            GameObject.Find("/Canvas/AdSizeDropdown").transform.localPosition = new Vector3(-120f, 425f, 0f); // show
            GameObject.Find("/Canvas/WidthInputField").transform.localPosition = new Vector3(-274f, 976f, 0f); // hidden
            GameObject.Find("/Canvas/HeightInputField").transform.localPosition = new Vector3(-86f, 976f, 0f); // hidden
        }
    }
}
