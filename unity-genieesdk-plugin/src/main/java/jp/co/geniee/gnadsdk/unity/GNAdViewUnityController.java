package jp.co.geniee.gnadsdk.unity;

import android.app.Activity;
import android.os.Handler;
import android.os.Looper;
import android.util.Log;
import android.view.Gravity;
import android.view.View;
import android.view.ViewGroup.LayoutParams;
import android.widget.LinearLayout;

import com.unity3d.player.UnityPlayer;

import java.util.ArrayList;
import java.util.Timer;

import jp.co.geniee.gnadsdk.banner.GNAdEventListener;
import jp.co.geniee.gnadsdk.banner.GNAdSize;
import jp.co.geniee.gnadsdk.banner.GNAdView;
import jp.co.geniee.gnadsdk.banner.GNTouchType;
import jp.co.geniee.gnadsdk.common.GNAdLogger;


public class GNAdViewUnityController implements GNAdEventListener {
    //static private int BANNER_REFRESH_RATE = 1000 * 60 * 5;
    private Handler handler;
    private Activity activity;
    private GNAdView adView;
    private Timer timer;
    private ArrayList<String> testDevices;
    private LinearLayout layout;

    public String adMobID;
    public int position;
    public int intSize;
    public int intLogPriority;
    public boolean isRTB;

    class AdPosition{
        final static int TOP = 0;
        final static int BOTTOM = 1;
        final static int TOP_LEFT = 2;
        final static int TOP_RIGHT = 3;
        final static int BOTTOM_LEFT = 4;
        final static int BOTTOM_RIGHT = 5;
    }

    public GNAdViewUnityController(){
        activity = UnityPlayer.currentActivity;
        handler = new Handler(Looper.getMainLooper());
        testDevices = new ArrayList<String>();
    }

    public void installAdMobForAndroid(String adMobID,
                                       int position,
                                       int size,
                                       final boolean isRTB,
                                       int log_priority){
        this.adMobID = adMobID;
        this.position = position;
        this.intSize        = size;
        this.intLogPriority = log_priority;
        this.isRTB = isRTB;

        handler.post(new Runnable(){
            @Override
            public void run(){
                addAdView();
                Log.d("GNAdViewUnityController","installAd");
            }
        });
    }

    public void addTestDevice(String testDeviceID){
        testDevices.add(testDeviceID);
    }

    private void addAdView(){
        layout = new LinearLayout(activity);
        layout.setOrientation(LinearLayout.VERTICAL);
        switch(this.position){
            case AdPosition.TOP:
                layout.setGravity(Gravity.CENTER_HORIZONTAL|Gravity.TOP);
                break;
            case AdPosition.BOTTOM:
                layout.setGravity(Gravity.CENTER_HORIZONTAL|Gravity.BOTTOM);
                break;
            case AdPosition.TOP_LEFT:
                layout.setGravity(Gravity.TOP|Gravity.LEFT);
                break;
            case AdPosition.TOP_RIGHT:
                layout.setGravity(Gravity.TOP|Gravity.RIGHT);
                break;
            case AdPosition.BOTTOM_LEFT:
                layout.setGravity(Gravity.BOTTOM|Gravity.LEFT);
                break;
            case AdPosition.BOTTOM_RIGHT:
                layout.setGravity(Gravity.BOTTOM|Gravity.RIGHT);
                break;
        }
        activity.addContentView(layout, new LayoutParams(LayoutParams.MATCH_PARENT, LayoutParams.MATCH_PARENT));

        GNAdSize adSize = GNAdSize.W320H50;
        if (this.intSize == 0) {
            adSize = GNAdSize.W320H48;
        }
        else if (this.intSize == 1) {
            adSize = GNAdSize.W320H50;
        }
        else if (this.intSize == 2) {
            adSize = GNAdSize.W300H250;
        }
        else if (this.intSize == 3) {
            adSize = GNAdSize.W728H90;
        }
        else if (this.intSize == 4) {
            adSize = GNAdSize.W468H60;
        }
        else if (this.intSize == 5) {
            adSize = GNAdSize.W120H600;
        }
        else if (this.intSize == 6) {
            adSize = GNAdSize.W160H600;
        }
        else if (this.intSize == 7) {
            adSize = GNAdSize.W320H100;
        }
        else if (this.intSize == 8) {
            adSize = GNAdSize.W57H57;
        }
        else if (this.intSize == 9) {
            adSize = GNAdSize.W76H76;
        }
        else if (this.intSize == 10) {
            adSize = GNAdSize.W480H32;
        }
        else if (this.intSize == 11) {
            adSize = GNAdSize.W768H66;
        }
        else if (this.intSize == 12) {
            adSize = GNAdSize.W1024H66;
        }

        adView = new GNAdView(activity, adSize, GNTouchType.TAP_AND_FLICK);
        adView.setAppId(this.adMobID);
        // debug level
        if (this.intLogPriority == 0) {
            adView.setLogPriority(GNAdLogger.NONE);
        }
        else if (this.intLogPriority == 1) {
            adView.setLogPriority(GNAdLogger.INFO);
        }
        else if (this.intLogPriority == 2) {
            adView.setLogPriority(GNAdLogger.WARN);
        }
        else if (this.intLogPriority == 3) {
            adView.setLogPriority(GNAdLogger.WARN);
        }

        adView.setListener(this);
        float scale = activity.getResources().getDisplayMetrics().density;
        int Adsizew_px = (int) (adSize.w * scale + 0.5f);
        int Adsizeh_px = (int) (adSize.h * scale + 0.5f);
        LinearLayout layoutChild = new LinearLayout(activity);
        layoutChild.setLayoutParams(new LayoutParams(Adsizew_px, Adsizeh_px));
        layout.addView(layoutChild);
        layoutChild.addView(adView);

        Log.d("GNAdViewUnityController", "startAdLoop started");
        adView.useMediation(this.isRTB);
        adView.startAdLoop();
    }

    public void hideAd(){
        handler.post(new Runnable(){
            @Override
            public void run(){
                adView.setVisibility(View.GONE);
            }
        });
    }

    public void showAd(){
        handler.post(new Runnable(){
            @Override
            public void run(){
                adView.setVisibility(View.VISIBLE);
            }
        });
    }

    public void refreshAd(){
        //cancelRefreshTimer();
        handler.post(new Runnable(){
            @Override
            public void run(){
                Log.d("GNAdViewUnityController","refreshAd");
                adView.useMediation(isRTB);
                adView.startAdLoop();
            }
        });
    }

    public void cancelRefreshTimer(){
        if(timer != null){
            timer.cancel();
            timer = null;
        }
        if(adView != null){
            Log.d("GNAdViewUnityController","cancelRefreshTimer");
            adView.stopAdLoop();
        }
    }


    @Override
    public void onFaildToReceiveAd(GNAdView arg0) {
//        if(timer != null) return;
//
//        timer = new Timer(true);
//        TimerTask mTask = new TimerTask() {
//            @Override
//            public void run() {
//                refreshAd();
//            }
//        };
//
//        timer.schedule(mTask, BANNER_REFRESH_RATE);

    }

    @Override
    public void onReceiveAd(GNAdView arg0) {
        // TODO Auto-generated method stub

    }

    @Override
    public void onAdHidden(GNAdView gnAdView) {

    }

    @Override
    public void onStartExternalBrowser(GNAdView arg0) {
        // TODO Auto-generated method stub

    }

    @Override
    public void onStartInternalBrowser(GNAdView arg0) {
        // TODO Auto-generated method stub

    }

    @Override
    public void onTerminateInternalBrowser(GNAdView arg0) {
        // TODO Auto-generated method stub

    }

    @Override
    public boolean onShouldStartInternalBrowserWithClick(String s) {
        return true;
    }
}
