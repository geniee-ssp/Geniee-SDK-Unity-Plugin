package jp.co.geniee.utgnsrewardvideo;

import com.unity3d.player.UnityPlayerActivity;

import android.util.Log;

import com.google.android.gms.ads.MobileAds;
import com.google.android.gms.ads.reward.RewardedVideoAd;

public class ExtendsDfpUnityPlayerActivity extends UnityPlayerActivity {
    @Override
    protected void onStart() {
        super.onStart();
    }

    @Override
    protected void onResume() {
        super.onResume();
        RewardedVideoAd rewardBasedVideo = MobileAds.getRewardedVideoAdInstance(this);
        rewardBasedVideo.resume(this);
    }
    @Override
    protected void onPause() {
        RewardedVideoAd rewardBasedVideo = MobileAds.getRewardedVideoAdInstance(this);
        rewardBasedVideo.pause(this);
        super.onPause();
    }
}
