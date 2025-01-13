using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;
using GNSAdSDK.Api;

public class InterstitialSceneScript : MonoBehaviour
{
    public Button goBack;
    public Button loadAd;
    public Button showAd;

    public InputField zoneIdTextField;
    public Text titleText;

    static bool isRegistedFullscreenInterstitialEventHandler = false;
    string zoneIdKey = "zoneIdKey";
    void RegistFullscreenInterstitialAdEventHandler()
    {
        if (!isRegistedFullscreenInterstitialEventHandler)
        {
            FullscreenInterstitialAd fullscreenInterstitialAd = FullscreenInterstitialAd.Instance;
            fullscreenInterstitialAd.OnAdLoaded += (object sender, System.EventArgs args) =>
            {
                // 全画面リワード広告のロードが完了した際の処理
                ManageScrollContent.Logging("AdLoaded");
            };
            fullscreenInterstitialAd.OnAdStarted += (object sender, System.EventArgs args) => {
                // 全画面リワード広告が再生された際の処理
                // ※ iOSに限り、args にはプロパティがすべて空のVideoRewardDataのインスタンスが渡されます。
                ManageScrollContent.Logging("AdStarted");
            };
            fullscreenInterstitialAd.OnAdClosed += (object sender, System.EventArgs args) => {
                // 全画面リワード広告が閉じられた際の処理
                // ※ iOSに限り、args にはプロパティがすべて空のVideoRewardDataのインスタンスが渡されます。
                ManageScrollContent.Logging("AdClosed");
            };
            fullscreenInterstitialAd.OnAdFailedToLoad += (object sender, FullscreenInterstitialFailedData args) => {
                // 全画面リワード広告のロードが失敗した際の処理
#if UNITY_ANDROID
                ManageScrollContent.Logging("AdFailedToLoad AdnetworkName=" + args.AdnetworkName); // ※ iOSの場合は、常にnullとなります。
#endif
                ManageScrollContent.Logging("AdFailedToLoad Code=" + args.Code);
                ManageScrollContent.Logging("AdFailedToLoad Message=" + args.Message);
            };
        }
        isRegistedFullscreenInterstitialEventHandler = true;
    }

    void Start()
    {
        ManageScrollContent.Logging("MainScene Start");
        RegistFullscreenInterstitialAdEventHandler();
        //GameObject.Find("LoadButton").GetComponent<Button>().onClick.AddListener(LoadFullscreenInterstitialAd);
        //GameObject.Find("ShowButton").GetComponent<Button>().onClick.AddListener(ShowFullscreenInterstitialAd);
        //GameObject.Find("NextSceneButton").GetComponent<Button>().onClick.AddListener(OnClickNextScene);
        string zoneId = PlayerPrefs.GetString(zoneIdKey, "");
        //GameObject.Find("/Canvas/InputField").GetComponent<InputField>().text = zoneId;
        //GameObject.Find("TitleText").GetComponent<Text>().text = Application.productName;

        goBack.onClick.AddListener(OnClickNextScene);
        loadAd.onClick.AddListener(LoadFullscreenInterstitialAd);
        showAd.onClick.AddListener(ShowFullscreenInterstitialAd);

        zoneIdTextField.text = zoneId;
        titleText.text = Application.productName;
    }

    void LoadFullscreenInterstitialAd()
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
        FullscreenInterstitialAd fullscreenInterstitialAd = FullscreenInterstitialAd.Instance;
        fullscreenInterstitialAd.LoadAd(zoneId);
    }

    void ShowFullscreenInterstitialAd()
    {
        ManageScrollContent.Logging("Show Click");
        FullscreenInterstitialAd fullscreenInterstitialAd = FullscreenInterstitialAd.Instance;
        // 全画面が表示出来るか確認
        if (fullscreenInterstitialAd.IsLoaded())
        {
            // 全画面の表示
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
        SceneNavigator.GoBackToPreviousScene();
    }
}
