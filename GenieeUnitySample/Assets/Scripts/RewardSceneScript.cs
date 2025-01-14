using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;
using GNSAdSDK.Api;

public class RewardSceneScript : MonoBehaviour
{

    public Button goBack;
    public Button loadAd;
    public Button showAd;

    public InputField zoneIdTextField;
    public Text titleText;

    static bool isRegistedRewardVideoEventHandler = false;
    string zoneIdKey = "zoneIdKey";
    void RegistRewardVideoAdEventHandler()
    {
        if (!isRegistedRewardVideoEventHandler)
        {
            RewardVideoAd rewardVideoAd = RewardVideoAd.Instance;
            rewardVideoAd.OnAdLoaded += (object sender, System.EventArgs args) =>
            {
                // 動画リワード広告のロードが完了した際の処理
                ManageScrollContent.Logging("AdLoaded");
            };
            rewardVideoAd.OnAdStarted += (object sender, VideoRewardData args) => {
                // 動画リワード広告が再生された際の処理
                // ※ iOSに限り、args にはプロパティがすべて空のVideoRewardDataのインスタンスが渡されます。
                ManageScrollContent.Logging("AdStarted");
#if UNITY_ANDROID
                ManageScrollContent.Logging("AdStarted AdName=" + args.AdName);
#endif
            };
            rewardVideoAd.OnAdRewarded += (object sender, VideoRewardData args) => {
                // ユーザーにリワードが付与された際の処理
#if UNITY_ANDROID
                ManageScrollContent.Logging("AdRewarded AdName=" + args.AdName); // ※ iOSの場合は、常にnullとなります。
#endif
                ManageScrollContent.Logging("AdRewarded Amount=" + args.Amount);
                ManageScrollContent.Logging("AdRewarded Type=" + args.Type);
            };
            rewardVideoAd.OnAdClosed += (object sender, VideoRewardData args) => {
                // 動画リワード広告が閉じられた際の処理
                // ※ iOSに限り、args にはプロパティがすべて空のVideoRewardDataのインスタンスが渡されます。
                ManageScrollContent.Logging("AdClosed");
#if UNITY_ANDROID
                ManageScrollContent.Logging("AdClosed AdName=" + args.AdName);
#endif
            };
            rewardVideoAd.OnAdFailedToLoad += (object sender, VideoRewardFailedData args) => {
                // 動画リワード広告のロードが失敗した際の処理
#if UNITY_ANDROID
                ManageScrollContent.Logging("AdFailedToLoad AdnetworkName=" + args.AdnetworkName); // ※ iOSの場合は、常にnullとなります。
#endif
                ManageScrollContent.Logging("AdFailedToLoad Code=" + args.Code);
                ManageScrollContent.Logging("AdFailedToLoad Message=" + args.Message);
            };
        }
        isRegistedRewardVideoEventHandler = true;
    }

    void Start()
    {
        ManageScrollContent.Logging("MainScene Start");
        RegistRewardVideoAdEventHandler();
        //GameObject.Find("LoadButton").GetComponent<Button>().onClick.AddListener(LoadRewardVideoAd);
        //GameObject.Find("ShowButton").GetComponent<Button>().onClick.AddListener(ShowRewardVideoAd);
        //GameObject.Find("NextSceneButton").GetComponent<Button>().onClick.AddListener(OnClickNextScene);
        string zoneId = PlayerPrefs.GetString(zoneIdKey, "");
        //GameObject.Find("/Canvas/InputField").GetComponent<InputField>().text = zoneId;
        //GameObject.Find("TitleText").GetComponent<Text>().text = Application.productName;

        goBack.onClick.AddListener(OnClickNextScene);
        loadAd.onClick.AddListener(LoadRewardVideoAd);
        showAd.onClick.AddListener(ShowRewardVideoAd);

        zoneIdTextField.text = zoneId;
        titleText.text = Application.productName;
    }

    void LoadRewardVideoAd()
    {
        ManageScrollContent.Logging("Load Click");
        string zoneId = "ここにzoneIdを入れてください";
#if UNITY_ANDROID
        zoneId = "ここにzoneIdを入れてください";
#elif UNITY_IPHONE
        zoneId = "ここにzoneIdを入れてください";
#endif
        GameObject text = GameObject.Find("/Canvas/InputField/Text");
        if (zoneId.Equals("") || zoneId.Equals("ここにzoneIdを入れてください"))
        {
            zoneId = text.GetComponent<Text>().text;
            PlayerPrefs.SetString(zoneIdKey, zoneId);
            Debug.Log("zoneIddefault input=" + zoneId);
        }
        ManageScrollContent.Logging("zoneId=" + zoneId);
        RewardVideoAd rewardVideoAd = RewardVideoAd.Instance;
        rewardVideoAd.LoadAd(zoneId, false);
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
        SceneNavigator.GoBackToPreviousScene();
    }
}
