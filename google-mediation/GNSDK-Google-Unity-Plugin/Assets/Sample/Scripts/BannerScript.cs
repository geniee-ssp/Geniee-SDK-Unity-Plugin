using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;
using System;
using GoogleMobileAds.Api;

public class BannerScript : MonoBehaviour
{

#region public properties
    public InputField inputField;
    public Dropdown adSizeDropdown;
    public Dropdown adPositionDropdown;
    public Toggle customToggle;
    public InputField customWidthText;
    public InputField customHeightText;
#endregion

#region private properties
    private static string adUnitIdKey = "UnitIdKeyBanner";
    private BannerView bannerView;
    private AdSize adSize = AdSize.Banner;
    private List<AdSize> adSizes = new List<AdSize>();
    private AdPosition adPosition = AdPosition.Bottom;
    private List<AdPosition> adPositions = new List<AdPosition>();

    private GameObject adSizeDropdownGameObject;
    private GameObject widthInputFieldGameObject;
    private GameObject heightInputFieldGameObject;
#endregion

    // Start is called before the first frame update
    void Start()
    {
        ScrollRect sr = GameObject.Find("ScrollViewLog").GetComponent<ScrollRect>();
        ManageScrollContent.InitManageScrollContent(sr);
        ManageScrollContent.Logging("BannerScene Start");

        string adUnitId = PlayerPrefs.GetString(adUnitIdKey, "");
        if (adUnitId.Equals(""))
        {
#if UNITY_ANDROID
            adUnitId = "ここにUnitIdを入れてください";
#elif UNITY_IPHONE
            adUnitId = "ここにUnitIdを入れてください";
#endif
        }
        inputField.text = adUnitId;

        adSizeDropdownGameObject = GameObject.Find("AdSizeDropdown");
        widthInputFieldGameObject = GameObject.Find("WidthInputField");
        heightInputFieldGameObject = GameObject.Find("HeightInputField");
        GameObject.Find("BackButton").GetComponent<Button>().onClick.AddListener(OnClickBackButton);
        GameObject.Find("LoadButton").GetComponent<Button>().onClick.AddListener(OnClickLoadButton);

        adSizeDropdown.onValueChanged.AddListener(delegate {
            AdSizeDropdownValueChanged(adSizeDropdown);
        });
        InitAdSizeDropdown();

        adPositionDropdown.onValueChanged.AddListener(delegate {
            AdPositionDropdownValueChanged(adPositionDropdown);
        });
        InitAdPositionDropdown();

        customToggle.onValueChanged.AddListener(delegate {
            ToggleValueChanged(customToggle);
        });
        ToggleValueChanged(customToggle);
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    void OnClickBackButton()
    {
        if (this.bannerView != null)
        {
            this.bannerView.Destroy();
        }
        SceneManager.LoadScene("MainScene");
    }

    void AdSizeDropdownValueChanged(Dropdown change)
    {
        adSize = adSizes[change.value];
    }

    void InitAdSizeDropdown()
    {
        adSizes.Add(AdSize.Banner);
        adSizes.Add(AdSize.MediumRectangle);
        adSizes.Add(AdSize.IABBanner);
        adSizes.Add(AdSize.Leaderboard);
        adSizes.Add(AdSize.SmartBanner);
        List<Dropdown.OptionData> optionMessages = new List<Dropdown.OptionData>();
        foreach (AdSize ad in adSizes)
        {
            Dropdown.OptionData optionData;
            optionData = new Dropdown.OptionData();
            if (ad.AdType.Equals(AdSize.Type.SmartBanner))
            {
                optionData.text = "SmartBanner";
            } else {
                optionData.text = ad.Width + "x" + ad.Height;
            }
            optionMessages.Add(optionData);
        }
        adSizeDropdown.ClearOptions();
        adSizeDropdown.AddOptions(optionMessages);
        adSizeDropdown.value = adSizes.IndexOf(adSize);
    }

    void AdPositionDropdownValueChanged(Dropdown change)
    {
        adPosition = adPositions[change.value];
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
        foreach (AdPosition ad in adPositions)
        {
            Dropdown.OptionData optionData;
            optionData = new Dropdown.OptionData();
            optionData.text = ad.ToString();
            optionMessages.Add(optionData);
        }

        adPositionDropdown.ClearOptions();
        adPositionDropdown.AddOptions(optionMessages);
        adPositionDropdown.value = adPositions.IndexOf(adPosition);
    }

    void ToggleValueChanged(Toggle change)
    {
        adSizeDropdownGameObject.SetActive(!customToggle.isOn);
        widthInputFieldGameObject.SetActive(customToggle.isOn);
        heightInputFieldGameObject.SetActive(customToggle.isOn);
    }

    private void OnClickLoadButton()
    {
        ManageScrollContent.Logging("LoadAd Start");

        string adUnitId = inputField.text;
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
        }
        else
        {
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
        // Load the banner with the request.
        bannerView.LoadAd(request);
    }

#region Banner callback
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
#endregion
}
