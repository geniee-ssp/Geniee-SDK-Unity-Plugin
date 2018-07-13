#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>
#include <stdint.h>

#include "il2cpp-class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"


// System.EventHandler`1<System.EventArgs>
struct EventHandler_1_t1515976428;
// System.EventHandler`1<GoogleMobileAds.Api.AdFailedToLoadEventArgs>
struct EventHandler_1_t780121155;
// System.EventHandler`1<GoogleMobileAds.Api.Reward>
struct EventHandler_1_t1628180368;
// System.EventHandler`1<GoogleMobileAds.Api.CustomNativeEventArgs>
struct EventHandler_1_t1283979565;
// System.Action
struct Action_t1264377477;
// System.Void
struct Void_t1185182177;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.DelegateData
struct DelegateData_t1677132599;
// GoogleMobileAds.iOS.RewardBasedVideoAdClient/GADURewardBasedVideoAdDidReceiveAdCallback
struct GADURewardBasedVideoAdDidReceiveAdCallback_t462486315;
// GoogleMobileAds.iOS.RewardBasedVideoAdClient/GADURewardBasedVideoAdDidFailToReceiveAdWithErrorCallback
struct GADURewardBasedVideoAdDidFailToReceiveAdWithErrorCallback_t3979086788;
// GoogleMobileAds.iOS.RewardBasedVideoAdClient/GADURewardBasedVideoAdDidOpenCallback
struct GADURewardBasedVideoAdDidOpenCallback_t3638490629;
// GoogleMobileAds.iOS.RewardBasedVideoAdClient/GADURewardBasedVideoAdDidStartCallback
struct GADURewardBasedVideoAdDidStartCallback_t2792276088;
// GoogleMobileAds.iOS.RewardBasedVideoAdClient/GADURewardBasedVideoAdDidCloseCallback
struct GADURewardBasedVideoAdDidCloseCallback_t623082069;
// GoogleMobileAds.iOS.RewardBasedVideoAdClient/GADURewardBasedVideoAdDidRewardCallback
struct GADURewardBasedVideoAdDidRewardCallback_t990863796;
// GoogleMobileAds.iOS.RewardBasedVideoAdClient/GADURewardBasedVideoAdWillLeaveApplicationCallback
struct GADURewardBasedVideoAdWillLeaveApplicationCallback_t3217042531;
// GoogleMobileAds.iOS.RewardBasedVideoAdClient/GADURewardBasedVideoAdDidCompleteCallback
struct GADURewardBasedVideoAdDidCompleteCallback_t2076181;
// System.Collections.Generic.Dictionary`2<System.String,System.Action`2<GoogleMobileAds.Api.CustomNativeTemplateAd,System.String>>
struct Dictionary_2_t856064493;
// GoogleMobileAds.iOS.AdLoaderClient/GADUAdLoaderDidReceiveNativeCustomTemplateAdCallback
struct GADUAdLoaderDidReceiveNativeCustomTemplateAdCallback_t2228922418;
// GoogleMobileAds.iOS.AdLoaderClient/GADUAdLoaderDidFailToReceiveAdWithErrorCallback
struct GADUAdLoaderDidFailToReceiveAdWithErrorCallback_t3488831432;
// GoogleMobileAds.iOS.BannerClient/GADUAdViewDidReceiveAdCallback
struct GADUAdViewDidReceiveAdCallback_t2543294242;
// GoogleMobileAds.iOS.BannerClient/GADUAdViewDidFailToReceiveAdWithErrorCallback
struct GADUAdViewDidFailToReceiveAdWithErrorCallback_t643467547;
// GoogleMobileAds.iOS.BannerClient/GADUAdViewWillPresentScreenCallback
struct GADUAdViewWillPresentScreenCallback_t2057580186;
// GoogleMobileAds.iOS.BannerClient/GADUAdViewDidDismissScreenCallback
struct GADUAdViewDidDismissScreenCallback_t972393216;
// GoogleMobileAds.iOS.BannerClient/GADUAdViewWillLeaveApplicationCallback
struct GADUAdViewWillLeaveApplicationCallback_t3323587265;
// System.Action`2<GoogleMobileAds.Api.CustomNativeTemplateAd,System.String>
struct Action_2_t1070808194;
// GoogleMobileAds.iOS.CustomNativeTemplateClient/GADUNativeCustomTemplateDidReceiveClick
struct GADUNativeCustomTemplateDidReceiveClick_t350204406;
// GoogleMobileAds.iOS.InterstitialClient/GADUInterstitialDidReceiveAdCallback
struct GADUInterstitialDidReceiveAdCallback_t821971233;
// GoogleMobileAds.iOS.InterstitialClient/GADUInterstitialDidFailToReceiveAdWithErrorCallback
struct GADUInterstitialDidFailToReceiveAdWithErrorCallback_t1323914714;
// GoogleMobileAds.iOS.InterstitialClient/GADUInterstitialWillPresentScreenCallback
struct GADUInterstitialWillPresentScreenCallback_t539653454;
// GoogleMobileAds.iOS.InterstitialClient/GADUInterstitialDidDismissScreenCallback
struct GADUInterstitialDidDismissScreenCallback_t1339081348;
// GoogleMobileAds.iOS.InterstitialClient/GADUInterstitialWillLeaveApplicationCallback
struct GADUInterstitialWillLeaveApplicationCallback_t1816935820;
// System.String
struct String_t;
// System.IAsyncResult
struct IAsyncResult_t767004451;
// System.AsyncCallback
struct AsyncCallback_t3962456242;
// GoogleMobileAds.Api.AdRequest
struct AdRequest_t1573687800;
// UnityEngine.UI.ScrollRect
struct ScrollRect_t4137855814;
// UnityEngine.UI.Text
struct Text_t1901882714;




#ifndef RUNTIMEOBJECT_H
#define RUNTIMEOBJECT_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEOBJECT_H
#ifndef DUMMYCLIENT_T519661512_H
#define DUMMYCLIENT_T519661512_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GoogleMobileAds.Common.DummyClient
struct  DummyClient_t519661512  : public RuntimeObject
{
public:
	// System.EventHandler`1<System.EventArgs> GoogleMobileAds.Common.DummyClient::OnAdLoaded
	EventHandler_1_t1515976428 * ___OnAdLoaded_0;
	// System.EventHandler`1<GoogleMobileAds.Api.AdFailedToLoadEventArgs> GoogleMobileAds.Common.DummyClient::OnAdFailedToLoad
	EventHandler_1_t780121155 * ___OnAdFailedToLoad_1;
	// System.EventHandler`1<System.EventArgs> GoogleMobileAds.Common.DummyClient::OnAdOpening
	EventHandler_1_t1515976428 * ___OnAdOpening_2;
	// System.EventHandler`1<System.EventArgs> GoogleMobileAds.Common.DummyClient::OnAdStarted
	EventHandler_1_t1515976428 * ___OnAdStarted_3;
	// System.EventHandler`1<System.EventArgs> GoogleMobileAds.Common.DummyClient::OnAdClosed
	EventHandler_1_t1515976428 * ___OnAdClosed_4;
	// System.EventHandler`1<GoogleMobileAds.Api.Reward> GoogleMobileAds.Common.DummyClient::OnAdRewarded
	EventHandler_1_t1628180368 * ___OnAdRewarded_5;
	// System.EventHandler`1<System.EventArgs> GoogleMobileAds.Common.DummyClient::OnAdLeavingApplication
	EventHandler_1_t1515976428 * ___OnAdLeavingApplication_6;
	// System.EventHandler`1<System.EventArgs> GoogleMobileAds.Common.DummyClient::OnAdCompleted
	EventHandler_1_t1515976428 * ___OnAdCompleted_7;
	// System.EventHandler`1<GoogleMobileAds.Api.CustomNativeEventArgs> GoogleMobileAds.Common.DummyClient::OnCustomNativeTemplateAdLoaded
	EventHandler_1_t1283979565 * ___OnCustomNativeTemplateAdLoaded_8;

public:
	inline static int32_t get_offset_of_OnAdLoaded_0() { return static_cast<int32_t>(offsetof(DummyClient_t519661512, ___OnAdLoaded_0)); }
	inline EventHandler_1_t1515976428 * get_OnAdLoaded_0() const { return ___OnAdLoaded_0; }
	inline EventHandler_1_t1515976428 ** get_address_of_OnAdLoaded_0() { return &___OnAdLoaded_0; }
	inline void set_OnAdLoaded_0(EventHandler_1_t1515976428 * value)
	{
		___OnAdLoaded_0 = value;
		Il2CppCodeGenWriteBarrier((&___OnAdLoaded_0), value);
	}

	inline static int32_t get_offset_of_OnAdFailedToLoad_1() { return static_cast<int32_t>(offsetof(DummyClient_t519661512, ___OnAdFailedToLoad_1)); }
	inline EventHandler_1_t780121155 * get_OnAdFailedToLoad_1() const { return ___OnAdFailedToLoad_1; }
	inline EventHandler_1_t780121155 ** get_address_of_OnAdFailedToLoad_1() { return &___OnAdFailedToLoad_1; }
	inline void set_OnAdFailedToLoad_1(EventHandler_1_t780121155 * value)
	{
		___OnAdFailedToLoad_1 = value;
		Il2CppCodeGenWriteBarrier((&___OnAdFailedToLoad_1), value);
	}

	inline static int32_t get_offset_of_OnAdOpening_2() { return static_cast<int32_t>(offsetof(DummyClient_t519661512, ___OnAdOpening_2)); }
	inline EventHandler_1_t1515976428 * get_OnAdOpening_2() const { return ___OnAdOpening_2; }
	inline EventHandler_1_t1515976428 ** get_address_of_OnAdOpening_2() { return &___OnAdOpening_2; }
	inline void set_OnAdOpening_2(EventHandler_1_t1515976428 * value)
	{
		___OnAdOpening_2 = value;
		Il2CppCodeGenWriteBarrier((&___OnAdOpening_2), value);
	}

	inline static int32_t get_offset_of_OnAdStarted_3() { return static_cast<int32_t>(offsetof(DummyClient_t519661512, ___OnAdStarted_3)); }
	inline EventHandler_1_t1515976428 * get_OnAdStarted_3() const { return ___OnAdStarted_3; }
	inline EventHandler_1_t1515976428 ** get_address_of_OnAdStarted_3() { return &___OnAdStarted_3; }
	inline void set_OnAdStarted_3(EventHandler_1_t1515976428 * value)
	{
		___OnAdStarted_3 = value;
		Il2CppCodeGenWriteBarrier((&___OnAdStarted_3), value);
	}

	inline static int32_t get_offset_of_OnAdClosed_4() { return static_cast<int32_t>(offsetof(DummyClient_t519661512, ___OnAdClosed_4)); }
	inline EventHandler_1_t1515976428 * get_OnAdClosed_4() const { return ___OnAdClosed_4; }
	inline EventHandler_1_t1515976428 ** get_address_of_OnAdClosed_4() { return &___OnAdClosed_4; }
	inline void set_OnAdClosed_4(EventHandler_1_t1515976428 * value)
	{
		___OnAdClosed_4 = value;
		Il2CppCodeGenWriteBarrier((&___OnAdClosed_4), value);
	}

	inline static int32_t get_offset_of_OnAdRewarded_5() { return static_cast<int32_t>(offsetof(DummyClient_t519661512, ___OnAdRewarded_5)); }
	inline EventHandler_1_t1628180368 * get_OnAdRewarded_5() const { return ___OnAdRewarded_5; }
	inline EventHandler_1_t1628180368 ** get_address_of_OnAdRewarded_5() { return &___OnAdRewarded_5; }
	inline void set_OnAdRewarded_5(EventHandler_1_t1628180368 * value)
	{
		___OnAdRewarded_5 = value;
		Il2CppCodeGenWriteBarrier((&___OnAdRewarded_5), value);
	}

	inline static int32_t get_offset_of_OnAdLeavingApplication_6() { return static_cast<int32_t>(offsetof(DummyClient_t519661512, ___OnAdLeavingApplication_6)); }
	inline EventHandler_1_t1515976428 * get_OnAdLeavingApplication_6() const { return ___OnAdLeavingApplication_6; }
	inline EventHandler_1_t1515976428 ** get_address_of_OnAdLeavingApplication_6() { return &___OnAdLeavingApplication_6; }
	inline void set_OnAdLeavingApplication_6(EventHandler_1_t1515976428 * value)
	{
		___OnAdLeavingApplication_6 = value;
		Il2CppCodeGenWriteBarrier((&___OnAdLeavingApplication_6), value);
	}

	inline static int32_t get_offset_of_OnAdCompleted_7() { return static_cast<int32_t>(offsetof(DummyClient_t519661512, ___OnAdCompleted_7)); }
	inline EventHandler_1_t1515976428 * get_OnAdCompleted_7() const { return ___OnAdCompleted_7; }
	inline EventHandler_1_t1515976428 ** get_address_of_OnAdCompleted_7() { return &___OnAdCompleted_7; }
	inline void set_OnAdCompleted_7(EventHandler_1_t1515976428 * value)
	{
		___OnAdCompleted_7 = value;
		Il2CppCodeGenWriteBarrier((&___OnAdCompleted_7), value);
	}

	inline static int32_t get_offset_of_OnCustomNativeTemplateAdLoaded_8() { return static_cast<int32_t>(offsetof(DummyClient_t519661512, ___OnCustomNativeTemplateAdLoaded_8)); }
	inline EventHandler_1_t1283979565 * get_OnCustomNativeTemplateAdLoaded_8() const { return ___OnCustomNativeTemplateAdLoaded_8; }
	inline EventHandler_1_t1283979565 ** get_address_of_OnCustomNativeTemplateAdLoaded_8() { return &___OnCustomNativeTemplateAdLoaded_8; }
	inline void set_OnCustomNativeTemplateAdLoaded_8(EventHandler_1_t1283979565 * value)
	{
		___OnCustomNativeTemplateAdLoaded_8 = value;
		Il2CppCodeGenWriteBarrier((&___OnCustomNativeTemplateAdLoaded_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DUMMYCLIENT_T519661512_H
#ifndef UTILS_T3548761374_H
#define UTILS_T3548761374_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GoogleMobileAds.Common.Utils
struct  Utils_t3548761374  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UTILS_T3548761374_H
#ifndef GOOGLEMOBILEADSCLIENTFACTORY_T3556675256_H
#define GOOGLEMOBILEADSCLIENTFACTORY_T3556675256_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GoogleMobileAds.GoogleMobileAdsClientFactory
struct  GoogleMobileAdsClientFactory_t3556675256  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GOOGLEMOBILEADSCLIENTFACTORY_T3556675256_H
#ifndef ATTRIBUTE_T861562559_H
#define ATTRIBUTE_T861562559_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Attribute
struct  Attribute_t861562559  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ATTRIBUTE_T861562559_H
#ifndef VALUETYPE_T3640485471_H
#define VALUETYPE_T3640485471_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t3640485471  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t3640485471_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t3640485471_marshaled_com
{
};
#endif // VALUETYPE_T3640485471_H
#ifndef U3CDELAYMETHODU3EC__ITERATOR0_T2878256488_H
#define U3CDELAYMETHODU3EC__ITERATOR0_T2878256488_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ManageScrollContent/<DelayMethod>c__Iterator0
struct  U3CDelayMethodU3Ec__Iterator0_t2878256488  : public RuntimeObject
{
public:
	// System.Int32 ManageScrollContent/<DelayMethod>c__Iterator0::<i>__1
	int32_t ___U3CiU3E__1_0;
	// System.Int32 ManageScrollContent/<DelayMethod>c__Iterator0::delayFrameCount
	int32_t ___delayFrameCount_1;
	// System.Action ManageScrollContent/<DelayMethod>c__Iterator0::action
	Action_t1264377477 * ___action_2;
	// System.Object ManageScrollContent/<DelayMethod>c__Iterator0::$current
	RuntimeObject * ___U24current_3;
	// System.Boolean ManageScrollContent/<DelayMethod>c__Iterator0::$disposing
	bool ___U24disposing_4;
	// System.Int32 ManageScrollContent/<DelayMethod>c__Iterator0::$PC
	int32_t ___U24PC_5;

public:
	inline static int32_t get_offset_of_U3CiU3E__1_0() { return static_cast<int32_t>(offsetof(U3CDelayMethodU3Ec__Iterator0_t2878256488, ___U3CiU3E__1_0)); }
	inline int32_t get_U3CiU3E__1_0() const { return ___U3CiU3E__1_0; }
	inline int32_t* get_address_of_U3CiU3E__1_0() { return &___U3CiU3E__1_0; }
	inline void set_U3CiU3E__1_0(int32_t value)
	{
		___U3CiU3E__1_0 = value;
	}

	inline static int32_t get_offset_of_delayFrameCount_1() { return static_cast<int32_t>(offsetof(U3CDelayMethodU3Ec__Iterator0_t2878256488, ___delayFrameCount_1)); }
	inline int32_t get_delayFrameCount_1() const { return ___delayFrameCount_1; }
	inline int32_t* get_address_of_delayFrameCount_1() { return &___delayFrameCount_1; }
	inline void set_delayFrameCount_1(int32_t value)
	{
		___delayFrameCount_1 = value;
	}

	inline static int32_t get_offset_of_action_2() { return static_cast<int32_t>(offsetof(U3CDelayMethodU3Ec__Iterator0_t2878256488, ___action_2)); }
	inline Action_t1264377477 * get_action_2() const { return ___action_2; }
	inline Action_t1264377477 ** get_address_of_action_2() { return &___action_2; }
	inline void set_action_2(Action_t1264377477 * value)
	{
		___action_2 = value;
		Il2CppCodeGenWriteBarrier((&___action_2), value);
	}

	inline static int32_t get_offset_of_U24current_3() { return static_cast<int32_t>(offsetof(U3CDelayMethodU3Ec__Iterator0_t2878256488, ___U24current_3)); }
	inline RuntimeObject * get_U24current_3() const { return ___U24current_3; }
	inline RuntimeObject ** get_address_of_U24current_3() { return &___U24current_3; }
	inline void set_U24current_3(RuntimeObject * value)
	{
		___U24current_3 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_3), value);
	}

	inline static int32_t get_offset_of_U24disposing_4() { return static_cast<int32_t>(offsetof(U3CDelayMethodU3Ec__Iterator0_t2878256488, ___U24disposing_4)); }
	inline bool get_U24disposing_4() const { return ___U24disposing_4; }
	inline bool* get_address_of_U24disposing_4() { return &___U24disposing_4; }
	inline void set_U24disposing_4(bool value)
	{
		___U24disposing_4 = value;
	}

	inline static int32_t get_offset_of_U24PC_5() { return static_cast<int32_t>(offsetof(U3CDelayMethodU3Ec__Iterator0_t2878256488, ___U24PC_5)); }
	inline int32_t get_U24PC_5() const { return ___U24PC_5; }
	inline int32_t* get_address_of_U24PC_5() { return &___U24PC_5; }
	inline void set_U24PC_5(int32_t value)
	{
		___U24PC_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CDELAYMETHODU3EC__ITERATOR0_T2878256488_H
#ifndef UTILS_T143735646_H
#define UTILS_T143735646_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GoogleMobileAds.iOS.Utils
struct  Utils_t143735646  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UTILS_T143735646_H
#ifndef MOBILEADSCLIENT_T1008075298_H
#define MOBILEADSCLIENT_T1008075298_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GoogleMobileAds.iOS.MobileAdsClient
struct  MobileAdsClient_t1008075298  : public RuntimeObject
{
public:

public:
};

struct MobileAdsClient_t1008075298_StaticFields
{
public:
	// GoogleMobileAds.iOS.MobileAdsClient GoogleMobileAds.iOS.MobileAdsClient::instance
	MobileAdsClient_t1008075298 * ___instance_0;

public:
	inline static int32_t get_offset_of_instance_0() { return static_cast<int32_t>(offsetof(MobileAdsClient_t1008075298_StaticFields, ___instance_0)); }
	inline MobileAdsClient_t1008075298 * get_instance_0() const { return ___instance_0; }
	inline MobileAdsClient_t1008075298 ** get_address_of_instance_0() { return &___instance_0; }
	inline void set_instance_0(MobileAdsClient_t1008075298 * value)
	{
		___instance_0 = value;
		Il2CppCodeGenWriteBarrier((&___instance_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MOBILEADSCLIENT_T1008075298_H
#ifndef EXTERNS_T92207873_H
#define EXTERNS_T92207873_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GoogleMobileAds.iOS.Externs
struct  Externs_t92207873  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXTERNS_T92207873_H
#ifndef NATIVEADTYPES_T3925888818_H
#define NATIVEADTYPES_T3925888818_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GoogleMobileAds.iOS.NativeAdTypes
struct  NativeAdTypes_t3925888818 
{
public:
	// System.Int32 GoogleMobileAds.iOS.NativeAdTypes::CustomTemplateAd
	int32_t ___CustomTemplateAd_0;

public:
	inline static int32_t get_offset_of_CustomTemplateAd_0() { return static_cast<int32_t>(offsetof(NativeAdTypes_t3925888818, ___CustomTemplateAd_0)); }
	inline int32_t get_CustomTemplateAd_0() const { return ___CustomTemplateAd_0; }
	inline int32_t* get_address_of_CustomTemplateAd_0() { return &___CustomTemplateAd_0; }
	inline void set_CustomTemplateAd_0(int32_t value)
	{
		___CustomTemplateAd_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NATIVEADTYPES_T3925888818_H
#ifndef DOUBLE_T594665363_H
#define DOUBLE_T594665363_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Double
struct  Double_t594665363 
{
public:
	// System.Double System.Double::m_value
	double ___m_value_13;

public:
	inline static int32_t get_offset_of_m_value_13() { return static_cast<int32_t>(offsetof(Double_t594665363, ___m_value_13)); }
	inline double get_m_value_13() const { return ___m_value_13; }
	inline double* get_address_of_m_value_13() { return &___m_value_13; }
	inline void set_m_value_13(double value)
	{
		___m_value_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DOUBLE_T594665363_H
#ifndef VOID_T1185182177_H
#define VOID_T1185182177_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Void
struct  Void_t1185182177 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VOID_T1185182177_H
#ifndef INTPTR_T_H
#define INTPTR_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IntPtr
struct  IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTPTR_T_H
#ifndef MONOPINVOKECALLBACKATTRIBUTE_T3472581009_H
#define MONOPINVOKECALLBACKATTRIBUTE_T3472581009_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MonoPInvokeCallbackAttribute
struct  MonoPInvokeCallbackAttribute_t3472581009  : public Attribute_t861562559
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOPINVOKECALLBACKATTRIBUTE_T3472581009_H
#ifndef DELEGATE_T1188392813_H
#define DELEGATE_T1188392813_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Delegate
struct  Delegate_t1188392813  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_5;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_6;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_7;
	// System.DelegateData System.Delegate::data
	DelegateData_t1677132599 * ___data_8;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_target_2), value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_method_code_5() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_code_5)); }
	inline intptr_t get_method_code_5() const { return ___method_code_5; }
	inline intptr_t* get_address_of_method_code_5() { return &___method_code_5; }
	inline void set_method_code_5(intptr_t value)
	{
		___method_code_5 = value;
	}

	inline static int32_t get_offset_of_method_info_6() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_info_6)); }
	inline MethodInfo_t * get_method_info_6() const { return ___method_info_6; }
	inline MethodInfo_t ** get_address_of_method_info_6() { return &___method_info_6; }
	inline void set_method_info_6(MethodInfo_t * value)
	{
		___method_info_6 = value;
		Il2CppCodeGenWriteBarrier((&___method_info_6), value);
	}

	inline static int32_t get_offset_of_original_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___original_method_info_7)); }
	inline MethodInfo_t * get_original_method_info_7() const { return ___original_method_info_7; }
	inline MethodInfo_t ** get_address_of_original_method_info_7() { return &___original_method_info_7; }
	inline void set_original_method_info_7(MethodInfo_t * value)
	{
		___original_method_info_7 = value;
		Il2CppCodeGenWriteBarrier((&___original_method_info_7), value);
	}

	inline static int32_t get_offset_of_data_8() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___data_8)); }
	inline DelegateData_t1677132599 * get_data_8() const { return ___data_8; }
	inline DelegateData_t1677132599 ** get_address_of_data_8() { return &___data_8; }
	inline void set_data_8(DelegateData_t1677132599 * value)
	{
		___data_8 = value;
		Il2CppCodeGenWriteBarrier((&___data_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DELEGATE_T1188392813_H
#ifndef REWARDBASEDVIDEOADCLIENT_T745716004_H
#define REWARDBASEDVIDEOADCLIENT_T745716004_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GoogleMobileAds.iOS.RewardBasedVideoAdClient
struct  RewardBasedVideoAdClient_t745716004  : public RuntimeObject
{
public:
	// System.IntPtr GoogleMobileAds.iOS.RewardBasedVideoAdClient::rewardBasedVideoAdPtr
	intptr_t ___rewardBasedVideoAdPtr_0;
	// System.IntPtr GoogleMobileAds.iOS.RewardBasedVideoAdClient::rewardBasedVideoAdClientPtr
	intptr_t ___rewardBasedVideoAdClientPtr_1;
	// System.EventHandler`1<System.EventArgs> GoogleMobileAds.iOS.RewardBasedVideoAdClient::OnAdLoaded
	EventHandler_1_t1515976428 * ___OnAdLoaded_2;
	// System.EventHandler`1<GoogleMobileAds.Api.AdFailedToLoadEventArgs> GoogleMobileAds.iOS.RewardBasedVideoAdClient::OnAdFailedToLoad
	EventHandler_1_t780121155 * ___OnAdFailedToLoad_3;
	// System.EventHandler`1<System.EventArgs> GoogleMobileAds.iOS.RewardBasedVideoAdClient::OnAdOpening
	EventHandler_1_t1515976428 * ___OnAdOpening_4;
	// System.EventHandler`1<System.EventArgs> GoogleMobileAds.iOS.RewardBasedVideoAdClient::OnAdStarted
	EventHandler_1_t1515976428 * ___OnAdStarted_5;
	// System.EventHandler`1<System.EventArgs> GoogleMobileAds.iOS.RewardBasedVideoAdClient::OnAdClosed
	EventHandler_1_t1515976428 * ___OnAdClosed_6;
	// System.EventHandler`1<GoogleMobileAds.Api.Reward> GoogleMobileAds.iOS.RewardBasedVideoAdClient::OnAdRewarded
	EventHandler_1_t1628180368 * ___OnAdRewarded_7;
	// System.EventHandler`1<System.EventArgs> GoogleMobileAds.iOS.RewardBasedVideoAdClient::OnAdLeavingApplication
	EventHandler_1_t1515976428 * ___OnAdLeavingApplication_8;
	// System.EventHandler`1<System.EventArgs> GoogleMobileAds.iOS.RewardBasedVideoAdClient::OnAdCompleted
	EventHandler_1_t1515976428 * ___OnAdCompleted_9;

public:
	inline static int32_t get_offset_of_rewardBasedVideoAdPtr_0() { return static_cast<int32_t>(offsetof(RewardBasedVideoAdClient_t745716004, ___rewardBasedVideoAdPtr_0)); }
	inline intptr_t get_rewardBasedVideoAdPtr_0() const { return ___rewardBasedVideoAdPtr_0; }
	inline intptr_t* get_address_of_rewardBasedVideoAdPtr_0() { return &___rewardBasedVideoAdPtr_0; }
	inline void set_rewardBasedVideoAdPtr_0(intptr_t value)
	{
		___rewardBasedVideoAdPtr_0 = value;
	}

	inline static int32_t get_offset_of_rewardBasedVideoAdClientPtr_1() { return static_cast<int32_t>(offsetof(RewardBasedVideoAdClient_t745716004, ___rewardBasedVideoAdClientPtr_1)); }
	inline intptr_t get_rewardBasedVideoAdClientPtr_1() const { return ___rewardBasedVideoAdClientPtr_1; }
	inline intptr_t* get_address_of_rewardBasedVideoAdClientPtr_1() { return &___rewardBasedVideoAdClientPtr_1; }
	inline void set_rewardBasedVideoAdClientPtr_1(intptr_t value)
	{
		___rewardBasedVideoAdClientPtr_1 = value;
	}

	inline static int32_t get_offset_of_OnAdLoaded_2() { return static_cast<int32_t>(offsetof(RewardBasedVideoAdClient_t745716004, ___OnAdLoaded_2)); }
	inline EventHandler_1_t1515976428 * get_OnAdLoaded_2() const { return ___OnAdLoaded_2; }
	inline EventHandler_1_t1515976428 ** get_address_of_OnAdLoaded_2() { return &___OnAdLoaded_2; }
	inline void set_OnAdLoaded_2(EventHandler_1_t1515976428 * value)
	{
		___OnAdLoaded_2 = value;
		Il2CppCodeGenWriteBarrier((&___OnAdLoaded_2), value);
	}

	inline static int32_t get_offset_of_OnAdFailedToLoad_3() { return static_cast<int32_t>(offsetof(RewardBasedVideoAdClient_t745716004, ___OnAdFailedToLoad_3)); }
	inline EventHandler_1_t780121155 * get_OnAdFailedToLoad_3() const { return ___OnAdFailedToLoad_3; }
	inline EventHandler_1_t780121155 ** get_address_of_OnAdFailedToLoad_3() { return &___OnAdFailedToLoad_3; }
	inline void set_OnAdFailedToLoad_3(EventHandler_1_t780121155 * value)
	{
		___OnAdFailedToLoad_3 = value;
		Il2CppCodeGenWriteBarrier((&___OnAdFailedToLoad_3), value);
	}

	inline static int32_t get_offset_of_OnAdOpening_4() { return static_cast<int32_t>(offsetof(RewardBasedVideoAdClient_t745716004, ___OnAdOpening_4)); }
	inline EventHandler_1_t1515976428 * get_OnAdOpening_4() const { return ___OnAdOpening_4; }
	inline EventHandler_1_t1515976428 ** get_address_of_OnAdOpening_4() { return &___OnAdOpening_4; }
	inline void set_OnAdOpening_4(EventHandler_1_t1515976428 * value)
	{
		___OnAdOpening_4 = value;
		Il2CppCodeGenWriteBarrier((&___OnAdOpening_4), value);
	}

	inline static int32_t get_offset_of_OnAdStarted_5() { return static_cast<int32_t>(offsetof(RewardBasedVideoAdClient_t745716004, ___OnAdStarted_5)); }
	inline EventHandler_1_t1515976428 * get_OnAdStarted_5() const { return ___OnAdStarted_5; }
	inline EventHandler_1_t1515976428 ** get_address_of_OnAdStarted_5() { return &___OnAdStarted_5; }
	inline void set_OnAdStarted_5(EventHandler_1_t1515976428 * value)
	{
		___OnAdStarted_5 = value;
		Il2CppCodeGenWriteBarrier((&___OnAdStarted_5), value);
	}

	inline static int32_t get_offset_of_OnAdClosed_6() { return static_cast<int32_t>(offsetof(RewardBasedVideoAdClient_t745716004, ___OnAdClosed_6)); }
	inline EventHandler_1_t1515976428 * get_OnAdClosed_6() const { return ___OnAdClosed_6; }
	inline EventHandler_1_t1515976428 ** get_address_of_OnAdClosed_6() { return &___OnAdClosed_6; }
	inline void set_OnAdClosed_6(EventHandler_1_t1515976428 * value)
	{
		___OnAdClosed_6 = value;
		Il2CppCodeGenWriteBarrier((&___OnAdClosed_6), value);
	}

	inline static int32_t get_offset_of_OnAdRewarded_7() { return static_cast<int32_t>(offsetof(RewardBasedVideoAdClient_t745716004, ___OnAdRewarded_7)); }
	inline EventHandler_1_t1628180368 * get_OnAdRewarded_7() const { return ___OnAdRewarded_7; }
	inline EventHandler_1_t1628180368 ** get_address_of_OnAdRewarded_7() { return &___OnAdRewarded_7; }
	inline void set_OnAdRewarded_7(EventHandler_1_t1628180368 * value)
	{
		___OnAdRewarded_7 = value;
		Il2CppCodeGenWriteBarrier((&___OnAdRewarded_7), value);
	}

	inline static int32_t get_offset_of_OnAdLeavingApplication_8() { return static_cast<int32_t>(offsetof(RewardBasedVideoAdClient_t745716004, ___OnAdLeavingApplication_8)); }
	inline EventHandler_1_t1515976428 * get_OnAdLeavingApplication_8() const { return ___OnAdLeavingApplication_8; }
	inline EventHandler_1_t1515976428 ** get_address_of_OnAdLeavingApplication_8() { return &___OnAdLeavingApplication_8; }
	inline void set_OnAdLeavingApplication_8(EventHandler_1_t1515976428 * value)
	{
		___OnAdLeavingApplication_8 = value;
		Il2CppCodeGenWriteBarrier((&___OnAdLeavingApplication_8), value);
	}

	inline static int32_t get_offset_of_OnAdCompleted_9() { return static_cast<int32_t>(offsetof(RewardBasedVideoAdClient_t745716004, ___OnAdCompleted_9)); }
	inline EventHandler_1_t1515976428 * get_OnAdCompleted_9() const { return ___OnAdCompleted_9; }
	inline EventHandler_1_t1515976428 ** get_address_of_OnAdCompleted_9() { return &___OnAdCompleted_9; }
	inline void set_OnAdCompleted_9(EventHandler_1_t1515976428 * value)
	{
		___OnAdCompleted_9 = value;
		Il2CppCodeGenWriteBarrier((&___OnAdCompleted_9), value);
	}
};

struct RewardBasedVideoAdClient_t745716004_StaticFields
{
public:
	// GoogleMobileAds.iOS.RewardBasedVideoAdClient/GADURewardBasedVideoAdDidReceiveAdCallback GoogleMobileAds.iOS.RewardBasedVideoAdClient::<>f__mg$cache0
	GADURewardBasedVideoAdDidReceiveAdCallback_t462486315 * ___U3CU3Ef__mgU24cache0_10;
	// GoogleMobileAds.iOS.RewardBasedVideoAdClient/GADURewardBasedVideoAdDidFailToReceiveAdWithErrorCallback GoogleMobileAds.iOS.RewardBasedVideoAdClient::<>f__mg$cache1
	GADURewardBasedVideoAdDidFailToReceiveAdWithErrorCallback_t3979086788 * ___U3CU3Ef__mgU24cache1_11;
	// GoogleMobileAds.iOS.RewardBasedVideoAdClient/GADURewardBasedVideoAdDidOpenCallback GoogleMobileAds.iOS.RewardBasedVideoAdClient::<>f__mg$cache2
	GADURewardBasedVideoAdDidOpenCallback_t3638490629 * ___U3CU3Ef__mgU24cache2_12;
	// GoogleMobileAds.iOS.RewardBasedVideoAdClient/GADURewardBasedVideoAdDidStartCallback GoogleMobileAds.iOS.RewardBasedVideoAdClient::<>f__mg$cache3
	GADURewardBasedVideoAdDidStartCallback_t2792276088 * ___U3CU3Ef__mgU24cache3_13;
	// GoogleMobileAds.iOS.RewardBasedVideoAdClient/GADURewardBasedVideoAdDidCloseCallback GoogleMobileAds.iOS.RewardBasedVideoAdClient::<>f__mg$cache4
	GADURewardBasedVideoAdDidCloseCallback_t623082069 * ___U3CU3Ef__mgU24cache4_14;
	// GoogleMobileAds.iOS.RewardBasedVideoAdClient/GADURewardBasedVideoAdDidRewardCallback GoogleMobileAds.iOS.RewardBasedVideoAdClient::<>f__mg$cache5
	GADURewardBasedVideoAdDidRewardCallback_t990863796 * ___U3CU3Ef__mgU24cache5_15;
	// GoogleMobileAds.iOS.RewardBasedVideoAdClient/GADURewardBasedVideoAdWillLeaveApplicationCallback GoogleMobileAds.iOS.RewardBasedVideoAdClient::<>f__mg$cache6
	GADURewardBasedVideoAdWillLeaveApplicationCallback_t3217042531 * ___U3CU3Ef__mgU24cache6_16;
	// GoogleMobileAds.iOS.RewardBasedVideoAdClient/GADURewardBasedVideoAdDidCompleteCallback GoogleMobileAds.iOS.RewardBasedVideoAdClient::<>f__mg$cache7
	GADURewardBasedVideoAdDidCompleteCallback_t2076181 * ___U3CU3Ef__mgU24cache7_17;

public:
	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache0_10() { return static_cast<int32_t>(offsetof(RewardBasedVideoAdClient_t745716004_StaticFields, ___U3CU3Ef__mgU24cache0_10)); }
	inline GADURewardBasedVideoAdDidReceiveAdCallback_t462486315 * get_U3CU3Ef__mgU24cache0_10() const { return ___U3CU3Ef__mgU24cache0_10; }
	inline GADURewardBasedVideoAdDidReceiveAdCallback_t462486315 ** get_address_of_U3CU3Ef__mgU24cache0_10() { return &___U3CU3Ef__mgU24cache0_10; }
	inline void set_U3CU3Ef__mgU24cache0_10(GADURewardBasedVideoAdDidReceiveAdCallback_t462486315 * value)
	{
		___U3CU3Ef__mgU24cache0_10 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache0_10), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache1_11() { return static_cast<int32_t>(offsetof(RewardBasedVideoAdClient_t745716004_StaticFields, ___U3CU3Ef__mgU24cache1_11)); }
	inline GADURewardBasedVideoAdDidFailToReceiveAdWithErrorCallback_t3979086788 * get_U3CU3Ef__mgU24cache1_11() const { return ___U3CU3Ef__mgU24cache1_11; }
	inline GADURewardBasedVideoAdDidFailToReceiveAdWithErrorCallback_t3979086788 ** get_address_of_U3CU3Ef__mgU24cache1_11() { return &___U3CU3Ef__mgU24cache1_11; }
	inline void set_U3CU3Ef__mgU24cache1_11(GADURewardBasedVideoAdDidFailToReceiveAdWithErrorCallback_t3979086788 * value)
	{
		___U3CU3Ef__mgU24cache1_11 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache1_11), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache2_12() { return static_cast<int32_t>(offsetof(RewardBasedVideoAdClient_t745716004_StaticFields, ___U3CU3Ef__mgU24cache2_12)); }
	inline GADURewardBasedVideoAdDidOpenCallback_t3638490629 * get_U3CU3Ef__mgU24cache2_12() const { return ___U3CU3Ef__mgU24cache2_12; }
	inline GADURewardBasedVideoAdDidOpenCallback_t3638490629 ** get_address_of_U3CU3Ef__mgU24cache2_12() { return &___U3CU3Ef__mgU24cache2_12; }
	inline void set_U3CU3Ef__mgU24cache2_12(GADURewardBasedVideoAdDidOpenCallback_t3638490629 * value)
	{
		___U3CU3Ef__mgU24cache2_12 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache2_12), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache3_13() { return static_cast<int32_t>(offsetof(RewardBasedVideoAdClient_t745716004_StaticFields, ___U3CU3Ef__mgU24cache3_13)); }
	inline GADURewardBasedVideoAdDidStartCallback_t2792276088 * get_U3CU3Ef__mgU24cache3_13() const { return ___U3CU3Ef__mgU24cache3_13; }
	inline GADURewardBasedVideoAdDidStartCallback_t2792276088 ** get_address_of_U3CU3Ef__mgU24cache3_13() { return &___U3CU3Ef__mgU24cache3_13; }
	inline void set_U3CU3Ef__mgU24cache3_13(GADURewardBasedVideoAdDidStartCallback_t2792276088 * value)
	{
		___U3CU3Ef__mgU24cache3_13 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache3_13), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache4_14() { return static_cast<int32_t>(offsetof(RewardBasedVideoAdClient_t745716004_StaticFields, ___U3CU3Ef__mgU24cache4_14)); }
	inline GADURewardBasedVideoAdDidCloseCallback_t623082069 * get_U3CU3Ef__mgU24cache4_14() const { return ___U3CU3Ef__mgU24cache4_14; }
	inline GADURewardBasedVideoAdDidCloseCallback_t623082069 ** get_address_of_U3CU3Ef__mgU24cache4_14() { return &___U3CU3Ef__mgU24cache4_14; }
	inline void set_U3CU3Ef__mgU24cache4_14(GADURewardBasedVideoAdDidCloseCallback_t623082069 * value)
	{
		___U3CU3Ef__mgU24cache4_14 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache4_14), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache5_15() { return static_cast<int32_t>(offsetof(RewardBasedVideoAdClient_t745716004_StaticFields, ___U3CU3Ef__mgU24cache5_15)); }
	inline GADURewardBasedVideoAdDidRewardCallback_t990863796 * get_U3CU3Ef__mgU24cache5_15() const { return ___U3CU3Ef__mgU24cache5_15; }
	inline GADURewardBasedVideoAdDidRewardCallback_t990863796 ** get_address_of_U3CU3Ef__mgU24cache5_15() { return &___U3CU3Ef__mgU24cache5_15; }
	inline void set_U3CU3Ef__mgU24cache5_15(GADURewardBasedVideoAdDidRewardCallback_t990863796 * value)
	{
		___U3CU3Ef__mgU24cache5_15 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache5_15), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache6_16() { return static_cast<int32_t>(offsetof(RewardBasedVideoAdClient_t745716004_StaticFields, ___U3CU3Ef__mgU24cache6_16)); }
	inline GADURewardBasedVideoAdWillLeaveApplicationCallback_t3217042531 * get_U3CU3Ef__mgU24cache6_16() const { return ___U3CU3Ef__mgU24cache6_16; }
	inline GADURewardBasedVideoAdWillLeaveApplicationCallback_t3217042531 ** get_address_of_U3CU3Ef__mgU24cache6_16() { return &___U3CU3Ef__mgU24cache6_16; }
	inline void set_U3CU3Ef__mgU24cache6_16(GADURewardBasedVideoAdWillLeaveApplicationCallback_t3217042531 * value)
	{
		___U3CU3Ef__mgU24cache6_16 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache6_16), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache7_17() { return static_cast<int32_t>(offsetof(RewardBasedVideoAdClient_t745716004_StaticFields, ___U3CU3Ef__mgU24cache7_17)); }
	inline GADURewardBasedVideoAdDidCompleteCallback_t2076181 * get_U3CU3Ef__mgU24cache7_17() const { return ___U3CU3Ef__mgU24cache7_17; }
	inline GADURewardBasedVideoAdDidCompleteCallback_t2076181 ** get_address_of_U3CU3Ef__mgU24cache7_17() { return &___U3CU3Ef__mgU24cache7_17; }
	inline void set_U3CU3Ef__mgU24cache7_17(GADURewardBasedVideoAdDidCompleteCallback_t2076181 * value)
	{
		___U3CU3Ef__mgU24cache7_17 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache7_17), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REWARDBASEDVIDEOADCLIENT_T745716004_H
#ifndef OBJECT_T631007953_H
#define OBJECT_T631007953_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Object
struct  Object_t631007953  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_t631007953, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_t631007953_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_t631007953_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_t631007953_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_t631007953_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};
#endif // OBJECT_T631007953_H
#ifndef ADLOADERCLIENT_T2216398974_H
#define ADLOADERCLIENT_T2216398974_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GoogleMobileAds.iOS.AdLoaderClient
struct  AdLoaderClient_t2216398974  : public RuntimeObject
{
public:
	// System.IntPtr GoogleMobileAds.iOS.AdLoaderClient::adLoaderPtr
	intptr_t ___adLoaderPtr_0;
	// System.IntPtr GoogleMobileAds.iOS.AdLoaderClient::adLoaderClientPtr
	intptr_t ___adLoaderClientPtr_1;
	// GoogleMobileAds.iOS.NativeAdTypes GoogleMobileAds.iOS.AdLoaderClient::adTypes
	NativeAdTypes_t3925888818  ___adTypes_2;
	// System.Collections.Generic.Dictionary`2<System.String,System.Action`2<GoogleMobileAds.Api.CustomNativeTemplateAd,System.String>> GoogleMobileAds.iOS.AdLoaderClient::customNativeTemplateCallbacks
	Dictionary_2_t856064493 * ___customNativeTemplateCallbacks_3;
	// System.EventHandler`1<GoogleMobileAds.Api.CustomNativeEventArgs> GoogleMobileAds.iOS.AdLoaderClient::OnCustomNativeTemplateAdLoaded
	EventHandler_1_t1283979565 * ___OnCustomNativeTemplateAdLoaded_4;
	// System.EventHandler`1<GoogleMobileAds.Api.AdFailedToLoadEventArgs> GoogleMobileAds.iOS.AdLoaderClient::OnAdFailedToLoad
	EventHandler_1_t780121155 * ___OnAdFailedToLoad_5;

public:
	inline static int32_t get_offset_of_adLoaderPtr_0() { return static_cast<int32_t>(offsetof(AdLoaderClient_t2216398974, ___adLoaderPtr_0)); }
	inline intptr_t get_adLoaderPtr_0() const { return ___adLoaderPtr_0; }
	inline intptr_t* get_address_of_adLoaderPtr_0() { return &___adLoaderPtr_0; }
	inline void set_adLoaderPtr_0(intptr_t value)
	{
		___adLoaderPtr_0 = value;
	}

	inline static int32_t get_offset_of_adLoaderClientPtr_1() { return static_cast<int32_t>(offsetof(AdLoaderClient_t2216398974, ___adLoaderClientPtr_1)); }
	inline intptr_t get_adLoaderClientPtr_1() const { return ___adLoaderClientPtr_1; }
	inline intptr_t* get_address_of_adLoaderClientPtr_1() { return &___adLoaderClientPtr_1; }
	inline void set_adLoaderClientPtr_1(intptr_t value)
	{
		___adLoaderClientPtr_1 = value;
	}

	inline static int32_t get_offset_of_adTypes_2() { return static_cast<int32_t>(offsetof(AdLoaderClient_t2216398974, ___adTypes_2)); }
	inline NativeAdTypes_t3925888818  get_adTypes_2() const { return ___adTypes_2; }
	inline NativeAdTypes_t3925888818 * get_address_of_adTypes_2() { return &___adTypes_2; }
	inline void set_adTypes_2(NativeAdTypes_t3925888818  value)
	{
		___adTypes_2 = value;
	}

	inline static int32_t get_offset_of_customNativeTemplateCallbacks_3() { return static_cast<int32_t>(offsetof(AdLoaderClient_t2216398974, ___customNativeTemplateCallbacks_3)); }
	inline Dictionary_2_t856064493 * get_customNativeTemplateCallbacks_3() const { return ___customNativeTemplateCallbacks_3; }
	inline Dictionary_2_t856064493 ** get_address_of_customNativeTemplateCallbacks_3() { return &___customNativeTemplateCallbacks_3; }
	inline void set_customNativeTemplateCallbacks_3(Dictionary_2_t856064493 * value)
	{
		___customNativeTemplateCallbacks_3 = value;
		Il2CppCodeGenWriteBarrier((&___customNativeTemplateCallbacks_3), value);
	}

	inline static int32_t get_offset_of_OnCustomNativeTemplateAdLoaded_4() { return static_cast<int32_t>(offsetof(AdLoaderClient_t2216398974, ___OnCustomNativeTemplateAdLoaded_4)); }
	inline EventHandler_1_t1283979565 * get_OnCustomNativeTemplateAdLoaded_4() const { return ___OnCustomNativeTemplateAdLoaded_4; }
	inline EventHandler_1_t1283979565 ** get_address_of_OnCustomNativeTemplateAdLoaded_4() { return &___OnCustomNativeTemplateAdLoaded_4; }
	inline void set_OnCustomNativeTemplateAdLoaded_4(EventHandler_1_t1283979565 * value)
	{
		___OnCustomNativeTemplateAdLoaded_4 = value;
		Il2CppCodeGenWriteBarrier((&___OnCustomNativeTemplateAdLoaded_4), value);
	}

	inline static int32_t get_offset_of_OnAdFailedToLoad_5() { return static_cast<int32_t>(offsetof(AdLoaderClient_t2216398974, ___OnAdFailedToLoad_5)); }
	inline EventHandler_1_t780121155 * get_OnAdFailedToLoad_5() const { return ___OnAdFailedToLoad_5; }
	inline EventHandler_1_t780121155 ** get_address_of_OnAdFailedToLoad_5() { return &___OnAdFailedToLoad_5; }
	inline void set_OnAdFailedToLoad_5(EventHandler_1_t780121155 * value)
	{
		___OnAdFailedToLoad_5 = value;
		Il2CppCodeGenWriteBarrier((&___OnAdFailedToLoad_5), value);
	}
};

struct AdLoaderClient_t2216398974_StaticFields
{
public:
	// GoogleMobileAds.iOS.AdLoaderClient/GADUAdLoaderDidReceiveNativeCustomTemplateAdCallback GoogleMobileAds.iOS.AdLoaderClient::<>f__mg$cache0
	GADUAdLoaderDidReceiveNativeCustomTemplateAdCallback_t2228922418 * ___U3CU3Ef__mgU24cache0_6;
	// GoogleMobileAds.iOS.AdLoaderClient/GADUAdLoaderDidFailToReceiveAdWithErrorCallback GoogleMobileAds.iOS.AdLoaderClient::<>f__mg$cache1
	GADUAdLoaderDidFailToReceiveAdWithErrorCallback_t3488831432 * ___U3CU3Ef__mgU24cache1_7;

public:
	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache0_6() { return static_cast<int32_t>(offsetof(AdLoaderClient_t2216398974_StaticFields, ___U3CU3Ef__mgU24cache0_6)); }
	inline GADUAdLoaderDidReceiveNativeCustomTemplateAdCallback_t2228922418 * get_U3CU3Ef__mgU24cache0_6() const { return ___U3CU3Ef__mgU24cache0_6; }
	inline GADUAdLoaderDidReceiveNativeCustomTemplateAdCallback_t2228922418 ** get_address_of_U3CU3Ef__mgU24cache0_6() { return &___U3CU3Ef__mgU24cache0_6; }
	inline void set_U3CU3Ef__mgU24cache0_6(GADUAdLoaderDidReceiveNativeCustomTemplateAdCallback_t2228922418 * value)
	{
		___U3CU3Ef__mgU24cache0_6 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache0_6), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache1_7() { return static_cast<int32_t>(offsetof(AdLoaderClient_t2216398974_StaticFields, ___U3CU3Ef__mgU24cache1_7)); }
	inline GADUAdLoaderDidFailToReceiveAdWithErrorCallback_t3488831432 * get_U3CU3Ef__mgU24cache1_7() const { return ___U3CU3Ef__mgU24cache1_7; }
	inline GADUAdLoaderDidFailToReceiveAdWithErrorCallback_t3488831432 ** get_address_of_U3CU3Ef__mgU24cache1_7() { return &___U3CU3Ef__mgU24cache1_7; }
	inline void set_U3CU3Ef__mgU24cache1_7(GADUAdLoaderDidFailToReceiveAdWithErrorCallback_t3488831432 * value)
	{
		___U3CU3Ef__mgU24cache1_7 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache1_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ADLOADERCLIENT_T2216398974_H
#ifndef BANNERCLIENT_T2577994961_H
#define BANNERCLIENT_T2577994961_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GoogleMobileAds.iOS.BannerClient
struct  BannerClient_t2577994961  : public RuntimeObject
{
public:
	// System.IntPtr GoogleMobileAds.iOS.BannerClient::bannerViewPtr
	intptr_t ___bannerViewPtr_0;
	// System.IntPtr GoogleMobileAds.iOS.BannerClient::bannerClientPtr
	intptr_t ___bannerClientPtr_1;
	// System.EventHandler`1<System.EventArgs> GoogleMobileAds.iOS.BannerClient::OnAdLoaded
	EventHandler_1_t1515976428 * ___OnAdLoaded_2;
	// System.EventHandler`1<GoogleMobileAds.Api.AdFailedToLoadEventArgs> GoogleMobileAds.iOS.BannerClient::OnAdFailedToLoad
	EventHandler_1_t780121155 * ___OnAdFailedToLoad_3;
	// System.EventHandler`1<System.EventArgs> GoogleMobileAds.iOS.BannerClient::OnAdOpening
	EventHandler_1_t1515976428 * ___OnAdOpening_4;
	// System.EventHandler`1<System.EventArgs> GoogleMobileAds.iOS.BannerClient::OnAdClosed
	EventHandler_1_t1515976428 * ___OnAdClosed_5;
	// System.EventHandler`1<System.EventArgs> GoogleMobileAds.iOS.BannerClient::OnAdLeavingApplication
	EventHandler_1_t1515976428 * ___OnAdLeavingApplication_6;

public:
	inline static int32_t get_offset_of_bannerViewPtr_0() { return static_cast<int32_t>(offsetof(BannerClient_t2577994961, ___bannerViewPtr_0)); }
	inline intptr_t get_bannerViewPtr_0() const { return ___bannerViewPtr_0; }
	inline intptr_t* get_address_of_bannerViewPtr_0() { return &___bannerViewPtr_0; }
	inline void set_bannerViewPtr_0(intptr_t value)
	{
		___bannerViewPtr_0 = value;
	}

	inline static int32_t get_offset_of_bannerClientPtr_1() { return static_cast<int32_t>(offsetof(BannerClient_t2577994961, ___bannerClientPtr_1)); }
	inline intptr_t get_bannerClientPtr_1() const { return ___bannerClientPtr_1; }
	inline intptr_t* get_address_of_bannerClientPtr_1() { return &___bannerClientPtr_1; }
	inline void set_bannerClientPtr_1(intptr_t value)
	{
		___bannerClientPtr_1 = value;
	}

	inline static int32_t get_offset_of_OnAdLoaded_2() { return static_cast<int32_t>(offsetof(BannerClient_t2577994961, ___OnAdLoaded_2)); }
	inline EventHandler_1_t1515976428 * get_OnAdLoaded_2() const { return ___OnAdLoaded_2; }
	inline EventHandler_1_t1515976428 ** get_address_of_OnAdLoaded_2() { return &___OnAdLoaded_2; }
	inline void set_OnAdLoaded_2(EventHandler_1_t1515976428 * value)
	{
		___OnAdLoaded_2 = value;
		Il2CppCodeGenWriteBarrier((&___OnAdLoaded_2), value);
	}

	inline static int32_t get_offset_of_OnAdFailedToLoad_3() { return static_cast<int32_t>(offsetof(BannerClient_t2577994961, ___OnAdFailedToLoad_3)); }
	inline EventHandler_1_t780121155 * get_OnAdFailedToLoad_3() const { return ___OnAdFailedToLoad_3; }
	inline EventHandler_1_t780121155 ** get_address_of_OnAdFailedToLoad_3() { return &___OnAdFailedToLoad_3; }
	inline void set_OnAdFailedToLoad_3(EventHandler_1_t780121155 * value)
	{
		___OnAdFailedToLoad_3 = value;
		Il2CppCodeGenWriteBarrier((&___OnAdFailedToLoad_3), value);
	}

	inline static int32_t get_offset_of_OnAdOpening_4() { return static_cast<int32_t>(offsetof(BannerClient_t2577994961, ___OnAdOpening_4)); }
	inline EventHandler_1_t1515976428 * get_OnAdOpening_4() const { return ___OnAdOpening_4; }
	inline EventHandler_1_t1515976428 ** get_address_of_OnAdOpening_4() { return &___OnAdOpening_4; }
	inline void set_OnAdOpening_4(EventHandler_1_t1515976428 * value)
	{
		___OnAdOpening_4 = value;
		Il2CppCodeGenWriteBarrier((&___OnAdOpening_4), value);
	}

	inline static int32_t get_offset_of_OnAdClosed_5() { return static_cast<int32_t>(offsetof(BannerClient_t2577994961, ___OnAdClosed_5)); }
	inline EventHandler_1_t1515976428 * get_OnAdClosed_5() const { return ___OnAdClosed_5; }
	inline EventHandler_1_t1515976428 ** get_address_of_OnAdClosed_5() { return &___OnAdClosed_5; }
	inline void set_OnAdClosed_5(EventHandler_1_t1515976428 * value)
	{
		___OnAdClosed_5 = value;
		Il2CppCodeGenWriteBarrier((&___OnAdClosed_5), value);
	}

	inline static int32_t get_offset_of_OnAdLeavingApplication_6() { return static_cast<int32_t>(offsetof(BannerClient_t2577994961, ___OnAdLeavingApplication_6)); }
	inline EventHandler_1_t1515976428 * get_OnAdLeavingApplication_6() const { return ___OnAdLeavingApplication_6; }
	inline EventHandler_1_t1515976428 ** get_address_of_OnAdLeavingApplication_6() { return &___OnAdLeavingApplication_6; }
	inline void set_OnAdLeavingApplication_6(EventHandler_1_t1515976428 * value)
	{
		___OnAdLeavingApplication_6 = value;
		Il2CppCodeGenWriteBarrier((&___OnAdLeavingApplication_6), value);
	}
};

struct BannerClient_t2577994961_StaticFields
{
public:
	// GoogleMobileAds.iOS.BannerClient/GADUAdViewDidReceiveAdCallback GoogleMobileAds.iOS.BannerClient::<>f__mg$cache0
	GADUAdViewDidReceiveAdCallback_t2543294242 * ___U3CU3Ef__mgU24cache0_7;
	// GoogleMobileAds.iOS.BannerClient/GADUAdViewDidFailToReceiveAdWithErrorCallback GoogleMobileAds.iOS.BannerClient::<>f__mg$cache1
	GADUAdViewDidFailToReceiveAdWithErrorCallback_t643467547 * ___U3CU3Ef__mgU24cache1_8;
	// GoogleMobileAds.iOS.BannerClient/GADUAdViewWillPresentScreenCallback GoogleMobileAds.iOS.BannerClient::<>f__mg$cache2
	GADUAdViewWillPresentScreenCallback_t2057580186 * ___U3CU3Ef__mgU24cache2_9;
	// GoogleMobileAds.iOS.BannerClient/GADUAdViewDidDismissScreenCallback GoogleMobileAds.iOS.BannerClient::<>f__mg$cache3
	GADUAdViewDidDismissScreenCallback_t972393216 * ___U3CU3Ef__mgU24cache3_10;
	// GoogleMobileAds.iOS.BannerClient/GADUAdViewWillLeaveApplicationCallback GoogleMobileAds.iOS.BannerClient::<>f__mg$cache4
	GADUAdViewWillLeaveApplicationCallback_t3323587265 * ___U3CU3Ef__mgU24cache4_11;
	// GoogleMobileAds.iOS.BannerClient/GADUAdViewDidReceiveAdCallback GoogleMobileAds.iOS.BannerClient::<>f__mg$cache5
	GADUAdViewDidReceiveAdCallback_t2543294242 * ___U3CU3Ef__mgU24cache5_12;
	// GoogleMobileAds.iOS.BannerClient/GADUAdViewDidFailToReceiveAdWithErrorCallback GoogleMobileAds.iOS.BannerClient::<>f__mg$cache6
	GADUAdViewDidFailToReceiveAdWithErrorCallback_t643467547 * ___U3CU3Ef__mgU24cache6_13;
	// GoogleMobileAds.iOS.BannerClient/GADUAdViewWillPresentScreenCallback GoogleMobileAds.iOS.BannerClient::<>f__mg$cache7
	GADUAdViewWillPresentScreenCallback_t2057580186 * ___U3CU3Ef__mgU24cache7_14;
	// GoogleMobileAds.iOS.BannerClient/GADUAdViewDidDismissScreenCallback GoogleMobileAds.iOS.BannerClient::<>f__mg$cache8
	GADUAdViewDidDismissScreenCallback_t972393216 * ___U3CU3Ef__mgU24cache8_15;
	// GoogleMobileAds.iOS.BannerClient/GADUAdViewWillLeaveApplicationCallback GoogleMobileAds.iOS.BannerClient::<>f__mg$cache9
	GADUAdViewWillLeaveApplicationCallback_t3323587265 * ___U3CU3Ef__mgU24cache9_16;

public:
	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache0_7() { return static_cast<int32_t>(offsetof(BannerClient_t2577994961_StaticFields, ___U3CU3Ef__mgU24cache0_7)); }
	inline GADUAdViewDidReceiveAdCallback_t2543294242 * get_U3CU3Ef__mgU24cache0_7() const { return ___U3CU3Ef__mgU24cache0_7; }
	inline GADUAdViewDidReceiveAdCallback_t2543294242 ** get_address_of_U3CU3Ef__mgU24cache0_7() { return &___U3CU3Ef__mgU24cache0_7; }
	inline void set_U3CU3Ef__mgU24cache0_7(GADUAdViewDidReceiveAdCallback_t2543294242 * value)
	{
		___U3CU3Ef__mgU24cache0_7 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache0_7), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache1_8() { return static_cast<int32_t>(offsetof(BannerClient_t2577994961_StaticFields, ___U3CU3Ef__mgU24cache1_8)); }
	inline GADUAdViewDidFailToReceiveAdWithErrorCallback_t643467547 * get_U3CU3Ef__mgU24cache1_8() const { return ___U3CU3Ef__mgU24cache1_8; }
	inline GADUAdViewDidFailToReceiveAdWithErrorCallback_t643467547 ** get_address_of_U3CU3Ef__mgU24cache1_8() { return &___U3CU3Ef__mgU24cache1_8; }
	inline void set_U3CU3Ef__mgU24cache1_8(GADUAdViewDidFailToReceiveAdWithErrorCallback_t643467547 * value)
	{
		___U3CU3Ef__mgU24cache1_8 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache1_8), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache2_9() { return static_cast<int32_t>(offsetof(BannerClient_t2577994961_StaticFields, ___U3CU3Ef__mgU24cache2_9)); }
	inline GADUAdViewWillPresentScreenCallback_t2057580186 * get_U3CU3Ef__mgU24cache2_9() const { return ___U3CU3Ef__mgU24cache2_9; }
	inline GADUAdViewWillPresentScreenCallback_t2057580186 ** get_address_of_U3CU3Ef__mgU24cache2_9() { return &___U3CU3Ef__mgU24cache2_9; }
	inline void set_U3CU3Ef__mgU24cache2_9(GADUAdViewWillPresentScreenCallback_t2057580186 * value)
	{
		___U3CU3Ef__mgU24cache2_9 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache2_9), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache3_10() { return static_cast<int32_t>(offsetof(BannerClient_t2577994961_StaticFields, ___U3CU3Ef__mgU24cache3_10)); }
	inline GADUAdViewDidDismissScreenCallback_t972393216 * get_U3CU3Ef__mgU24cache3_10() const { return ___U3CU3Ef__mgU24cache3_10; }
	inline GADUAdViewDidDismissScreenCallback_t972393216 ** get_address_of_U3CU3Ef__mgU24cache3_10() { return &___U3CU3Ef__mgU24cache3_10; }
	inline void set_U3CU3Ef__mgU24cache3_10(GADUAdViewDidDismissScreenCallback_t972393216 * value)
	{
		___U3CU3Ef__mgU24cache3_10 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache3_10), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache4_11() { return static_cast<int32_t>(offsetof(BannerClient_t2577994961_StaticFields, ___U3CU3Ef__mgU24cache4_11)); }
	inline GADUAdViewWillLeaveApplicationCallback_t3323587265 * get_U3CU3Ef__mgU24cache4_11() const { return ___U3CU3Ef__mgU24cache4_11; }
	inline GADUAdViewWillLeaveApplicationCallback_t3323587265 ** get_address_of_U3CU3Ef__mgU24cache4_11() { return &___U3CU3Ef__mgU24cache4_11; }
	inline void set_U3CU3Ef__mgU24cache4_11(GADUAdViewWillLeaveApplicationCallback_t3323587265 * value)
	{
		___U3CU3Ef__mgU24cache4_11 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache4_11), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache5_12() { return static_cast<int32_t>(offsetof(BannerClient_t2577994961_StaticFields, ___U3CU3Ef__mgU24cache5_12)); }
	inline GADUAdViewDidReceiveAdCallback_t2543294242 * get_U3CU3Ef__mgU24cache5_12() const { return ___U3CU3Ef__mgU24cache5_12; }
	inline GADUAdViewDidReceiveAdCallback_t2543294242 ** get_address_of_U3CU3Ef__mgU24cache5_12() { return &___U3CU3Ef__mgU24cache5_12; }
	inline void set_U3CU3Ef__mgU24cache5_12(GADUAdViewDidReceiveAdCallback_t2543294242 * value)
	{
		___U3CU3Ef__mgU24cache5_12 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache5_12), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache6_13() { return static_cast<int32_t>(offsetof(BannerClient_t2577994961_StaticFields, ___U3CU3Ef__mgU24cache6_13)); }
	inline GADUAdViewDidFailToReceiveAdWithErrorCallback_t643467547 * get_U3CU3Ef__mgU24cache6_13() const { return ___U3CU3Ef__mgU24cache6_13; }
	inline GADUAdViewDidFailToReceiveAdWithErrorCallback_t643467547 ** get_address_of_U3CU3Ef__mgU24cache6_13() { return &___U3CU3Ef__mgU24cache6_13; }
	inline void set_U3CU3Ef__mgU24cache6_13(GADUAdViewDidFailToReceiveAdWithErrorCallback_t643467547 * value)
	{
		___U3CU3Ef__mgU24cache6_13 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache6_13), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache7_14() { return static_cast<int32_t>(offsetof(BannerClient_t2577994961_StaticFields, ___U3CU3Ef__mgU24cache7_14)); }
	inline GADUAdViewWillPresentScreenCallback_t2057580186 * get_U3CU3Ef__mgU24cache7_14() const { return ___U3CU3Ef__mgU24cache7_14; }
	inline GADUAdViewWillPresentScreenCallback_t2057580186 ** get_address_of_U3CU3Ef__mgU24cache7_14() { return &___U3CU3Ef__mgU24cache7_14; }
	inline void set_U3CU3Ef__mgU24cache7_14(GADUAdViewWillPresentScreenCallback_t2057580186 * value)
	{
		___U3CU3Ef__mgU24cache7_14 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache7_14), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache8_15() { return static_cast<int32_t>(offsetof(BannerClient_t2577994961_StaticFields, ___U3CU3Ef__mgU24cache8_15)); }
	inline GADUAdViewDidDismissScreenCallback_t972393216 * get_U3CU3Ef__mgU24cache8_15() const { return ___U3CU3Ef__mgU24cache8_15; }
	inline GADUAdViewDidDismissScreenCallback_t972393216 ** get_address_of_U3CU3Ef__mgU24cache8_15() { return &___U3CU3Ef__mgU24cache8_15; }
	inline void set_U3CU3Ef__mgU24cache8_15(GADUAdViewDidDismissScreenCallback_t972393216 * value)
	{
		___U3CU3Ef__mgU24cache8_15 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache8_15), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache9_16() { return static_cast<int32_t>(offsetof(BannerClient_t2577994961_StaticFields, ___U3CU3Ef__mgU24cache9_16)); }
	inline GADUAdViewWillLeaveApplicationCallback_t3323587265 * get_U3CU3Ef__mgU24cache9_16() const { return ___U3CU3Ef__mgU24cache9_16; }
	inline GADUAdViewWillLeaveApplicationCallback_t3323587265 ** get_address_of_U3CU3Ef__mgU24cache9_16() { return &___U3CU3Ef__mgU24cache9_16; }
	inline void set_U3CU3Ef__mgU24cache9_16(GADUAdViewWillLeaveApplicationCallback_t3323587265 * value)
	{
		___U3CU3Ef__mgU24cache9_16 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache9_16), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BANNERCLIENT_T2577994961_H
#ifndef CUSTOMNATIVETEMPLATECLIENT_T296756194_H
#define CUSTOMNATIVETEMPLATECLIENT_T296756194_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GoogleMobileAds.iOS.CustomNativeTemplateClient
struct  CustomNativeTemplateClient_t296756194  : public RuntimeObject
{
public:
	// System.IntPtr GoogleMobileAds.iOS.CustomNativeTemplateClient::customNativeAdPtr
	intptr_t ___customNativeAdPtr_0;
	// System.IntPtr GoogleMobileAds.iOS.CustomNativeTemplateClient::customNativeTemplateAdClientPtr
	intptr_t ___customNativeTemplateAdClientPtr_1;
	// System.Action`2<GoogleMobileAds.Api.CustomNativeTemplateAd,System.String> GoogleMobileAds.iOS.CustomNativeTemplateClient::clickHandler
	Action_2_t1070808194 * ___clickHandler_2;

public:
	inline static int32_t get_offset_of_customNativeAdPtr_0() { return static_cast<int32_t>(offsetof(CustomNativeTemplateClient_t296756194, ___customNativeAdPtr_0)); }
	inline intptr_t get_customNativeAdPtr_0() const { return ___customNativeAdPtr_0; }
	inline intptr_t* get_address_of_customNativeAdPtr_0() { return &___customNativeAdPtr_0; }
	inline void set_customNativeAdPtr_0(intptr_t value)
	{
		___customNativeAdPtr_0 = value;
	}

	inline static int32_t get_offset_of_customNativeTemplateAdClientPtr_1() { return static_cast<int32_t>(offsetof(CustomNativeTemplateClient_t296756194, ___customNativeTemplateAdClientPtr_1)); }
	inline intptr_t get_customNativeTemplateAdClientPtr_1() const { return ___customNativeTemplateAdClientPtr_1; }
	inline intptr_t* get_address_of_customNativeTemplateAdClientPtr_1() { return &___customNativeTemplateAdClientPtr_1; }
	inline void set_customNativeTemplateAdClientPtr_1(intptr_t value)
	{
		___customNativeTemplateAdClientPtr_1 = value;
	}

	inline static int32_t get_offset_of_clickHandler_2() { return static_cast<int32_t>(offsetof(CustomNativeTemplateClient_t296756194, ___clickHandler_2)); }
	inline Action_2_t1070808194 * get_clickHandler_2() const { return ___clickHandler_2; }
	inline Action_2_t1070808194 ** get_address_of_clickHandler_2() { return &___clickHandler_2; }
	inline void set_clickHandler_2(Action_2_t1070808194 * value)
	{
		___clickHandler_2 = value;
		Il2CppCodeGenWriteBarrier((&___clickHandler_2), value);
	}
};

struct CustomNativeTemplateClient_t296756194_StaticFields
{
public:
	// GoogleMobileAds.iOS.CustomNativeTemplateClient/GADUNativeCustomTemplateDidReceiveClick GoogleMobileAds.iOS.CustomNativeTemplateClient::<>f__mg$cache0
	GADUNativeCustomTemplateDidReceiveClick_t350204406 * ___U3CU3Ef__mgU24cache0_3;

public:
	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache0_3() { return static_cast<int32_t>(offsetof(CustomNativeTemplateClient_t296756194_StaticFields, ___U3CU3Ef__mgU24cache0_3)); }
	inline GADUNativeCustomTemplateDidReceiveClick_t350204406 * get_U3CU3Ef__mgU24cache0_3() const { return ___U3CU3Ef__mgU24cache0_3; }
	inline GADUNativeCustomTemplateDidReceiveClick_t350204406 ** get_address_of_U3CU3Ef__mgU24cache0_3() { return &___U3CU3Ef__mgU24cache0_3; }
	inline void set_U3CU3Ef__mgU24cache0_3(GADUNativeCustomTemplateDidReceiveClick_t350204406 * value)
	{
		___U3CU3Ef__mgU24cache0_3 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache0_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CUSTOMNATIVETEMPLATECLIENT_T296756194_H
#ifndef INTERSTITIALCLIENT_T301873194_H
#define INTERSTITIALCLIENT_T301873194_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GoogleMobileAds.iOS.InterstitialClient
struct  InterstitialClient_t301873194  : public RuntimeObject
{
public:
	// System.IntPtr GoogleMobileAds.iOS.InterstitialClient::interstitialPtr
	intptr_t ___interstitialPtr_0;
	// System.IntPtr GoogleMobileAds.iOS.InterstitialClient::interstitialClientPtr
	intptr_t ___interstitialClientPtr_1;
	// System.EventHandler`1<System.EventArgs> GoogleMobileAds.iOS.InterstitialClient::OnAdLoaded
	EventHandler_1_t1515976428 * ___OnAdLoaded_2;
	// System.EventHandler`1<GoogleMobileAds.Api.AdFailedToLoadEventArgs> GoogleMobileAds.iOS.InterstitialClient::OnAdFailedToLoad
	EventHandler_1_t780121155 * ___OnAdFailedToLoad_3;
	// System.EventHandler`1<System.EventArgs> GoogleMobileAds.iOS.InterstitialClient::OnAdOpening
	EventHandler_1_t1515976428 * ___OnAdOpening_4;
	// System.EventHandler`1<System.EventArgs> GoogleMobileAds.iOS.InterstitialClient::OnAdClosed
	EventHandler_1_t1515976428 * ___OnAdClosed_5;
	// System.EventHandler`1<System.EventArgs> GoogleMobileAds.iOS.InterstitialClient::OnAdLeavingApplication
	EventHandler_1_t1515976428 * ___OnAdLeavingApplication_6;

public:
	inline static int32_t get_offset_of_interstitialPtr_0() { return static_cast<int32_t>(offsetof(InterstitialClient_t301873194, ___interstitialPtr_0)); }
	inline intptr_t get_interstitialPtr_0() const { return ___interstitialPtr_0; }
	inline intptr_t* get_address_of_interstitialPtr_0() { return &___interstitialPtr_0; }
	inline void set_interstitialPtr_0(intptr_t value)
	{
		___interstitialPtr_0 = value;
	}

	inline static int32_t get_offset_of_interstitialClientPtr_1() { return static_cast<int32_t>(offsetof(InterstitialClient_t301873194, ___interstitialClientPtr_1)); }
	inline intptr_t get_interstitialClientPtr_1() const { return ___interstitialClientPtr_1; }
	inline intptr_t* get_address_of_interstitialClientPtr_1() { return &___interstitialClientPtr_1; }
	inline void set_interstitialClientPtr_1(intptr_t value)
	{
		___interstitialClientPtr_1 = value;
	}

	inline static int32_t get_offset_of_OnAdLoaded_2() { return static_cast<int32_t>(offsetof(InterstitialClient_t301873194, ___OnAdLoaded_2)); }
	inline EventHandler_1_t1515976428 * get_OnAdLoaded_2() const { return ___OnAdLoaded_2; }
	inline EventHandler_1_t1515976428 ** get_address_of_OnAdLoaded_2() { return &___OnAdLoaded_2; }
	inline void set_OnAdLoaded_2(EventHandler_1_t1515976428 * value)
	{
		___OnAdLoaded_2 = value;
		Il2CppCodeGenWriteBarrier((&___OnAdLoaded_2), value);
	}

	inline static int32_t get_offset_of_OnAdFailedToLoad_3() { return static_cast<int32_t>(offsetof(InterstitialClient_t301873194, ___OnAdFailedToLoad_3)); }
	inline EventHandler_1_t780121155 * get_OnAdFailedToLoad_3() const { return ___OnAdFailedToLoad_3; }
	inline EventHandler_1_t780121155 ** get_address_of_OnAdFailedToLoad_3() { return &___OnAdFailedToLoad_3; }
	inline void set_OnAdFailedToLoad_3(EventHandler_1_t780121155 * value)
	{
		___OnAdFailedToLoad_3 = value;
		Il2CppCodeGenWriteBarrier((&___OnAdFailedToLoad_3), value);
	}

	inline static int32_t get_offset_of_OnAdOpening_4() { return static_cast<int32_t>(offsetof(InterstitialClient_t301873194, ___OnAdOpening_4)); }
	inline EventHandler_1_t1515976428 * get_OnAdOpening_4() const { return ___OnAdOpening_4; }
	inline EventHandler_1_t1515976428 ** get_address_of_OnAdOpening_4() { return &___OnAdOpening_4; }
	inline void set_OnAdOpening_4(EventHandler_1_t1515976428 * value)
	{
		___OnAdOpening_4 = value;
		Il2CppCodeGenWriteBarrier((&___OnAdOpening_4), value);
	}

	inline static int32_t get_offset_of_OnAdClosed_5() { return static_cast<int32_t>(offsetof(InterstitialClient_t301873194, ___OnAdClosed_5)); }
	inline EventHandler_1_t1515976428 * get_OnAdClosed_5() const { return ___OnAdClosed_5; }
	inline EventHandler_1_t1515976428 ** get_address_of_OnAdClosed_5() { return &___OnAdClosed_5; }
	inline void set_OnAdClosed_5(EventHandler_1_t1515976428 * value)
	{
		___OnAdClosed_5 = value;
		Il2CppCodeGenWriteBarrier((&___OnAdClosed_5), value);
	}

	inline static int32_t get_offset_of_OnAdLeavingApplication_6() { return static_cast<int32_t>(offsetof(InterstitialClient_t301873194, ___OnAdLeavingApplication_6)); }
	inline EventHandler_1_t1515976428 * get_OnAdLeavingApplication_6() const { return ___OnAdLeavingApplication_6; }
	inline EventHandler_1_t1515976428 ** get_address_of_OnAdLeavingApplication_6() { return &___OnAdLeavingApplication_6; }
	inline void set_OnAdLeavingApplication_6(EventHandler_1_t1515976428 * value)
	{
		___OnAdLeavingApplication_6 = value;
		Il2CppCodeGenWriteBarrier((&___OnAdLeavingApplication_6), value);
	}
};

struct InterstitialClient_t301873194_StaticFields
{
public:
	// GoogleMobileAds.iOS.InterstitialClient/GADUInterstitialDidReceiveAdCallback GoogleMobileAds.iOS.InterstitialClient::<>f__mg$cache0
	GADUInterstitialDidReceiveAdCallback_t821971233 * ___U3CU3Ef__mgU24cache0_7;
	// GoogleMobileAds.iOS.InterstitialClient/GADUInterstitialDidFailToReceiveAdWithErrorCallback GoogleMobileAds.iOS.InterstitialClient::<>f__mg$cache1
	GADUInterstitialDidFailToReceiveAdWithErrorCallback_t1323914714 * ___U3CU3Ef__mgU24cache1_8;
	// GoogleMobileAds.iOS.InterstitialClient/GADUInterstitialWillPresentScreenCallback GoogleMobileAds.iOS.InterstitialClient::<>f__mg$cache2
	GADUInterstitialWillPresentScreenCallback_t539653454 * ___U3CU3Ef__mgU24cache2_9;
	// GoogleMobileAds.iOS.InterstitialClient/GADUInterstitialDidDismissScreenCallback GoogleMobileAds.iOS.InterstitialClient::<>f__mg$cache3
	GADUInterstitialDidDismissScreenCallback_t1339081348 * ___U3CU3Ef__mgU24cache3_10;
	// GoogleMobileAds.iOS.InterstitialClient/GADUInterstitialWillLeaveApplicationCallback GoogleMobileAds.iOS.InterstitialClient::<>f__mg$cache4
	GADUInterstitialWillLeaveApplicationCallback_t1816935820 * ___U3CU3Ef__mgU24cache4_11;

public:
	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache0_7() { return static_cast<int32_t>(offsetof(InterstitialClient_t301873194_StaticFields, ___U3CU3Ef__mgU24cache0_7)); }
	inline GADUInterstitialDidReceiveAdCallback_t821971233 * get_U3CU3Ef__mgU24cache0_7() const { return ___U3CU3Ef__mgU24cache0_7; }
	inline GADUInterstitialDidReceiveAdCallback_t821971233 ** get_address_of_U3CU3Ef__mgU24cache0_7() { return &___U3CU3Ef__mgU24cache0_7; }
	inline void set_U3CU3Ef__mgU24cache0_7(GADUInterstitialDidReceiveAdCallback_t821971233 * value)
	{
		___U3CU3Ef__mgU24cache0_7 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache0_7), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache1_8() { return static_cast<int32_t>(offsetof(InterstitialClient_t301873194_StaticFields, ___U3CU3Ef__mgU24cache1_8)); }
	inline GADUInterstitialDidFailToReceiveAdWithErrorCallback_t1323914714 * get_U3CU3Ef__mgU24cache1_8() const { return ___U3CU3Ef__mgU24cache1_8; }
	inline GADUInterstitialDidFailToReceiveAdWithErrorCallback_t1323914714 ** get_address_of_U3CU3Ef__mgU24cache1_8() { return &___U3CU3Ef__mgU24cache1_8; }
	inline void set_U3CU3Ef__mgU24cache1_8(GADUInterstitialDidFailToReceiveAdWithErrorCallback_t1323914714 * value)
	{
		___U3CU3Ef__mgU24cache1_8 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache1_8), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache2_9() { return static_cast<int32_t>(offsetof(InterstitialClient_t301873194_StaticFields, ___U3CU3Ef__mgU24cache2_9)); }
	inline GADUInterstitialWillPresentScreenCallback_t539653454 * get_U3CU3Ef__mgU24cache2_9() const { return ___U3CU3Ef__mgU24cache2_9; }
	inline GADUInterstitialWillPresentScreenCallback_t539653454 ** get_address_of_U3CU3Ef__mgU24cache2_9() { return &___U3CU3Ef__mgU24cache2_9; }
	inline void set_U3CU3Ef__mgU24cache2_9(GADUInterstitialWillPresentScreenCallback_t539653454 * value)
	{
		___U3CU3Ef__mgU24cache2_9 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache2_9), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache3_10() { return static_cast<int32_t>(offsetof(InterstitialClient_t301873194_StaticFields, ___U3CU3Ef__mgU24cache3_10)); }
	inline GADUInterstitialDidDismissScreenCallback_t1339081348 * get_U3CU3Ef__mgU24cache3_10() const { return ___U3CU3Ef__mgU24cache3_10; }
	inline GADUInterstitialDidDismissScreenCallback_t1339081348 ** get_address_of_U3CU3Ef__mgU24cache3_10() { return &___U3CU3Ef__mgU24cache3_10; }
	inline void set_U3CU3Ef__mgU24cache3_10(GADUInterstitialDidDismissScreenCallback_t1339081348 * value)
	{
		___U3CU3Ef__mgU24cache3_10 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache3_10), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache4_11() { return static_cast<int32_t>(offsetof(InterstitialClient_t301873194_StaticFields, ___U3CU3Ef__mgU24cache4_11)); }
	inline GADUInterstitialWillLeaveApplicationCallback_t1816935820 * get_U3CU3Ef__mgU24cache4_11() const { return ___U3CU3Ef__mgU24cache4_11; }
	inline GADUInterstitialWillLeaveApplicationCallback_t1816935820 ** get_address_of_U3CU3Ef__mgU24cache4_11() { return &___U3CU3Ef__mgU24cache4_11; }
	inline void set_U3CU3Ef__mgU24cache4_11(GADUInterstitialWillLeaveApplicationCallback_t1816935820 * value)
	{
		___U3CU3Ef__mgU24cache4_11 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache4_11), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTERSTITIALCLIENT_T301873194_H
#ifndef COMPONENT_T1923634451_H
#define COMPONENT_T1923634451_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Component
struct  Component_t1923634451  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPONENT_T1923634451_H
#ifndef MULTICASTDELEGATE_T_H
#define MULTICASTDELEGATE_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MulticastDelegate
struct  MulticastDelegate_t  : public Delegate_t1188392813
{
public:
	// System.MulticastDelegate System.MulticastDelegate::prev
	MulticastDelegate_t * ___prev_9;
	// System.MulticastDelegate System.MulticastDelegate::kpm_next
	MulticastDelegate_t * ___kpm_next_10;

public:
	inline static int32_t get_offset_of_prev_9() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___prev_9)); }
	inline MulticastDelegate_t * get_prev_9() const { return ___prev_9; }
	inline MulticastDelegate_t ** get_address_of_prev_9() { return &___prev_9; }
	inline void set_prev_9(MulticastDelegate_t * value)
	{
		___prev_9 = value;
		Il2CppCodeGenWriteBarrier((&___prev_9), value);
	}

	inline static int32_t get_offset_of_kpm_next_10() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___kpm_next_10)); }
	inline MulticastDelegate_t * get_kpm_next_10() const { return ___kpm_next_10; }
	inline MulticastDelegate_t ** get_address_of_kpm_next_10() { return &___kpm_next_10; }
	inline void set_kpm_next_10(MulticastDelegate_t * value)
	{
		___kpm_next_10 = value;
		Il2CppCodeGenWriteBarrier((&___kpm_next_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MULTICASTDELEGATE_T_H
#ifndef BEHAVIOUR_T1437897464_H
#define BEHAVIOUR_T1437897464_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Behaviour
struct  Behaviour_t1437897464  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BEHAVIOUR_T1437897464_H
#ifndef GADUADLOADERDIDRECEIVENATIVECUSTOMTEMPLATEADCALLBACK_T2228922418_H
#define GADUADLOADERDIDRECEIVENATIVECUSTOMTEMPLATEADCALLBACK_T2228922418_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GoogleMobileAds.iOS.AdLoaderClient/GADUAdLoaderDidReceiveNativeCustomTemplateAdCallback
struct  GADUAdLoaderDidReceiveNativeCustomTemplateAdCallback_t2228922418  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GADUADLOADERDIDRECEIVENATIVECUSTOMTEMPLATEADCALLBACK_T2228922418_H
#ifndef GADUADLOADERDIDFAILTORECEIVEADWITHERRORCALLBACK_T3488831432_H
#define GADUADLOADERDIDFAILTORECEIVEADWITHERRORCALLBACK_T3488831432_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GoogleMobileAds.iOS.AdLoaderClient/GADUAdLoaderDidFailToReceiveAdWithErrorCallback
struct  GADUAdLoaderDidFailToReceiveAdWithErrorCallback_t3488831432  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GADUADLOADERDIDFAILTORECEIVEADWITHERRORCALLBACK_T3488831432_H
#ifndef GADUADVIEWDIDRECEIVEADCALLBACK_T2543294242_H
#define GADUADVIEWDIDRECEIVEADCALLBACK_T2543294242_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GoogleMobileAds.iOS.BannerClient/GADUAdViewDidReceiveAdCallback
struct  GADUAdViewDidReceiveAdCallback_t2543294242  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GADUADVIEWDIDRECEIVEADCALLBACK_T2543294242_H
#ifndef GADUADVIEWDIDFAILTORECEIVEADWITHERRORCALLBACK_T643467547_H
#define GADUADVIEWDIDFAILTORECEIVEADWITHERRORCALLBACK_T643467547_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GoogleMobileAds.iOS.BannerClient/GADUAdViewDidFailToReceiveAdWithErrorCallback
struct  GADUAdViewDidFailToReceiveAdWithErrorCallback_t643467547  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GADUADVIEWDIDFAILTORECEIVEADWITHERRORCALLBACK_T643467547_H
#ifndef GADUADVIEWWILLPRESENTSCREENCALLBACK_T2057580186_H
#define GADUADVIEWWILLPRESENTSCREENCALLBACK_T2057580186_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GoogleMobileAds.iOS.BannerClient/GADUAdViewWillPresentScreenCallback
struct  GADUAdViewWillPresentScreenCallback_t2057580186  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GADUADVIEWWILLPRESENTSCREENCALLBACK_T2057580186_H
#ifndef GADUADVIEWDIDDISMISSSCREENCALLBACK_T972393216_H
#define GADUADVIEWDIDDISMISSSCREENCALLBACK_T972393216_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GoogleMobileAds.iOS.BannerClient/GADUAdViewDidDismissScreenCallback
struct  GADUAdViewDidDismissScreenCallback_t972393216  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GADUADVIEWDIDDISMISSSCREENCALLBACK_T972393216_H
#ifndef GADUREWARDBASEDVIDEOADDIDCOMPLETECALLBACK_T2076181_H
#define GADUREWARDBASEDVIDEOADDIDCOMPLETECALLBACK_T2076181_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GoogleMobileAds.iOS.RewardBasedVideoAdClient/GADURewardBasedVideoAdDidCompleteCallback
struct  GADURewardBasedVideoAdDidCompleteCallback_t2076181  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GADUREWARDBASEDVIDEOADDIDCOMPLETECALLBACK_T2076181_H
#ifndef GADUADVIEWWILLLEAVEAPPLICATIONCALLBACK_T3323587265_H
#define GADUADVIEWWILLLEAVEAPPLICATIONCALLBACK_T3323587265_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GoogleMobileAds.iOS.BannerClient/GADUAdViewWillLeaveApplicationCallback
struct  GADUAdViewWillLeaveApplicationCallback_t3323587265  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GADUADVIEWWILLLEAVEAPPLICATIONCALLBACK_T3323587265_H
#ifndef GADUREWARDBASEDVIDEOADDIDREWARDCALLBACK_T990863796_H
#define GADUREWARDBASEDVIDEOADDIDREWARDCALLBACK_T990863796_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GoogleMobileAds.iOS.RewardBasedVideoAdClient/GADURewardBasedVideoAdDidRewardCallback
struct  GADURewardBasedVideoAdDidRewardCallback_t990863796  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GADUREWARDBASEDVIDEOADDIDREWARDCALLBACK_T990863796_H
#ifndef GADUINTERSTITIALDIDFAILTORECEIVEADWITHERRORCALLBACK_T1323914714_H
#define GADUINTERSTITIALDIDFAILTORECEIVEADWITHERRORCALLBACK_T1323914714_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GoogleMobileAds.iOS.InterstitialClient/GADUInterstitialDidFailToReceiveAdWithErrorCallback
struct  GADUInterstitialDidFailToReceiveAdWithErrorCallback_t1323914714  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GADUINTERSTITIALDIDFAILTORECEIVEADWITHERRORCALLBACK_T1323914714_H
#ifndef GADUINTERSTITIALWILLPRESENTSCREENCALLBACK_T539653454_H
#define GADUINTERSTITIALWILLPRESENTSCREENCALLBACK_T539653454_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GoogleMobileAds.iOS.InterstitialClient/GADUInterstitialWillPresentScreenCallback
struct  GADUInterstitialWillPresentScreenCallback_t539653454  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GADUINTERSTITIALWILLPRESENTSCREENCALLBACK_T539653454_H
#ifndef GADUINTERSTITIALDIDDISMISSSCREENCALLBACK_T1339081348_H
#define GADUINTERSTITIALDIDDISMISSSCREENCALLBACK_T1339081348_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GoogleMobileAds.iOS.InterstitialClient/GADUInterstitialDidDismissScreenCallback
struct  GADUInterstitialDidDismissScreenCallback_t1339081348  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GADUINTERSTITIALDIDDISMISSSCREENCALLBACK_T1339081348_H
#ifndef GADUINTERSTITIALWILLLEAVEAPPLICATIONCALLBACK_T1816935820_H
#define GADUINTERSTITIALWILLLEAVEAPPLICATIONCALLBACK_T1816935820_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GoogleMobileAds.iOS.InterstitialClient/GADUInterstitialWillLeaveApplicationCallback
struct  GADUInterstitialWillLeaveApplicationCallback_t1816935820  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GADUINTERSTITIALWILLLEAVEAPPLICATIONCALLBACK_T1816935820_H
#ifndef GADUNATIVECUSTOMTEMPLATEDIDRECEIVECLICK_T350204406_H
#define GADUNATIVECUSTOMTEMPLATEDIDRECEIVECLICK_T350204406_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GoogleMobileAds.iOS.CustomNativeTemplateClient/GADUNativeCustomTemplateDidReceiveClick
struct  GADUNativeCustomTemplateDidReceiveClick_t350204406  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GADUNATIVECUSTOMTEMPLATEDIDRECEIVECLICK_T350204406_H
#ifndef GADUREWARDBASEDVIDEOADWILLLEAVEAPPLICATIONCALLBACK_T3217042531_H
#define GADUREWARDBASEDVIDEOADWILLLEAVEAPPLICATIONCALLBACK_T3217042531_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GoogleMobileAds.iOS.RewardBasedVideoAdClient/GADURewardBasedVideoAdWillLeaveApplicationCallback
struct  GADURewardBasedVideoAdWillLeaveApplicationCallback_t3217042531  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GADUREWARDBASEDVIDEOADWILLLEAVEAPPLICATIONCALLBACK_T3217042531_H
#ifndef GADUREWARDBASEDVIDEOADDIDRECEIVEADCALLBACK_T462486315_H
#define GADUREWARDBASEDVIDEOADDIDRECEIVEADCALLBACK_T462486315_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GoogleMobileAds.iOS.RewardBasedVideoAdClient/GADURewardBasedVideoAdDidReceiveAdCallback
struct  GADURewardBasedVideoAdDidReceiveAdCallback_t462486315  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GADUREWARDBASEDVIDEOADDIDRECEIVEADCALLBACK_T462486315_H
#ifndef GADUREWARDBASEDVIDEOADDIDOPENCALLBACK_T3638490629_H
#define GADUREWARDBASEDVIDEOADDIDOPENCALLBACK_T3638490629_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GoogleMobileAds.iOS.RewardBasedVideoAdClient/GADURewardBasedVideoAdDidOpenCallback
struct  GADURewardBasedVideoAdDidOpenCallback_t3638490629  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GADUREWARDBASEDVIDEOADDIDOPENCALLBACK_T3638490629_H
#ifndef GADUREWARDBASEDVIDEOADDIDSTARTCALLBACK_T2792276088_H
#define GADUREWARDBASEDVIDEOADDIDSTARTCALLBACK_T2792276088_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GoogleMobileAds.iOS.RewardBasedVideoAdClient/GADURewardBasedVideoAdDidStartCallback
struct  GADURewardBasedVideoAdDidStartCallback_t2792276088  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GADUREWARDBASEDVIDEOADDIDSTARTCALLBACK_T2792276088_H
#ifndef GADUREWARDBASEDVIDEOADDIDCLOSECALLBACK_T623082069_H
#define GADUREWARDBASEDVIDEOADDIDCLOSECALLBACK_T623082069_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GoogleMobileAds.iOS.RewardBasedVideoAdClient/GADURewardBasedVideoAdDidCloseCallback
struct  GADURewardBasedVideoAdDidCloseCallback_t623082069  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GADUREWARDBASEDVIDEOADDIDCLOSECALLBACK_T623082069_H
#ifndef GADUREWARDBASEDVIDEOADDIDFAILTORECEIVEADWITHERRORCALLBACK_T3979086788_H
#define GADUREWARDBASEDVIDEOADDIDFAILTORECEIVEADWITHERRORCALLBACK_T3979086788_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GoogleMobileAds.iOS.RewardBasedVideoAdClient/GADURewardBasedVideoAdDidFailToReceiveAdWithErrorCallback
struct  GADURewardBasedVideoAdDidFailToReceiveAdWithErrorCallback_t3979086788  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GADUREWARDBASEDVIDEOADDIDFAILTORECEIVEADWITHERRORCALLBACK_T3979086788_H
#ifndef GADUINTERSTITIALDIDRECEIVEADCALLBACK_T821971233_H
#define GADUINTERSTITIALDIDRECEIVEADCALLBACK_T821971233_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GoogleMobileAds.iOS.InterstitialClient/GADUInterstitialDidReceiveAdCallback
struct  GADUInterstitialDidReceiveAdCallback_t821971233  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GADUINTERSTITIALDIDRECEIVEADCALLBACK_T821971233_H
#ifndef MONOBEHAVIOUR_T3962482529_H
#define MONOBEHAVIOUR_T3962482529_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t3962482529  : public Behaviour_t1437897464
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOBEHAVIOUR_T3962482529_H
#ifndef SUBSCENESCRIPT_T3706814722_H
#define SUBSCENESCRIPT_T3706814722_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SubSceneScript
struct  SubSceneScript_t3706814722  : public MonoBehaviour_t3962482529
{
public:
	// GoogleMobileAds.Api.AdRequest SubSceneScript::request
	AdRequest_t1573687800 * ___request_2;
	// System.String SubSceneScript::adUnitIdKey
	String_t* ___adUnitIdKey_3;

public:
	inline static int32_t get_offset_of_request_2() { return static_cast<int32_t>(offsetof(SubSceneScript_t3706814722, ___request_2)); }
	inline AdRequest_t1573687800 * get_request_2() const { return ___request_2; }
	inline AdRequest_t1573687800 ** get_address_of_request_2() { return &___request_2; }
	inline void set_request_2(AdRequest_t1573687800 * value)
	{
		___request_2 = value;
		Il2CppCodeGenWriteBarrier((&___request_2), value);
	}

	inline static int32_t get_offset_of_adUnitIdKey_3() { return static_cast<int32_t>(offsetof(SubSceneScript_t3706814722, ___adUnitIdKey_3)); }
	inline String_t* get_adUnitIdKey_3() const { return ___adUnitIdKey_3; }
	inline String_t** get_address_of_adUnitIdKey_3() { return &___adUnitIdKey_3; }
	inline void set_adUnitIdKey_3(String_t* value)
	{
		___adUnitIdKey_3 = value;
		Il2CppCodeGenWriteBarrier((&___adUnitIdKey_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SUBSCENESCRIPT_T3706814722_H
#ifndef MANAGESCROLLCONTENT_T718440180_H
#define MANAGESCROLLCONTENT_T718440180_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ManageScrollContent
struct  ManageScrollContent_t718440180  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.UI.ScrollRect ManageScrollContent::scrollRect
	ScrollRect_t4137855814 * ___scrollRect_4;
	// UnityEngine.UI.Text ManageScrollContent::textLog
	Text_t1901882714 * ___textLog_5;

public:
	inline static int32_t get_offset_of_scrollRect_4() { return static_cast<int32_t>(offsetof(ManageScrollContent_t718440180, ___scrollRect_4)); }
	inline ScrollRect_t4137855814 * get_scrollRect_4() const { return ___scrollRect_4; }
	inline ScrollRect_t4137855814 ** get_address_of_scrollRect_4() { return &___scrollRect_4; }
	inline void set_scrollRect_4(ScrollRect_t4137855814 * value)
	{
		___scrollRect_4 = value;
		Il2CppCodeGenWriteBarrier((&___scrollRect_4), value);
	}

	inline static int32_t get_offset_of_textLog_5() { return static_cast<int32_t>(offsetof(ManageScrollContent_t718440180, ___textLog_5)); }
	inline Text_t1901882714 * get_textLog_5() const { return ___textLog_5; }
	inline Text_t1901882714 ** get_address_of_textLog_5() { return &___textLog_5; }
	inline void set_textLog_5(Text_t1901882714 * value)
	{
		___textLog_5 = value;
		Il2CppCodeGenWriteBarrier((&___textLog_5), value);
	}
};

struct ManageScrollContent_t718440180_StaticFields
{
public:
	// System.String ManageScrollContent::logs
	String_t* ___logs_2;
	// System.String ManageScrollContent::oldLogs
	String_t* ___oldLogs_3;

public:
	inline static int32_t get_offset_of_logs_2() { return static_cast<int32_t>(offsetof(ManageScrollContent_t718440180_StaticFields, ___logs_2)); }
	inline String_t* get_logs_2() const { return ___logs_2; }
	inline String_t** get_address_of_logs_2() { return &___logs_2; }
	inline void set_logs_2(String_t* value)
	{
		___logs_2 = value;
		Il2CppCodeGenWriteBarrier((&___logs_2), value);
	}

	inline static int32_t get_offset_of_oldLogs_3() { return static_cast<int32_t>(offsetof(ManageScrollContent_t718440180_StaticFields, ___oldLogs_3)); }
	inline String_t* get_oldLogs_3() const { return ___oldLogs_3; }
	inline String_t** get_address_of_oldLogs_3() { return &___oldLogs_3; }
	inline void set_oldLogs_3(String_t* value)
	{
		___oldLogs_3 = value;
		Il2CppCodeGenWriteBarrier((&___oldLogs_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MANAGESCROLLCONTENT_T718440180_H
#ifndef MAINSCENESCRIPT_T2935155245_H
#define MAINSCENESCRIPT_T2935155245_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MainSceneScript
struct  MainSceneScript_t2935155245  : public MonoBehaviour_t3962482529
{
public:
	// GoogleMobileAds.Api.AdRequest MainSceneScript::request
	AdRequest_t1573687800 * ___request_3;
	// System.String MainSceneScript::adUnitIdKey
	String_t* ___adUnitIdKey_4;
	// System.String MainSceneScript::adUnitId
	String_t* ___adUnitId_5;

public:
	inline static int32_t get_offset_of_request_3() { return static_cast<int32_t>(offsetof(MainSceneScript_t2935155245, ___request_3)); }
	inline AdRequest_t1573687800 * get_request_3() const { return ___request_3; }
	inline AdRequest_t1573687800 ** get_address_of_request_3() { return &___request_3; }
	inline void set_request_3(AdRequest_t1573687800 * value)
	{
		___request_3 = value;
		Il2CppCodeGenWriteBarrier((&___request_3), value);
	}

	inline static int32_t get_offset_of_adUnitIdKey_4() { return static_cast<int32_t>(offsetof(MainSceneScript_t2935155245, ___adUnitIdKey_4)); }
	inline String_t* get_adUnitIdKey_4() const { return ___adUnitIdKey_4; }
	inline String_t** get_address_of_adUnitIdKey_4() { return &___adUnitIdKey_4; }
	inline void set_adUnitIdKey_4(String_t* value)
	{
		___adUnitIdKey_4 = value;
		Il2CppCodeGenWriteBarrier((&___adUnitIdKey_4), value);
	}

	inline static int32_t get_offset_of_adUnitId_5() { return static_cast<int32_t>(offsetof(MainSceneScript_t2935155245, ___adUnitId_5)); }
	inline String_t* get_adUnitId_5() const { return ___adUnitId_5; }
	inline String_t** get_address_of_adUnitId_5() { return &___adUnitId_5; }
	inline void set_adUnitId_5(String_t* value)
	{
		___adUnitId_5 = value;
		Il2CppCodeGenWriteBarrier((&___adUnitId_5), value);
	}
};

struct MainSceneScript_t2935155245_StaticFields
{
public:
	// System.Boolean MainSceneScript::isRegistedRewardVideoEventHandler
	bool ___isRegistedRewardVideoEventHandler_2;

public:
	inline static int32_t get_offset_of_isRegistedRewardVideoEventHandler_2() { return static_cast<int32_t>(offsetof(MainSceneScript_t2935155245_StaticFields, ___isRegistedRewardVideoEventHandler_2)); }
	inline bool get_isRegistedRewardVideoEventHandler_2() const { return ___isRegistedRewardVideoEventHandler_2; }
	inline bool* get_address_of_isRegistedRewardVideoEventHandler_2() { return &___isRegistedRewardVideoEventHandler_2; }
	inline void set_isRegistedRewardVideoEventHandler_2(bool value)
	{
		___isRegistedRewardVideoEventHandler_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MAINSCENESCRIPT_T2935155245_H





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2000 = { sizeof (DummyClient_t519661512), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2000[9] = 
{
	DummyClient_t519661512::get_offset_of_OnAdLoaded_0(),
	DummyClient_t519661512::get_offset_of_OnAdFailedToLoad_1(),
	DummyClient_t519661512::get_offset_of_OnAdOpening_2(),
	DummyClient_t519661512::get_offset_of_OnAdStarted_3(),
	DummyClient_t519661512::get_offset_of_OnAdClosed_4(),
	DummyClient_t519661512::get_offset_of_OnAdRewarded_5(),
	DummyClient_t519661512::get_offset_of_OnAdLeavingApplication_6(),
	DummyClient_t519661512::get_offset_of_OnAdCompleted_7(),
	DummyClient_t519661512::get_offset_of_OnCustomNativeTemplateAdLoaded_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2001 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2002 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2003 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2004 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2005 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2006 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2007 = { sizeof (Utils_t3548761374), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2008 = { sizeof (GoogleMobileAdsClientFactory_t3556675256), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2009 = { sizeof (NativeAdTypes_t3925888818)+ sizeof (RuntimeObject), sizeof(NativeAdTypes_t3925888818 ), 0, 0 };
extern const int32_t g_FieldOffsetTable2009[1] = 
{
	NativeAdTypes_t3925888818::get_offset_of_CustomTemplateAd_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2010 = { sizeof (AdLoaderClient_t2216398974), -1, sizeof(AdLoaderClient_t2216398974_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2010[8] = 
{
	AdLoaderClient_t2216398974::get_offset_of_adLoaderPtr_0(),
	AdLoaderClient_t2216398974::get_offset_of_adLoaderClientPtr_1(),
	AdLoaderClient_t2216398974::get_offset_of_adTypes_2(),
	AdLoaderClient_t2216398974::get_offset_of_customNativeTemplateCallbacks_3(),
	AdLoaderClient_t2216398974::get_offset_of_OnCustomNativeTemplateAdLoaded_4(),
	AdLoaderClient_t2216398974::get_offset_of_OnAdFailedToLoad_5(),
	AdLoaderClient_t2216398974_StaticFields::get_offset_of_U3CU3Ef__mgU24cache0_6(),
	AdLoaderClient_t2216398974_StaticFields::get_offset_of_U3CU3Ef__mgU24cache1_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2011 = { sizeof (GADUAdLoaderDidReceiveNativeCustomTemplateAdCallback_t2228922418), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2012 = { sizeof (GADUAdLoaderDidFailToReceiveAdWithErrorCallback_t3488831432), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2013 = { sizeof (BannerClient_t2577994961), -1, sizeof(BannerClient_t2577994961_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2013[17] = 
{
	BannerClient_t2577994961::get_offset_of_bannerViewPtr_0(),
	BannerClient_t2577994961::get_offset_of_bannerClientPtr_1(),
	BannerClient_t2577994961::get_offset_of_OnAdLoaded_2(),
	BannerClient_t2577994961::get_offset_of_OnAdFailedToLoad_3(),
	BannerClient_t2577994961::get_offset_of_OnAdOpening_4(),
	BannerClient_t2577994961::get_offset_of_OnAdClosed_5(),
	BannerClient_t2577994961::get_offset_of_OnAdLeavingApplication_6(),
	BannerClient_t2577994961_StaticFields::get_offset_of_U3CU3Ef__mgU24cache0_7(),
	BannerClient_t2577994961_StaticFields::get_offset_of_U3CU3Ef__mgU24cache1_8(),
	BannerClient_t2577994961_StaticFields::get_offset_of_U3CU3Ef__mgU24cache2_9(),
	BannerClient_t2577994961_StaticFields::get_offset_of_U3CU3Ef__mgU24cache3_10(),
	BannerClient_t2577994961_StaticFields::get_offset_of_U3CU3Ef__mgU24cache4_11(),
	BannerClient_t2577994961_StaticFields::get_offset_of_U3CU3Ef__mgU24cache5_12(),
	BannerClient_t2577994961_StaticFields::get_offset_of_U3CU3Ef__mgU24cache6_13(),
	BannerClient_t2577994961_StaticFields::get_offset_of_U3CU3Ef__mgU24cache7_14(),
	BannerClient_t2577994961_StaticFields::get_offset_of_U3CU3Ef__mgU24cache8_15(),
	BannerClient_t2577994961_StaticFields::get_offset_of_U3CU3Ef__mgU24cache9_16(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2014 = { sizeof (GADUAdViewDidReceiveAdCallback_t2543294242), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2015 = { sizeof (GADUAdViewDidFailToReceiveAdWithErrorCallback_t643467547), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2016 = { sizeof (GADUAdViewWillPresentScreenCallback_t2057580186), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2017 = { sizeof (GADUAdViewDidDismissScreenCallback_t972393216), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2018 = { sizeof (GADUAdViewWillLeaveApplicationCallback_t3323587265), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2019 = { sizeof (CustomNativeTemplateClient_t296756194), -1, sizeof(CustomNativeTemplateClient_t296756194_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2019[4] = 
{
	CustomNativeTemplateClient_t296756194::get_offset_of_customNativeAdPtr_0(),
	CustomNativeTemplateClient_t296756194::get_offset_of_customNativeTemplateAdClientPtr_1(),
	CustomNativeTemplateClient_t296756194::get_offset_of_clickHandler_2(),
	CustomNativeTemplateClient_t296756194_StaticFields::get_offset_of_U3CU3Ef__mgU24cache0_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2020 = { sizeof (GADUNativeCustomTemplateDidReceiveClick_t350204406), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2021 = { sizeof (Externs_t92207873), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2022 = { sizeof (InterstitialClient_t301873194), -1, sizeof(InterstitialClient_t301873194_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2022[12] = 
{
	InterstitialClient_t301873194::get_offset_of_interstitialPtr_0(),
	InterstitialClient_t301873194::get_offset_of_interstitialClientPtr_1(),
	InterstitialClient_t301873194::get_offset_of_OnAdLoaded_2(),
	InterstitialClient_t301873194::get_offset_of_OnAdFailedToLoad_3(),
	InterstitialClient_t301873194::get_offset_of_OnAdOpening_4(),
	InterstitialClient_t301873194::get_offset_of_OnAdClosed_5(),
	InterstitialClient_t301873194::get_offset_of_OnAdLeavingApplication_6(),
	InterstitialClient_t301873194_StaticFields::get_offset_of_U3CU3Ef__mgU24cache0_7(),
	InterstitialClient_t301873194_StaticFields::get_offset_of_U3CU3Ef__mgU24cache1_8(),
	InterstitialClient_t301873194_StaticFields::get_offset_of_U3CU3Ef__mgU24cache2_9(),
	InterstitialClient_t301873194_StaticFields::get_offset_of_U3CU3Ef__mgU24cache3_10(),
	InterstitialClient_t301873194_StaticFields::get_offset_of_U3CU3Ef__mgU24cache4_11(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2023 = { sizeof (GADUInterstitialDidReceiveAdCallback_t821971233), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2024 = { sizeof (GADUInterstitialDidFailToReceiveAdWithErrorCallback_t1323914714), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2025 = { sizeof (GADUInterstitialWillPresentScreenCallback_t539653454), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2026 = { sizeof (GADUInterstitialDidDismissScreenCallback_t1339081348), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2027 = { sizeof (GADUInterstitialWillLeaveApplicationCallback_t1816935820), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2028 = { sizeof (MobileAdsClient_t1008075298), -1, sizeof(MobileAdsClient_t1008075298_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2028[1] = 
{
	MobileAdsClient_t1008075298_StaticFields::get_offset_of_instance_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2029 = { sizeof (MonoPInvokeCallbackAttribute_t3472581009), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2030 = { sizeof (RewardBasedVideoAdClient_t745716004), -1, sizeof(RewardBasedVideoAdClient_t745716004_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2030[18] = 
{
	RewardBasedVideoAdClient_t745716004::get_offset_of_rewardBasedVideoAdPtr_0(),
	RewardBasedVideoAdClient_t745716004::get_offset_of_rewardBasedVideoAdClientPtr_1(),
	RewardBasedVideoAdClient_t745716004::get_offset_of_OnAdLoaded_2(),
	RewardBasedVideoAdClient_t745716004::get_offset_of_OnAdFailedToLoad_3(),
	RewardBasedVideoAdClient_t745716004::get_offset_of_OnAdOpening_4(),
	RewardBasedVideoAdClient_t745716004::get_offset_of_OnAdStarted_5(),
	RewardBasedVideoAdClient_t745716004::get_offset_of_OnAdClosed_6(),
	RewardBasedVideoAdClient_t745716004::get_offset_of_OnAdRewarded_7(),
	RewardBasedVideoAdClient_t745716004::get_offset_of_OnAdLeavingApplication_8(),
	RewardBasedVideoAdClient_t745716004::get_offset_of_OnAdCompleted_9(),
	RewardBasedVideoAdClient_t745716004_StaticFields::get_offset_of_U3CU3Ef__mgU24cache0_10(),
	RewardBasedVideoAdClient_t745716004_StaticFields::get_offset_of_U3CU3Ef__mgU24cache1_11(),
	RewardBasedVideoAdClient_t745716004_StaticFields::get_offset_of_U3CU3Ef__mgU24cache2_12(),
	RewardBasedVideoAdClient_t745716004_StaticFields::get_offset_of_U3CU3Ef__mgU24cache3_13(),
	RewardBasedVideoAdClient_t745716004_StaticFields::get_offset_of_U3CU3Ef__mgU24cache4_14(),
	RewardBasedVideoAdClient_t745716004_StaticFields::get_offset_of_U3CU3Ef__mgU24cache5_15(),
	RewardBasedVideoAdClient_t745716004_StaticFields::get_offset_of_U3CU3Ef__mgU24cache6_16(),
	RewardBasedVideoAdClient_t745716004_StaticFields::get_offset_of_U3CU3Ef__mgU24cache7_17(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2031 = { sizeof (GADURewardBasedVideoAdDidReceiveAdCallback_t462486315), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2032 = { sizeof (GADURewardBasedVideoAdDidFailToReceiveAdWithErrorCallback_t3979086788), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2033 = { sizeof (GADURewardBasedVideoAdDidOpenCallback_t3638490629), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2034 = { sizeof (GADURewardBasedVideoAdDidStartCallback_t2792276088), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2035 = { sizeof (GADURewardBasedVideoAdDidCloseCallback_t623082069), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2036 = { sizeof (GADURewardBasedVideoAdDidRewardCallback_t990863796), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2037 = { sizeof (GADURewardBasedVideoAdWillLeaveApplicationCallback_t3217042531), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2038 = { sizeof (GADURewardBasedVideoAdDidCompleteCallback_t2076181), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2039 = { sizeof (Utils_t143735646), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2040 = { sizeof (MainSceneScript_t2935155245), -1, sizeof(MainSceneScript_t2935155245_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2040[4] = 
{
	MainSceneScript_t2935155245_StaticFields::get_offset_of_isRegistedRewardVideoEventHandler_2(),
	MainSceneScript_t2935155245::get_offset_of_request_3(),
	MainSceneScript_t2935155245::get_offset_of_adUnitIdKey_4(),
	MainSceneScript_t2935155245::get_offset_of_adUnitId_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2041 = { sizeof (ManageScrollContent_t718440180), -1, sizeof(ManageScrollContent_t718440180_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2041[4] = 
{
	ManageScrollContent_t718440180_StaticFields::get_offset_of_logs_2(),
	ManageScrollContent_t718440180_StaticFields::get_offset_of_oldLogs_3(),
	ManageScrollContent_t718440180::get_offset_of_scrollRect_4(),
	ManageScrollContent_t718440180::get_offset_of_textLog_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2042 = { sizeof (U3CDelayMethodU3Ec__Iterator0_t2878256488), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2042[6] = 
{
	U3CDelayMethodU3Ec__Iterator0_t2878256488::get_offset_of_U3CiU3E__1_0(),
	U3CDelayMethodU3Ec__Iterator0_t2878256488::get_offset_of_delayFrameCount_1(),
	U3CDelayMethodU3Ec__Iterator0_t2878256488::get_offset_of_action_2(),
	U3CDelayMethodU3Ec__Iterator0_t2878256488::get_offset_of_U24current_3(),
	U3CDelayMethodU3Ec__Iterator0_t2878256488::get_offset_of_U24disposing_4(),
	U3CDelayMethodU3Ec__Iterator0_t2878256488::get_offset_of_U24PC_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2043 = { sizeof (SubSceneScript_t3706814722), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2043[2] = 
{
	SubSceneScript_t3706814722::get_offset_of_request_2(),
	SubSceneScript_t3706814722::get_offset_of_adUnitIdKey_3(),
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
