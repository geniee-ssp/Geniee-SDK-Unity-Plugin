typedef const void *GNSUTypeRef;
typedef const void *GNSUTypeFullscreenInterstitialAdClientRef;
typedef const void *GNSUTypeFullscreenInterstitialAdRef;

typedef void (*GNSUFullscreenInterstitialAdDidReceiveAdCallback)(GNSUTypeFullscreenInterstitialAdClientRef *fullscreenInterstitialClient);
typedef void (*GNSUFullscreenInterstitialAdWillPresentScreenCallback)(GNSUTypeFullscreenInterstitialAdClientRef *fullscreenInterstitialClient);
typedef void (*GNSUFullscreenInterstitialAdDidCloseCallback)(GNSUTypeFullscreenInterstitialAdClientRef *fullscreenInterstitialClient);
typedef void (*GNSUFullscreenInterstitialAdErrorCallback)(GNSUTypeFullscreenInterstitialAdClientRef *fullscreenInterstitialClient, int errorCode, const char* errorDescription);
