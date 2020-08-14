using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;
using GoogleMobileAds.Api;

public class MainScript : MonoBehaviour
{

    // Start is called before the first frame update
    void Start()
    {
        GameObject.Find("BannerButton").GetComponent<Button>().onClick.AddListener(OnClickBannerScene);
        GameObject.Find("RewardButton").GetComponent<Button>().onClick.AddListener(OnClickRewardScene);
        GameObject.Find("InterstitialButton").GetComponent<Button>().onClick.AddListener(OnClickInterstitialScene);

        // Initialize the Google Mobile Ads SDK.
        MobileAds.Initialize(initStatus => { });
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    void OnClickBannerScene()
    {
        SceneManager.LoadScene("BannerScene");
    }

    void OnClickRewardScene()
    {
        SceneManager.LoadScene("RewardScene");
    }

    void OnClickInterstitialScene()
    {
        SceneManager.LoadScene("InterstitialScene");
    }
}
