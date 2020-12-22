using System;
using UnityEngine;
using UnityEngine.UI;
using System.Collections.Generic;
using GoogleMobileAds.Api;


public class MainScene : MonoBehaviour {

#region public properties
    public InputField inputField;
    public Dropdown adSizeDropdown;
    public Dropdown adPositionDropdown;
    public Toggle customToggle;
    public InputField customWidthText;
    public InputField customHeightText;
#endregion

#region private properties
    BannerView bannerView;
    AdSize adSize = AdSize.Banner;
    List<AdSize> adSizes = new List<AdSize>();
    AdPosition adPosition = AdPosition.Bottom;
    List<AdPosition> adPositions = new List<AdPosition>();
    string adUnitIdKey = "AdUnitIdKey";
    string adUnitId = "";

#endregion
    // Use this for initialization
    void Start () {
        adSizeDropdown.onValueChanged.AddListener(delegate {
            AdSizeDropdownValueChanged(adSizeDropdown);
        });
        adPositionDropdown.onValueChanged.AddListener(delegate {
            AdPositionDropdownValueChanged(adPositionDropdown);
        });
        GameObject.Find("LoadButton").GetComponent<Button>().onClick.AddListener(RequestBanner);

        adUnitId = PlayerPrefs.GetString(adUnitIdKey, "");
        if (adUnitId.Equals(""))
        {
            adUnitId = GetDefaultAdUnitId();
        }
        inputField.text = adUnitId;
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
        adSizeDropdown.ClearOptions();
        foreach (AdSize ad in adSizes)
        {
            Dropdown.OptionData optionData;
            optionData = new Dropdown.OptionData();
            if (ad.AdType.Equals(AdSize.Type.SmartBanner)) {
                optionData.text = "SmartBanner";
                optionMessages.Add(optionData);
            } else {
                optionData.text = ad.Width + "x" + ad.Height;
                optionMessages.Add(optionData);
            }
        }
        foreach (Dropdown.OptionData message in optionMessages)
        {
            adSizeDropdown.options.Add(message);
        }
        adSizeDropdown.value = adSizes.IndexOf(adSize);
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
        adPositionDropdown.ClearOptions();
        foreach (AdPosition ad in adPositions)
        {
            Dropdown.OptionData optionData;
            optionData = new Dropdown.OptionData();
            optionData.text = ad.ToString();
            optionMessages.Add(optionData);
        }
        foreach (Dropdown.OptionData message in optionMessages)
        {
            adPositionDropdown.options.Add(message);
        }
        adPositionDropdown.value = adPositions.IndexOf(adPosition);
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
        adUnitId = inputField.text;
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
                int.Parse(customWidthText.text),
                int.Parse(customHeightText.text)
            );
        }

        if (size.AdType.Equals(AdSize.Type.SmartBanner))
        {
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
        AdRequest adRequest = new AdRequest.Builder()
                                           //Please enter your test device ID
                                           //.AddTestDevice("YOUR_DEVICE_ID")
                                           .Build();
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
            adSizeDropdown.transform.localPosition = new Vector3(adSizeDropdown.transform.localPosition.x, 976f, 0f); // hidden
            customWidthText.transform.localPosition = new Vector3(customWidthText.transform.localPosition.x, 425f, 0f); // show
            customHeightText.transform.localPosition = new Vector3(customHeightText.transform.localPosition.x, 425f, 0f); // show
        }
        else
        {
            adSizeDropdown.transform.localPosition = new Vector3(adSizeDropdown.transform.localPosition.x, 425f, 0f); // show
            customWidthText.transform.localPosition = new Vector3(customWidthText.transform.localPosition.x, 976f, 0f); // hidden
            customHeightText.transform.localPosition = new Vector3(customHeightText.transform.localPosition.x, 976f, 0f); // hidden
        }
    }
}
