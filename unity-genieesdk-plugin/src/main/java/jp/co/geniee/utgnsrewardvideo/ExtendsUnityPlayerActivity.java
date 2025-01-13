package jp.co.geniee.utgnsrewardvideo;

import com.unity3d.player.UnityPlayerActivity;

import android.os.Bundle;
import android.util.Log;

public class ExtendsUnityPlayerActivity extends UnityPlayerActivity {

  private LifecycleListener lifecycleListener;

  public void setLifecycleListener(LifecycleListener listener) {
    this.lifecycleListener = listener;
  }

  @Override
  protected void onStart() {
    if (this.lifecycleListener != null) {
      this.lifecycleListener.onStart();
    }
    super.onStart();
  }

  @Override
  protected void onResume() {
    if (this.lifecycleListener != null) {
      this.lifecycleListener.onResume();
    }
    super.onResume();
  }

  @Override
  protected void onPause() {
    if (this.lifecycleListener != null) {
      this.lifecycleListener.onPause();
    }
    super.onPause();
  }

  @Override
  protected void onStop() {
    if (this.lifecycleListener != null) {
      this.lifecycleListener.onStop();
    }
    super.onStop();
  }


  public interface LifecycleListener {
    void onStart();

    void onResume();

    void onPause();

    void onStop();
  }
}
