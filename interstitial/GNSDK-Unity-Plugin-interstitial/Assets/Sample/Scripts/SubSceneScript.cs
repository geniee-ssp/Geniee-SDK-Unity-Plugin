using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;
using GNSAdSDK.Api;

public class SubSceneScript : MonoBehaviour
{
    string zoneIdKey = "zoneIdKey";

    void Start()
    {
        ManageScrollContent.Logging("SubScene Start");
        GameObject.Find("LoadButton").GetComponent<Button>().onClick.AddListener(LoadFullscreenInterstitialAd);
        GameObject.Find("ShowButton").GetComponent<Button>().onClick.AddListener(ShowFullscreenInterstitialAd);
        GameObject.Find("NextSceneButton").GetComponent<Button>().onClick.AddListener(OnClickNextScene);
    }

    void LoadFullscreenInterstitialAd()
    {
        ManageScrollContent.Logging("Load Click");
        string zoneId = PlayerPrefs.GetString(zoneIdKey, "");
        Debug.Log("zoneIddefault input=" + zoneId);
        ManageScrollContent.Logging("zoneId=" + zoneId);
        FullscreenInterstitialAd fullscreenInterstitialAd = FullscreenInterstitialAd.Instance;
        fullscreenInterstitialAd.LoadAd(zoneId);
    }
    void ShowFullscreenInterstitialAd()
    {
        ManageScrollContent.Logging("Show Click");
        FullscreenInterstitialAd fullscreenInterstitialAd = FullscreenInterstitialAd.Instance;
        // 動画が表示出来るか確認
        if (fullscreenInterstitialAd.IsLoaded())
        {
            // 動画の表示
            fullscreenInterstitialAd.ShowAd();
        }
        else
        {
            ManageScrollContent.Logging("Not yet been loaded");
        }
    }
    void OnApplicationQuit()
    {
        FullscreenInterstitialAd.Instance.DisposeAd();
        Debug.Log("Application ending after " + Time.time + " seconds");
    }

    void OnClickNextScene()
    {
        SceneManager.LoadScene("MainScene");
    }
}
