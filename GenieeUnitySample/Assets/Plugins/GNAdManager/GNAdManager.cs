using UnityEngine;
using System.Runtime.InteropServices;

public class GNAdManager : MonoBehaviour
{
    public enum Position
    {
        TOP,
        BOTTOM,
        //TOP_LEFT,
        //TOP_RIGHT,
        //BOTTOM_LEFT,
        //BOTTOM_RIGHT,
	
    }

    public enum LogPriority
    {
	None = 0,
	Info,
	Warn,
	Error,
    }

    public enum AdSizeType
    {
	W320H48 = 0,
	W320H50,
	W300H250,
	W728H90,
	W468H60,
	W120H600,
	W160H600,
	W320H100,
	W57H57,
	W76H76,
	W480H32,
	W768H66,
	W1024H66,
    }

	private static GNAdManager mInstance = null;

    [SerializeField]
    private string ZoneID;
    [SerializeField]
    private Position position;
    [SerializeField]
    private AdSizeType adSize;
    [SerializeField]
    private LogPriority logPriority;
    [SerializeField]
    private bool isRTB;

#if UNITY_IPHONE
    [DllImport("__Internal")]
    private static extern void installAdMobIOS_(string admobID,
                                                Position position,
                                                AdSizeType size,
						                        LogPriority log_pri);
    [DllImport("__Internal")]
    private static extern void addTestDeviceIDIOS_(string testDeviceID);
    [DllImport("__Internal")]
    private static extern void hideAdIOS_();
    [DllImport("__Internal")]
    private static extern void showAdIOS_();
    [DllImport("__Internal")]
    private static extern void refreshAdIOS_();
    [DllImport("__Internal")]
    private static extern void releaseAdMobIOS_();
    [DllImport("__Internal")]
    private static extern bool isIpadAdMob_();
#elif UNITY_ANDROID
    private AndroidJavaObject adViewController = null;
#endif

	public static GNAdManager instance
    {
        get
        {
            return mInstance;
        }
    }

    public void Awake()
    {
        if (mInstance == null)
        {
            mInstance = this;
            DontDestroyOnLoad(gameObject);
        }
        else
        {
            Destroy(gameObject);
        }
    }

    public void OnDestroy()
    {
        if (Application.isEditor) return;

#if UNITY_IPHONE
        if (mInstance == this)
        {
            releaseAdMobIOS_();
        }
#endif
    }

    public void Start()
    {
        if (Application.isEditor) return;

        if (Application.platform == RuntimePlatform.IPhonePlayer)
        {

            bool ipad = false;
#if UNITY_IPHONE
            ipad = isIpadAdMob_();
#endif

	    if (ipad && ZoneID != "")
            {
                install(ZoneID,
                        position,
                        adSize,
                        isRTB,
			            logPriority);
            }
            else
            {
                install(ZoneID,
                        position,
                        adSize,
                        isRTB,
                        logPriority);
            }

        } else if (Application.platform == RuntimePlatform.Android) {
            install(ZoneID,
                        position,
                        adSize,
                        isRTB,
                        logPriority);
        }
    }

    public void OnApplicationPause(bool pause)
    {
        if (Application.isEditor) return;
        if (pause)
        {
#if UNITY_ANDROID
            adViewController.Call("cancelRefreshTimer");
#endif
        }
        else
        {
            refresh();
        }
    }

    private void install(string adID,
                         Position pos,
                         AdSizeType size,
                         bool isRTB,
         		         LogPriority log_pri)
    {
#if UNITY_IPHONE
        installAdMobIOS_(adID,
                         pos,
                         size,
			             log_pri);
        //refreshAdIOS_();
#elif UNITY_ANDROID
		adViewController = new AndroidJavaObject("jp.co.geniee.gnadsdk.unity.GNAdViewUnityController");
        adViewController.Call("installAdMobForAndroid",
                              adID,
                              (int)pos,
                              (int)size,
                              (bool)isRTB,
			                  (int)log_pri);
        //adViewController.Call("refreshAd");
#endif
    }

    public void refresh()
    {
#if UNITY_IPHONE
        refreshAdIOS_();
#elif UNITY_ANDROID
        adViewController.Call("refreshAd");
#endif
    }

    public void hide()
    {
#if UNITY_IPHONE
        hideAdIOS_();
#elif UNITY_ANDROID
        adViewController.Call("hideAd");
#endif
    }

    public void show()
    {
#if UNITY_IPHONE
        showAdIOS_();
#elif UNITY_ANDROID
        adViewController.Call("showAd");
#endif
    }
}
