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
        GameObject.Find("LoadButton").GetComponent<Button>().onClick.AddListener(LoadRewardVideoAd);
        GameObject.Find("ShowButton").GetComponent<Button>().onClick.AddListener(ShowRewardVideoAd);
        GameObject.Find("NextSceneButton").GetComponent<Button>().onClick.AddListener(OnClickNextScene);
    }

    void LoadRewardVideoAd()
    {
        ManageScrollContent.Logging("Load Click");
        string zoneId = PlayerPrefs.GetString(zoneIdKey, "");
        Debug.Log("zoneIddefault input=" + zoneId);
        ManageScrollContent.Logging("zoneId=" + zoneId);
        RewardVideoAd rewardVideoAd = RewardVideoAd.Instance;
        rewardVideoAd.LoadAd(zoneId);
    }
    void ShowRewardVideoAd()
    {
        ManageScrollContent.Logging("Show Click");
        RewardVideoAd rewardVideoAd = RewardVideoAd.Instance;
        // 動画が表示出来るか確認
        if (rewardVideoAd.IsLoaded())
        {
            // 動画の表示
            rewardVideoAd.ShowAd();
        }
        else
        {
            ManageScrollContent.Logging("Not yet been loaded");
        }
    }
    void OnApplicationQuit()
    {
        RewardVideoAd.Instance.DisposeAd();
        Debug.Log("Application ending after " + Time.time + " seconds");
    }

    void OnClickNextScene()
    {
        SceneManager.LoadScene("MainScene");
    }
}
