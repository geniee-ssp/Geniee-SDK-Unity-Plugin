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

template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct VirtActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename T1>
struct VirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct GenericVirtActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename T1>
struct GenericVirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct InterfaceActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct GenericInterfaceActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename T1>
struct GenericInterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};

// GNSAdSDK.AdClientFactory
struct AdClientFactory_t673636922;
// GNSAdSDK.Clients.RewardVideoAdClient
struct RewardVideoAdClient_t1572276834;
// GNSAdSDK.iOS.RewardVideoAdClientImpl
struct RewardVideoAdClientImpl_t1565645521;
// GNSAdSDK.Api.RewardVideoAd
struct RewardVideoAd_t2059019935;
// System.EventHandler`1<System.EventArgs>
struct EventHandler_1_t1515976428;
// System.EventHandler`1<System.Object>
struct EventHandler_1_t1004265597;
// System.EventHandler`1<GNSAdSDK.Api.VideoRewardData>
struct EventHandler_1_t2650267322;
// System.EventHandler`1<GNSAdSDK.Api.VideoRewardFailedData>
struct EventHandler_1_t1820321320;
// System.Delegate
struct Delegate_t1188392813;
// System.String
struct String_t;
// System.EventArgs
struct EventArgs_t3591816995;
// GNSAdSDK.Api.VideoRewardData
struct VideoRewardData_t431140593;
// GNSAdSDK.Api.VideoRewardFailedData
struct VideoRewardFailedData_t3896161887;
// GNSAdSDK.Clients.MockClient
struct MockClient_t1077215459;
// GNSAdSDK.iOS.Externs
struct Externs_t1263556617;
// GNSAdSDK.iOS.RewardVideoAdClientImpl/GNSURewardVideoAdDidReceiveAdCallback
struct GNSURewardVideoAdDidReceiveAdCallback_t2434243366;
// GNSAdSDK.iOS.RewardVideoAdClientImpl/GNSURewardVideoAdDidStartPlayingCallback
struct GNSURewardVideoAdDidStartPlayingCallback_t4256405145;
// GNSAdSDK.iOS.RewardVideoAdClientImpl/GNSURewardVideoAdCallback
struct GNSURewardVideoAdCallback_t434670165;
// GNSAdSDK.iOS.RewardVideoAdClientImpl/GNSURewardVideoAdDidCloseCallback
struct GNSURewardVideoAdDidCloseCallback_t4005382830;
// GNSAdSDK.iOS.RewardVideoAdClientImpl/GNSURewardVideoAdErrorCallback
struct GNSURewardVideoAdErrorCallback_t2314677993;
// System.IAsyncResult
struct IAsyncResult_t767004451;
// System.AsyncCallback
struct AsyncCallback_t3962456242;
// MainSceneScript
struct MainSceneScript_t2935155245;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t3962482529;
// UnityEngine.GameObject
struct GameObject_t1113636619;
// UnityEngine.UI.Button
struct Button_t4055032469;
// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_t48803504;
// UnityEngine.Events.UnityAction
struct UnityAction_t3245792599;
// UnityEngine.Events.UnityEvent
struct UnityEvent_t2581268647;
// UnityEngine.UI.InputField
struct InputField_t3762917431;
// UnityEngine.UI.Text
struct Text_t1901882714;
// ManageScrollContent
struct ManageScrollContent_t718440180;
// UnityEngine.Component
struct Component_t1923634451;
// UnityEngine.UI.ScrollRect
struct ScrollRect_t4137855814;
// UnityEngine.RectTransform
struct RectTransform_t3704657025;
// UnityEngine.Object
struct Object_t631007953;
// System.Action
struct Action_t1264377477;
// System.Collections.IEnumerator
struct IEnumerator_t1853284238;
// UnityEngine.Coroutine
struct Coroutine_t3829159415;
// System.String[]
struct StringU5BU5D_t1281789340;
// ManageScrollContent/<DelayMethod>c__Iterator0
struct U3CDelayMethodU3Ec__Iterator0_t2878256488;
// System.NotSupportedException
struct NotSupportedException_t1314879016;
// SubSceneScript
struct SubSceneScript_t3706814722;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_t2498835369;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_t3050769227;
// System.IntPtr[]
struct IntPtrU5BU5D_t4013366056;
// System.Collections.IDictionary
struct IDictionary_t1363984059;
// System.Char[]
struct CharU5BU5D_t3528271667;
// System.Object[]
struct ObjectU5BU5D_t2843939325;
// System.Void
struct Void_t1185182177;
// UnityEngine.Sprite
struct Sprite_t280657092;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.DelegateData
struct DelegateData_t1677132599;
// System.Int32[]
struct Int32U5BU5D_t385246372;
// UnityEngine.UI.Selectable
struct Selectable_t3250028441;
// UnityEngine.RectTransform/ReapplyDrivenProperties
struct ReapplyDrivenProperties_t1258266594;
// System.Collections.Generic.List`1<UnityEngine.UI.Selectable>
struct List_1_t427135887;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_t2532145056;
// UnityEngine.UI.Graphic
struct Graphic_t1660335611;
// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t1260619206;
// UnityEngine.Material
struct Material_t340375123;
// UnityEngine.Texture2D
struct Texture2D_t3840446185;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_t2598313366;
// UnityEngine.Canvas
struct Canvas_t3310196443;
// UnityEngine.Mesh
struct Mesh_t3648964284;
// UnityEngine.UI.VertexHelper
struct VertexHelper_t2453304189;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t3055525458;
// UnityEngine.UI.Scrollbar
struct Scrollbar_t1494447233;
// UnityEngine.UI.ScrollRect/ScrollRectEvent
struct ScrollRectEvent_t343079324;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t1718750761;
// UnityEngine.UI.RectMask2D
struct RectMask2D_t3474889437;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t3661388177;
// UnityEngine.TouchScreenKeyboard
struct TouchScreenKeyboard_t731888065;
// UnityEngine.UI.InputField/SubmitEvent
struct SubmitEvent_t648412432;
// UnityEngine.UI.InputField/OnChangeEvent
struct OnChangeEvent_t467195904;
// UnityEngine.UI.InputField/OnValidateInput
struct OnValidateInput_t2355412304;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_t1981460040;
// UnityEngine.TextGenerator
struct TextGenerator_t3211863866;
// UnityEngine.Event
struct Event_t2956885303;
// UnityEngine.UI.FontData
struct FontData_t746620069;

extern RuntimeClass* RewardVideoAdClientImpl_t1565645521_il2cpp_TypeInfo_var;
extern const uint32_t AdClientFactory_CreateRewardVideoAdClient_m2878427344_MetadataUsageId;
extern RuntimeClass* EventHandler_1_t1515976428_il2cpp_TypeInfo_var;
extern RuntimeClass* RewardVideoAdClient_t1572276834_il2cpp_TypeInfo_var;
extern RuntimeClass* EventHandler_1_t2650267322_il2cpp_TypeInfo_var;
extern RuntimeClass* EventHandler_1_t1820321320_il2cpp_TypeInfo_var;
extern const RuntimeMethod* RewardVideoAd_U3CRewardVideoAdU3Em__0_m573066125_RuntimeMethod_var;
extern const RuntimeMethod* EventHandler_1__ctor_m4114736910_RuntimeMethod_var;
extern const RuntimeMethod* RewardVideoAd_U3CRewardVideoAdU3Em__1_m2543563012_RuntimeMethod_var;
extern const RuntimeMethod* EventHandler_1__ctor_m2791549744_RuntimeMethod_var;
extern const RuntimeMethod* RewardVideoAd_U3CRewardVideoAdU3Em__2_m980165810_RuntimeMethod_var;
extern const RuntimeMethod* RewardVideoAd_U3CRewardVideoAdU3Em__3_m4037255726_RuntimeMethod_var;
extern const RuntimeMethod* RewardVideoAd_U3CRewardVideoAdU3Em__4_m1816579728_RuntimeMethod_var;
extern const RuntimeMethod* EventHandler_1__ctor_m3728933429_RuntimeMethod_var;
extern const uint32_t RewardVideoAd__ctor_m4107737319_MetadataUsageId;
extern const uint32_t RewardVideoAd_add_OnAdLoaded_m1645794845_MetadataUsageId;
extern const uint32_t RewardVideoAd_remove_OnAdLoaded_m2847277470_MetadataUsageId;
extern const uint32_t RewardVideoAd_add_OnAdStarted_m1491817010_MetadataUsageId;
extern const uint32_t RewardVideoAd_remove_OnAdStarted_m3743954902_MetadataUsageId;
extern const uint32_t RewardVideoAd_add_OnAdRewarded_m2418067992_MetadataUsageId;
extern const uint32_t RewardVideoAd_remove_OnAdRewarded_m2536036747_MetadataUsageId;
extern const uint32_t RewardVideoAd_add_OnAdClosed_m3758855288_MetadataUsageId;
extern const uint32_t RewardVideoAd_remove_OnAdClosed_m3198561935_MetadataUsageId;
extern const uint32_t RewardVideoAd_add_OnAdFailedToLoad_m2979919485_MetadataUsageId;
extern const uint32_t RewardVideoAd_remove_OnAdFailedToLoad_m2117383440_MetadataUsageId;
extern RuntimeClass* RewardVideoAd_t2059019935_il2cpp_TypeInfo_var;
extern const uint32_t RewardVideoAd_get_Instance_m1143162705_MetadataUsageId;
extern const uint32_t RewardVideoAd_LoadAd_m1897517061_MetadataUsageId;
extern const uint32_t RewardVideoAd_IsLoaded_m630497717_MetadataUsageId;
extern const uint32_t RewardVideoAd_ShowAd_m3896786371_MetadataUsageId;
extern const uint32_t RewardVideoAd_DisposeAd_m1464643830_MetadataUsageId;
extern const RuntimeMethod* EventHandler_1_Invoke_m63082545_RuntimeMethod_var;
extern const uint32_t RewardVideoAd_U3CRewardVideoAdU3Em__0_m573066125_MetadataUsageId;
extern const RuntimeMethod* EventHandler_1_Invoke_m28932318_RuntimeMethod_var;
extern const uint32_t RewardVideoAd_U3CRewardVideoAdU3Em__1_m2543563012_MetadataUsageId;
extern const uint32_t RewardVideoAd_U3CRewardVideoAdU3Em__2_m980165810_MetadataUsageId;
extern const uint32_t RewardVideoAd_U3CRewardVideoAdU3Em__3_m4037255726_MetadataUsageId;
extern const RuntimeMethod* EventHandler_1_Invoke_m2342911564_RuntimeMethod_var;
extern const uint32_t RewardVideoAd_U3CRewardVideoAdU3Em__4_m1816579728_MetadataUsageId;
extern RuntimeClass* EventArgs_t3591816995_il2cpp_TypeInfo_var;
extern const uint32_t VideoRewardData__ctor_m3738582510_MetadataUsageId;
extern const uint32_t VideoRewardFailedData__ctor_m860447526_MetadataUsageId;
extern RuntimeClass* String_t_il2cpp_TypeInfo_var;
extern RuntimeClass* Debug_t3317548046_il2cpp_TypeInfo_var;
extern const RuntimeMethod* MockClient__ctor_m3069415547_RuntimeMethod_var;
extern String_t* _stringLiteral4273247572;
extern const uint32_t MockClient__ctor_m3069415547_MetadataUsageId;
extern const uint32_t MockClient_add_OnAdLoaded_m2837677281_MetadataUsageId;
extern const uint32_t MockClient_remove_OnAdLoaded_m3399772035_MetadataUsageId;
extern const uint32_t MockClient_add_OnAdStarted_m3663468329_MetadataUsageId;
extern const uint32_t MockClient_remove_OnAdStarted_m1989259541_MetadataUsageId;
extern const uint32_t MockClient_add_OnAdRewarded_m3123326006_MetadataUsageId;
extern const uint32_t MockClient_remove_OnAdRewarded_m3300571246_MetadataUsageId;
extern const uint32_t MockClient_add_OnAdClosed_m2568308728_MetadataUsageId;
extern const uint32_t MockClient_remove_OnAdClosed_m3272769839_MetadataUsageId;
extern const uint32_t MockClient_add_OnAdFailedToLoad_m2959609469_MetadataUsageId;
extern const uint32_t MockClient_remove_OnAdFailedToLoad_m2413321871_MetadataUsageId;
extern const RuntimeMethod* MockClient_LoadAd_m418661205_RuntimeMethod_var;
extern const uint32_t MockClient_LoadAd_m418661205_MetadataUsageId;
extern const RuntimeMethod* MockClient_IsLoaded_m3987855876_RuntimeMethod_var;
extern const uint32_t MockClient_IsLoaded_m3987855876_MetadataUsageId;
extern const RuntimeMethod* MockClient_ShowAd_m3494856151_RuntimeMethod_var;
extern const uint32_t MockClient_ShowAd_m3494856151_MetadataUsageId;
extern const RuntimeMethod* MockClient_DisposeAd_m255176246_RuntimeMethod_var;
extern const uint32_t MockClient_DisposeAd_m255176246_MetadataUsageId;
extern const uint32_t RewardVideoAdClientImpl_add_OnAdLoaded_m186043497_MetadataUsageId;
extern const uint32_t RewardVideoAdClientImpl_remove_OnAdLoaded_m2872171862_MetadataUsageId;
extern const uint32_t RewardVideoAdClientImpl_add_OnAdStarted_m1344536_MetadataUsageId;
extern const uint32_t RewardVideoAdClientImpl_remove_OnAdStarted_m3804047749_MetadataUsageId;
extern const uint32_t RewardVideoAdClientImpl_add_OnAdRewarded_m3639139605_MetadataUsageId;
extern const uint32_t RewardVideoAdClientImpl_remove_OnAdRewarded_m3762179996_MetadataUsageId;
extern const uint32_t RewardVideoAdClientImpl_add_OnAdClosed_m145080423_MetadataUsageId;
extern const uint32_t RewardVideoAdClientImpl_remove_OnAdClosed_m170785595_MetadataUsageId;
extern const uint32_t RewardVideoAdClientImpl_add_OnAdFailedToLoad_m2405322016_MetadataUsageId;
extern const uint32_t RewardVideoAdClientImpl_remove_OnAdFailedToLoad_m1678587269_MetadataUsageId;
extern RuntimeClass* GNSURewardVideoAdDidReceiveAdCallback_t2434243366_il2cpp_TypeInfo_var;
extern RuntimeClass* GNSURewardVideoAdDidStartPlayingCallback_t4256405145_il2cpp_TypeInfo_var;
extern RuntimeClass* GNSURewardVideoAdCallback_t434670165_il2cpp_TypeInfo_var;
extern RuntimeClass* GNSURewardVideoAdDidCloseCallback_t4005382830_il2cpp_TypeInfo_var;
extern RuntimeClass* GNSURewardVideoAdErrorCallback_t2314677993_il2cpp_TypeInfo_var;
extern const RuntimeMethod* RewardVideoAdClientImpl_RewardVideoAdDidReceiveAd_m1121021960_RuntimeMethod_var;
extern const RuntimeMethod* RewardVideoAdClientImpl_RewardVideoAdDidStartPlaying_m1506431413_RuntimeMethod_var;
extern const RuntimeMethod* RewardVideoAdClientImpl_DidRewardUserWithReward_m1394350829_RuntimeMethod_var;
extern const RuntimeMethod* RewardVideoAdClientImpl_RewardVideoAdDidClose_m420171930_RuntimeMethod_var;
extern const RuntimeMethod* RewardVideoAdClientImpl_DidFailToLoadWithError_m2099900401_RuntimeMethod_var;
extern const uint32_t RewardVideoAdClientImpl_CreateRewardVideoAd_m1561433194_MetadataUsageId;
extern RuntimeClass* IntPtr_t_il2cpp_TypeInfo_var;
extern const uint32_t RewardVideoAdClientImpl_DestroyRewardVideoAd_m4139553371_MetadataUsageId;
extern const uint32_t RewardVideoAdClientImpl_RewardVideoAdDidReceiveAd_m1121021960_MetadataUsageId;
extern RuntimeClass* VideoRewardData_t431140593_il2cpp_TypeInfo_var;
extern const uint32_t RewardVideoAdClientImpl_RewardVideoAdDidStartPlaying_m1506431413_MetadataUsageId;
extern const uint32_t RewardVideoAdClientImpl_DidRewardUserWithReward_m1394350829_MetadataUsageId;
extern const uint32_t RewardVideoAdClientImpl_RewardVideoAdDidClose_m420171930_MetadataUsageId;
extern RuntimeClass* VideoRewardFailedData_t3896161887_il2cpp_TypeInfo_var;
extern const uint32_t RewardVideoAdClientImpl_DidFailToLoadWithError_m2099900401_MetadataUsageId;
extern const uint32_t RewardVideoAdClientImpl_IntPtrToRewardVideoAdClientImpl_m3856521960_MetadataUsageId;
extern RuntimeClass* Double_t594665363_il2cpp_TypeInfo_var;
extern const uint32_t GNSURewardVideoAdCallback_BeginInvoke_m90271464_MetadataUsageId;
extern const uint32_t GNSURewardVideoAdDidCloseCallback_BeginInvoke_m3913211642_MetadataUsageId;
extern const uint32_t GNSURewardVideoAdDidReceiveAdCallback_BeginInvoke_m2452301471_MetadataUsageId;
extern const uint32_t GNSURewardVideoAdDidStartPlayingCallback_BeginInvoke_m1510839498_MetadataUsageId;
extern RuntimeClass* Int32_t2950945753_il2cpp_TypeInfo_var;
extern const uint32_t GNSURewardVideoAdErrorCallback_BeginInvoke_m592882720_MetadataUsageId;
extern String_t* _stringLiteral875271522;
extern const uint32_t MainSceneScript__ctor_m141265759_MetadataUsageId;
extern RuntimeClass* MainSceneScript_t2935155245_il2cpp_TypeInfo_var;
extern const RuntimeMethod* MainSceneScript_U3CRegistRewardVideoAdEventHandlerU3Em__0_m1750153989_RuntimeMethod_var;
extern const RuntimeMethod* MainSceneScript_U3CRegistRewardVideoAdEventHandlerU3Em__1_m833489649_RuntimeMethod_var;
extern const RuntimeMethod* MainSceneScript_U3CRegistRewardVideoAdEventHandlerU3Em__2_m3311718182_RuntimeMethod_var;
extern const RuntimeMethod* MainSceneScript_U3CRegistRewardVideoAdEventHandlerU3Em__3_m1965033432_RuntimeMethod_var;
extern const RuntimeMethod* MainSceneScript_U3CRegistRewardVideoAdEventHandlerU3Em__4_m1988063305_RuntimeMethod_var;
extern const uint32_t MainSceneScript_RegistRewardVideoAdEventHandler_m2501865270_MetadataUsageId;
extern RuntimeClass* ManageScrollContent_t718440180_il2cpp_TypeInfo_var;
extern RuntimeClass* UnityAction_t3245792599_il2cpp_TypeInfo_var;
extern const RuntimeMethod* GameObject_GetComponent_TisButton_t4055032469_m1515138076_RuntimeMethod_var;
extern const RuntimeMethod* MainSceneScript_LoadRewardVideoAd_m1765922608_RuntimeMethod_var;
extern const RuntimeMethod* MainSceneScript_ShowRewardVideoAd_m1612877932_RuntimeMethod_var;
extern const RuntimeMethod* MainSceneScript_OnClickNextScene_m4090450118_RuntimeMethod_var;
extern const RuntimeMethod* MainSceneScript_OnClickExit_m3217141347_RuntimeMethod_var;
extern const RuntimeMethod* GameObject_GetComponent_TisInputField_t3762917431_m1809916030_RuntimeMethod_var;
extern const RuntimeMethod* GameObject_GetComponent_TisText_t1901882714_m2114913816_RuntimeMethod_var;
extern String_t* _stringLiteral3513872187;
extern String_t* _stringLiteral419861575;
extern String_t* _stringLiteral4027735308;
extern String_t* _stringLiteral3476661386;
extern String_t* _stringLiteral2154379127;
extern String_t* _stringLiteral2739578658;
extern String_t* _stringLiteral1095207881;
extern const uint32_t MainSceneScript_Start_m1653874663_MetadataUsageId;
extern String_t* _stringLiteral3144612925;
extern String_t* _stringLiteral1564842861;
extern String_t* _stringLiteral3154935626;
extern String_t* _stringLiteral1024832400;
extern String_t* _stringLiteral3853051492;
extern const uint32_t MainSceneScript_LoadRewardVideoAd_m1765922608_MetadataUsageId;
extern String_t* _stringLiteral468106446;
extern String_t* _stringLiteral2803577287;
extern const uint32_t MainSceneScript_ShowRewardVideoAd_m1612877932_MetadataUsageId;
extern RuntimeClass* Single_t1397266774_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral2781406721;
extern String_t* _stringLiteral857495742;
extern const uint32_t MainSceneScript_OnApplicationQuit_m2601312062_MetadataUsageId;
extern String_t* _stringLiteral728544754;
extern const uint32_t MainSceneScript_OnClickNextScene_m4090450118_MetadataUsageId;
extern String_t* _stringLiteral2385996849;
extern const uint32_t MainSceneScript_U3CRegistRewardVideoAdEventHandlerU3Em__0_m1750153989_MetadataUsageId;
extern String_t* _stringLiteral241953956;
extern const uint32_t MainSceneScript_U3CRegistRewardVideoAdEventHandlerU3Em__1_m833489649_MetadataUsageId;
extern String_t* _stringLiteral631135578;
extern String_t* _stringLiteral2882319845;
extern const uint32_t MainSceneScript_U3CRegistRewardVideoAdEventHandlerU3Em__2_m3311718182_MetadataUsageId;
extern String_t* _stringLiteral1361361614;
extern const uint32_t MainSceneScript_U3CRegistRewardVideoAdEventHandlerU3Em__3_m1965033432_MetadataUsageId;
extern String_t* _stringLiteral2078720334;
extern String_t* _stringLiteral4008244697;
extern const uint32_t MainSceneScript_U3CRegistRewardVideoAdEventHandlerU3Em__4_m1988063305_MetadataUsageId;
extern const RuntimeMethod* GameObject_GetComponent_TisScrollRect_t4137855814_m3217020803_RuntimeMethod_var;
extern const RuntimeMethod* Component_GetComponentInChildren_TisText_t1901882714_m396351542_RuntimeMethod_var;
extern const uint32_t ManageScrollContent_Start_m2768040484_MetadataUsageId;
extern RuntimeClass* Object_t631007953_il2cpp_TypeInfo_var;
extern RuntimeClass* Action_t1264377477_il2cpp_TypeInfo_var;
extern const RuntimeMethod* ManageScrollContent_U3CUpdateU3Em__0_m3545291356_RuntimeMethod_var;
extern const uint32_t ManageScrollContent_Update_m3356628244_MetadataUsageId;
extern RuntimeClass* StringU5BU5D_t1281789340_il2cpp_TypeInfo_var;
extern RuntimeClass* DateTime_t3738529785_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral3452614636;
extern String_t* _stringLiteral3452614528;
extern String_t* _stringLiteral3452614566;
extern const uint32_t ManageScrollContent_Logging_m3887690237_MetadataUsageId;
extern RuntimeClass* U3CDelayMethodU3Ec__Iterator0_t2878256488_il2cpp_TypeInfo_var;
extern const uint32_t ManageScrollContent_DelayMethod_m602896765_MetadataUsageId;
extern const uint32_t ManageScrollContent__cctor_m4125206710_MetadataUsageId;
extern RuntimeClass* NotSupportedException_t1314879016_il2cpp_TypeInfo_var;
extern const RuntimeMethod* U3CDelayMethodU3Ec__Iterator0_Reset_m1249264252_RuntimeMethod_var;
extern const uint32_t U3CDelayMethodU3Ec__Iterator0_Reset_m1249264252_MetadataUsageId;
extern const uint32_t SubSceneScript__ctor_m1346342648_MetadataUsageId;
extern const RuntimeMethod* SubSceneScript_LoadRewardVideoAd_m1183002328_RuntimeMethod_var;
extern const RuntimeMethod* SubSceneScript_ShowRewardVideoAd_m1251283582_RuntimeMethod_var;
extern const RuntimeMethod* SubSceneScript_OnClickNextScene_m2939430960_RuntimeMethod_var;
extern const RuntimeMethod* SubSceneScript_OnClickExit_m2860104867_RuntimeMethod_var;
extern String_t* _stringLiteral645420295;
extern const uint32_t SubSceneScript_Start_m2721099214_MetadataUsageId;
extern const uint32_t SubSceneScript_LoadRewardVideoAd_m1183002328_MetadataUsageId;
extern const uint32_t SubSceneScript_ShowRewardVideoAd_m1251283582_MetadataUsageId;
extern const uint32_t SubSceneScript_OnApplicationQuit_m3455088268_MetadataUsageId;
extern String_t* _stringLiteral1853239370;
extern const uint32_t SubSceneScript_OnClickNextScene_m2939430960_MetadataUsageId;

struct StringU5BU5D_t1281789340;


#ifndef U3CMODULEU3E_T692745543_H
#define U3CMODULEU3E_T692745543_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t692745543 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CMODULEU3E_T692745543_H
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
struct Il2CppArrayBounds;
#ifndef RUNTIMEARRAY_H
#define RUNTIMEARRAY_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Array

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEARRAY_H
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
#ifndef UNITYEVENTBASE_T3960448221_H
#define UNITYEVENTBASE_T3960448221_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.UnityEventBase
struct  UnityEventBase_t3960448221  : public RuntimeObject
{
public:
	// UnityEngine.Events.InvokableCallList UnityEngine.Events.UnityEventBase::m_Calls
	InvokableCallList_t2498835369 * ___m_Calls_0;
	// UnityEngine.Events.PersistentCallGroup UnityEngine.Events.UnityEventBase::m_PersistentCalls
	PersistentCallGroup_t3050769227 * ___m_PersistentCalls_1;
	// System.String UnityEngine.Events.UnityEventBase::m_TypeName
	String_t* ___m_TypeName_2;
	// System.Boolean UnityEngine.Events.UnityEventBase::m_CallsDirty
	bool ___m_CallsDirty_3;

public:
	inline static int32_t get_offset_of_m_Calls_0() { return static_cast<int32_t>(offsetof(UnityEventBase_t3960448221, ___m_Calls_0)); }
	inline InvokableCallList_t2498835369 * get_m_Calls_0() const { return ___m_Calls_0; }
	inline InvokableCallList_t2498835369 ** get_address_of_m_Calls_0() { return &___m_Calls_0; }
	inline void set_m_Calls_0(InvokableCallList_t2498835369 * value)
	{
		___m_Calls_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_Calls_0), value);
	}

	inline static int32_t get_offset_of_m_PersistentCalls_1() { return static_cast<int32_t>(offsetof(UnityEventBase_t3960448221, ___m_PersistentCalls_1)); }
	inline PersistentCallGroup_t3050769227 * get_m_PersistentCalls_1() const { return ___m_PersistentCalls_1; }
	inline PersistentCallGroup_t3050769227 ** get_address_of_m_PersistentCalls_1() { return &___m_PersistentCalls_1; }
	inline void set_m_PersistentCalls_1(PersistentCallGroup_t3050769227 * value)
	{
		___m_PersistentCalls_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_PersistentCalls_1), value);
	}

	inline static int32_t get_offset_of_m_TypeName_2() { return static_cast<int32_t>(offsetof(UnityEventBase_t3960448221, ___m_TypeName_2)); }
	inline String_t* get_m_TypeName_2() const { return ___m_TypeName_2; }
	inline String_t** get_address_of_m_TypeName_2() { return &___m_TypeName_2; }
	inline void set_m_TypeName_2(String_t* value)
	{
		___m_TypeName_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_TypeName_2), value);
	}

	inline static int32_t get_offset_of_m_CallsDirty_3() { return static_cast<int32_t>(offsetof(UnityEventBase_t3960448221, ___m_CallsDirty_3)); }
	inline bool get_m_CallsDirty_3() const { return ___m_CallsDirty_3; }
	inline bool* get_address_of_m_CallsDirty_3() { return &___m_CallsDirty_3; }
	inline void set_m_CallsDirty_3(bool value)
	{
		___m_CallsDirty_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYEVENTBASE_T3960448221_H
#ifndef EXCEPTION_T_H
#define EXCEPTION_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Exception
struct  Exception_t  : public RuntimeObject
{
public:
	// System.IntPtr[] System.Exception::trace_ips
	IntPtrU5BU5D_t4013366056* ___trace_ips_0;
	// System.Exception System.Exception::inner_exception
	Exception_t * ___inner_exception_1;
	// System.String System.Exception::message
	String_t* ___message_2;
	// System.String System.Exception::help_link
	String_t* ___help_link_3;
	// System.String System.Exception::class_name
	String_t* ___class_name_4;
	// System.String System.Exception::stack_trace
	String_t* ___stack_trace_5;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_6;
	// System.Int32 System.Exception::remote_stack_index
	int32_t ___remote_stack_index_7;
	// System.Int32 System.Exception::hresult
	int32_t ___hresult_8;
	// System.String System.Exception::source
	String_t* ___source_9;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_10;

public:
	inline static int32_t get_offset_of_trace_ips_0() { return static_cast<int32_t>(offsetof(Exception_t, ___trace_ips_0)); }
	inline IntPtrU5BU5D_t4013366056* get_trace_ips_0() const { return ___trace_ips_0; }
	inline IntPtrU5BU5D_t4013366056** get_address_of_trace_ips_0() { return &___trace_ips_0; }
	inline void set_trace_ips_0(IntPtrU5BU5D_t4013366056* value)
	{
		___trace_ips_0 = value;
		Il2CppCodeGenWriteBarrier((&___trace_ips_0), value);
	}

	inline static int32_t get_offset_of_inner_exception_1() { return static_cast<int32_t>(offsetof(Exception_t, ___inner_exception_1)); }
	inline Exception_t * get_inner_exception_1() const { return ___inner_exception_1; }
	inline Exception_t ** get_address_of_inner_exception_1() { return &___inner_exception_1; }
	inline void set_inner_exception_1(Exception_t * value)
	{
		___inner_exception_1 = value;
		Il2CppCodeGenWriteBarrier((&___inner_exception_1), value);
	}

	inline static int32_t get_offset_of_message_2() { return static_cast<int32_t>(offsetof(Exception_t, ___message_2)); }
	inline String_t* get_message_2() const { return ___message_2; }
	inline String_t** get_address_of_message_2() { return &___message_2; }
	inline void set_message_2(String_t* value)
	{
		___message_2 = value;
		Il2CppCodeGenWriteBarrier((&___message_2), value);
	}

	inline static int32_t get_offset_of_help_link_3() { return static_cast<int32_t>(offsetof(Exception_t, ___help_link_3)); }
	inline String_t* get_help_link_3() const { return ___help_link_3; }
	inline String_t** get_address_of_help_link_3() { return &___help_link_3; }
	inline void set_help_link_3(String_t* value)
	{
		___help_link_3 = value;
		Il2CppCodeGenWriteBarrier((&___help_link_3), value);
	}

	inline static int32_t get_offset_of_class_name_4() { return static_cast<int32_t>(offsetof(Exception_t, ___class_name_4)); }
	inline String_t* get_class_name_4() const { return ___class_name_4; }
	inline String_t** get_address_of_class_name_4() { return &___class_name_4; }
	inline void set_class_name_4(String_t* value)
	{
		___class_name_4 = value;
		Il2CppCodeGenWriteBarrier((&___class_name_4), value);
	}

	inline static int32_t get_offset_of_stack_trace_5() { return static_cast<int32_t>(offsetof(Exception_t, ___stack_trace_5)); }
	inline String_t* get_stack_trace_5() const { return ___stack_trace_5; }
	inline String_t** get_address_of_stack_trace_5() { return &___stack_trace_5; }
	inline void set_stack_trace_5(String_t* value)
	{
		___stack_trace_5 = value;
		Il2CppCodeGenWriteBarrier((&___stack_trace_5), value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_6() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_6)); }
	inline String_t* get__remoteStackTraceString_6() const { return ____remoteStackTraceString_6; }
	inline String_t** get_address_of__remoteStackTraceString_6() { return &____remoteStackTraceString_6; }
	inline void set__remoteStackTraceString_6(String_t* value)
	{
		____remoteStackTraceString_6 = value;
		Il2CppCodeGenWriteBarrier((&____remoteStackTraceString_6), value);
	}

	inline static int32_t get_offset_of_remote_stack_index_7() { return static_cast<int32_t>(offsetof(Exception_t, ___remote_stack_index_7)); }
	inline int32_t get_remote_stack_index_7() const { return ___remote_stack_index_7; }
	inline int32_t* get_address_of_remote_stack_index_7() { return &___remote_stack_index_7; }
	inline void set_remote_stack_index_7(int32_t value)
	{
		___remote_stack_index_7 = value;
	}

	inline static int32_t get_offset_of_hresult_8() { return static_cast<int32_t>(offsetof(Exception_t, ___hresult_8)); }
	inline int32_t get_hresult_8() const { return ___hresult_8; }
	inline int32_t* get_address_of_hresult_8() { return &___hresult_8; }
	inline void set_hresult_8(int32_t value)
	{
		___hresult_8 = value;
	}

	inline static int32_t get_offset_of_source_9() { return static_cast<int32_t>(offsetof(Exception_t, ___source_9)); }
	inline String_t* get_source_9() const { return ___source_9; }
	inline String_t** get_address_of_source_9() { return &___source_9; }
	inline void set_source_9(String_t* value)
	{
		___source_9 = value;
		Il2CppCodeGenWriteBarrier((&___source_9), value);
	}

	inline static int32_t get_offset_of__data_10() { return static_cast<int32_t>(offsetof(Exception_t, ____data_10)); }
	inline RuntimeObject* get__data_10() const { return ____data_10; }
	inline RuntimeObject** get_address_of__data_10() { return &____data_10; }
	inline void set__data_10(RuntimeObject* value)
	{
		____data_10 = value;
		Il2CppCodeGenWriteBarrier((&____data_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXCEPTION_T_H
#ifndef YIELDINSTRUCTION_T403091072_H
#define YIELDINSTRUCTION_T403091072_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.YieldInstruction
struct  YieldInstruction_t403091072  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_t403091072_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_t403091072_marshaled_com
{
};
#endif // YIELDINSTRUCTION_T403091072_H
#ifndef EXTERNS_T1263556617_H
#define EXTERNS_T1263556617_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GNSAdSDK.iOS.Externs
struct  Externs_t1263556617  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXTERNS_T1263556617_H
#ifndef MEMBERINFO_T_H
#define MEMBERINFO_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MemberInfo
struct  MemberInfo_t  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MEMBERINFO_T_H
#ifndef MOCKCLIENT_T1077215459_H
#define MOCKCLIENT_T1077215459_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GNSAdSDK.Clients.MockClient
struct  MockClient_t1077215459  : public RuntimeObject
{
public:
	// System.EventHandler`1<System.EventArgs> GNSAdSDK.Clients.MockClient::OnAdLoaded
	EventHandler_1_t1515976428 * ___OnAdLoaded_0;
	// System.EventHandler`1<GNSAdSDK.Api.VideoRewardData> GNSAdSDK.Clients.MockClient::OnAdStarted
	EventHandler_1_t2650267322 * ___OnAdStarted_1;
	// System.EventHandler`1<GNSAdSDK.Api.VideoRewardData> GNSAdSDK.Clients.MockClient::OnAdRewarded
	EventHandler_1_t2650267322 * ___OnAdRewarded_2;
	// System.EventHandler`1<GNSAdSDK.Api.VideoRewardData> GNSAdSDK.Clients.MockClient::OnAdClosed
	EventHandler_1_t2650267322 * ___OnAdClosed_3;
	// System.EventHandler`1<GNSAdSDK.Api.VideoRewardFailedData> GNSAdSDK.Clients.MockClient::OnAdFailedToLoad
	EventHandler_1_t1820321320 * ___OnAdFailedToLoad_4;

public:
	inline static int32_t get_offset_of_OnAdLoaded_0() { return static_cast<int32_t>(offsetof(MockClient_t1077215459, ___OnAdLoaded_0)); }
	inline EventHandler_1_t1515976428 * get_OnAdLoaded_0() const { return ___OnAdLoaded_0; }
	inline EventHandler_1_t1515976428 ** get_address_of_OnAdLoaded_0() { return &___OnAdLoaded_0; }
	inline void set_OnAdLoaded_0(EventHandler_1_t1515976428 * value)
	{
		___OnAdLoaded_0 = value;
		Il2CppCodeGenWriteBarrier((&___OnAdLoaded_0), value);
	}

	inline static int32_t get_offset_of_OnAdStarted_1() { return static_cast<int32_t>(offsetof(MockClient_t1077215459, ___OnAdStarted_1)); }
	inline EventHandler_1_t2650267322 * get_OnAdStarted_1() const { return ___OnAdStarted_1; }
	inline EventHandler_1_t2650267322 ** get_address_of_OnAdStarted_1() { return &___OnAdStarted_1; }
	inline void set_OnAdStarted_1(EventHandler_1_t2650267322 * value)
	{
		___OnAdStarted_1 = value;
		Il2CppCodeGenWriteBarrier((&___OnAdStarted_1), value);
	}

	inline static int32_t get_offset_of_OnAdRewarded_2() { return static_cast<int32_t>(offsetof(MockClient_t1077215459, ___OnAdRewarded_2)); }
	inline EventHandler_1_t2650267322 * get_OnAdRewarded_2() const { return ___OnAdRewarded_2; }
	inline EventHandler_1_t2650267322 ** get_address_of_OnAdRewarded_2() { return &___OnAdRewarded_2; }
	inline void set_OnAdRewarded_2(EventHandler_1_t2650267322 * value)
	{
		___OnAdRewarded_2 = value;
		Il2CppCodeGenWriteBarrier((&___OnAdRewarded_2), value);
	}

	inline static int32_t get_offset_of_OnAdClosed_3() { return static_cast<int32_t>(offsetof(MockClient_t1077215459, ___OnAdClosed_3)); }
	inline EventHandler_1_t2650267322 * get_OnAdClosed_3() const { return ___OnAdClosed_3; }
	inline EventHandler_1_t2650267322 ** get_address_of_OnAdClosed_3() { return &___OnAdClosed_3; }
	inline void set_OnAdClosed_3(EventHandler_1_t2650267322 * value)
	{
		___OnAdClosed_3 = value;
		Il2CppCodeGenWriteBarrier((&___OnAdClosed_3), value);
	}

	inline static int32_t get_offset_of_OnAdFailedToLoad_4() { return static_cast<int32_t>(offsetof(MockClient_t1077215459, ___OnAdFailedToLoad_4)); }
	inline EventHandler_1_t1820321320 * get_OnAdFailedToLoad_4() const { return ___OnAdFailedToLoad_4; }
	inline EventHandler_1_t1820321320 ** get_address_of_OnAdFailedToLoad_4() { return &___OnAdFailedToLoad_4; }
	inline void set_OnAdFailedToLoad_4(EventHandler_1_t1820321320 * value)
	{
		___OnAdFailedToLoad_4 = value;
		Il2CppCodeGenWriteBarrier((&___OnAdFailedToLoad_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MOCKCLIENT_T1077215459_H
#ifndef STRING_T_H
#define STRING_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.String
struct  String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::length
	int32_t ___length_0;
	// System.Char System.String::start_char
	Il2CppChar ___start_char_1;

public:
	inline static int32_t get_offset_of_length_0() { return static_cast<int32_t>(offsetof(String_t, ___length_0)); }
	inline int32_t get_length_0() const { return ___length_0; }
	inline int32_t* get_address_of_length_0() { return &___length_0; }
	inline void set_length_0(int32_t value)
	{
		___length_0 = value;
	}

	inline static int32_t get_offset_of_start_char_1() { return static_cast<int32_t>(offsetof(String_t, ___start_char_1)); }
	inline Il2CppChar get_start_char_1() const { return ___start_char_1; }
	inline Il2CppChar* get_address_of_start_char_1() { return &___start_char_1; }
	inline void set_start_char_1(Il2CppChar value)
	{
		___start_char_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_2;
	// System.Char[] System.String::WhiteChars
	CharU5BU5D_t3528271667* ___WhiteChars_3;

public:
	inline static int32_t get_offset_of_Empty_2() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_2)); }
	inline String_t* get_Empty_2() const { return ___Empty_2; }
	inline String_t** get_address_of_Empty_2() { return &___Empty_2; }
	inline void set_Empty_2(String_t* value)
	{
		___Empty_2 = value;
		Il2CppCodeGenWriteBarrier((&___Empty_2), value);
	}

	inline static int32_t get_offset_of_WhiteChars_3() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___WhiteChars_3)); }
	inline CharU5BU5D_t3528271667* get_WhiteChars_3() const { return ___WhiteChars_3; }
	inline CharU5BU5D_t3528271667** get_address_of_WhiteChars_3() { return &___WhiteChars_3; }
	inline void set_WhiteChars_3(CharU5BU5D_t3528271667* value)
	{
		___WhiteChars_3 = value;
		Il2CppCodeGenWriteBarrier((&___WhiteChars_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRING_T_H
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
#ifndef ADCLIENTFACTORY_T673636922_H
#define ADCLIENTFACTORY_T673636922_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GNSAdSDK.AdClientFactory
struct  AdClientFactory_t673636922  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ADCLIENTFACTORY_T673636922_H
#ifndef EVENTARGS_T3591816995_H
#define EVENTARGS_T3591816995_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.EventArgs
struct  EventArgs_t3591816995  : public RuntimeObject
{
public:

public:
};

struct EventArgs_t3591816995_StaticFields
{
public:
	// System.EventArgs System.EventArgs::Empty
	EventArgs_t3591816995 * ___Empty_0;

public:
	inline static int32_t get_offset_of_Empty_0() { return static_cast<int32_t>(offsetof(EventArgs_t3591816995_StaticFields, ___Empty_0)); }
	inline EventArgs_t3591816995 * get_Empty_0() const { return ___Empty_0; }
	inline EventArgs_t3591816995 ** get_address_of_Empty_0() { return &___Empty_0; }
	inline void set_Empty_0(EventArgs_t3591816995 * value)
	{
		___Empty_0 = value;
		Il2CppCodeGenWriteBarrier((&___Empty_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EVENTARGS_T3591816995_H
#ifndef REWARDVIDEOAD_T2059019935_H
#define REWARDVIDEOAD_T2059019935_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GNSAdSDK.Api.RewardVideoAd
struct  RewardVideoAd_t2059019935  : public RuntimeObject
{
public:
	// GNSAdSDK.Clients.RewardVideoAdClient GNSAdSDK.Api.RewardVideoAd::client
	RuntimeObject* ___client_0;
	// System.EventHandler`1<System.EventArgs> GNSAdSDK.Api.RewardVideoAd::OnAdLoaded
	EventHandler_1_t1515976428 * ___OnAdLoaded_1;
	// System.EventHandler`1<GNSAdSDK.Api.VideoRewardData> GNSAdSDK.Api.RewardVideoAd::OnAdStarted
	EventHandler_1_t2650267322 * ___OnAdStarted_2;
	// System.EventHandler`1<GNSAdSDK.Api.VideoRewardData> GNSAdSDK.Api.RewardVideoAd::OnAdRewarded
	EventHandler_1_t2650267322 * ___OnAdRewarded_3;
	// System.EventHandler`1<GNSAdSDK.Api.VideoRewardData> GNSAdSDK.Api.RewardVideoAd::OnAdClosed
	EventHandler_1_t2650267322 * ___OnAdClosed_4;
	// System.EventHandler`1<GNSAdSDK.Api.VideoRewardFailedData> GNSAdSDK.Api.RewardVideoAd::OnAdFailedToLoad
	EventHandler_1_t1820321320 * ___OnAdFailedToLoad_5;

public:
	inline static int32_t get_offset_of_client_0() { return static_cast<int32_t>(offsetof(RewardVideoAd_t2059019935, ___client_0)); }
	inline RuntimeObject* get_client_0() const { return ___client_0; }
	inline RuntimeObject** get_address_of_client_0() { return &___client_0; }
	inline void set_client_0(RuntimeObject* value)
	{
		___client_0 = value;
		Il2CppCodeGenWriteBarrier((&___client_0), value);
	}

	inline static int32_t get_offset_of_OnAdLoaded_1() { return static_cast<int32_t>(offsetof(RewardVideoAd_t2059019935, ___OnAdLoaded_1)); }
	inline EventHandler_1_t1515976428 * get_OnAdLoaded_1() const { return ___OnAdLoaded_1; }
	inline EventHandler_1_t1515976428 ** get_address_of_OnAdLoaded_1() { return &___OnAdLoaded_1; }
	inline void set_OnAdLoaded_1(EventHandler_1_t1515976428 * value)
	{
		___OnAdLoaded_1 = value;
		Il2CppCodeGenWriteBarrier((&___OnAdLoaded_1), value);
	}

	inline static int32_t get_offset_of_OnAdStarted_2() { return static_cast<int32_t>(offsetof(RewardVideoAd_t2059019935, ___OnAdStarted_2)); }
	inline EventHandler_1_t2650267322 * get_OnAdStarted_2() const { return ___OnAdStarted_2; }
	inline EventHandler_1_t2650267322 ** get_address_of_OnAdStarted_2() { return &___OnAdStarted_2; }
	inline void set_OnAdStarted_2(EventHandler_1_t2650267322 * value)
	{
		___OnAdStarted_2 = value;
		Il2CppCodeGenWriteBarrier((&___OnAdStarted_2), value);
	}

	inline static int32_t get_offset_of_OnAdRewarded_3() { return static_cast<int32_t>(offsetof(RewardVideoAd_t2059019935, ___OnAdRewarded_3)); }
	inline EventHandler_1_t2650267322 * get_OnAdRewarded_3() const { return ___OnAdRewarded_3; }
	inline EventHandler_1_t2650267322 ** get_address_of_OnAdRewarded_3() { return &___OnAdRewarded_3; }
	inline void set_OnAdRewarded_3(EventHandler_1_t2650267322 * value)
	{
		___OnAdRewarded_3 = value;
		Il2CppCodeGenWriteBarrier((&___OnAdRewarded_3), value);
	}

	inline static int32_t get_offset_of_OnAdClosed_4() { return static_cast<int32_t>(offsetof(RewardVideoAd_t2059019935, ___OnAdClosed_4)); }
	inline EventHandler_1_t2650267322 * get_OnAdClosed_4() const { return ___OnAdClosed_4; }
	inline EventHandler_1_t2650267322 ** get_address_of_OnAdClosed_4() { return &___OnAdClosed_4; }
	inline void set_OnAdClosed_4(EventHandler_1_t2650267322 * value)
	{
		___OnAdClosed_4 = value;
		Il2CppCodeGenWriteBarrier((&___OnAdClosed_4), value);
	}

	inline static int32_t get_offset_of_OnAdFailedToLoad_5() { return static_cast<int32_t>(offsetof(RewardVideoAd_t2059019935, ___OnAdFailedToLoad_5)); }
	inline EventHandler_1_t1820321320 * get_OnAdFailedToLoad_5() const { return ___OnAdFailedToLoad_5; }
	inline EventHandler_1_t1820321320 ** get_address_of_OnAdFailedToLoad_5() { return &___OnAdFailedToLoad_5; }
	inline void set_OnAdFailedToLoad_5(EventHandler_1_t1820321320 * value)
	{
		___OnAdFailedToLoad_5 = value;
		Il2CppCodeGenWriteBarrier((&___OnAdFailedToLoad_5), value);
	}
};

struct RewardVideoAd_t2059019935_StaticFields
{
public:
	// GNSAdSDK.Api.RewardVideoAd GNSAdSDK.Api.RewardVideoAd::instance
	RewardVideoAd_t2059019935 * ___instance_6;

public:
	inline static int32_t get_offset_of_instance_6() { return static_cast<int32_t>(offsetof(RewardVideoAd_t2059019935_StaticFields, ___instance_6)); }
	inline RewardVideoAd_t2059019935 * get_instance_6() const { return ___instance_6; }
	inline RewardVideoAd_t2059019935 ** get_address_of_instance_6() { return &___instance_6; }
	inline void set_instance_6(RewardVideoAd_t2059019935 * value)
	{
		___instance_6 = value;
		Il2CppCodeGenWriteBarrier((&___instance_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REWARDVIDEOAD_T2059019935_H
#ifndef VIDEOREWARDFAILEDDATA_T3896161887_H
#define VIDEOREWARDFAILEDDATA_T3896161887_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GNSAdSDK.Api.VideoRewardFailedData
struct  VideoRewardFailedData_t3896161887  : public EventArgs_t3591816995
{
public:
	// System.String GNSAdSDK.Api.VideoRewardFailedData::<AdnetworkName>k__BackingField
	String_t* ___U3CAdnetworkNameU3Ek__BackingField_1;
	// System.Int32 GNSAdSDK.Api.VideoRewardFailedData::<Code>k__BackingField
	int32_t ___U3CCodeU3Ek__BackingField_2;
	// System.String GNSAdSDK.Api.VideoRewardFailedData::<Message>k__BackingField
	String_t* ___U3CMessageU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_U3CAdnetworkNameU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(VideoRewardFailedData_t3896161887, ___U3CAdnetworkNameU3Ek__BackingField_1)); }
	inline String_t* get_U3CAdnetworkNameU3Ek__BackingField_1() const { return ___U3CAdnetworkNameU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CAdnetworkNameU3Ek__BackingField_1() { return &___U3CAdnetworkNameU3Ek__BackingField_1; }
	inline void set_U3CAdnetworkNameU3Ek__BackingField_1(String_t* value)
	{
		___U3CAdnetworkNameU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CAdnetworkNameU3Ek__BackingField_1), value);
	}

	inline static int32_t get_offset_of_U3CCodeU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(VideoRewardFailedData_t3896161887, ___U3CCodeU3Ek__BackingField_2)); }
	inline int32_t get_U3CCodeU3Ek__BackingField_2() const { return ___U3CCodeU3Ek__BackingField_2; }
	inline int32_t* get_address_of_U3CCodeU3Ek__BackingField_2() { return &___U3CCodeU3Ek__BackingField_2; }
	inline void set_U3CCodeU3Ek__BackingField_2(int32_t value)
	{
		___U3CCodeU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CMessageU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(VideoRewardFailedData_t3896161887, ___U3CMessageU3Ek__BackingField_3)); }
	inline String_t* get_U3CMessageU3Ek__BackingField_3() const { return ___U3CMessageU3Ek__BackingField_3; }
	inline String_t** get_address_of_U3CMessageU3Ek__BackingField_3() { return &___U3CMessageU3Ek__BackingField_3; }
	inline void set_U3CMessageU3Ek__BackingField_3(String_t* value)
	{
		___U3CMessageU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((&___U3CMessageU3Ek__BackingField_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VIDEOREWARDFAILEDDATA_T3896161887_H
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
#ifndef VECTOR3_T3722313464_H
#define VECTOR3_T3722313464_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector3
struct  Vector3_t3722313464 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_1;
	// System.Single UnityEngine.Vector3::y
	float ___y_2;
	// System.Single UnityEngine.Vector3::z
	float ___z_3;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}
};

struct Vector3_t3722313464_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t3722313464  ___zeroVector_4;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t3722313464  ___oneVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t3722313464  ___upVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t3722313464  ___downVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t3722313464  ___leftVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t3722313464  ___rightVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t3722313464  ___forwardVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t3722313464  ___backVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t3722313464  ___positiveInfinityVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t3722313464  ___negativeInfinityVector_13;

public:
	inline static int32_t get_offset_of_zeroVector_4() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___zeroVector_4)); }
	inline Vector3_t3722313464  get_zeroVector_4() const { return ___zeroVector_4; }
	inline Vector3_t3722313464 * get_address_of_zeroVector_4() { return &___zeroVector_4; }
	inline void set_zeroVector_4(Vector3_t3722313464  value)
	{
		___zeroVector_4 = value;
	}

	inline static int32_t get_offset_of_oneVector_5() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___oneVector_5)); }
	inline Vector3_t3722313464  get_oneVector_5() const { return ___oneVector_5; }
	inline Vector3_t3722313464 * get_address_of_oneVector_5() { return &___oneVector_5; }
	inline void set_oneVector_5(Vector3_t3722313464  value)
	{
		___oneVector_5 = value;
	}

	inline static int32_t get_offset_of_upVector_6() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___upVector_6)); }
	inline Vector3_t3722313464  get_upVector_6() const { return ___upVector_6; }
	inline Vector3_t3722313464 * get_address_of_upVector_6() { return &___upVector_6; }
	inline void set_upVector_6(Vector3_t3722313464  value)
	{
		___upVector_6 = value;
	}

	inline static int32_t get_offset_of_downVector_7() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___downVector_7)); }
	inline Vector3_t3722313464  get_downVector_7() const { return ___downVector_7; }
	inline Vector3_t3722313464 * get_address_of_downVector_7() { return &___downVector_7; }
	inline void set_downVector_7(Vector3_t3722313464  value)
	{
		___downVector_7 = value;
	}

	inline static int32_t get_offset_of_leftVector_8() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___leftVector_8)); }
	inline Vector3_t3722313464  get_leftVector_8() const { return ___leftVector_8; }
	inline Vector3_t3722313464 * get_address_of_leftVector_8() { return &___leftVector_8; }
	inline void set_leftVector_8(Vector3_t3722313464  value)
	{
		___leftVector_8 = value;
	}

	inline static int32_t get_offset_of_rightVector_9() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___rightVector_9)); }
	inline Vector3_t3722313464  get_rightVector_9() const { return ___rightVector_9; }
	inline Vector3_t3722313464 * get_address_of_rightVector_9() { return &___rightVector_9; }
	inline void set_rightVector_9(Vector3_t3722313464  value)
	{
		___rightVector_9 = value;
	}

	inline static int32_t get_offset_of_forwardVector_10() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___forwardVector_10)); }
	inline Vector3_t3722313464  get_forwardVector_10() const { return ___forwardVector_10; }
	inline Vector3_t3722313464 * get_address_of_forwardVector_10() { return &___forwardVector_10; }
	inline void set_forwardVector_10(Vector3_t3722313464  value)
	{
		___forwardVector_10 = value;
	}

	inline static int32_t get_offset_of_backVector_11() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___backVector_11)); }
	inline Vector3_t3722313464  get_backVector_11() const { return ___backVector_11; }
	inline Vector3_t3722313464 * get_address_of_backVector_11() { return &___backVector_11; }
	inline void set_backVector_11(Vector3_t3722313464  value)
	{
		___backVector_11 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_12() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___positiveInfinityVector_12)); }
	inline Vector3_t3722313464  get_positiveInfinityVector_12() const { return ___positiveInfinityVector_12; }
	inline Vector3_t3722313464 * get_address_of_positiveInfinityVector_12() { return &___positiveInfinityVector_12; }
	inline void set_positiveInfinityVector_12(Vector3_t3722313464  value)
	{
		___positiveInfinityVector_12 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___negativeInfinityVector_13)); }
	inline Vector3_t3722313464  get_negativeInfinityVector_13() const { return ___negativeInfinityVector_13; }
	inline Vector3_t3722313464 * get_address_of_negativeInfinityVector_13() { return &___negativeInfinityVector_13; }
	inline void set_negativeInfinityVector_13(Vector3_t3722313464  value)
	{
		___negativeInfinityVector_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR3_T3722313464_H
#ifndef SINGLE_T1397266774_H
#define SINGLE_T1397266774_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Single
struct  Single_t1397266774 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_7;

public:
	inline static int32_t get_offset_of_m_value_7() { return static_cast<int32_t>(offsetof(Single_t1397266774, ___m_value_7)); }
	inline float get_m_value_7() const { return ___m_value_7; }
	inline float* get_address_of_m_value_7() { return &___m_value_7; }
	inline void set_m_value_7(float value)
	{
		___m_value_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SINGLE_T1397266774_H
#ifndef UNITYEVENT_T2581268647_H
#define UNITYEVENT_T2581268647_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.UnityEvent
struct  UnityEvent_t2581268647  : public UnityEventBase_t3960448221
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent::m_InvokeArray
	ObjectU5BU5D_t2843939325* ___m_InvokeArray_4;

public:
	inline static int32_t get_offset_of_m_InvokeArray_4() { return static_cast<int32_t>(offsetof(UnityEvent_t2581268647, ___m_InvokeArray_4)); }
	inline ObjectU5BU5D_t2843939325* get_m_InvokeArray_4() const { return ___m_InvokeArray_4; }
	inline ObjectU5BU5D_t2843939325** get_address_of_m_InvokeArray_4() { return &___m_InvokeArray_4; }
	inline void set_m_InvokeArray_4(ObjectU5BU5D_t2843939325* value)
	{
		___m_InvokeArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_InvokeArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYEVENT_T2581268647_H
#ifndef COLOR_T2555686324_H
#define COLOR_T2555686324_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Color
struct  Color_t2555686324 
{
public:
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;

public:
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_t2555686324, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_t2555686324, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_t2555686324, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_t2555686324, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLOR_T2555686324_H
#ifndef VECTOR2_T2156229523_H
#define VECTOR2_T2156229523_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector2
struct  Vector2_t2156229523 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_t2156229523, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_t2156229523, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_t2156229523_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t2156229523  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t2156229523  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t2156229523  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t2156229523  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t2156229523  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t2156229523  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t2156229523  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t2156229523  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___zeroVector_2)); }
	inline Vector2_t2156229523  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_t2156229523 * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_t2156229523  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___oneVector_3)); }
	inline Vector2_t2156229523  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_t2156229523 * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_t2156229523  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___upVector_4)); }
	inline Vector2_t2156229523  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_t2156229523 * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_t2156229523  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___downVector_5)); }
	inline Vector2_t2156229523  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_t2156229523 * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_t2156229523  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___leftVector_6)); }
	inline Vector2_t2156229523  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_t2156229523 * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_t2156229523  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___rightVector_7)); }
	inline Vector2_t2156229523  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_t2156229523 * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_t2156229523  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_t2156229523  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_t2156229523 * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_t2156229523  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_t2156229523  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_t2156229523 * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_t2156229523  value)
	{
		___negativeInfinityVector_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR2_T2156229523_H
#ifndef GCHANDLE_T3351438187_H
#define GCHANDLE_T3351438187_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.GCHandle
struct  GCHandle_t3351438187 
{
public:
	// System.Int32 System.Runtime.InteropServices.GCHandle::handle
	int32_t ___handle_0;

public:
	inline static int32_t get_offset_of_handle_0() { return static_cast<int32_t>(offsetof(GCHandle_t3351438187, ___handle_0)); }
	inline int32_t get_handle_0() const { return ___handle_0; }
	inline int32_t* get_address_of_handle_0() { return &___handle_0; }
	inline void set_handle_0(int32_t value)
	{
		___handle_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GCHANDLE_T3351438187_H
#ifndef TIMESPAN_T881159249_H
#define TIMESPAN_T881159249_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.TimeSpan
struct  TimeSpan_t881159249 
{
public:
	// System.Int64 System.TimeSpan::_ticks
	int64_t ____ticks_3;

public:
	inline static int32_t get_offset_of__ticks_3() { return static_cast<int32_t>(offsetof(TimeSpan_t881159249, ____ticks_3)); }
	inline int64_t get__ticks_3() const { return ____ticks_3; }
	inline int64_t* get_address_of__ticks_3() { return &____ticks_3; }
	inline void set__ticks_3(int64_t value)
	{
		____ticks_3 = value;
	}
};

struct TimeSpan_t881159249_StaticFields
{
public:
	// System.TimeSpan System.TimeSpan::MaxValue
	TimeSpan_t881159249  ___MaxValue_0;
	// System.TimeSpan System.TimeSpan::MinValue
	TimeSpan_t881159249  ___MinValue_1;
	// System.TimeSpan System.TimeSpan::Zero
	TimeSpan_t881159249  ___Zero_2;

public:
	inline static int32_t get_offset_of_MaxValue_0() { return static_cast<int32_t>(offsetof(TimeSpan_t881159249_StaticFields, ___MaxValue_0)); }
	inline TimeSpan_t881159249  get_MaxValue_0() const { return ___MaxValue_0; }
	inline TimeSpan_t881159249 * get_address_of_MaxValue_0() { return &___MaxValue_0; }
	inline void set_MaxValue_0(TimeSpan_t881159249  value)
	{
		___MaxValue_0 = value;
	}

	inline static int32_t get_offset_of_MinValue_1() { return static_cast<int32_t>(offsetof(TimeSpan_t881159249_StaticFields, ___MinValue_1)); }
	inline TimeSpan_t881159249  get_MinValue_1() const { return ___MinValue_1; }
	inline TimeSpan_t881159249 * get_address_of_MinValue_1() { return &___MinValue_1; }
	inline void set_MinValue_1(TimeSpan_t881159249  value)
	{
		___MinValue_1 = value;
	}

	inline static int32_t get_offset_of_Zero_2() { return static_cast<int32_t>(offsetof(TimeSpan_t881159249_StaticFields, ___Zero_2)); }
	inline TimeSpan_t881159249  get_Zero_2() const { return ___Zero_2; }
	inline TimeSpan_t881159249 * get_address_of_Zero_2() { return &___Zero_2; }
	inline void set_Zero_2(TimeSpan_t881159249  value)
	{
		___Zero_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TIMESPAN_T881159249_H
#ifndef DRIVENRECTTRANSFORMTRACKER_T2562230146_H
#define DRIVENRECTTRANSFORMTRACKER_T2562230146_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.DrivenRectTransformTracker
struct  DrivenRectTransformTracker_t2562230146 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DRIVENRECTTRANSFORMTRACKER_T2562230146_H
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
#ifndef UINT32_T2560061978_H
#define UINT32_T2560061978_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UInt32
struct  UInt32_t2560061978 
{
public:
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt32_t2560061978, ___m_value_0)); }
	inline uint32_t get_m_value_0() const { return ___m_value_0; }
	inline uint32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint32_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UINT32_T2560061978_H
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
#ifndef METHODBASE_T_H
#define METHODBASE_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MethodBase
struct  MethodBase_t  : public MemberInfo_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // METHODBASE_T_H
#ifndef SPRITESTATE_T1362986479_H
#define SPRITESTATE_T1362986479_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.SpriteState
struct  SpriteState_t1362986479 
{
public:
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_HighlightedSprite
	Sprite_t280657092 * ___m_HighlightedSprite_0;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_PressedSprite
	Sprite_t280657092 * ___m_PressedSprite_1;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_DisabledSprite
	Sprite_t280657092 * ___m_DisabledSprite_2;

public:
	inline static int32_t get_offset_of_m_HighlightedSprite_0() { return static_cast<int32_t>(offsetof(SpriteState_t1362986479, ___m_HighlightedSprite_0)); }
	inline Sprite_t280657092 * get_m_HighlightedSprite_0() const { return ___m_HighlightedSprite_0; }
	inline Sprite_t280657092 ** get_address_of_m_HighlightedSprite_0() { return &___m_HighlightedSprite_0; }
	inline void set_m_HighlightedSprite_0(Sprite_t280657092 * value)
	{
		___m_HighlightedSprite_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_HighlightedSprite_0), value);
	}

	inline static int32_t get_offset_of_m_PressedSprite_1() { return static_cast<int32_t>(offsetof(SpriteState_t1362986479, ___m_PressedSprite_1)); }
	inline Sprite_t280657092 * get_m_PressedSprite_1() const { return ___m_PressedSprite_1; }
	inline Sprite_t280657092 ** get_address_of_m_PressedSprite_1() { return &___m_PressedSprite_1; }
	inline void set_m_PressedSprite_1(Sprite_t280657092 * value)
	{
		___m_PressedSprite_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_PressedSprite_1), value);
	}

	inline static int32_t get_offset_of_m_DisabledSprite_2() { return static_cast<int32_t>(offsetof(SpriteState_t1362986479, ___m_DisabledSprite_2)); }
	inline Sprite_t280657092 * get_m_DisabledSprite_2() const { return ___m_DisabledSprite_2; }
	inline Sprite_t280657092 ** get_address_of_m_DisabledSprite_2() { return &___m_DisabledSprite_2; }
	inline void set_m_DisabledSprite_2(Sprite_t280657092 * value)
	{
		___m_DisabledSprite_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_DisabledSprite_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.UI.SpriteState
struct SpriteState_t1362986479_marshaled_pinvoke
{
	Sprite_t280657092 * ___m_HighlightedSprite_0;
	Sprite_t280657092 * ___m_PressedSprite_1;
	Sprite_t280657092 * ___m_DisabledSprite_2;
};
// Native definition for COM marshalling of UnityEngine.UI.SpriteState
struct SpriteState_t1362986479_marshaled_com
{
	Sprite_t280657092 * ___m_HighlightedSprite_0;
	Sprite_t280657092 * ___m_PressedSprite_1;
	Sprite_t280657092 * ___m_DisabledSprite_2;
};
#endif // SPRITESTATE_T1362986479_H
#ifndef ENUM_T4135868527_H
#define ENUM_T4135868527_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Enum
struct  Enum_t4135868527  : public ValueType_t3640485471
{
public:

public:
};

struct Enum_t4135868527_StaticFields
{
public:
	// System.Char[] System.Enum::split_char
	CharU5BU5D_t3528271667* ___split_char_0;

public:
	inline static int32_t get_offset_of_split_char_0() { return static_cast<int32_t>(offsetof(Enum_t4135868527_StaticFields, ___split_char_0)); }
	inline CharU5BU5D_t3528271667* get_split_char_0() const { return ___split_char_0; }
	inline CharU5BU5D_t3528271667** get_address_of_split_char_0() { return &___split_char_0; }
	inline void set_split_char_0(CharU5BU5D_t3528271667* value)
	{
		___split_char_0 = value;
		Il2CppCodeGenWriteBarrier((&___split_char_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t4135868527_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t4135868527_marshaled_com
{
};
#endif // ENUM_T4135868527_H
#ifndef VIDEOREWARDDATA_T431140593_H
#define VIDEOREWARDDATA_T431140593_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GNSAdSDK.Api.VideoRewardData
struct  VideoRewardData_t431140593  : public EventArgs_t3591816995
{
public:
	// System.String GNSAdSDK.Api.VideoRewardData::<AdName>k__BackingField
	String_t* ___U3CAdNameU3Ek__BackingField_1;
	// System.Double GNSAdSDK.Api.VideoRewardData::<Amount>k__BackingField
	double ___U3CAmountU3Ek__BackingField_2;
	// System.String GNSAdSDK.Api.VideoRewardData::<Type>k__BackingField
	String_t* ___U3CTypeU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_U3CAdNameU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(VideoRewardData_t431140593, ___U3CAdNameU3Ek__BackingField_1)); }
	inline String_t* get_U3CAdNameU3Ek__BackingField_1() const { return ___U3CAdNameU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CAdNameU3Ek__BackingField_1() { return &___U3CAdNameU3Ek__BackingField_1; }
	inline void set_U3CAdNameU3Ek__BackingField_1(String_t* value)
	{
		___U3CAdNameU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CAdNameU3Ek__BackingField_1), value);
	}

	inline static int32_t get_offset_of_U3CAmountU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(VideoRewardData_t431140593, ___U3CAmountU3Ek__BackingField_2)); }
	inline double get_U3CAmountU3Ek__BackingField_2() const { return ___U3CAmountU3Ek__BackingField_2; }
	inline double* get_address_of_U3CAmountU3Ek__BackingField_2() { return &___U3CAmountU3Ek__BackingField_2; }
	inline void set_U3CAmountU3Ek__BackingField_2(double value)
	{
		___U3CAmountU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CTypeU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(VideoRewardData_t431140593, ___U3CTypeU3Ek__BackingField_3)); }
	inline String_t* get_U3CTypeU3Ek__BackingField_3() const { return ___U3CTypeU3Ek__BackingField_3; }
	inline String_t** get_address_of_U3CTypeU3Ek__BackingField_3() { return &___U3CTypeU3Ek__BackingField_3; }
	inline void set_U3CTypeU3Ek__BackingField_3(String_t* value)
	{
		___U3CTypeU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((&___U3CTypeU3Ek__BackingField_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VIDEOREWARDDATA_T431140593_H
#ifndef INT32_T2950945753_H
#define INT32_T2950945753_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int32
struct  Int32_t2950945753 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Int32_t2950945753, ___m_value_2)); }
	inline int32_t get_m_value_2() const { return ___m_value_2; }
	inline int32_t* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(int32_t value)
	{
		___m_value_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT32_T2950945753_H
#ifndef SYSTEMEXCEPTION_T176217640_H
#define SYSTEMEXCEPTION_T176217640_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.SystemException
struct  SystemException_t176217640  : public Exception_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYSTEMEXCEPTION_T176217640_H
#ifndef BOOLEAN_T97287965_H
#define BOOLEAN_T97287965_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Boolean
struct  Boolean_t97287965 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Boolean_t97287965, ___m_value_2)); }
	inline bool get_m_value_2() const { return ___m_value_2; }
	inline bool* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(bool value)
	{
		___m_value_2 = value;
	}
};

struct Boolean_t97287965_StaticFields
{
public:
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_0;
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_1;

public:
	inline static int32_t get_offset_of_FalseString_0() { return static_cast<int32_t>(offsetof(Boolean_t97287965_StaticFields, ___FalseString_0)); }
	inline String_t* get_FalseString_0() const { return ___FalseString_0; }
	inline String_t** get_address_of_FalseString_0() { return &___FalseString_0; }
	inline void set_FalseString_0(String_t* value)
	{
		___FalseString_0 = value;
		Il2CppCodeGenWriteBarrier((&___FalseString_0), value);
	}

	inline static int32_t get_offset_of_TrueString_1() { return static_cast<int32_t>(offsetof(Boolean_t97287965_StaticFields, ___TrueString_1)); }
	inline String_t* get_TrueString_1() const { return ___TrueString_1; }
	inline String_t** get_address_of_TrueString_1() { return &___TrueString_1; }
	inline void set_TrueString_1(String_t* value)
	{
		___TrueString_1 = value;
		Il2CppCodeGenWriteBarrier((&___TrueString_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOOLEAN_T97287965_H
#ifndef NOTSUPPORTEDEXCEPTION_T1314879016_H
#define NOTSUPPORTEDEXCEPTION_T1314879016_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.NotSupportedException
struct  NotSupportedException_t1314879016  : public SystemException_t176217640
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NOTSUPPORTEDEXCEPTION_T1314879016_H
#ifndef COLORBLOCK_T2139031574_H
#define COLORBLOCK_T2139031574_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.ColorBlock
struct  ColorBlock_t2139031574 
{
public:
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_NormalColor
	Color_t2555686324  ___m_NormalColor_0;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_HighlightedColor
	Color_t2555686324  ___m_HighlightedColor_1;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_PressedColor
	Color_t2555686324  ___m_PressedColor_2;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_DisabledColor
	Color_t2555686324  ___m_DisabledColor_3;
	// System.Single UnityEngine.UI.ColorBlock::m_ColorMultiplier
	float ___m_ColorMultiplier_4;
	// System.Single UnityEngine.UI.ColorBlock::m_FadeDuration
	float ___m_FadeDuration_5;

public:
	inline static int32_t get_offset_of_m_NormalColor_0() { return static_cast<int32_t>(offsetof(ColorBlock_t2139031574, ___m_NormalColor_0)); }
	inline Color_t2555686324  get_m_NormalColor_0() const { return ___m_NormalColor_0; }
	inline Color_t2555686324 * get_address_of_m_NormalColor_0() { return &___m_NormalColor_0; }
	inline void set_m_NormalColor_0(Color_t2555686324  value)
	{
		___m_NormalColor_0 = value;
	}

	inline static int32_t get_offset_of_m_HighlightedColor_1() { return static_cast<int32_t>(offsetof(ColorBlock_t2139031574, ___m_HighlightedColor_1)); }
	inline Color_t2555686324  get_m_HighlightedColor_1() const { return ___m_HighlightedColor_1; }
	inline Color_t2555686324 * get_address_of_m_HighlightedColor_1() { return &___m_HighlightedColor_1; }
	inline void set_m_HighlightedColor_1(Color_t2555686324  value)
	{
		___m_HighlightedColor_1 = value;
	}

	inline static int32_t get_offset_of_m_PressedColor_2() { return static_cast<int32_t>(offsetof(ColorBlock_t2139031574, ___m_PressedColor_2)); }
	inline Color_t2555686324  get_m_PressedColor_2() const { return ___m_PressedColor_2; }
	inline Color_t2555686324 * get_address_of_m_PressedColor_2() { return &___m_PressedColor_2; }
	inline void set_m_PressedColor_2(Color_t2555686324  value)
	{
		___m_PressedColor_2 = value;
	}

	inline static int32_t get_offset_of_m_DisabledColor_3() { return static_cast<int32_t>(offsetof(ColorBlock_t2139031574, ___m_DisabledColor_3)); }
	inline Color_t2555686324  get_m_DisabledColor_3() const { return ___m_DisabledColor_3; }
	inline Color_t2555686324 * get_address_of_m_DisabledColor_3() { return &___m_DisabledColor_3; }
	inline void set_m_DisabledColor_3(Color_t2555686324  value)
	{
		___m_DisabledColor_3 = value;
	}

	inline static int32_t get_offset_of_m_ColorMultiplier_4() { return static_cast<int32_t>(offsetof(ColorBlock_t2139031574, ___m_ColorMultiplier_4)); }
	inline float get_m_ColorMultiplier_4() const { return ___m_ColorMultiplier_4; }
	inline float* get_address_of_m_ColorMultiplier_4() { return &___m_ColorMultiplier_4; }
	inline void set_m_ColorMultiplier_4(float value)
	{
		___m_ColorMultiplier_4 = value;
	}

	inline static int32_t get_offset_of_m_FadeDuration_5() { return static_cast<int32_t>(offsetof(ColorBlock_t2139031574, ___m_FadeDuration_5)); }
	inline float get_m_FadeDuration_5() const { return ___m_FadeDuration_5; }
	inline float* get_address_of_m_FadeDuration_5() { return &___m_FadeDuration_5; }
	inline void set_m_FadeDuration_5(float value)
	{
		___m_FadeDuration_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLORBLOCK_T2139031574_H
#ifndef CONTENTTYPE_T1787303396_H
#define CONTENTTYPE_T1787303396_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.InputField/ContentType
struct  ContentType_t1787303396 
{
public:
	// System.Int32 UnityEngine.UI.InputField/ContentType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ContentType_t1787303396, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONTENTTYPE_T1787303396_H
#ifndef INPUTTYPE_T1770400679_H
#define INPUTTYPE_T1770400679_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.InputField/InputType
struct  InputType_t1770400679 
{
public:
	// System.Int32 UnityEngine.UI.InputField/InputType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(InputType_t1770400679, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INPUTTYPE_T1770400679_H
#ifndef DATETIMEKIND_T3468814247_H
#define DATETIMEKIND_T3468814247_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.DateTimeKind
struct  DateTimeKind_t3468814247 
{
public:
	// System.Int32 System.DateTimeKind::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(DateTimeKind_t3468814247, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATETIMEKIND_T3468814247_H
#ifndef LINETYPE_T4214648469_H
#define LINETYPE_T4214648469_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.InputField/LineType
struct  LineType_t4214648469 
{
public:
	// System.Int32 UnityEngine.UI.InputField/LineType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(LineType_t4214648469, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LINETYPE_T4214648469_H
#ifndef CHARACTERVALIDATION_T4051914437_H
#define CHARACTERVALIDATION_T4051914437_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.InputField/CharacterValidation
struct  CharacterValidation_t4051914437 
{
public:
	// System.Int32 UnityEngine.UI.InputField/CharacterValidation::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(CharacterValidation_t4051914437, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CHARACTERVALIDATION_T4051914437_H
#ifndef MOVEMENTTYPE_T4072922106_H
#define MOVEMENTTYPE_T4072922106_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.ScrollRect/MovementType
struct  MovementType_t4072922106 
{
public:
	// System.Int32 UnityEngine.UI.ScrollRect/MovementType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(MovementType_t4072922106, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MOVEMENTTYPE_T4072922106_H
#ifndef SCROLLBARVISIBILITY_T705693775_H
#define SCROLLBARVISIBILITY_T705693775_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.ScrollRect/ScrollbarVisibility
struct  ScrollbarVisibility_t705693775 
{
public:
	// System.Int32 UnityEngine.UI.ScrollRect/ScrollbarVisibility::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ScrollbarVisibility_t705693775, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SCROLLBARVISIBILITY_T705693775_H
#ifndef BOUNDS_T2266837910_H
#define BOUNDS_T2266837910_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Bounds
struct  Bounds_t2266837910 
{
public:
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Center
	Vector3_t3722313464  ___m_Center_0;
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Extents
	Vector3_t3722313464  ___m_Extents_1;

public:
	inline static int32_t get_offset_of_m_Center_0() { return static_cast<int32_t>(offsetof(Bounds_t2266837910, ___m_Center_0)); }
	inline Vector3_t3722313464  get_m_Center_0() const { return ___m_Center_0; }
	inline Vector3_t3722313464 * get_address_of_m_Center_0() { return &___m_Center_0; }
	inline void set_m_Center_0(Vector3_t3722313464  value)
	{
		___m_Center_0 = value;
	}

	inline static int32_t get_offset_of_m_Extents_1() { return static_cast<int32_t>(offsetof(Bounds_t2266837910, ___m_Extents_1)); }
	inline Vector3_t3722313464  get_m_Extents_1() const { return ___m_Extents_1; }
	inline Vector3_t3722313464 * get_address_of_m_Extents_1() { return &___m_Extents_1; }
	inline void set_m_Extents_1(Vector3_t3722313464  value)
	{
		___m_Extents_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOUNDS_T2266837910_H
#ifndef SELECTIONSTATE_T2656606514_H
#define SELECTIONSTATE_T2656606514_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Selectable/SelectionState
struct  SelectionState_t2656606514 
{
public:
	// System.Int32 UnityEngine.UI.Selectable/SelectionState::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(SelectionState_t2656606514, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SELECTIONSTATE_T2656606514_H
#ifndef TOUCHSCREENKEYBOARDTYPE_T1530597702_H
#define TOUCHSCREENKEYBOARDTYPE_T1530597702_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.TouchScreenKeyboardType
struct  TouchScreenKeyboardType_t1530597702 
{
public:
	// System.Int32 UnityEngine.TouchScreenKeyboardType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(TouchScreenKeyboardType_t1530597702, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TOUCHSCREENKEYBOARDTYPE_T1530597702_H
#ifndef TRANSITION_T1769908631_H
#define TRANSITION_T1769908631_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Selectable/Transition
struct  Transition_t1769908631 
{
public:
	// System.Int32 UnityEngine.UI.Selectable/Transition::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(Transition_t1769908631, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSITION_T1769908631_H
#ifndef MODE_T1066900953_H
#define MODE_T1066900953_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Navigation/Mode
struct  Mode_t1066900953 
{
public:
	// System.Int32 UnityEngine.UI.Navigation/Mode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(Mode_t1066900953, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MODE_T1066900953_H
#ifndef COROUTINE_T3829159415_H
#define COROUTINE_T3829159415_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Coroutine
struct  Coroutine_t3829159415  : public YieldInstruction_t403091072
{
public:
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(Coroutine_t3829159415, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_t3829159415_marshaled_pinvoke : public YieldInstruction_t403091072_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_t3829159415_marshaled_com : public YieldInstruction_t403091072_marshaled_com
{
	intptr_t ___m_Ptr_0;
};
#endif // COROUTINE_T3829159415_H
#ifndef REWARDVIDEOADCLIENTIMPL_T1565645521_H
#define REWARDVIDEOADCLIENTIMPL_T1565645521_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GNSAdSDK.iOS.RewardVideoAdClientImpl
struct  RewardVideoAdClientImpl_t1565645521  : public RuntimeObject
{
public:
	// System.IntPtr GNSAdSDK.iOS.RewardVideoAdClientImpl::rewardVideoAdPtr
	intptr_t ___rewardVideoAdPtr_0;
	// System.IntPtr GNSAdSDK.iOS.RewardVideoAdClientImpl::rewardVideoAdClientPtr
	intptr_t ___rewardVideoAdClientPtr_1;
	// System.EventHandler`1<System.EventArgs> GNSAdSDK.iOS.RewardVideoAdClientImpl::OnAdLoaded
	EventHandler_1_t1515976428 * ___OnAdLoaded_2;
	// System.EventHandler`1<GNSAdSDK.Api.VideoRewardData> GNSAdSDK.iOS.RewardVideoAdClientImpl::OnAdStarted
	EventHandler_1_t2650267322 * ___OnAdStarted_3;
	// System.EventHandler`1<GNSAdSDK.Api.VideoRewardData> GNSAdSDK.iOS.RewardVideoAdClientImpl::OnAdRewarded
	EventHandler_1_t2650267322 * ___OnAdRewarded_4;
	// System.EventHandler`1<GNSAdSDK.Api.VideoRewardData> GNSAdSDK.iOS.RewardVideoAdClientImpl::OnAdClosed
	EventHandler_1_t2650267322 * ___OnAdClosed_5;
	// System.EventHandler`1<GNSAdSDK.Api.VideoRewardFailedData> GNSAdSDK.iOS.RewardVideoAdClientImpl::OnAdFailedToLoad
	EventHandler_1_t1820321320 * ___OnAdFailedToLoad_6;

public:
	inline static int32_t get_offset_of_rewardVideoAdPtr_0() { return static_cast<int32_t>(offsetof(RewardVideoAdClientImpl_t1565645521, ___rewardVideoAdPtr_0)); }
	inline intptr_t get_rewardVideoAdPtr_0() const { return ___rewardVideoAdPtr_0; }
	inline intptr_t* get_address_of_rewardVideoAdPtr_0() { return &___rewardVideoAdPtr_0; }
	inline void set_rewardVideoAdPtr_0(intptr_t value)
	{
		___rewardVideoAdPtr_0 = value;
	}

	inline static int32_t get_offset_of_rewardVideoAdClientPtr_1() { return static_cast<int32_t>(offsetof(RewardVideoAdClientImpl_t1565645521, ___rewardVideoAdClientPtr_1)); }
	inline intptr_t get_rewardVideoAdClientPtr_1() const { return ___rewardVideoAdClientPtr_1; }
	inline intptr_t* get_address_of_rewardVideoAdClientPtr_1() { return &___rewardVideoAdClientPtr_1; }
	inline void set_rewardVideoAdClientPtr_1(intptr_t value)
	{
		___rewardVideoAdClientPtr_1 = value;
	}

	inline static int32_t get_offset_of_OnAdLoaded_2() { return static_cast<int32_t>(offsetof(RewardVideoAdClientImpl_t1565645521, ___OnAdLoaded_2)); }
	inline EventHandler_1_t1515976428 * get_OnAdLoaded_2() const { return ___OnAdLoaded_2; }
	inline EventHandler_1_t1515976428 ** get_address_of_OnAdLoaded_2() { return &___OnAdLoaded_2; }
	inline void set_OnAdLoaded_2(EventHandler_1_t1515976428 * value)
	{
		___OnAdLoaded_2 = value;
		Il2CppCodeGenWriteBarrier((&___OnAdLoaded_2), value);
	}

	inline static int32_t get_offset_of_OnAdStarted_3() { return static_cast<int32_t>(offsetof(RewardVideoAdClientImpl_t1565645521, ___OnAdStarted_3)); }
	inline EventHandler_1_t2650267322 * get_OnAdStarted_3() const { return ___OnAdStarted_3; }
	inline EventHandler_1_t2650267322 ** get_address_of_OnAdStarted_3() { return &___OnAdStarted_3; }
	inline void set_OnAdStarted_3(EventHandler_1_t2650267322 * value)
	{
		___OnAdStarted_3 = value;
		Il2CppCodeGenWriteBarrier((&___OnAdStarted_3), value);
	}

	inline static int32_t get_offset_of_OnAdRewarded_4() { return static_cast<int32_t>(offsetof(RewardVideoAdClientImpl_t1565645521, ___OnAdRewarded_4)); }
	inline EventHandler_1_t2650267322 * get_OnAdRewarded_4() const { return ___OnAdRewarded_4; }
	inline EventHandler_1_t2650267322 ** get_address_of_OnAdRewarded_4() { return &___OnAdRewarded_4; }
	inline void set_OnAdRewarded_4(EventHandler_1_t2650267322 * value)
	{
		___OnAdRewarded_4 = value;
		Il2CppCodeGenWriteBarrier((&___OnAdRewarded_4), value);
	}

	inline static int32_t get_offset_of_OnAdClosed_5() { return static_cast<int32_t>(offsetof(RewardVideoAdClientImpl_t1565645521, ___OnAdClosed_5)); }
	inline EventHandler_1_t2650267322 * get_OnAdClosed_5() const { return ___OnAdClosed_5; }
	inline EventHandler_1_t2650267322 ** get_address_of_OnAdClosed_5() { return &___OnAdClosed_5; }
	inline void set_OnAdClosed_5(EventHandler_1_t2650267322 * value)
	{
		___OnAdClosed_5 = value;
		Il2CppCodeGenWriteBarrier((&___OnAdClosed_5), value);
	}

	inline static int32_t get_offset_of_OnAdFailedToLoad_6() { return static_cast<int32_t>(offsetof(RewardVideoAdClientImpl_t1565645521, ___OnAdFailedToLoad_6)); }
	inline EventHandler_1_t1820321320 * get_OnAdFailedToLoad_6() const { return ___OnAdFailedToLoad_6; }
	inline EventHandler_1_t1820321320 ** get_address_of_OnAdFailedToLoad_6() { return &___OnAdFailedToLoad_6; }
	inline void set_OnAdFailedToLoad_6(EventHandler_1_t1820321320 * value)
	{
		___OnAdFailedToLoad_6 = value;
		Il2CppCodeGenWriteBarrier((&___OnAdFailedToLoad_6), value);
	}
};

struct RewardVideoAdClientImpl_t1565645521_StaticFields
{
public:
	// GNSAdSDK.iOS.RewardVideoAdClientImpl/GNSURewardVideoAdDidReceiveAdCallback GNSAdSDK.iOS.RewardVideoAdClientImpl::<>f__mg$cache0
	GNSURewardVideoAdDidReceiveAdCallback_t2434243366 * ___U3CU3Ef__mgU24cache0_7;
	// GNSAdSDK.iOS.RewardVideoAdClientImpl/GNSURewardVideoAdDidStartPlayingCallback GNSAdSDK.iOS.RewardVideoAdClientImpl::<>f__mg$cache1
	GNSURewardVideoAdDidStartPlayingCallback_t4256405145 * ___U3CU3Ef__mgU24cache1_8;
	// GNSAdSDK.iOS.RewardVideoAdClientImpl/GNSURewardVideoAdCallback GNSAdSDK.iOS.RewardVideoAdClientImpl::<>f__mg$cache2
	GNSURewardVideoAdCallback_t434670165 * ___U3CU3Ef__mgU24cache2_9;
	// GNSAdSDK.iOS.RewardVideoAdClientImpl/GNSURewardVideoAdDidCloseCallback GNSAdSDK.iOS.RewardVideoAdClientImpl::<>f__mg$cache3
	GNSURewardVideoAdDidCloseCallback_t4005382830 * ___U3CU3Ef__mgU24cache3_10;
	// GNSAdSDK.iOS.RewardVideoAdClientImpl/GNSURewardVideoAdErrorCallback GNSAdSDK.iOS.RewardVideoAdClientImpl::<>f__mg$cache4
	GNSURewardVideoAdErrorCallback_t2314677993 * ___U3CU3Ef__mgU24cache4_11;

public:
	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache0_7() { return static_cast<int32_t>(offsetof(RewardVideoAdClientImpl_t1565645521_StaticFields, ___U3CU3Ef__mgU24cache0_7)); }
	inline GNSURewardVideoAdDidReceiveAdCallback_t2434243366 * get_U3CU3Ef__mgU24cache0_7() const { return ___U3CU3Ef__mgU24cache0_7; }
	inline GNSURewardVideoAdDidReceiveAdCallback_t2434243366 ** get_address_of_U3CU3Ef__mgU24cache0_7() { return &___U3CU3Ef__mgU24cache0_7; }
	inline void set_U3CU3Ef__mgU24cache0_7(GNSURewardVideoAdDidReceiveAdCallback_t2434243366 * value)
	{
		___U3CU3Ef__mgU24cache0_7 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache0_7), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache1_8() { return static_cast<int32_t>(offsetof(RewardVideoAdClientImpl_t1565645521_StaticFields, ___U3CU3Ef__mgU24cache1_8)); }
	inline GNSURewardVideoAdDidStartPlayingCallback_t4256405145 * get_U3CU3Ef__mgU24cache1_8() const { return ___U3CU3Ef__mgU24cache1_8; }
	inline GNSURewardVideoAdDidStartPlayingCallback_t4256405145 ** get_address_of_U3CU3Ef__mgU24cache1_8() { return &___U3CU3Ef__mgU24cache1_8; }
	inline void set_U3CU3Ef__mgU24cache1_8(GNSURewardVideoAdDidStartPlayingCallback_t4256405145 * value)
	{
		___U3CU3Ef__mgU24cache1_8 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache1_8), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache2_9() { return static_cast<int32_t>(offsetof(RewardVideoAdClientImpl_t1565645521_StaticFields, ___U3CU3Ef__mgU24cache2_9)); }
	inline GNSURewardVideoAdCallback_t434670165 * get_U3CU3Ef__mgU24cache2_9() const { return ___U3CU3Ef__mgU24cache2_9; }
	inline GNSURewardVideoAdCallback_t434670165 ** get_address_of_U3CU3Ef__mgU24cache2_9() { return &___U3CU3Ef__mgU24cache2_9; }
	inline void set_U3CU3Ef__mgU24cache2_9(GNSURewardVideoAdCallback_t434670165 * value)
	{
		___U3CU3Ef__mgU24cache2_9 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache2_9), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache3_10() { return static_cast<int32_t>(offsetof(RewardVideoAdClientImpl_t1565645521_StaticFields, ___U3CU3Ef__mgU24cache3_10)); }
	inline GNSURewardVideoAdDidCloseCallback_t4005382830 * get_U3CU3Ef__mgU24cache3_10() const { return ___U3CU3Ef__mgU24cache3_10; }
	inline GNSURewardVideoAdDidCloseCallback_t4005382830 ** get_address_of_U3CU3Ef__mgU24cache3_10() { return &___U3CU3Ef__mgU24cache3_10; }
	inline void set_U3CU3Ef__mgU24cache3_10(GNSURewardVideoAdDidCloseCallback_t4005382830 * value)
	{
		___U3CU3Ef__mgU24cache3_10 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache3_10), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache4_11() { return static_cast<int32_t>(offsetof(RewardVideoAdClientImpl_t1565645521_StaticFields, ___U3CU3Ef__mgU24cache4_11)); }
	inline GNSURewardVideoAdErrorCallback_t2314677993 * get_U3CU3Ef__mgU24cache4_11() const { return ___U3CU3Ef__mgU24cache4_11; }
	inline GNSURewardVideoAdErrorCallback_t2314677993 ** get_address_of_U3CU3Ef__mgU24cache4_11() { return &___U3CU3Ef__mgU24cache4_11; }
	inline void set_U3CU3Ef__mgU24cache4_11(GNSURewardVideoAdErrorCallback_t2314677993 * value)
	{
		___U3CU3Ef__mgU24cache4_11 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache4_11), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REWARDVIDEOADCLIENTIMPL_T1565645521_H
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
#ifndef BUTTONCLICKEDEVENT_T48803504_H
#define BUTTONCLICKEDEVENT_T48803504_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Button/ButtonClickedEvent
struct  ButtonClickedEvent_t48803504  : public UnityEvent_t2581268647
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BUTTONCLICKEDEVENT_T48803504_H
#ifndef DATETIME_T3738529785_H
#define DATETIME_T3738529785_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.DateTime
struct  DateTime_t3738529785 
{
public:
	// System.TimeSpan System.DateTime::ticks
	TimeSpan_t881159249  ___ticks_0;
	// System.DateTimeKind System.DateTime::kind
	int32_t ___kind_1;

public:
	inline static int32_t get_offset_of_ticks_0() { return static_cast<int32_t>(offsetof(DateTime_t3738529785, ___ticks_0)); }
	inline TimeSpan_t881159249  get_ticks_0() const { return ___ticks_0; }
	inline TimeSpan_t881159249 * get_address_of_ticks_0() { return &___ticks_0; }
	inline void set_ticks_0(TimeSpan_t881159249  value)
	{
		___ticks_0 = value;
	}

	inline static int32_t get_offset_of_kind_1() { return static_cast<int32_t>(offsetof(DateTime_t3738529785, ___kind_1)); }
	inline int32_t get_kind_1() const { return ___kind_1; }
	inline int32_t* get_address_of_kind_1() { return &___kind_1; }
	inline void set_kind_1(int32_t value)
	{
		___kind_1 = value;
	}
};

struct DateTime_t3738529785_StaticFields
{
public:
	// System.DateTime System.DateTime::MaxValue
	DateTime_t3738529785  ___MaxValue_2;
	// System.DateTime System.DateTime::MinValue
	DateTime_t3738529785  ___MinValue_3;
	// System.String[] System.DateTime::ParseTimeFormats
	StringU5BU5D_t1281789340* ___ParseTimeFormats_4;
	// System.String[] System.DateTime::ParseYearDayMonthFormats
	StringU5BU5D_t1281789340* ___ParseYearDayMonthFormats_5;
	// System.String[] System.DateTime::ParseYearMonthDayFormats
	StringU5BU5D_t1281789340* ___ParseYearMonthDayFormats_6;
	// System.String[] System.DateTime::ParseDayMonthYearFormats
	StringU5BU5D_t1281789340* ___ParseDayMonthYearFormats_7;
	// System.String[] System.DateTime::ParseMonthDayYearFormats
	StringU5BU5D_t1281789340* ___ParseMonthDayYearFormats_8;
	// System.String[] System.DateTime::MonthDayShortFormats
	StringU5BU5D_t1281789340* ___MonthDayShortFormats_9;
	// System.String[] System.DateTime::DayMonthShortFormats
	StringU5BU5D_t1281789340* ___DayMonthShortFormats_10;
	// System.Int32[] System.DateTime::daysmonth
	Int32U5BU5D_t385246372* ___daysmonth_11;
	// System.Int32[] System.DateTime::daysmonthleap
	Int32U5BU5D_t385246372* ___daysmonthleap_12;
	// System.Object System.DateTime::to_local_time_span_object
	RuntimeObject * ___to_local_time_span_object_13;
	// System.Int64 System.DateTime::last_now
	int64_t ___last_now_14;

public:
	inline static int32_t get_offset_of_MaxValue_2() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___MaxValue_2)); }
	inline DateTime_t3738529785  get_MaxValue_2() const { return ___MaxValue_2; }
	inline DateTime_t3738529785 * get_address_of_MaxValue_2() { return &___MaxValue_2; }
	inline void set_MaxValue_2(DateTime_t3738529785  value)
	{
		___MaxValue_2 = value;
	}

	inline static int32_t get_offset_of_MinValue_3() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___MinValue_3)); }
	inline DateTime_t3738529785  get_MinValue_3() const { return ___MinValue_3; }
	inline DateTime_t3738529785 * get_address_of_MinValue_3() { return &___MinValue_3; }
	inline void set_MinValue_3(DateTime_t3738529785  value)
	{
		___MinValue_3 = value;
	}

	inline static int32_t get_offset_of_ParseTimeFormats_4() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___ParseTimeFormats_4)); }
	inline StringU5BU5D_t1281789340* get_ParseTimeFormats_4() const { return ___ParseTimeFormats_4; }
	inline StringU5BU5D_t1281789340** get_address_of_ParseTimeFormats_4() { return &___ParseTimeFormats_4; }
	inline void set_ParseTimeFormats_4(StringU5BU5D_t1281789340* value)
	{
		___ParseTimeFormats_4 = value;
		Il2CppCodeGenWriteBarrier((&___ParseTimeFormats_4), value);
	}

	inline static int32_t get_offset_of_ParseYearDayMonthFormats_5() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___ParseYearDayMonthFormats_5)); }
	inline StringU5BU5D_t1281789340* get_ParseYearDayMonthFormats_5() const { return ___ParseYearDayMonthFormats_5; }
	inline StringU5BU5D_t1281789340** get_address_of_ParseYearDayMonthFormats_5() { return &___ParseYearDayMonthFormats_5; }
	inline void set_ParseYearDayMonthFormats_5(StringU5BU5D_t1281789340* value)
	{
		___ParseYearDayMonthFormats_5 = value;
		Il2CppCodeGenWriteBarrier((&___ParseYearDayMonthFormats_5), value);
	}

	inline static int32_t get_offset_of_ParseYearMonthDayFormats_6() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___ParseYearMonthDayFormats_6)); }
	inline StringU5BU5D_t1281789340* get_ParseYearMonthDayFormats_6() const { return ___ParseYearMonthDayFormats_6; }
	inline StringU5BU5D_t1281789340** get_address_of_ParseYearMonthDayFormats_6() { return &___ParseYearMonthDayFormats_6; }
	inline void set_ParseYearMonthDayFormats_6(StringU5BU5D_t1281789340* value)
	{
		___ParseYearMonthDayFormats_6 = value;
		Il2CppCodeGenWriteBarrier((&___ParseYearMonthDayFormats_6), value);
	}

	inline static int32_t get_offset_of_ParseDayMonthYearFormats_7() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___ParseDayMonthYearFormats_7)); }
	inline StringU5BU5D_t1281789340* get_ParseDayMonthYearFormats_7() const { return ___ParseDayMonthYearFormats_7; }
	inline StringU5BU5D_t1281789340** get_address_of_ParseDayMonthYearFormats_7() { return &___ParseDayMonthYearFormats_7; }
	inline void set_ParseDayMonthYearFormats_7(StringU5BU5D_t1281789340* value)
	{
		___ParseDayMonthYearFormats_7 = value;
		Il2CppCodeGenWriteBarrier((&___ParseDayMonthYearFormats_7), value);
	}

	inline static int32_t get_offset_of_ParseMonthDayYearFormats_8() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___ParseMonthDayYearFormats_8)); }
	inline StringU5BU5D_t1281789340* get_ParseMonthDayYearFormats_8() const { return ___ParseMonthDayYearFormats_8; }
	inline StringU5BU5D_t1281789340** get_address_of_ParseMonthDayYearFormats_8() { return &___ParseMonthDayYearFormats_8; }
	inline void set_ParseMonthDayYearFormats_8(StringU5BU5D_t1281789340* value)
	{
		___ParseMonthDayYearFormats_8 = value;
		Il2CppCodeGenWriteBarrier((&___ParseMonthDayYearFormats_8), value);
	}

	inline static int32_t get_offset_of_MonthDayShortFormats_9() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___MonthDayShortFormats_9)); }
	inline StringU5BU5D_t1281789340* get_MonthDayShortFormats_9() const { return ___MonthDayShortFormats_9; }
	inline StringU5BU5D_t1281789340** get_address_of_MonthDayShortFormats_9() { return &___MonthDayShortFormats_9; }
	inline void set_MonthDayShortFormats_9(StringU5BU5D_t1281789340* value)
	{
		___MonthDayShortFormats_9 = value;
		Il2CppCodeGenWriteBarrier((&___MonthDayShortFormats_9), value);
	}

	inline static int32_t get_offset_of_DayMonthShortFormats_10() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___DayMonthShortFormats_10)); }
	inline StringU5BU5D_t1281789340* get_DayMonthShortFormats_10() const { return ___DayMonthShortFormats_10; }
	inline StringU5BU5D_t1281789340** get_address_of_DayMonthShortFormats_10() { return &___DayMonthShortFormats_10; }
	inline void set_DayMonthShortFormats_10(StringU5BU5D_t1281789340* value)
	{
		___DayMonthShortFormats_10 = value;
		Il2CppCodeGenWriteBarrier((&___DayMonthShortFormats_10), value);
	}

	inline static int32_t get_offset_of_daysmonth_11() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___daysmonth_11)); }
	inline Int32U5BU5D_t385246372* get_daysmonth_11() const { return ___daysmonth_11; }
	inline Int32U5BU5D_t385246372** get_address_of_daysmonth_11() { return &___daysmonth_11; }
	inline void set_daysmonth_11(Int32U5BU5D_t385246372* value)
	{
		___daysmonth_11 = value;
		Il2CppCodeGenWriteBarrier((&___daysmonth_11), value);
	}

	inline static int32_t get_offset_of_daysmonthleap_12() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___daysmonthleap_12)); }
	inline Int32U5BU5D_t385246372* get_daysmonthleap_12() const { return ___daysmonthleap_12; }
	inline Int32U5BU5D_t385246372** get_address_of_daysmonthleap_12() { return &___daysmonthleap_12; }
	inline void set_daysmonthleap_12(Int32U5BU5D_t385246372* value)
	{
		___daysmonthleap_12 = value;
		Il2CppCodeGenWriteBarrier((&___daysmonthleap_12), value);
	}

	inline static int32_t get_offset_of_to_local_time_span_object_13() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___to_local_time_span_object_13)); }
	inline RuntimeObject * get_to_local_time_span_object_13() const { return ___to_local_time_span_object_13; }
	inline RuntimeObject ** get_address_of_to_local_time_span_object_13() { return &___to_local_time_span_object_13; }
	inline void set_to_local_time_span_object_13(RuntimeObject * value)
	{
		___to_local_time_span_object_13 = value;
		Il2CppCodeGenWriteBarrier((&___to_local_time_span_object_13), value);
	}

	inline static int32_t get_offset_of_last_now_14() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___last_now_14)); }
	inline int64_t get_last_now_14() const { return ___last_now_14; }
	inline int64_t* get_address_of_last_now_14() { return &___last_now_14; }
	inline void set_last_now_14(int64_t value)
	{
		___last_now_14 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATETIME_T3738529785_H
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
#ifndef GAMEOBJECT_T1113636619_H
#define GAMEOBJECT_T1113636619_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.GameObject
struct  GameObject_t1113636619  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GAMEOBJECT_T1113636619_H
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
#ifndef NAVIGATION_T3049316579_H
#define NAVIGATION_T3049316579_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Navigation
struct  Navigation_t3049316579 
{
public:
	// UnityEngine.UI.Navigation/Mode UnityEngine.UI.Navigation::m_Mode
	int32_t ___m_Mode_0;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnUp
	Selectable_t3250028441 * ___m_SelectOnUp_1;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnDown
	Selectable_t3250028441 * ___m_SelectOnDown_2;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnLeft
	Selectable_t3250028441 * ___m_SelectOnLeft_3;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnRight
	Selectable_t3250028441 * ___m_SelectOnRight_4;

public:
	inline static int32_t get_offset_of_m_Mode_0() { return static_cast<int32_t>(offsetof(Navigation_t3049316579, ___m_Mode_0)); }
	inline int32_t get_m_Mode_0() const { return ___m_Mode_0; }
	inline int32_t* get_address_of_m_Mode_0() { return &___m_Mode_0; }
	inline void set_m_Mode_0(int32_t value)
	{
		___m_Mode_0 = value;
	}

	inline static int32_t get_offset_of_m_SelectOnUp_1() { return static_cast<int32_t>(offsetof(Navigation_t3049316579, ___m_SelectOnUp_1)); }
	inline Selectable_t3250028441 * get_m_SelectOnUp_1() const { return ___m_SelectOnUp_1; }
	inline Selectable_t3250028441 ** get_address_of_m_SelectOnUp_1() { return &___m_SelectOnUp_1; }
	inline void set_m_SelectOnUp_1(Selectable_t3250028441 * value)
	{
		___m_SelectOnUp_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_SelectOnUp_1), value);
	}

	inline static int32_t get_offset_of_m_SelectOnDown_2() { return static_cast<int32_t>(offsetof(Navigation_t3049316579, ___m_SelectOnDown_2)); }
	inline Selectable_t3250028441 * get_m_SelectOnDown_2() const { return ___m_SelectOnDown_2; }
	inline Selectable_t3250028441 ** get_address_of_m_SelectOnDown_2() { return &___m_SelectOnDown_2; }
	inline void set_m_SelectOnDown_2(Selectable_t3250028441 * value)
	{
		___m_SelectOnDown_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_SelectOnDown_2), value);
	}

	inline static int32_t get_offset_of_m_SelectOnLeft_3() { return static_cast<int32_t>(offsetof(Navigation_t3049316579, ___m_SelectOnLeft_3)); }
	inline Selectable_t3250028441 * get_m_SelectOnLeft_3() const { return ___m_SelectOnLeft_3; }
	inline Selectable_t3250028441 ** get_address_of_m_SelectOnLeft_3() { return &___m_SelectOnLeft_3; }
	inline void set_m_SelectOnLeft_3(Selectable_t3250028441 * value)
	{
		___m_SelectOnLeft_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_SelectOnLeft_3), value);
	}

	inline static int32_t get_offset_of_m_SelectOnRight_4() { return static_cast<int32_t>(offsetof(Navigation_t3049316579, ___m_SelectOnRight_4)); }
	inline Selectable_t3250028441 * get_m_SelectOnRight_4() const { return ___m_SelectOnRight_4; }
	inline Selectable_t3250028441 ** get_address_of_m_SelectOnRight_4() { return &___m_SelectOnRight_4; }
	inline void set_m_SelectOnRight_4(Selectable_t3250028441 * value)
	{
		___m_SelectOnRight_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_SelectOnRight_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.UI.Navigation
struct Navigation_t3049316579_marshaled_pinvoke
{
	int32_t ___m_Mode_0;
	Selectable_t3250028441 * ___m_SelectOnUp_1;
	Selectable_t3250028441 * ___m_SelectOnDown_2;
	Selectable_t3250028441 * ___m_SelectOnLeft_3;
	Selectable_t3250028441 * ___m_SelectOnRight_4;
};
// Native definition for COM marshalling of UnityEngine.UI.Navigation
struct Navigation_t3049316579_marshaled_com
{
	int32_t ___m_Mode_0;
	Selectable_t3250028441 * ___m_SelectOnUp_1;
	Selectable_t3250028441 * ___m_SelectOnDown_2;
	Selectable_t3250028441 * ___m_SelectOnLeft_3;
	Selectable_t3250028441 * ___m_SelectOnRight_4;
};
#endif // NAVIGATION_T3049316579_H
#ifndef GNSUREWARDVIDEOADERRORCALLBACK_T2314677993_H
#define GNSUREWARDVIDEOADERRORCALLBACK_T2314677993_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GNSAdSDK.iOS.RewardVideoAdClientImpl/GNSURewardVideoAdErrorCallback
struct  GNSURewardVideoAdErrorCallback_t2314677993  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GNSUREWARDVIDEOADERRORCALLBACK_T2314677993_H
#ifndef GNSUREWARDVIDEOADDIDCLOSECALLBACK_T4005382830_H
#define GNSUREWARDVIDEOADDIDCLOSECALLBACK_T4005382830_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GNSAdSDK.iOS.RewardVideoAdClientImpl/GNSURewardVideoAdDidCloseCallback
struct  GNSURewardVideoAdDidCloseCallback_t4005382830  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GNSUREWARDVIDEOADDIDCLOSECALLBACK_T4005382830_H
#ifndef GNSUREWARDVIDEOADCALLBACK_T434670165_H
#define GNSUREWARDVIDEOADCALLBACK_T434670165_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GNSAdSDK.iOS.RewardVideoAdClientImpl/GNSURewardVideoAdCallback
struct  GNSURewardVideoAdCallback_t434670165  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GNSUREWARDVIDEOADCALLBACK_T434670165_H
#ifndef GNSUREWARDVIDEOADDIDRECEIVEADCALLBACK_T2434243366_H
#define GNSUREWARDVIDEOADDIDRECEIVEADCALLBACK_T2434243366_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GNSAdSDK.iOS.RewardVideoAdClientImpl/GNSURewardVideoAdDidReceiveAdCallback
struct  GNSURewardVideoAdDidReceiveAdCallback_t2434243366  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GNSUREWARDVIDEOADDIDRECEIVEADCALLBACK_T2434243366_H
#ifndef TRANSFORM_T3600365921_H
#define TRANSFORM_T3600365921_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Transform
struct  Transform_t3600365921  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSFORM_T3600365921_H
#ifndef EVENTHANDLER_1_T1820321320_H
#define EVENTHANDLER_1_T1820321320_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.EventHandler`1<GNSAdSDK.Api.VideoRewardFailedData>
struct  EventHandler_1_t1820321320  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EVENTHANDLER_1_T1820321320_H
#ifndef EVENTHANDLER_1_T2650267322_H
#define EVENTHANDLER_1_T2650267322_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.EventHandler`1<GNSAdSDK.Api.VideoRewardData>
struct  EventHandler_1_t2650267322  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EVENTHANDLER_1_T2650267322_H
#ifndef EVENTHANDLER_1_T1515976428_H
#define EVENTHANDLER_1_T1515976428_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.EventHandler`1<System.EventArgs>
struct  EventHandler_1_t1515976428  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EVENTHANDLER_1_T1515976428_H
#ifndef GNSUREWARDVIDEOADDIDSTARTPLAYINGCALLBACK_T4256405145_H
#define GNSUREWARDVIDEOADDIDSTARTPLAYINGCALLBACK_T4256405145_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GNSAdSDK.iOS.RewardVideoAdClientImpl/GNSURewardVideoAdDidStartPlayingCallback
struct  GNSURewardVideoAdDidStartPlayingCallback_t4256405145  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GNSUREWARDVIDEOADDIDSTARTPLAYINGCALLBACK_T4256405145_H
#ifndef ASYNCCALLBACK_T3962456242_H
#define ASYNCCALLBACK_T3962456242_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.AsyncCallback
struct  AsyncCallback_t3962456242  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASYNCCALLBACK_T3962456242_H
#ifndef UNITYACTION_T3245792599_H
#define UNITYACTION_T3245792599_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.UnityAction
struct  UnityAction_t3245792599  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYACTION_T3245792599_H
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
#ifndef ACTION_T1264377477_H
#define ACTION_T1264377477_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Action
struct  Action_t1264377477  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ACTION_T1264377477_H
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
#ifndef RECTTRANSFORM_T3704657025_H
#define RECTTRANSFORM_T3704657025_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.RectTransform
struct  RectTransform_t3704657025  : public Transform_t3600365921
{
public:

public:
};

struct RectTransform_t3704657025_StaticFields
{
public:
	// UnityEngine.RectTransform/ReapplyDrivenProperties UnityEngine.RectTransform::reapplyDrivenProperties
	ReapplyDrivenProperties_t1258266594 * ___reapplyDrivenProperties_2;

public:
	inline static int32_t get_offset_of_reapplyDrivenProperties_2() { return static_cast<int32_t>(offsetof(RectTransform_t3704657025_StaticFields, ___reapplyDrivenProperties_2)); }
	inline ReapplyDrivenProperties_t1258266594 * get_reapplyDrivenProperties_2() const { return ___reapplyDrivenProperties_2; }
	inline ReapplyDrivenProperties_t1258266594 ** get_address_of_reapplyDrivenProperties_2() { return &___reapplyDrivenProperties_2; }
	inline void set_reapplyDrivenProperties_2(ReapplyDrivenProperties_t1258266594 * value)
	{
		___reapplyDrivenProperties_2 = value;
		Il2CppCodeGenWriteBarrier((&___reapplyDrivenProperties_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RECTTRANSFORM_T3704657025_H
#ifndef UIBEHAVIOUR_T3495933518_H
#define UIBEHAVIOUR_T3495933518_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.EventSystems.UIBehaviour
struct  UIBehaviour_t3495933518  : public MonoBehaviour_t3962482529
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UIBEHAVIOUR_T3495933518_H
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
	// System.String SubSceneScript::zoneIdKey
	String_t* ___zoneIdKey_2;

public:
	inline static int32_t get_offset_of_zoneIdKey_2() { return static_cast<int32_t>(offsetof(SubSceneScript_t3706814722, ___zoneIdKey_2)); }
	inline String_t* get_zoneIdKey_2() const { return ___zoneIdKey_2; }
	inline String_t** get_address_of_zoneIdKey_2() { return &___zoneIdKey_2; }
	inline void set_zoneIdKey_2(String_t* value)
	{
		___zoneIdKey_2 = value;
		Il2CppCodeGenWriteBarrier((&___zoneIdKey_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SUBSCENESCRIPT_T3706814722_H
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
	// System.String MainSceneScript::zoneIdKey
	String_t* ___zoneIdKey_3;

public:
	inline static int32_t get_offset_of_zoneIdKey_3() { return static_cast<int32_t>(offsetof(MainSceneScript_t2935155245, ___zoneIdKey_3)); }
	inline String_t* get_zoneIdKey_3() const { return ___zoneIdKey_3; }
	inline String_t** get_address_of_zoneIdKey_3() { return &___zoneIdKey_3; }
	inline void set_zoneIdKey_3(String_t* value)
	{
		___zoneIdKey_3 = value;
		Il2CppCodeGenWriteBarrier((&___zoneIdKey_3), value);
	}
};

struct MainSceneScript_t2935155245_StaticFields
{
public:
	// System.Boolean MainSceneScript::isRegistedRewardVideoEventHandler
	bool ___isRegistedRewardVideoEventHandler_2;
	// System.EventHandler`1<System.EventArgs> MainSceneScript::<>f__am$cache0
	EventHandler_1_t1515976428 * ___U3CU3Ef__amU24cache0_4;
	// System.EventHandler`1<GNSAdSDK.Api.VideoRewardData> MainSceneScript::<>f__am$cache1
	EventHandler_1_t2650267322 * ___U3CU3Ef__amU24cache1_5;
	// System.EventHandler`1<GNSAdSDK.Api.VideoRewardData> MainSceneScript::<>f__am$cache2
	EventHandler_1_t2650267322 * ___U3CU3Ef__amU24cache2_6;
	// System.EventHandler`1<GNSAdSDK.Api.VideoRewardData> MainSceneScript::<>f__am$cache3
	EventHandler_1_t2650267322 * ___U3CU3Ef__amU24cache3_7;
	// System.EventHandler`1<GNSAdSDK.Api.VideoRewardFailedData> MainSceneScript::<>f__am$cache4
	EventHandler_1_t1820321320 * ___U3CU3Ef__amU24cache4_8;

public:
	inline static int32_t get_offset_of_isRegistedRewardVideoEventHandler_2() { return static_cast<int32_t>(offsetof(MainSceneScript_t2935155245_StaticFields, ___isRegistedRewardVideoEventHandler_2)); }
	inline bool get_isRegistedRewardVideoEventHandler_2() const { return ___isRegistedRewardVideoEventHandler_2; }
	inline bool* get_address_of_isRegistedRewardVideoEventHandler_2() { return &___isRegistedRewardVideoEventHandler_2; }
	inline void set_isRegistedRewardVideoEventHandler_2(bool value)
	{
		___isRegistedRewardVideoEventHandler_2 = value;
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache0_4() { return static_cast<int32_t>(offsetof(MainSceneScript_t2935155245_StaticFields, ___U3CU3Ef__amU24cache0_4)); }
	inline EventHandler_1_t1515976428 * get_U3CU3Ef__amU24cache0_4() const { return ___U3CU3Ef__amU24cache0_4; }
	inline EventHandler_1_t1515976428 ** get_address_of_U3CU3Ef__amU24cache0_4() { return &___U3CU3Ef__amU24cache0_4; }
	inline void set_U3CU3Ef__amU24cache0_4(EventHandler_1_t1515976428 * value)
	{
		___U3CU3Ef__amU24cache0_4 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cache0_4), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache1_5() { return static_cast<int32_t>(offsetof(MainSceneScript_t2935155245_StaticFields, ___U3CU3Ef__amU24cache1_5)); }
	inline EventHandler_1_t2650267322 * get_U3CU3Ef__amU24cache1_5() const { return ___U3CU3Ef__amU24cache1_5; }
	inline EventHandler_1_t2650267322 ** get_address_of_U3CU3Ef__amU24cache1_5() { return &___U3CU3Ef__amU24cache1_5; }
	inline void set_U3CU3Ef__amU24cache1_5(EventHandler_1_t2650267322 * value)
	{
		___U3CU3Ef__amU24cache1_5 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cache1_5), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache2_6() { return static_cast<int32_t>(offsetof(MainSceneScript_t2935155245_StaticFields, ___U3CU3Ef__amU24cache2_6)); }
	inline EventHandler_1_t2650267322 * get_U3CU3Ef__amU24cache2_6() const { return ___U3CU3Ef__amU24cache2_6; }
	inline EventHandler_1_t2650267322 ** get_address_of_U3CU3Ef__amU24cache2_6() { return &___U3CU3Ef__amU24cache2_6; }
	inline void set_U3CU3Ef__amU24cache2_6(EventHandler_1_t2650267322 * value)
	{
		___U3CU3Ef__amU24cache2_6 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cache2_6), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache3_7() { return static_cast<int32_t>(offsetof(MainSceneScript_t2935155245_StaticFields, ___U3CU3Ef__amU24cache3_7)); }
	inline EventHandler_1_t2650267322 * get_U3CU3Ef__amU24cache3_7() const { return ___U3CU3Ef__amU24cache3_7; }
	inline EventHandler_1_t2650267322 ** get_address_of_U3CU3Ef__amU24cache3_7() { return &___U3CU3Ef__amU24cache3_7; }
	inline void set_U3CU3Ef__amU24cache3_7(EventHandler_1_t2650267322 * value)
	{
		___U3CU3Ef__amU24cache3_7 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cache3_7), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache4_8() { return static_cast<int32_t>(offsetof(MainSceneScript_t2935155245_StaticFields, ___U3CU3Ef__amU24cache4_8)); }
	inline EventHandler_1_t1820321320 * get_U3CU3Ef__amU24cache4_8() const { return ___U3CU3Ef__amU24cache4_8; }
	inline EventHandler_1_t1820321320 ** get_address_of_U3CU3Ef__amU24cache4_8() { return &___U3CU3Ef__amU24cache4_8; }
	inline void set_U3CU3Ef__amU24cache4_8(EventHandler_1_t1820321320 * value)
	{
		___U3CU3Ef__amU24cache4_8 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cache4_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MAINSCENESCRIPT_T2935155245_H
#ifndef SELECTABLE_T3250028441_H
#define SELECTABLE_T3250028441_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Selectable
struct  Selectable_t3250028441  : public UIBehaviour_t3495933518
{
public:
	// UnityEngine.UI.Navigation UnityEngine.UI.Selectable::m_Navigation
	Navigation_t3049316579  ___m_Navigation_3;
	// UnityEngine.UI.Selectable/Transition UnityEngine.UI.Selectable::m_Transition
	int32_t ___m_Transition_4;
	// UnityEngine.UI.ColorBlock UnityEngine.UI.Selectable::m_Colors
	ColorBlock_t2139031574  ___m_Colors_5;
	// UnityEngine.UI.SpriteState UnityEngine.UI.Selectable::m_SpriteState
	SpriteState_t1362986479  ___m_SpriteState_6;
	// UnityEngine.UI.AnimationTriggers UnityEngine.UI.Selectable::m_AnimationTriggers
	AnimationTriggers_t2532145056 * ___m_AnimationTriggers_7;
	// System.Boolean UnityEngine.UI.Selectable::m_Interactable
	bool ___m_Interactable_8;
	// UnityEngine.UI.Graphic UnityEngine.UI.Selectable::m_TargetGraphic
	Graphic_t1660335611 * ___m_TargetGraphic_9;
	// System.Boolean UnityEngine.UI.Selectable::m_GroupsAllowInteraction
	bool ___m_GroupsAllowInteraction_10;
	// UnityEngine.UI.Selectable/SelectionState UnityEngine.UI.Selectable::m_CurrentSelectionState
	int32_t ___m_CurrentSelectionState_11;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerInside>k__BackingField
	bool ___U3CisPointerInsideU3Ek__BackingField_12;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerDown>k__BackingField
	bool ___U3CisPointerDownU3Ek__BackingField_13;
	// System.Boolean UnityEngine.UI.Selectable::<hasSelection>k__BackingField
	bool ___U3ChasSelectionU3Ek__BackingField_14;
	// System.Collections.Generic.List`1<UnityEngine.CanvasGroup> UnityEngine.UI.Selectable::m_CanvasGroupCache
	List_1_t1260619206 * ___m_CanvasGroupCache_15;

public:
	inline static int32_t get_offset_of_m_Navigation_3() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___m_Navigation_3)); }
	inline Navigation_t3049316579  get_m_Navigation_3() const { return ___m_Navigation_3; }
	inline Navigation_t3049316579 * get_address_of_m_Navigation_3() { return &___m_Navigation_3; }
	inline void set_m_Navigation_3(Navigation_t3049316579  value)
	{
		___m_Navigation_3 = value;
	}

	inline static int32_t get_offset_of_m_Transition_4() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___m_Transition_4)); }
	inline int32_t get_m_Transition_4() const { return ___m_Transition_4; }
	inline int32_t* get_address_of_m_Transition_4() { return &___m_Transition_4; }
	inline void set_m_Transition_4(int32_t value)
	{
		___m_Transition_4 = value;
	}

	inline static int32_t get_offset_of_m_Colors_5() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___m_Colors_5)); }
	inline ColorBlock_t2139031574  get_m_Colors_5() const { return ___m_Colors_5; }
	inline ColorBlock_t2139031574 * get_address_of_m_Colors_5() { return &___m_Colors_5; }
	inline void set_m_Colors_5(ColorBlock_t2139031574  value)
	{
		___m_Colors_5 = value;
	}

	inline static int32_t get_offset_of_m_SpriteState_6() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___m_SpriteState_6)); }
	inline SpriteState_t1362986479  get_m_SpriteState_6() const { return ___m_SpriteState_6; }
	inline SpriteState_t1362986479 * get_address_of_m_SpriteState_6() { return &___m_SpriteState_6; }
	inline void set_m_SpriteState_6(SpriteState_t1362986479  value)
	{
		___m_SpriteState_6 = value;
	}

	inline static int32_t get_offset_of_m_AnimationTriggers_7() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___m_AnimationTriggers_7)); }
	inline AnimationTriggers_t2532145056 * get_m_AnimationTriggers_7() const { return ___m_AnimationTriggers_7; }
	inline AnimationTriggers_t2532145056 ** get_address_of_m_AnimationTriggers_7() { return &___m_AnimationTriggers_7; }
	inline void set_m_AnimationTriggers_7(AnimationTriggers_t2532145056 * value)
	{
		___m_AnimationTriggers_7 = value;
		Il2CppCodeGenWriteBarrier((&___m_AnimationTriggers_7), value);
	}

	inline static int32_t get_offset_of_m_Interactable_8() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___m_Interactable_8)); }
	inline bool get_m_Interactable_8() const { return ___m_Interactable_8; }
	inline bool* get_address_of_m_Interactable_8() { return &___m_Interactable_8; }
	inline void set_m_Interactable_8(bool value)
	{
		___m_Interactable_8 = value;
	}

	inline static int32_t get_offset_of_m_TargetGraphic_9() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___m_TargetGraphic_9)); }
	inline Graphic_t1660335611 * get_m_TargetGraphic_9() const { return ___m_TargetGraphic_9; }
	inline Graphic_t1660335611 ** get_address_of_m_TargetGraphic_9() { return &___m_TargetGraphic_9; }
	inline void set_m_TargetGraphic_9(Graphic_t1660335611 * value)
	{
		___m_TargetGraphic_9 = value;
		Il2CppCodeGenWriteBarrier((&___m_TargetGraphic_9), value);
	}

	inline static int32_t get_offset_of_m_GroupsAllowInteraction_10() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___m_GroupsAllowInteraction_10)); }
	inline bool get_m_GroupsAllowInteraction_10() const { return ___m_GroupsAllowInteraction_10; }
	inline bool* get_address_of_m_GroupsAllowInteraction_10() { return &___m_GroupsAllowInteraction_10; }
	inline void set_m_GroupsAllowInteraction_10(bool value)
	{
		___m_GroupsAllowInteraction_10 = value;
	}

	inline static int32_t get_offset_of_m_CurrentSelectionState_11() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___m_CurrentSelectionState_11)); }
	inline int32_t get_m_CurrentSelectionState_11() const { return ___m_CurrentSelectionState_11; }
	inline int32_t* get_address_of_m_CurrentSelectionState_11() { return &___m_CurrentSelectionState_11; }
	inline void set_m_CurrentSelectionState_11(int32_t value)
	{
		___m_CurrentSelectionState_11 = value;
	}

	inline static int32_t get_offset_of_U3CisPointerInsideU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___U3CisPointerInsideU3Ek__BackingField_12)); }
	inline bool get_U3CisPointerInsideU3Ek__BackingField_12() const { return ___U3CisPointerInsideU3Ek__BackingField_12; }
	inline bool* get_address_of_U3CisPointerInsideU3Ek__BackingField_12() { return &___U3CisPointerInsideU3Ek__BackingField_12; }
	inline void set_U3CisPointerInsideU3Ek__BackingField_12(bool value)
	{
		___U3CisPointerInsideU3Ek__BackingField_12 = value;
	}

	inline static int32_t get_offset_of_U3CisPointerDownU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___U3CisPointerDownU3Ek__BackingField_13)); }
	inline bool get_U3CisPointerDownU3Ek__BackingField_13() const { return ___U3CisPointerDownU3Ek__BackingField_13; }
	inline bool* get_address_of_U3CisPointerDownU3Ek__BackingField_13() { return &___U3CisPointerDownU3Ek__BackingField_13; }
	inline void set_U3CisPointerDownU3Ek__BackingField_13(bool value)
	{
		___U3CisPointerDownU3Ek__BackingField_13 = value;
	}

	inline static int32_t get_offset_of_U3ChasSelectionU3Ek__BackingField_14() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___U3ChasSelectionU3Ek__BackingField_14)); }
	inline bool get_U3ChasSelectionU3Ek__BackingField_14() const { return ___U3ChasSelectionU3Ek__BackingField_14; }
	inline bool* get_address_of_U3ChasSelectionU3Ek__BackingField_14() { return &___U3ChasSelectionU3Ek__BackingField_14; }
	inline void set_U3ChasSelectionU3Ek__BackingField_14(bool value)
	{
		___U3ChasSelectionU3Ek__BackingField_14 = value;
	}

	inline static int32_t get_offset_of_m_CanvasGroupCache_15() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___m_CanvasGroupCache_15)); }
	inline List_1_t1260619206 * get_m_CanvasGroupCache_15() const { return ___m_CanvasGroupCache_15; }
	inline List_1_t1260619206 ** get_address_of_m_CanvasGroupCache_15() { return &___m_CanvasGroupCache_15; }
	inline void set_m_CanvasGroupCache_15(List_1_t1260619206 * value)
	{
		___m_CanvasGroupCache_15 = value;
		Il2CppCodeGenWriteBarrier((&___m_CanvasGroupCache_15), value);
	}
};

struct Selectable_t3250028441_StaticFields
{
public:
	// System.Collections.Generic.List`1<UnityEngine.UI.Selectable> UnityEngine.UI.Selectable::s_List
	List_1_t427135887 * ___s_List_2;

public:
	inline static int32_t get_offset_of_s_List_2() { return static_cast<int32_t>(offsetof(Selectable_t3250028441_StaticFields, ___s_List_2)); }
	inline List_1_t427135887 * get_s_List_2() const { return ___s_List_2; }
	inline List_1_t427135887 ** get_address_of_s_List_2() { return &___s_List_2; }
	inline void set_s_List_2(List_1_t427135887 * value)
	{
		___s_List_2 = value;
		Il2CppCodeGenWriteBarrier((&___s_List_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SELECTABLE_T3250028441_H
#ifndef GRAPHIC_T1660335611_H
#define GRAPHIC_T1660335611_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Graphic
struct  Graphic_t1660335611  : public UIBehaviour_t3495933518
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t340375123 * ___m_Material_4;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_t2555686324  ___m_Color_5;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_6;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t3704657025 * ___m_RectTransform_7;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRender
	CanvasRenderer_t2598313366 * ___m_CanvasRender_8;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t3310196443 * ___m_Canvas_9;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_10;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_11;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t3245792599 * ___m_OnDirtyLayoutCallback_12;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t3245792599 * ___m_OnDirtyVertsCallback_13;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t3245792599 * ___m_OnDirtyMaterialCallback_14;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t3055525458 * ___m_ColorTweenRunner_17;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_18;

public:
	inline static int32_t get_offset_of_m_Material_4() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_Material_4)); }
	inline Material_t340375123 * get_m_Material_4() const { return ___m_Material_4; }
	inline Material_t340375123 ** get_address_of_m_Material_4() { return &___m_Material_4; }
	inline void set_m_Material_4(Material_t340375123 * value)
	{
		___m_Material_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_Material_4), value);
	}

	inline static int32_t get_offset_of_m_Color_5() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_Color_5)); }
	inline Color_t2555686324  get_m_Color_5() const { return ___m_Color_5; }
	inline Color_t2555686324 * get_address_of_m_Color_5() { return &___m_Color_5; }
	inline void set_m_Color_5(Color_t2555686324  value)
	{
		___m_Color_5 = value;
	}

	inline static int32_t get_offset_of_m_RaycastTarget_6() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_RaycastTarget_6)); }
	inline bool get_m_RaycastTarget_6() const { return ___m_RaycastTarget_6; }
	inline bool* get_address_of_m_RaycastTarget_6() { return &___m_RaycastTarget_6; }
	inline void set_m_RaycastTarget_6(bool value)
	{
		___m_RaycastTarget_6 = value;
	}

	inline static int32_t get_offset_of_m_RectTransform_7() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_RectTransform_7)); }
	inline RectTransform_t3704657025 * get_m_RectTransform_7() const { return ___m_RectTransform_7; }
	inline RectTransform_t3704657025 ** get_address_of_m_RectTransform_7() { return &___m_RectTransform_7; }
	inline void set_m_RectTransform_7(RectTransform_t3704657025 * value)
	{
		___m_RectTransform_7 = value;
		Il2CppCodeGenWriteBarrier((&___m_RectTransform_7), value);
	}

	inline static int32_t get_offset_of_m_CanvasRender_8() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_CanvasRender_8)); }
	inline CanvasRenderer_t2598313366 * get_m_CanvasRender_8() const { return ___m_CanvasRender_8; }
	inline CanvasRenderer_t2598313366 ** get_address_of_m_CanvasRender_8() { return &___m_CanvasRender_8; }
	inline void set_m_CanvasRender_8(CanvasRenderer_t2598313366 * value)
	{
		___m_CanvasRender_8 = value;
		Il2CppCodeGenWriteBarrier((&___m_CanvasRender_8), value);
	}

	inline static int32_t get_offset_of_m_Canvas_9() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_Canvas_9)); }
	inline Canvas_t3310196443 * get_m_Canvas_9() const { return ___m_Canvas_9; }
	inline Canvas_t3310196443 ** get_address_of_m_Canvas_9() { return &___m_Canvas_9; }
	inline void set_m_Canvas_9(Canvas_t3310196443 * value)
	{
		___m_Canvas_9 = value;
		Il2CppCodeGenWriteBarrier((&___m_Canvas_9), value);
	}

	inline static int32_t get_offset_of_m_VertsDirty_10() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_VertsDirty_10)); }
	inline bool get_m_VertsDirty_10() const { return ___m_VertsDirty_10; }
	inline bool* get_address_of_m_VertsDirty_10() { return &___m_VertsDirty_10; }
	inline void set_m_VertsDirty_10(bool value)
	{
		___m_VertsDirty_10 = value;
	}

	inline static int32_t get_offset_of_m_MaterialDirty_11() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_MaterialDirty_11)); }
	inline bool get_m_MaterialDirty_11() const { return ___m_MaterialDirty_11; }
	inline bool* get_address_of_m_MaterialDirty_11() { return &___m_MaterialDirty_11; }
	inline void set_m_MaterialDirty_11(bool value)
	{
		___m_MaterialDirty_11 = value;
	}

	inline static int32_t get_offset_of_m_OnDirtyLayoutCallback_12() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_OnDirtyLayoutCallback_12)); }
	inline UnityAction_t3245792599 * get_m_OnDirtyLayoutCallback_12() const { return ___m_OnDirtyLayoutCallback_12; }
	inline UnityAction_t3245792599 ** get_address_of_m_OnDirtyLayoutCallback_12() { return &___m_OnDirtyLayoutCallback_12; }
	inline void set_m_OnDirtyLayoutCallback_12(UnityAction_t3245792599 * value)
	{
		___m_OnDirtyLayoutCallback_12 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnDirtyLayoutCallback_12), value);
	}

	inline static int32_t get_offset_of_m_OnDirtyVertsCallback_13() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_OnDirtyVertsCallback_13)); }
	inline UnityAction_t3245792599 * get_m_OnDirtyVertsCallback_13() const { return ___m_OnDirtyVertsCallback_13; }
	inline UnityAction_t3245792599 ** get_address_of_m_OnDirtyVertsCallback_13() { return &___m_OnDirtyVertsCallback_13; }
	inline void set_m_OnDirtyVertsCallback_13(UnityAction_t3245792599 * value)
	{
		___m_OnDirtyVertsCallback_13 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnDirtyVertsCallback_13), value);
	}

	inline static int32_t get_offset_of_m_OnDirtyMaterialCallback_14() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_OnDirtyMaterialCallback_14)); }
	inline UnityAction_t3245792599 * get_m_OnDirtyMaterialCallback_14() const { return ___m_OnDirtyMaterialCallback_14; }
	inline UnityAction_t3245792599 ** get_address_of_m_OnDirtyMaterialCallback_14() { return &___m_OnDirtyMaterialCallback_14; }
	inline void set_m_OnDirtyMaterialCallback_14(UnityAction_t3245792599 * value)
	{
		___m_OnDirtyMaterialCallback_14 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnDirtyMaterialCallback_14), value);
	}

	inline static int32_t get_offset_of_m_ColorTweenRunner_17() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_ColorTweenRunner_17)); }
	inline TweenRunner_1_t3055525458 * get_m_ColorTweenRunner_17() const { return ___m_ColorTweenRunner_17; }
	inline TweenRunner_1_t3055525458 ** get_address_of_m_ColorTweenRunner_17() { return &___m_ColorTweenRunner_17; }
	inline void set_m_ColorTweenRunner_17(TweenRunner_1_t3055525458 * value)
	{
		___m_ColorTweenRunner_17 = value;
		Il2CppCodeGenWriteBarrier((&___m_ColorTweenRunner_17), value);
	}

	inline static int32_t get_offset_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___U3CuseLegacyMeshGenerationU3Ek__BackingField_18)); }
	inline bool get_U3CuseLegacyMeshGenerationU3Ek__BackingField_18() const { return ___U3CuseLegacyMeshGenerationU3Ek__BackingField_18; }
	inline bool* get_address_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_18() { return &___U3CuseLegacyMeshGenerationU3Ek__BackingField_18; }
	inline void set_U3CuseLegacyMeshGenerationU3Ek__BackingField_18(bool value)
	{
		___U3CuseLegacyMeshGenerationU3Ek__BackingField_18 = value;
	}
};

struct Graphic_t1660335611_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t340375123 * ___s_DefaultUI_2;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_t3840446185 * ___s_WhiteTexture_3;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t3648964284 * ___s_Mesh_15;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_t2453304189 * ___s_VertexHelper_16;

public:
	inline static int32_t get_offset_of_s_DefaultUI_2() { return static_cast<int32_t>(offsetof(Graphic_t1660335611_StaticFields, ___s_DefaultUI_2)); }
	inline Material_t340375123 * get_s_DefaultUI_2() const { return ___s_DefaultUI_2; }
	inline Material_t340375123 ** get_address_of_s_DefaultUI_2() { return &___s_DefaultUI_2; }
	inline void set_s_DefaultUI_2(Material_t340375123 * value)
	{
		___s_DefaultUI_2 = value;
		Il2CppCodeGenWriteBarrier((&___s_DefaultUI_2), value);
	}

	inline static int32_t get_offset_of_s_WhiteTexture_3() { return static_cast<int32_t>(offsetof(Graphic_t1660335611_StaticFields, ___s_WhiteTexture_3)); }
	inline Texture2D_t3840446185 * get_s_WhiteTexture_3() const { return ___s_WhiteTexture_3; }
	inline Texture2D_t3840446185 ** get_address_of_s_WhiteTexture_3() { return &___s_WhiteTexture_3; }
	inline void set_s_WhiteTexture_3(Texture2D_t3840446185 * value)
	{
		___s_WhiteTexture_3 = value;
		Il2CppCodeGenWriteBarrier((&___s_WhiteTexture_3), value);
	}

	inline static int32_t get_offset_of_s_Mesh_15() { return static_cast<int32_t>(offsetof(Graphic_t1660335611_StaticFields, ___s_Mesh_15)); }
	inline Mesh_t3648964284 * get_s_Mesh_15() const { return ___s_Mesh_15; }
	inline Mesh_t3648964284 ** get_address_of_s_Mesh_15() { return &___s_Mesh_15; }
	inline void set_s_Mesh_15(Mesh_t3648964284 * value)
	{
		___s_Mesh_15 = value;
		Il2CppCodeGenWriteBarrier((&___s_Mesh_15), value);
	}

	inline static int32_t get_offset_of_s_VertexHelper_16() { return static_cast<int32_t>(offsetof(Graphic_t1660335611_StaticFields, ___s_VertexHelper_16)); }
	inline VertexHelper_t2453304189 * get_s_VertexHelper_16() const { return ___s_VertexHelper_16; }
	inline VertexHelper_t2453304189 ** get_address_of_s_VertexHelper_16() { return &___s_VertexHelper_16; }
	inline void set_s_VertexHelper_16(VertexHelper_t2453304189 * value)
	{
		___s_VertexHelper_16 = value;
		Il2CppCodeGenWriteBarrier((&___s_VertexHelper_16), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GRAPHIC_T1660335611_H
#ifndef SCROLLRECT_T4137855814_H
#define SCROLLRECT_T4137855814_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.ScrollRect
struct  ScrollRect_t4137855814  : public UIBehaviour_t3495933518
{
public:
	// UnityEngine.RectTransform UnityEngine.UI.ScrollRect::m_Content
	RectTransform_t3704657025 * ___m_Content_2;
	// System.Boolean UnityEngine.UI.ScrollRect::m_Horizontal
	bool ___m_Horizontal_3;
	// System.Boolean UnityEngine.UI.ScrollRect::m_Vertical
	bool ___m_Vertical_4;
	// UnityEngine.UI.ScrollRect/MovementType UnityEngine.UI.ScrollRect::m_MovementType
	int32_t ___m_MovementType_5;
	// System.Single UnityEngine.UI.ScrollRect::m_Elasticity
	float ___m_Elasticity_6;
	// System.Boolean UnityEngine.UI.ScrollRect::m_Inertia
	bool ___m_Inertia_7;
	// System.Single UnityEngine.UI.ScrollRect::m_DecelerationRate
	float ___m_DecelerationRate_8;
	// System.Single UnityEngine.UI.ScrollRect::m_ScrollSensitivity
	float ___m_ScrollSensitivity_9;
	// UnityEngine.RectTransform UnityEngine.UI.ScrollRect::m_Viewport
	RectTransform_t3704657025 * ___m_Viewport_10;
	// UnityEngine.UI.Scrollbar UnityEngine.UI.ScrollRect::m_HorizontalScrollbar
	Scrollbar_t1494447233 * ___m_HorizontalScrollbar_11;
	// UnityEngine.UI.Scrollbar UnityEngine.UI.ScrollRect::m_VerticalScrollbar
	Scrollbar_t1494447233 * ___m_VerticalScrollbar_12;
	// UnityEngine.UI.ScrollRect/ScrollbarVisibility UnityEngine.UI.ScrollRect::m_HorizontalScrollbarVisibility
	int32_t ___m_HorizontalScrollbarVisibility_13;
	// UnityEngine.UI.ScrollRect/ScrollbarVisibility UnityEngine.UI.ScrollRect::m_VerticalScrollbarVisibility
	int32_t ___m_VerticalScrollbarVisibility_14;
	// System.Single UnityEngine.UI.ScrollRect::m_HorizontalScrollbarSpacing
	float ___m_HorizontalScrollbarSpacing_15;
	// System.Single UnityEngine.UI.ScrollRect::m_VerticalScrollbarSpacing
	float ___m_VerticalScrollbarSpacing_16;
	// UnityEngine.UI.ScrollRect/ScrollRectEvent UnityEngine.UI.ScrollRect::m_OnValueChanged
	ScrollRectEvent_t343079324 * ___m_OnValueChanged_17;
	// UnityEngine.Vector2 UnityEngine.UI.ScrollRect::m_PointerStartLocalCursor
	Vector2_t2156229523  ___m_PointerStartLocalCursor_18;
	// UnityEngine.Vector2 UnityEngine.UI.ScrollRect::m_ContentStartPosition
	Vector2_t2156229523  ___m_ContentStartPosition_19;
	// UnityEngine.RectTransform UnityEngine.UI.ScrollRect::m_ViewRect
	RectTransform_t3704657025 * ___m_ViewRect_20;
	// UnityEngine.Bounds UnityEngine.UI.ScrollRect::m_ContentBounds
	Bounds_t2266837910  ___m_ContentBounds_21;
	// UnityEngine.Bounds UnityEngine.UI.ScrollRect::m_ViewBounds
	Bounds_t2266837910  ___m_ViewBounds_22;
	// UnityEngine.Vector2 UnityEngine.UI.ScrollRect::m_Velocity
	Vector2_t2156229523  ___m_Velocity_23;
	// System.Boolean UnityEngine.UI.ScrollRect::m_Dragging
	bool ___m_Dragging_24;
	// UnityEngine.Vector2 UnityEngine.UI.ScrollRect::m_PrevPosition
	Vector2_t2156229523  ___m_PrevPosition_25;
	// UnityEngine.Bounds UnityEngine.UI.ScrollRect::m_PrevContentBounds
	Bounds_t2266837910  ___m_PrevContentBounds_26;
	// UnityEngine.Bounds UnityEngine.UI.ScrollRect::m_PrevViewBounds
	Bounds_t2266837910  ___m_PrevViewBounds_27;
	// System.Boolean UnityEngine.UI.ScrollRect::m_HasRebuiltLayout
	bool ___m_HasRebuiltLayout_28;
	// System.Boolean UnityEngine.UI.ScrollRect::m_HSliderExpand
	bool ___m_HSliderExpand_29;
	// System.Boolean UnityEngine.UI.ScrollRect::m_VSliderExpand
	bool ___m_VSliderExpand_30;
	// System.Single UnityEngine.UI.ScrollRect::m_HSliderHeight
	float ___m_HSliderHeight_31;
	// System.Single UnityEngine.UI.ScrollRect::m_VSliderWidth
	float ___m_VSliderWidth_32;
	// UnityEngine.RectTransform UnityEngine.UI.ScrollRect::m_Rect
	RectTransform_t3704657025 * ___m_Rect_33;
	// UnityEngine.RectTransform UnityEngine.UI.ScrollRect::m_HorizontalScrollbarRect
	RectTransform_t3704657025 * ___m_HorizontalScrollbarRect_34;
	// UnityEngine.RectTransform UnityEngine.UI.ScrollRect::m_VerticalScrollbarRect
	RectTransform_t3704657025 * ___m_VerticalScrollbarRect_35;
	// UnityEngine.DrivenRectTransformTracker UnityEngine.UI.ScrollRect::m_Tracker
	DrivenRectTransformTracker_t2562230146  ___m_Tracker_36;
	// UnityEngine.Vector3[] UnityEngine.UI.ScrollRect::m_Corners
	Vector3U5BU5D_t1718750761* ___m_Corners_37;

public:
	inline static int32_t get_offset_of_m_Content_2() { return static_cast<int32_t>(offsetof(ScrollRect_t4137855814, ___m_Content_2)); }
	inline RectTransform_t3704657025 * get_m_Content_2() const { return ___m_Content_2; }
	inline RectTransform_t3704657025 ** get_address_of_m_Content_2() { return &___m_Content_2; }
	inline void set_m_Content_2(RectTransform_t3704657025 * value)
	{
		___m_Content_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_Content_2), value);
	}

	inline static int32_t get_offset_of_m_Horizontal_3() { return static_cast<int32_t>(offsetof(ScrollRect_t4137855814, ___m_Horizontal_3)); }
	inline bool get_m_Horizontal_3() const { return ___m_Horizontal_3; }
	inline bool* get_address_of_m_Horizontal_3() { return &___m_Horizontal_3; }
	inline void set_m_Horizontal_3(bool value)
	{
		___m_Horizontal_3 = value;
	}

	inline static int32_t get_offset_of_m_Vertical_4() { return static_cast<int32_t>(offsetof(ScrollRect_t4137855814, ___m_Vertical_4)); }
	inline bool get_m_Vertical_4() const { return ___m_Vertical_4; }
	inline bool* get_address_of_m_Vertical_4() { return &___m_Vertical_4; }
	inline void set_m_Vertical_4(bool value)
	{
		___m_Vertical_4 = value;
	}

	inline static int32_t get_offset_of_m_MovementType_5() { return static_cast<int32_t>(offsetof(ScrollRect_t4137855814, ___m_MovementType_5)); }
	inline int32_t get_m_MovementType_5() const { return ___m_MovementType_5; }
	inline int32_t* get_address_of_m_MovementType_5() { return &___m_MovementType_5; }
	inline void set_m_MovementType_5(int32_t value)
	{
		___m_MovementType_5 = value;
	}

	inline static int32_t get_offset_of_m_Elasticity_6() { return static_cast<int32_t>(offsetof(ScrollRect_t4137855814, ___m_Elasticity_6)); }
	inline float get_m_Elasticity_6() const { return ___m_Elasticity_6; }
	inline float* get_address_of_m_Elasticity_6() { return &___m_Elasticity_6; }
	inline void set_m_Elasticity_6(float value)
	{
		___m_Elasticity_6 = value;
	}

	inline static int32_t get_offset_of_m_Inertia_7() { return static_cast<int32_t>(offsetof(ScrollRect_t4137855814, ___m_Inertia_7)); }
	inline bool get_m_Inertia_7() const { return ___m_Inertia_7; }
	inline bool* get_address_of_m_Inertia_7() { return &___m_Inertia_7; }
	inline void set_m_Inertia_7(bool value)
	{
		___m_Inertia_7 = value;
	}

	inline static int32_t get_offset_of_m_DecelerationRate_8() { return static_cast<int32_t>(offsetof(ScrollRect_t4137855814, ___m_DecelerationRate_8)); }
	inline float get_m_DecelerationRate_8() const { return ___m_DecelerationRate_8; }
	inline float* get_address_of_m_DecelerationRate_8() { return &___m_DecelerationRate_8; }
	inline void set_m_DecelerationRate_8(float value)
	{
		___m_DecelerationRate_8 = value;
	}

	inline static int32_t get_offset_of_m_ScrollSensitivity_9() { return static_cast<int32_t>(offsetof(ScrollRect_t4137855814, ___m_ScrollSensitivity_9)); }
	inline float get_m_ScrollSensitivity_9() const { return ___m_ScrollSensitivity_9; }
	inline float* get_address_of_m_ScrollSensitivity_9() { return &___m_ScrollSensitivity_9; }
	inline void set_m_ScrollSensitivity_9(float value)
	{
		___m_ScrollSensitivity_9 = value;
	}

	inline static int32_t get_offset_of_m_Viewport_10() { return static_cast<int32_t>(offsetof(ScrollRect_t4137855814, ___m_Viewport_10)); }
	inline RectTransform_t3704657025 * get_m_Viewport_10() const { return ___m_Viewport_10; }
	inline RectTransform_t3704657025 ** get_address_of_m_Viewport_10() { return &___m_Viewport_10; }
	inline void set_m_Viewport_10(RectTransform_t3704657025 * value)
	{
		___m_Viewport_10 = value;
		Il2CppCodeGenWriteBarrier((&___m_Viewport_10), value);
	}

	inline static int32_t get_offset_of_m_HorizontalScrollbar_11() { return static_cast<int32_t>(offsetof(ScrollRect_t4137855814, ___m_HorizontalScrollbar_11)); }
	inline Scrollbar_t1494447233 * get_m_HorizontalScrollbar_11() const { return ___m_HorizontalScrollbar_11; }
	inline Scrollbar_t1494447233 ** get_address_of_m_HorizontalScrollbar_11() { return &___m_HorizontalScrollbar_11; }
	inline void set_m_HorizontalScrollbar_11(Scrollbar_t1494447233 * value)
	{
		___m_HorizontalScrollbar_11 = value;
		Il2CppCodeGenWriteBarrier((&___m_HorizontalScrollbar_11), value);
	}

	inline static int32_t get_offset_of_m_VerticalScrollbar_12() { return static_cast<int32_t>(offsetof(ScrollRect_t4137855814, ___m_VerticalScrollbar_12)); }
	inline Scrollbar_t1494447233 * get_m_VerticalScrollbar_12() const { return ___m_VerticalScrollbar_12; }
	inline Scrollbar_t1494447233 ** get_address_of_m_VerticalScrollbar_12() { return &___m_VerticalScrollbar_12; }
	inline void set_m_VerticalScrollbar_12(Scrollbar_t1494447233 * value)
	{
		___m_VerticalScrollbar_12 = value;
		Il2CppCodeGenWriteBarrier((&___m_VerticalScrollbar_12), value);
	}

	inline static int32_t get_offset_of_m_HorizontalScrollbarVisibility_13() { return static_cast<int32_t>(offsetof(ScrollRect_t4137855814, ___m_HorizontalScrollbarVisibility_13)); }
	inline int32_t get_m_HorizontalScrollbarVisibility_13() const { return ___m_HorizontalScrollbarVisibility_13; }
	inline int32_t* get_address_of_m_HorizontalScrollbarVisibility_13() { return &___m_HorizontalScrollbarVisibility_13; }
	inline void set_m_HorizontalScrollbarVisibility_13(int32_t value)
	{
		___m_HorizontalScrollbarVisibility_13 = value;
	}

	inline static int32_t get_offset_of_m_VerticalScrollbarVisibility_14() { return static_cast<int32_t>(offsetof(ScrollRect_t4137855814, ___m_VerticalScrollbarVisibility_14)); }
	inline int32_t get_m_VerticalScrollbarVisibility_14() const { return ___m_VerticalScrollbarVisibility_14; }
	inline int32_t* get_address_of_m_VerticalScrollbarVisibility_14() { return &___m_VerticalScrollbarVisibility_14; }
	inline void set_m_VerticalScrollbarVisibility_14(int32_t value)
	{
		___m_VerticalScrollbarVisibility_14 = value;
	}

	inline static int32_t get_offset_of_m_HorizontalScrollbarSpacing_15() { return static_cast<int32_t>(offsetof(ScrollRect_t4137855814, ___m_HorizontalScrollbarSpacing_15)); }
	inline float get_m_HorizontalScrollbarSpacing_15() const { return ___m_HorizontalScrollbarSpacing_15; }
	inline float* get_address_of_m_HorizontalScrollbarSpacing_15() { return &___m_HorizontalScrollbarSpacing_15; }
	inline void set_m_HorizontalScrollbarSpacing_15(float value)
	{
		___m_HorizontalScrollbarSpacing_15 = value;
	}

	inline static int32_t get_offset_of_m_VerticalScrollbarSpacing_16() { return static_cast<int32_t>(offsetof(ScrollRect_t4137855814, ___m_VerticalScrollbarSpacing_16)); }
	inline float get_m_VerticalScrollbarSpacing_16() const { return ___m_VerticalScrollbarSpacing_16; }
	inline float* get_address_of_m_VerticalScrollbarSpacing_16() { return &___m_VerticalScrollbarSpacing_16; }
	inline void set_m_VerticalScrollbarSpacing_16(float value)
	{
		___m_VerticalScrollbarSpacing_16 = value;
	}

	inline static int32_t get_offset_of_m_OnValueChanged_17() { return static_cast<int32_t>(offsetof(ScrollRect_t4137855814, ___m_OnValueChanged_17)); }
	inline ScrollRectEvent_t343079324 * get_m_OnValueChanged_17() const { return ___m_OnValueChanged_17; }
	inline ScrollRectEvent_t343079324 ** get_address_of_m_OnValueChanged_17() { return &___m_OnValueChanged_17; }
	inline void set_m_OnValueChanged_17(ScrollRectEvent_t343079324 * value)
	{
		___m_OnValueChanged_17 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnValueChanged_17), value);
	}

	inline static int32_t get_offset_of_m_PointerStartLocalCursor_18() { return static_cast<int32_t>(offsetof(ScrollRect_t4137855814, ___m_PointerStartLocalCursor_18)); }
	inline Vector2_t2156229523  get_m_PointerStartLocalCursor_18() const { return ___m_PointerStartLocalCursor_18; }
	inline Vector2_t2156229523 * get_address_of_m_PointerStartLocalCursor_18() { return &___m_PointerStartLocalCursor_18; }
	inline void set_m_PointerStartLocalCursor_18(Vector2_t2156229523  value)
	{
		___m_PointerStartLocalCursor_18 = value;
	}

	inline static int32_t get_offset_of_m_ContentStartPosition_19() { return static_cast<int32_t>(offsetof(ScrollRect_t4137855814, ___m_ContentStartPosition_19)); }
	inline Vector2_t2156229523  get_m_ContentStartPosition_19() const { return ___m_ContentStartPosition_19; }
	inline Vector2_t2156229523 * get_address_of_m_ContentStartPosition_19() { return &___m_ContentStartPosition_19; }
	inline void set_m_ContentStartPosition_19(Vector2_t2156229523  value)
	{
		___m_ContentStartPosition_19 = value;
	}

	inline static int32_t get_offset_of_m_ViewRect_20() { return static_cast<int32_t>(offsetof(ScrollRect_t4137855814, ___m_ViewRect_20)); }
	inline RectTransform_t3704657025 * get_m_ViewRect_20() const { return ___m_ViewRect_20; }
	inline RectTransform_t3704657025 ** get_address_of_m_ViewRect_20() { return &___m_ViewRect_20; }
	inline void set_m_ViewRect_20(RectTransform_t3704657025 * value)
	{
		___m_ViewRect_20 = value;
		Il2CppCodeGenWriteBarrier((&___m_ViewRect_20), value);
	}

	inline static int32_t get_offset_of_m_ContentBounds_21() { return static_cast<int32_t>(offsetof(ScrollRect_t4137855814, ___m_ContentBounds_21)); }
	inline Bounds_t2266837910  get_m_ContentBounds_21() const { return ___m_ContentBounds_21; }
	inline Bounds_t2266837910 * get_address_of_m_ContentBounds_21() { return &___m_ContentBounds_21; }
	inline void set_m_ContentBounds_21(Bounds_t2266837910  value)
	{
		___m_ContentBounds_21 = value;
	}

	inline static int32_t get_offset_of_m_ViewBounds_22() { return static_cast<int32_t>(offsetof(ScrollRect_t4137855814, ___m_ViewBounds_22)); }
	inline Bounds_t2266837910  get_m_ViewBounds_22() const { return ___m_ViewBounds_22; }
	inline Bounds_t2266837910 * get_address_of_m_ViewBounds_22() { return &___m_ViewBounds_22; }
	inline void set_m_ViewBounds_22(Bounds_t2266837910  value)
	{
		___m_ViewBounds_22 = value;
	}

	inline static int32_t get_offset_of_m_Velocity_23() { return static_cast<int32_t>(offsetof(ScrollRect_t4137855814, ___m_Velocity_23)); }
	inline Vector2_t2156229523  get_m_Velocity_23() const { return ___m_Velocity_23; }
	inline Vector2_t2156229523 * get_address_of_m_Velocity_23() { return &___m_Velocity_23; }
	inline void set_m_Velocity_23(Vector2_t2156229523  value)
	{
		___m_Velocity_23 = value;
	}

	inline static int32_t get_offset_of_m_Dragging_24() { return static_cast<int32_t>(offsetof(ScrollRect_t4137855814, ___m_Dragging_24)); }
	inline bool get_m_Dragging_24() const { return ___m_Dragging_24; }
	inline bool* get_address_of_m_Dragging_24() { return &___m_Dragging_24; }
	inline void set_m_Dragging_24(bool value)
	{
		___m_Dragging_24 = value;
	}

	inline static int32_t get_offset_of_m_PrevPosition_25() { return static_cast<int32_t>(offsetof(ScrollRect_t4137855814, ___m_PrevPosition_25)); }
	inline Vector2_t2156229523  get_m_PrevPosition_25() const { return ___m_PrevPosition_25; }
	inline Vector2_t2156229523 * get_address_of_m_PrevPosition_25() { return &___m_PrevPosition_25; }
	inline void set_m_PrevPosition_25(Vector2_t2156229523  value)
	{
		___m_PrevPosition_25 = value;
	}

	inline static int32_t get_offset_of_m_PrevContentBounds_26() { return static_cast<int32_t>(offsetof(ScrollRect_t4137855814, ___m_PrevContentBounds_26)); }
	inline Bounds_t2266837910  get_m_PrevContentBounds_26() const { return ___m_PrevContentBounds_26; }
	inline Bounds_t2266837910 * get_address_of_m_PrevContentBounds_26() { return &___m_PrevContentBounds_26; }
	inline void set_m_PrevContentBounds_26(Bounds_t2266837910  value)
	{
		___m_PrevContentBounds_26 = value;
	}

	inline static int32_t get_offset_of_m_PrevViewBounds_27() { return static_cast<int32_t>(offsetof(ScrollRect_t4137855814, ___m_PrevViewBounds_27)); }
	inline Bounds_t2266837910  get_m_PrevViewBounds_27() const { return ___m_PrevViewBounds_27; }
	inline Bounds_t2266837910 * get_address_of_m_PrevViewBounds_27() { return &___m_PrevViewBounds_27; }
	inline void set_m_PrevViewBounds_27(Bounds_t2266837910  value)
	{
		___m_PrevViewBounds_27 = value;
	}

	inline static int32_t get_offset_of_m_HasRebuiltLayout_28() { return static_cast<int32_t>(offsetof(ScrollRect_t4137855814, ___m_HasRebuiltLayout_28)); }
	inline bool get_m_HasRebuiltLayout_28() const { return ___m_HasRebuiltLayout_28; }
	inline bool* get_address_of_m_HasRebuiltLayout_28() { return &___m_HasRebuiltLayout_28; }
	inline void set_m_HasRebuiltLayout_28(bool value)
	{
		___m_HasRebuiltLayout_28 = value;
	}

	inline static int32_t get_offset_of_m_HSliderExpand_29() { return static_cast<int32_t>(offsetof(ScrollRect_t4137855814, ___m_HSliderExpand_29)); }
	inline bool get_m_HSliderExpand_29() const { return ___m_HSliderExpand_29; }
	inline bool* get_address_of_m_HSliderExpand_29() { return &___m_HSliderExpand_29; }
	inline void set_m_HSliderExpand_29(bool value)
	{
		___m_HSliderExpand_29 = value;
	}

	inline static int32_t get_offset_of_m_VSliderExpand_30() { return static_cast<int32_t>(offsetof(ScrollRect_t4137855814, ___m_VSliderExpand_30)); }
	inline bool get_m_VSliderExpand_30() const { return ___m_VSliderExpand_30; }
	inline bool* get_address_of_m_VSliderExpand_30() { return &___m_VSliderExpand_30; }
	inline void set_m_VSliderExpand_30(bool value)
	{
		___m_VSliderExpand_30 = value;
	}

	inline static int32_t get_offset_of_m_HSliderHeight_31() { return static_cast<int32_t>(offsetof(ScrollRect_t4137855814, ___m_HSliderHeight_31)); }
	inline float get_m_HSliderHeight_31() const { return ___m_HSliderHeight_31; }
	inline float* get_address_of_m_HSliderHeight_31() { return &___m_HSliderHeight_31; }
	inline void set_m_HSliderHeight_31(float value)
	{
		___m_HSliderHeight_31 = value;
	}

	inline static int32_t get_offset_of_m_VSliderWidth_32() { return static_cast<int32_t>(offsetof(ScrollRect_t4137855814, ___m_VSliderWidth_32)); }
	inline float get_m_VSliderWidth_32() const { return ___m_VSliderWidth_32; }
	inline float* get_address_of_m_VSliderWidth_32() { return &___m_VSliderWidth_32; }
	inline void set_m_VSliderWidth_32(float value)
	{
		___m_VSliderWidth_32 = value;
	}

	inline static int32_t get_offset_of_m_Rect_33() { return static_cast<int32_t>(offsetof(ScrollRect_t4137855814, ___m_Rect_33)); }
	inline RectTransform_t3704657025 * get_m_Rect_33() const { return ___m_Rect_33; }
	inline RectTransform_t3704657025 ** get_address_of_m_Rect_33() { return &___m_Rect_33; }
	inline void set_m_Rect_33(RectTransform_t3704657025 * value)
	{
		___m_Rect_33 = value;
		Il2CppCodeGenWriteBarrier((&___m_Rect_33), value);
	}

	inline static int32_t get_offset_of_m_HorizontalScrollbarRect_34() { return static_cast<int32_t>(offsetof(ScrollRect_t4137855814, ___m_HorizontalScrollbarRect_34)); }
	inline RectTransform_t3704657025 * get_m_HorizontalScrollbarRect_34() const { return ___m_HorizontalScrollbarRect_34; }
	inline RectTransform_t3704657025 ** get_address_of_m_HorizontalScrollbarRect_34() { return &___m_HorizontalScrollbarRect_34; }
	inline void set_m_HorizontalScrollbarRect_34(RectTransform_t3704657025 * value)
	{
		___m_HorizontalScrollbarRect_34 = value;
		Il2CppCodeGenWriteBarrier((&___m_HorizontalScrollbarRect_34), value);
	}

	inline static int32_t get_offset_of_m_VerticalScrollbarRect_35() { return static_cast<int32_t>(offsetof(ScrollRect_t4137855814, ___m_VerticalScrollbarRect_35)); }
	inline RectTransform_t3704657025 * get_m_VerticalScrollbarRect_35() const { return ___m_VerticalScrollbarRect_35; }
	inline RectTransform_t3704657025 ** get_address_of_m_VerticalScrollbarRect_35() { return &___m_VerticalScrollbarRect_35; }
	inline void set_m_VerticalScrollbarRect_35(RectTransform_t3704657025 * value)
	{
		___m_VerticalScrollbarRect_35 = value;
		Il2CppCodeGenWriteBarrier((&___m_VerticalScrollbarRect_35), value);
	}

	inline static int32_t get_offset_of_m_Tracker_36() { return static_cast<int32_t>(offsetof(ScrollRect_t4137855814, ___m_Tracker_36)); }
	inline DrivenRectTransformTracker_t2562230146  get_m_Tracker_36() const { return ___m_Tracker_36; }
	inline DrivenRectTransformTracker_t2562230146 * get_address_of_m_Tracker_36() { return &___m_Tracker_36; }
	inline void set_m_Tracker_36(DrivenRectTransformTracker_t2562230146  value)
	{
		___m_Tracker_36 = value;
	}

	inline static int32_t get_offset_of_m_Corners_37() { return static_cast<int32_t>(offsetof(ScrollRect_t4137855814, ___m_Corners_37)); }
	inline Vector3U5BU5D_t1718750761* get_m_Corners_37() const { return ___m_Corners_37; }
	inline Vector3U5BU5D_t1718750761** get_address_of_m_Corners_37() { return &___m_Corners_37; }
	inline void set_m_Corners_37(Vector3U5BU5D_t1718750761* value)
	{
		___m_Corners_37 = value;
		Il2CppCodeGenWriteBarrier((&___m_Corners_37), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SCROLLRECT_T4137855814_H
#ifndef MASKABLEGRAPHIC_T3839221559_H
#define MASKABLEGRAPHIC_T3839221559_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.MaskableGraphic
struct  MaskableGraphic_t3839221559  : public Graphic_t1660335611
{
public:
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_19;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t340375123 * ___m_MaskMaterial_20;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_t3474889437 * ___m_ParentMask_21;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_22;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_23;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t3661388177 * ___m_OnCullStateChanged_24;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_25;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_26;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_t1718750761* ___m_Corners_27;

public:
	inline static int32_t get_offset_of_m_ShouldRecalculateStencil_19() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_ShouldRecalculateStencil_19)); }
	inline bool get_m_ShouldRecalculateStencil_19() const { return ___m_ShouldRecalculateStencil_19; }
	inline bool* get_address_of_m_ShouldRecalculateStencil_19() { return &___m_ShouldRecalculateStencil_19; }
	inline void set_m_ShouldRecalculateStencil_19(bool value)
	{
		___m_ShouldRecalculateStencil_19 = value;
	}

	inline static int32_t get_offset_of_m_MaskMaterial_20() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_MaskMaterial_20)); }
	inline Material_t340375123 * get_m_MaskMaterial_20() const { return ___m_MaskMaterial_20; }
	inline Material_t340375123 ** get_address_of_m_MaskMaterial_20() { return &___m_MaskMaterial_20; }
	inline void set_m_MaskMaterial_20(Material_t340375123 * value)
	{
		___m_MaskMaterial_20 = value;
		Il2CppCodeGenWriteBarrier((&___m_MaskMaterial_20), value);
	}

	inline static int32_t get_offset_of_m_ParentMask_21() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_ParentMask_21)); }
	inline RectMask2D_t3474889437 * get_m_ParentMask_21() const { return ___m_ParentMask_21; }
	inline RectMask2D_t3474889437 ** get_address_of_m_ParentMask_21() { return &___m_ParentMask_21; }
	inline void set_m_ParentMask_21(RectMask2D_t3474889437 * value)
	{
		___m_ParentMask_21 = value;
		Il2CppCodeGenWriteBarrier((&___m_ParentMask_21), value);
	}

	inline static int32_t get_offset_of_m_Maskable_22() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_Maskable_22)); }
	inline bool get_m_Maskable_22() const { return ___m_Maskable_22; }
	inline bool* get_address_of_m_Maskable_22() { return &___m_Maskable_22; }
	inline void set_m_Maskable_22(bool value)
	{
		___m_Maskable_22 = value;
	}

	inline static int32_t get_offset_of_m_IncludeForMasking_23() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_IncludeForMasking_23)); }
	inline bool get_m_IncludeForMasking_23() const { return ___m_IncludeForMasking_23; }
	inline bool* get_address_of_m_IncludeForMasking_23() { return &___m_IncludeForMasking_23; }
	inline void set_m_IncludeForMasking_23(bool value)
	{
		___m_IncludeForMasking_23 = value;
	}

	inline static int32_t get_offset_of_m_OnCullStateChanged_24() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_OnCullStateChanged_24)); }
	inline CullStateChangedEvent_t3661388177 * get_m_OnCullStateChanged_24() const { return ___m_OnCullStateChanged_24; }
	inline CullStateChangedEvent_t3661388177 ** get_address_of_m_OnCullStateChanged_24() { return &___m_OnCullStateChanged_24; }
	inline void set_m_OnCullStateChanged_24(CullStateChangedEvent_t3661388177 * value)
	{
		___m_OnCullStateChanged_24 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnCullStateChanged_24), value);
	}

	inline static int32_t get_offset_of_m_ShouldRecalculate_25() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_ShouldRecalculate_25)); }
	inline bool get_m_ShouldRecalculate_25() const { return ___m_ShouldRecalculate_25; }
	inline bool* get_address_of_m_ShouldRecalculate_25() { return &___m_ShouldRecalculate_25; }
	inline void set_m_ShouldRecalculate_25(bool value)
	{
		___m_ShouldRecalculate_25 = value;
	}

	inline static int32_t get_offset_of_m_StencilValue_26() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_StencilValue_26)); }
	inline int32_t get_m_StencilValue_26() const { return ___m_StencilValue_26; }
	inline int32_t* get_address_of_m_StencilValue_26() { return &___m_StencilValue_26; }
	inline void set_m_StencilValue_26(int32_t value)
	{
		___m_StencilValue_26 = value;
	}

	inline static int32_t get_offset_of_m_Corners_27() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_Corners_27)); }
	inline Vector3U5BU5D_t1718750761* get_m_Corners_27() const { return ___m_Corners_27; }
	inline Vector3U5BU5D_t1718750761** get_address_of_m_Corners_27() { return &___m_Corners_27; }
	inline void set_m_Corners_27(Vector3U5BU5D_t1718750761* value)
	{
		___m_Corners_27 = value;
		Il2CppCodeGenWriteBarrier((&___m_Corners_27), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MASKABLEGRAPHIC_T3839221559_H
#ifndef BUTTON_T4055032469_H
#define BUTTON_T4055032469_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Button
struct  Button_t4055032469  : public Selectable_t3250028441
{
public:
	// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::m_OnClick
	ButtonClickedEvent_t48803504 * ___m_OnClick_16;

public:
	inline static int32_t get_offset_of_m_OnClick_16() { return static_cast<int32_t>(offsetof(Button_t4055032469, ___m_OnClick_16)); }
	inline ButtonClickedEvent_t48803504 * get_m_OnClick_16() const { return ___m_OnClick_16; }
	inline ButtonClickedEvent_t48803504 ** get_address_of_m_OnClick_16() { return &___m_OnClick_16; }
	inline void set_m_OnClick_16(ButtonClickedEvent_t48803504 * value)
	{
		___m_OnClick_16 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnClick_16), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BUTTON_T4055032469_H
#ifndef INPUTFIELD_T3762917431_H
#define INPUTFIELD_T3762917431_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.InputField
struct  InputField_t3762917431  : public Selectable_t3250028441
{
public:
	// UnityEngine.TouchScreenKeyboard UnityEngine.UI.InputField::m_Keyboard
	TouchScreenKeyboard_t731888065 * ___m_Keyboard_16;
	// UnityEngine.UI.Text UnityEngine.UI.InputField::m_TextComponent
	Text_t1901882714 * ___m_TextComponent_18;
	// UnityEngine.UI.Graphic UnityEngine.UI.InputField::m_Placeholder
	Graphic_t1660335611 * ___m_Placeholder_19;
	// UnityEngine.UI.InputField/ContentType UnityEngine.UI.InputField::m_ContentType
	int32_t ___m_ContentType_20;
	// UnityEngine.UI.InputField/InputType UnityEngine.UI.InputField::m_InputType
	int32_t ___m_InputType_21;
	// System.Char UnityEngine.UI.InputField::m_AsteriskChar
	Il2CppChar ___m_AsteriskChar_22;
	// UnityEngine.TouchScreenKeyboardType UnityEngine.UI.InputField::m_KeyboardType
	int32_t ___m_KeyboardType_23;
	// UnityEngine.UI.InputField/LineType UnityEngine.UI.InputField::m_LineType
	int32_t ___m_LineType_24;
	// System.Boolean UnityEngine.UI.InputField::m_HideMobileInput
	bool ___m_HideMobileInput_25;
	// UnityEngine.UI.InputField/CharacterValidation UnityEngine.UI.InputField::m_CharacterValidation
	int32_t ___m_CharacterValidation_26;
	// System.Int32 UnityEngine.UI.InputField::m_CharacterLimit
	int32_t ___m_CharacterLimit_27;
	// UnityEngine.UI.InputField/SubmitEvent UnityEngine.UI.InputField::m_OnEndEdit
	SubmitEvent_t648412432 * ___m_OnEndEdit_28;
	// UnityEngine.UI.InputField/OnChangeEvent UnityEngine.UI.InputField::m_OnValueChanged
	OnChangeEvent_t467195904 * ___m_OnValueChanged_29;
	// UnityEngine.UI.InputField/OnValidateInput UnityEngine.UI.InputField::m_OnValidateInput
	OnValidateInput_t2355412304 * ___m_OnValidateInput_30;
	// UnityEngine.Color UnityEngine.UI.InputField::m_CaretColor
	Color_t2555686324  ___m_CaretColor_31;
	// System.Boolean UnityEngine.UI.InputField::m_CustomCaretColor
	bool ___m_CustomCaretColor_32;
	// UnityEngine.Color UnityEngine.UI.InputField::m_SelectionColor
	Color_t2555686324  ___m_SelectionColor_33;
	// System.String UnityEngine.UI.InputField::m_Text
	String_t* ___m_Text_34;
	// System.Single UnityEngine.UI.InputField::m_CaretBlinkRate
	float ___m_CaretBlinkRate_35;
	// System.Int32 UnityEngine.UI.InputField::m_CaretWidth
	int32_t ___m_CaretWidth_36;
	// System.Boolean UnityEngine.UI.InputField::m_ReadOnly
	bool ___m_ReadOnly_37;
	// System.Int32 UnityEngine.UI.InputField::m_CaretPosition
	int32_t ___m_CaretPosition_38;
	// System.Int32 UnityEngine.UI.InputField::m_CaretSelectPosition
	int32_t ___m_CaretSelectPosition_39;
	// UnityEngine.RectTransform UnityEngine.UI.InputField::caretRectTrans
	RectTransform_t3704657025 * ___caretRectTrans_40;
	// UnityEngine.UIVertex[] UnityEngine.UI.InputField::m_CursorVerts
	UIVertexU5BU5D_t1981460040* ___m_CursorVerts_41;
	// UnityEngine.TextGenerator UnityEngine.UI.InputField::m_InputTextCache
	TextGenerator_t3211863866 * ___m_InputTextCache_42;
	// UnityEngine.CanvasRenderer UnityEngine.UI.InputField::m_CachedInputRenderer
	CanvasRenderer_t2598313366 * ___m_CachedInputRenderer_43;
	// System.Boolean UnityEngine.UI.InputField::m_PreventFontCallback
	bool ___m_PreventFontCallback_44;
	// UnityEngine.Mesh UnityEngine.UI.InputField::m_Mesh
	Mesh_t3648964284 * ___m_Mesh_45;
	// System.Boolean UnityEngine.UI.InputField::m_AllowInput
	bool ___m_AllowInput_46;
	// System.Boolean UnityEngine.UI.InputField::m_ShouldActivateNextUpdate
	bool ___m_ShouldActivateNextUpdate_47;
	// System.Boolean UnityEngine.UI.InputField::m_UpdateDrag
	bool ___m_UpdateDrag_48;
	// System.Boolean UnityEngine.UI.InputField::m_DragPositionOutOfBounds
	bool ___m_DragPositionOutOfBounds_49;
	// System.Boolean UnityEngine.UI.InputField::m_CaretVisible
	bool ___m_CaretVisible_52;
	// UnityEngine.Coroutine UnityEngine.UI.InputField::m_BlinkCoroutine
	Coroutine_t3829159415 * ___m_BlinkCoroutine_53;
	// System.Single UnityEngine.UI.InputField::m_BlinkStartTime
	float ___m_BlinkStartTime_54;
	// System.Int32 UnityEngine.UI.InputField::m_DrawStart
	int32_t ___m_DrawStart_55;
	// System.Int32 UnityEngine.UI.InputField::m_DrawEnd
	int32_t ___m_DrawEnd_56;
	// UnityEngine.Coroutine UnityEngine.UI.InputField::m_DragCoroutine
	Coroutine_t3829159415 * ___m_DragCoroutine_57;
	// System.String UnityEngine.UI.InputField::m_OriginalText
	String_t* ___m_OriginalText_58;
	// System.Boolean UnityEngine.UI.InputField::m_WasCanceled
	bool ___m_WasCanceled_59;
	// System.Boolean UnityEngine.UI.InputField::m_HasDoneFocusTransition
	bool ___m_HasDoneFocusTransition_60;
	// UnityEngine.Event UnityEngine.UI.InputField::m_ProcessingEvent
	Event_t2956885303 * ___m_ProcessingEvent_62;

public:
	inline static int32_t get_offset_of_m_Keyboard_16() { return static_cast<int32_t>(offsetof(InputField_t3762917431, ___m_Keyboard_16)); }
	inline TouchScreenKeyboard_t731888065 * get_m_Keyboard_16() const { return ___m_Keyboard_16; }
	inline TouchScreenKeyboard_t731888065 ** get_address_of_m_Keyboard_16() { return &___m_Keyboard_16; }
	inline void set_m_Keyboard_16(TouchScreenKeyboard_t731888065 * value)
	{
		___m_Keyboard_16 = value;
		Il2CppCodeGenWriteBarrier((&___m_Keyboard_16), value);
	}

	inline static int32_t get_offset_of_m_TextComponent_18() { return static_cast<int32_t>(offsetof(InputField_t3762917431, ___m_TextComponent_18)); }
	inline Text_t1901882714 * get_m_TextComponent_18() const { return ___m_TextComponent_18; }
	inline Text_t1901882714 ** get_address_of_m_TextComponent_18() { return &___m_TextComponent_18; }
	inline void set_m_TextComponent_18(Text_t1901882714 * value)
	{
		___m_TextComponent_18 = value;
		Il2CppCodeGenWriteBarrier((&___m_TextComponent_18), value);
	}

	inline static int32_t get_offset_of_m_Placeholder_19() { return static_cast<int32_t>(offsetof(InputField_t3762917431, ___m_Placeholder_19)); }
	inline Graphic_t1660335611 * get_m_Placeholder_19() const { return ___m_Placeholder_19; }
	inline Graphic_t1660335611 ** get_address_of_m_Placeholder_19() { return &___m_Placeholder_19; }
	inline void set_m_Placeholder_19(Graphic_t1660335611 * value)
	{
		___m_Placeholder_19 = value;
		Il2CppCodeGenWriteBarrier((&___m_Placeholder_19), value);
	}

	inline static int32_t get_offset_of_m_ContentType_20() { return static_cast<int32_t>(offsetof(InputField_t3762917431, ___m_ContentType_20)); }
	inline int32_t get_m_ContentType_20() const { return ___m_ContentType_20; }
	inline int32_t* get_address_of_m_ContentType_20() { return &___m_ContentType_20; }
	inline void set_m_ContentType_20(int32_t value)
	{
		___m_ContentType_20 = value;
	}

	inline static int32_t get_offset_of_m_InputType_21() { return static_cast<int32_t>(offsetof(InputField_t3762917431, ___m_InputType_21)); }
	inline int32_t get_m_InputType_21() const { return ___m_InputType_21; }
	inline int32_t* get_address_of_m_InputType_21() { return &___m_InputType_21; }
	inline void set_m_InputType_21(int32_t value)
	{
		___m_InputType_21 = value;
	}

	inline static int32_t get_offset_of_m_AsteriskChar_22() { return static_cast<int32_t>(offsetof(InputField_t3762917431, ___m_AsteriskChar_22)); }
	inline Il2CppChar get_m_AsteriskChar_22() const { return ___m_AsteriskChar_22; }
	inline Il2CppChar* get_address_of_m_AsteriskChar_22() { return &___m_AsteriskChar_22; }
	inline void set_m_AsteriskChar_22(Il2CppChar value)
	{
		___m_AsteriskChar_22 = value;
	}

	inline static int32_t get_offset_of_m_KeyboardType_23() { return static_cast<int32_t>(offsetof(InputField_t3762917431, ___m_KeyboardType_23)); }
	inline int32_t get_m_KeyboardType_23() const { return ___m_KeyboardType_23; }
	inline int32_t* get_address_of_m_KeyboardType_23() { return &___m_KeyboardType_23; }
	inline void set_m_KeyboardType_23(int32_t value)
	{
		___m_KeyboardType_23 = value;
	}

	inline static int32_t get_offset_of_m_LineType_24() { return static_cast<int32_t>(offsetof(InputField_t3762917431, ___m_LineType_24)); }
	inline int32_t get_m_LineType_24() const { return ___m_LineType_24; }
	inline int32_t* get_address_of_m_LineType_24() { return &___m_LineType_24; }
	inline void set_m_LineType_24(int32_t value)
	{
		___m_LineType_24 = value;
	}

	inline static int32_t get_offset_of_m_HideMobileInput_25() { return static_cast<int32_t>(offsetof(InputField_t3762917431, ___m_HideMobileInput_25)); }
	inline bool get_m_HideMobileInput_25() const { return ___m_HideMobileInput_25; }
	inline bool* get_address_of_m_HideMobileInput_25() { return &___m_HideMobileInput_25; }
	inline void set_m_HideMobileInput_25(bool value)
	{
		___m_HideMobileInput_25 = value;
	}

	inline static int32_t get_offset_of_m_CharacterValidation_26() { return static_cast<int32_t>(offsetof(InputField_t3762917431, ___m_CharacterValidation_26)); }
	inline int32_t get_m_CharacterValidation_26() const { return ___m_CharacterValidation_26; }
	inline int32_t* get_address_of_m_CharacterValidation_26() { return &___m_CharacterValidation_26; }
	inline void set_m_CharacterValidation_26(int32_t value)
	{
		___m_CharacterValidation_26 = value;
	}

	inline static int32_t get_offset_of_m_CharacterLimit_27() { return static_cast<int32_t>(offsetof(InputField_t3762917431, ___m_CharacterLimit_27)); }
	inline int32_t get_m_CharacterLimit_27() const { return ___m_CharacterLimit_27; }
	inline int32_t* get_address_of_m_CharacterLimit_27() { return &___m_CharacterLimit_27; }
	inline void set_m_CharacterLimit_27(int32_t value)
	{
		___m_CharacterLimit_27 = value;
	}

	inline static int32_t get_offset_of_m_OnEndEdit_28() { return static_cast<int32_t>(offsetof(InputField_t3762917431, ___m_OnEndEdit_28)); }
	inline SubmitEvent_t648412432 * get_m_OnEndEdit_28() const { return ___m_OnEndEdit_28; }
	inline SubmitEvent_t648412432 ** get_address_of_m_OnEndEdit_28() { return &___m_OnEndEdit_28; }
	inline void set_m_OnEndEdit_28(SubmitEvent_t648412432 * value)
	{
		___m_OnEndEdit_28 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnEndEdit_28), value);
	}

	inline static int32_t get_offset_of_m_OnValueChanged_29() { return static_cast<int32_t>(offsetof(InputField_t3762917431, ___m_OnValueChanged_29)); }
	inline OnChangeEvent_t467195904 * get_m_OnValueChanged_29() const { return ___m_OnValueChanged_29; }
	inline OnChangeEvent_t467195904 ** get_address_of_m_OnValueChanged_29() { return &___m_OnValueChanged_29; }
	inline void set_m_OnValueChanged_29(OnChangeEvent_t467195904 * value)
	{
		___m_OnValueChanged_29 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnValueChanged_29), value);
	}

	inline static int32_t get_offset_of_m_OnValidateInput_30() { return static_cast<int32_t>(offsetof(InputField_t3762917431, ___m_OnValidateInput_30)); }
	inline OnValidateInput_t2355412304 * get_m_OnValidateInput_30() const { return ___m_OnValidateInput_30; }
	inline OnValidateInput_t2355412304 ** get_address_of_m_OnValidateInput_30() { return &___m_OnValidateInput_30; }
	inline void set_m_OnValidateInput_30(OnValidateInput_t2355412304 * value)
	{
		___m_OnValidateInput_30 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnValidateInput_30), value);
	}

	inline static int32_t get_offset_of_m_CaretColor_31() { return static_cast<int32_t>(offsetof(InputField_t3762917431, ___m_CaretColor_31)); }
	inline Color_t2555686324  get_m_CaretColor_31() const { return ___m_CaretColor_31; }
	inline Color_t2555686324 * get_address_of_m_CaretColor_31() { return &___m_CaretColor_31; }
	inline void set_m_CaretColor_31(Color_t2555686324  value)
	{
		___m_CaretColor_31 = value;
	}

	inline static int32_t get_offset_of_m_CustomCaretColor_32() { return static_cast<int32_t>(offsetof(InputField_t3762917431, ___m_CustomCaretColor_32)); }
	inline bool get_m_CustomCaretColor_32() const { return ___m_CustomCaretColor_32; }
	inline bool* get_address_of_m_CustomCaretColor_32() { return &___m_CustomCaretColor_32; }
	inline void set_m_CustomCaretColor_32(bool value)
	{
		___m_CustomCaretColor_32 = value;
	}

	inline static int32_t get_offset_of_m_SelectionColor_33() { return static_cast<int32_t>(offsetof(InputField_t3762917431, ___m_SelectionColor_33)); }
	inline Color_t2555686324  get_m_SelectionColor_33() const { return ___m_SelectionColor_33; }
	inline Color_t2555686324 * get_address_of_m_SelectionColor_33() { return &___m_SelectionColor_33; }
	inline void set_m_SelectionColor_33(Color_t2555686324  value)
	{
		___m_SelectionColor_33 = value;
	}

	inline static int32_t get_offset_of_m_Text_34() { return static_cast<int32_t>(offsetof(InputField_t3762917431, ___m_Text_34)); }
	inline String_t* get_m_Text_34() const { return ___m_Text_34; }
	inline String_t** get_address_of_m_Text_34() { return &___m_Text_34; }
	inline void set_m_Text_34(String_t* value)
	{
		___m_Text_34 = value;
		Il2CppCodeGenWriteBarrier((&___m_Text_34), value);
	}

	inline static int32_t get_offset_of_m_CaretBlinkRate_35() { return static_cast<int32_t>(offsetof(InputField_t3762917431, ___m_CaretBlinkRate_35)); }
	inline float get_m_CaretBlinkRate_35() const { return ___m_CaretBlinkRate_35; }
	inline float* get_address_of_m_CaretBlinkRate_35() { return &___m_CaretBlinkRate_35; }
	inline void set_m_CaretBlinkRate_35(float value)
	{
		___m_CaretBlinkRate_35 = value;
	}

	inline static int32_t get_offset_of_m_CaretWidth_36() { return static_cast<int32_t>(offsetof(InputField_t3762917431, ___m_CaretWidth_36)); }
	inline int32_t get_m_CaretWidth_36() const { return ___m_CaretWidth_36; }
	inline int32_t* get_address_of_m_CaretWidth_36() { return &___m_CaretWidth_36; }
	inline void set_m_CaretWidth_36(int32_t value)
	{
		___m_CaretWidth_36 = value;
	}

	inline static int32_t get_offset_of_m_ReadOnly_37() { return static_cast<int32_t>(offsetof(InputField_t3762917431, ___m_ReadOnly_37)); }
	inline bool get_m_ReadOnly_37() const { return ___m_ReadOnly_37; }
	inline bool* get_address_of_m_ReadOnly_37() { return &___m_ReadOnly_37; }
	inline void set_m_ReadOnly_37(bool value)
	{
		___m_ReadOnly_37 = value;
	}

	inline static int32_t get_offset_of_m_CaretPosition_38() { return static_cast<int32_t>(offsetof(InputField_t3762917431, ___m_CaretPosition_38)); }
	inline int32_t get_m_CaretPosition_38() const { return ___m_CaretPosition_38; }
	inline int32_t* get_address_of_m_CaretPosition_38() { return &___m_CaretPosition_38; }
	inline void set_m_CaretPosition_38(int32_t value)
	{
		___m_CaretPosition_38 = value;
	}

	inline static int32_t get_offset_of_m_CaretSelectPosition_39() { return static_cast<int32_t>(offsetof(InputField_t3762917431, ___m_CaretSelectPosition_39)); }
	inline int32_t get_m_CaretSelectPosition_39() const { return ___m_CaretSelectPosition_39; }
	inline int32_t* get_address_of_m_CaretSelectPosition_39() { return &___m_CaretSelectPosition_39; }
	inline void set_m_CaretSelectPosition_39(int32_t value)
	{
		___m_CaretSelectPosition_39 = value;
	}

	inline static int32_t get_offset_of_caretRectTrans_40() { return static_cast<int32_t>(offsetof(InputField_t3762917431, ___caretRectTrans_40)); }
	inline RectTransform_t3704657025 * get_caretRectTrans_40() const { return ___caretRectTrans_40; }
	inline RectTransform_t3704657025 ** get_address_of_caretRectTrans_40() { return &___caretRectTrans_40; }
	inline void set_caretRectTrans_40(RectTransform_t3704657025 * value)
	{
		___caretRectTrans_40 = value;
		Il2CppCodeGenWriteBarrier((&___caretRectTrans_40), value);
	}

	inline static int32_t get_offset_of_m_CursorVerts_41() { return static_cast<int32_t>(offsetof(InputField_t3762917431, ___m_CursorVerts_41)); }
	inline UIVertexU5BU5D_t1981460040* get_m_CursorVerts_41() const { return ___m_CursorVerts_41; }
	inline UIVertexU5BU5D_t1981460040** get_address_of_m_CursorVerts_41() { return &___m_CursorVerts_41; }
	inline void set_m_CursorVerts_41(UIVertexU5BU5D_t1981460040* value)
	{
		___m_CursorVerts_41 = value;
		Il2CppCodeGenWriteBarrier((&___m_CursorVerts_41), value);
	}

	inline static int32_t get_offset_of_m_InputTextCache_42() { return static_cast<int32_t>(offsetof(InputField_t3762917431, ___m_InputTextCache_42)); }
	inline TextGenerator_t3211863866 * get_m_InputTextCache_42() const { return ___m_InputTextCache_42; }
	inline TextGenerator_t3211863866 ** get_address_of_m_InputTextCache_42() { return &___m_InputTextCache_42; }
	inline void set_m_InputTextCache_42(TextGenerator_t3211863866 * value)
	{
		___m_InputTextCache_42 = value;
		Il2CppCodeGenWriteBarrier((&___m_InputTextCache_42), value);
	}

	inline static int32_t get_offset_of_m_CachedInputRenderer_43() { return static_cast<int32_t>(offsetof(InputField_t3762917431, ___m_CachedInputRenderer_43)); }
	inline CanvasRenderer_t2598313366 * get_m_CachedInputRenderer_43() const { return ___m_CachedInputRenderer_43; }
	inline CanvasRenderer_t2598313366 ** get_address_of_m_CachedInputRenderer_43() { return &___m_CachedInputRenderer_43; }
	inline void set_m_CachedInputRenderer_43(CanvasRenderer_t2598313366 * value)
	{
		___m_CachedInputRenderer_43 = value;
		Il2CppCodeGenWriteBarrier((&___m_CachedInputRenderer_43), value);
	}

	inline static int32_t get_offset_of_m_PreventFontCallback_44() { return static_cast<int32_t>(offsetof(InputField_t3762917431, ___m_PreventFontCallback_44)); }
	inline bool get_m_PreventFontCallback_44() const { return ___m_PreventFontCallback_44; }
	inline bool* get_address_of_m_PreventFontCallback_44() { return &___m_PreventFontCallback_44; }
	inline void set_m_PreventFontCallback_44(bool value)
	{
		___m_PreventFontCallback_44 = value;
	}

	inline static int32_t get_offset_of_m_Mesh_45() { return static_cast<int32_t>(offsetof(InputField_t3762917431, ___m_Mesh_45)); }
	inline Mesh_t3648964284 * get_m_Mesh_45() const { return ___m_Mesh_45; }
	inline Mesh_t3648964284 ** get_address_of_m_Mesh_45() { return &___m_Mesh_45; }
	inline void set_m_Mesh_45(Mesh_t3648964284 * value)
	{
		___m_Mesh_45 = value;
		Il2CppCodeGenWriteBarrier((&___m_Mesh_45), value);
	}

	inline static int32_t get_offset_of_m_AllowInput_46() { return static_cast<int32_t>(offsetof(InputField_t3762917431, ___m_AllowInput_46)); }
	inline bool get_m_AllowInput_46() const { return ___m_AllowInput_46; }
	inline bool* get_address_of_m_AllowInput_46() { return &___m_AllowInput_46; }
	inline void set_m_AllowInput_46(bool value)
	{
		___m_AllowInput_46 = value;
	}

	inline static int32_t get_offset_of_m_ShouldActivateNextUpdate_47() { return static_cast<int32_t>(offsetof(InputField_t3762917431, ___m_ShouldActivateNextUpdate_47)); }
	inline bool get_m_ShouldActivateNextUpdate_47() const { return ___m_ShouldActivateNextUpdate_47; }
	inline bool* get_address_of_m_ShouldActivateNextUpdate_47() { return &___m_ShouldActivateNextUpdate_47; }
	inline void set_m_ShouldActivateNextUpdate_47(bool value)
	{
		___m_ShouldActivateNextUpdate_47 = value;
	}

	inline static int32_t get_offset_of_m_UpdateDrag_48() { return static_cast<int32_t>(offsetof(InputField_t3762917431, ___m_UpdateDrag_48)); }
	inline bool get_m_UpdateDrag_48() const { return ___m_UpdateDrag_48; }
	inline bool* get_address_of_m_UpdateDrag_48() { return &___m_UpdateDrag_48; }
	inline void set_m_UpdateDrag_48(bool value)
	{
		___m_UpdateDrag_48 = value;
	}

	inline static int32_t get_offset_of_m_DragPositionOutOfBounds_49() { return static_cast<int32_t>(offsetof(InputField_t3762917431, ___m_DragPositionOutOfBounds_49)); }
	inline bool get_m_DragPositionOutOfBounds_49() const { return ___m_DragPositionOutOfBounds_49; }
	inline bool* get_address_of_m_DragPositionOutOfBounds_49() { return &___m_DragPositionOutOfBounds_49; }
	inline void set_m_DragPositionOutOfBounds_49(bool value)
	{
		___m_DragPositionOutOfBounds_49 = value;
	}

	inline static int32_t get_offset_of_m_CaretVisible_52() { return static_cast<int32_t>(offsetof(InputField_t3762917431, ___m_CaretVisible_52)); }
	inline bool get_m_CaretVisible_52() const { return ___m_CaretVisible_52; }
	inline bool* get_address_of_m_CaretVisible_52() { return &___m_CaretVisible_52; }
	inline void set_m_CaretVisible_52(bool value)
	{
		___m_CaretVisible_52 = value;
	}

	inline static int32_t get_offset_of_m_BlinkCoroutine_53() { return static_cast<int32_t>(offsetof(InputField_t3762917431, ___m_BlinkCoroutine_53)); }
	inline Coroutine_t3829159415 * get_m_BlinkCoroutine_53() const { return ___m_BlinkCoroutine_53; }
	inline Coroutine_t3829159415 ** get_address_of_m_BlinkCoroutine_53() { return &___m_BlinkCoroutine_53; }
	inline void set_m_BlinkCoroutine_53(Coroutine_t3829159415 * value)
	{
		___m_BlinkCoroutine_53 = value;
		Il2CppCodeGenWriteBarrier((&___m_BlinkCoroutine_53), value);
	}

	inline static int32_t get_offset_of_m_BlinkStartTime_54() { return static_cast<int32_t>(offsetof(InputField_t3762917431, ___m_BlinkStartTime_54)); }
	inline float get_m_BlinkStartTime_54() const { return ___m_BlinkStartTime_54; }
	inline float* get_address_of_m_BlinkStartTime_54() { return &___m_BlinkStartTime_54; }
	inline void set_m_BlinkStartTime_54(float value)
	{
		___m_BlinkStartTime_54 = value;
	}

	inline static int32_t get_offset_of_m_DrawStart_55() { return static_cast<int32_t>(offsetof(InputField_t3762917431, ___m_DrawStart_55)); }
	inline int32_t get_m_DrawStart_55() const { return ___m_DrawStart_55; }
	inline int32_t* get_address_of_m_DrawStart_55() { return &___m_DrawStart_55; }
	inline void set_m_DrawStart_55(int32_t value)
	{
		___m_DrawStart_55 = value;
	}

	inline static int32_t get_offset_of_m_DrawEnd_56() { return static_cast<int32_t>(offsetof(InputField_t3762917431, ___m_DrawEnd_56)); }
	inline int32_t get_m_DrawEnd_56() const { return ___m_DrawEnd_56; }
	inline int32_t* get_address_of_m_DrawEnd_56() { return &___m_DrawEnd_56; }
	inline void set_m_DrawEnd_56(int32_t value)
	{
		___m_DrawEnd_56 = value;
	}

	inline static int32_t get_offset_of_m_DragCoroutine_57() { return static_cast<int32_t>(offsetof(InputField_t3762917431, ___m_DragCoroutine_57)); }
	inline Coroutine_t3829159415 * get_m_DragCoroutine_57() const { return ___m_DragCoroutine_57; }
	inline Coroutine_t3829159415 ** get_address_of_m_DragCoroutine_57() { return &___m_DragCoroutine_57; }
	inline void set_m_DragCoroutine_57(Coroutine_t3829159415 * value)
	{
		___m_DragCoroutine_57 = value;
		Il2CppCodeGenWriteBarrier((&___m_DragCoroutine_57), value);
	}

	inline static int32_t get_offset_of_m_OriginalText_58() { return static_cast<int32_t>(offsetof(InputField_t3762917431, ___m_OriginalText_58)); }
	inline String_t* get_m_OriginalText_58() const { return ___m_OriginalText_58; }
	inline String_t** get_address_of_m_OriginalText_58() { return &___m_OriginalText_58; }
	inline void set_m_OriginalText_58(String_t* value)
	{
		___m_OriginalText_58 = value;
		Il2CppCodeGenWriteBarrier((&___m_OriginalText_58), value);
	}

	inline static int32_t get_offset_of_m_WasCanceled_59() { return static_cast<int32_t>(offsetof(InputField_t3762917431, ___m_WasCanceled_59)); }
	inline bool get_m_WasCanceled_59() const { return ___m_WasCanceled_59; }
	inline bool* get_address_of_m_WasCanceled_59() { return &___m_WasCanceled_59; }
	inline void set_m_WasCanceled_59(bool value)
	{
		___m_WasCanceled_59 = value;
	}

	inline static int32_t get_offset_of_m_HasDoneFocusTransition_60() { return static_cast<int32_t>(offsetof(InputField_t3762917431, ___m_HasDoneFocusTransition_60)); }
	inline bool get_m_HasDoneFocusTransition_60() const { return ___m_HasDoneFocusTransition_60; }
	inline bool* get_address_of_m_HasDoneFocusTransition_60() { return &___m_HasDoneFocusTransition_60; }
	inline void set_m_HasDoneFocusTransition_60(bool value)
	{
		___m_HasDoneFocusTransition_60 = value;
	}

	inline static int32_t get_offset_of_m_ProcessingEvent_62() { return static_cast<int32_t>(offsetof(InputField_t3762917431, ___m_ProcessingEvent_62)); }
	inline Event_t2956885303 * get_m_ProcessingEvent_62() const { return ___m_ProcessingEvent_62; }
	inline Event_t2956885303 ** get_address_of_m_ProcessingEvent_62() { return &___m_ProcessingEvent_62; }
	inline void set_m_ProcessingEvent_62(Event_t2956885303 * value)
	{
		___m_ProcessingEvent_62 = value;
		Il2CppCodeGenWriteBarrier((&___m_ProcessingEvent_62), value);
	}
};

struct InputField_t3762917431_StaticFields
{
public:
	// System.Char[] UnityEngine.UI.InputField::kSeparators
	CharU5BU5D_t3528271667* ___kSeparators_17;

public:
	inline static int32_t get_offset_of_kSeparators_17() { return static_cast<int32_t>(offsetof(InputField_t3762917431_StaticFields, ___kSeparators_17)); }
	inline CharU5BU5D_t3528271667* get_kSeparators_17() const { return ___kSeparators_17; }
	inline CharU5BU5D_t3528271667** get_address_of_kSeparators_17() { return &___kSeparators_17; }
	inline void set_kSeparators_17(CharU5BU5D_t3528271667* value)
	{
		___kSeparators_17 = value;
		Il2CppCodeGenWriteBarrier((&___kSeparators_17), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INPUTFIELD_T3762917431_H
#ifndef TEXT_T1901882714_H
#define TEXT_T1901882714_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Text
struct  Text_t1901882714  : public MaskableGraphic_t3839221559
{
public:
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_t746620069 * ___m_FontData_28;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_29;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_t3211863866 * ___m_TextCache_30;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_t3211863866 * ___m_TextCacheForLayout_31;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_33;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_t1981460040* ___m_TempVerts_34;

public:
	inline static int32_t get_offset_of_m_FontData_28() { return static_cast<int32_t>(offsetof(Text_t1901882714, ___m_FontData_28)); }
	inline FontData_t746620069 * get_m_FontData_28() const { return ___m_FontData_28; }
	inline FontData_t746620069 ** get_address_of_m_FontData_28() { return &___m_FontData_28; }
	inline void set_m_FontData_28(FontData_t746620069 * value)
	{
		___m_FontData_28 = value;
		Il2CppCodeGenWriteBarrier((&___m_FontData_28), value);
	}

	inline static int32_t get_offset_of_m_Text_29() { return static_cast<int32_t>(offsetof(Text_t1901882714, ___m_Text_29)); }
	inline String_t* get_m_Text_29() const { return ___m_Text_29; }
	inline String_t** get_address_of_m_Text_29() { return &___m_Text_29; }
	inline void set_m_Text_29(String_t* value)
	{
		___m_Text_29 = value;
		Il2CppCodeGenWriteBarrier((&___m_Text_29), value);
	}

	inline static int32_t get_offset_of_m_TextCache_30() { return static_cast<int32_t>(offsetof(Text_t1901882714, ___m_TextCache_30)); }
	inline TextGenerator_t3211863866 * get_m_TextCache_30() const { return ___m_TextCache_30; }
	inline TextGenerator_t3211863866 ** get_address_of_m_TextCache_30() { return &___m_TextCache_30; }
	inline void set_m_TextCache_30(TextGenerator_t3211863866 * value)
	{
		___m_TextCache_30 = value;
		Il2CppCodeGenWriteBarrier((&___m_TextCache_30), value);
	}

	inline static int32_t get_offset_of_m_TextCacheForLayout_31() { return static_cast<int32_t>(offsetof(Text_t1901882714, ___m_TextCacheForLayout_31)); }
	inline TextGenerator_t3211863866 * get_m_TextCacheForLayout_31() const { return ___m_TextCacheForLayout_31; }
	inline TextGenerator_t3211863866 ** get_address_of_m_TextCacheForLayout_31() { return &___m_TextCacheForLayout_31; }
	inline void set_m_TextCacheForLayout_31(TextGenerator_t3211863866 * value)
	{
		___m_TextCacheForLayout_31 = value;
		Il2CppCodeGenWriteBarrier((&___m_TextCacheForLayout_31), value);
	}

	inline static int32_t get_offset_of_m_DisableFontTextureRebuiltCallback_33() { return static_cast<int32_t>(offsetof(Text_t1901882714, ___m_DisableFontTextureRebuiltCallback_33)); }
	inline bool get_m_DisableFontTextureRebuiltCallback_33() const { return ___m_DisableFontTextureRebuiltCallback_33; }
	inline bool* get_address_of_m_DisableFontTextureRebuiltCallback_33() { return &___m_DisableFontTextureRebuiltCallback_33; }
	inline void set_m_DisableFontTextureRebuiltCallback_33(bool value)
	{
		___m_DisableFontTextureRebuiltCallback_33 = value;
	}

	inline static int32_t get_offset_of_m_TempVerts_34() { return static_cast<int32_t>(offsetof(Text_t1901882714, ___m_TempVerts_34)); }
	inline UIVertexU5BU5D_t1981460040* get_m_TempVerts_34() const { return ___m_TempVerts_34; }
	inline UIVertexU5BU5D_t1981460040** get_address_of_m_TempVerts_34() { return &___m_TempVerts_34; }
	inline void set_m_TempVerts_34(UIVertexU5BU5D_t1981460040* value)
	{
		___m_TempVerts_34 = value;
		Il2CppCodeGenWriteBarrier((&___m_TempVerts_34), value);
	}
};

struct Text_t1901882714_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t340375123 * ___s_DefaultText_32;

public:
	inline static int32_t get_offset_of_s_DefaultText_32() { return static_cast<int32_t>(offsetof(Text_t1901882714_StaticFields, ___s_DefaultText_32)); }
	inline Material_t340375123 * get_s_DefaultText_32() const { return ___s_DefaultText_32; }
	inline Material_t340375123 ** get_address_of_s_DefaultText_32() { return &___s_DefaultText_32; }
	inline void set_s_DefaultText_32(Material_t340375123 * value)
	{
		___s_DefaultText_32 = value;
		Il2CppCodeGenWriteBarrier((&___s_DefaultText_32), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXT_T1901882714_H
// System.String[]
struct StringU5BU5D_t1281789340  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) String_t* m_Items[1];

public:
	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};


// System.Void System.EventHandler`1<System.Object>::.ctor(System.Object,System.IntPtr)
extern "C"  void EventHandler_1__ctor_m699822512_gshared (EventHandler_1_t1004265597 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method);
// System.Void System.EventHandler`1<System.Object>::Invoke(System.Object,!0)
extern "C"  void EventHandler_1_Invoke_m4124830036_gshared (EventHandler_1_t1004265597 * __this, RuntimeObject * p0, RuntimeObject * p1, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
extern "C"  RuntimeObject * GameObject_GetComponent_TisRuntimeObject_m2049753423_gshared (GameObject_t1113636619 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponentInChildren<System.Object>()
extern "C"  RuntimeObject * Component_GetComponentInChildren_TisRuntimeObject_m1033527003_gshared (Component_t1923634451 * __this, const RuntimeMethod* method);

// System.Void System.Object::.ctor()
extern "C"  void Object__ctor_m297566312 (RuntimeObject * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void GNSAdSDK.iOS.RewardVideoAdClientImpl::.ctor()
extern "C"  void RewardVideoAdClientImpl__ctor_m2803547931 (RewardVideoAdClientImpl_t1565645521 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// GNSAdSDK.Clients.RewardVideoAdClient GNSAdSDK.AdClientFactory::CreateRewardVideoAdClient()
extern "C"  RuntimeObject* AdClientFactory_CreateRewardVideoAdClient_m2878427344 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.EventHandler`1<System.EventArgs>::.ctor(System.Object,System.IntPtr)
#define EventHandler_1__ctor_m4114736910(__this, p0, p1, method) ((  void (*) (EventHandler_1_t1515976428 *, RuntimeObject *, intptr_t, const RuntimeMethod*))EventHandler_1__ctor_m699822512_gshared)(__this, p0, p1, method)
// System.Void System.EventHandler`1<GNSAdSDK.Api.VideoRewardData>::.ctor(System.Object,System.IntPtr)
#define EventHandler_1__ctor_m2791549744(__this, p0, p1, method) ((  void (*) (EventHandler_1_t2650267322 *, RuntimeObject *, intptr_t, const RuntimeMethod*))EventHandler_1__ctor_m699822512_gshared)(__this, p0, p1, method)
// System.Void System.EventHandler`1<GNSAdSDK.Api.VideoRewardFailedData>::.ctor(System.Object,System.IntPtr)
#define EventHandler_1__ctor_m3728933429(__this, p0, p1, method) ((  void (*) (EventHandler_1_t1820321320 *, RuntimeObject *, intptr_t, const RuntimeMethod*))EventHandler_1__ctor_m699822512_gshared)(__this, p0, p1, method)
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
extern "C"  Delegate_t1188392813 * Delegate_Combine_m1859655160 (RuntimeObject * __this /* static, unused */, Delegate_t1188392813 * p0, Delegate_t1188392813 * p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
extern "C"  Delegate_t1188392813 * Delegate_Remove_m334097152 (RuntimeObject * __this /* static, unused */, Delegate_t1188392813 * p0, Delegate_t1188392813 * p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void GNSAdSDK.Api.RewardVideoAd::.ctor()
extern "C"  void RewardVideoAd__ctor_m4107737319 (RewardVideoAd_t2059019935 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.EventHandler`1<System.EventArgs>::Invoke(System.Object,!0)
#define EventHandler_1_Invoke_m63082545(__this, p0, p1, method) ((  void (*) (EventHandler_1_t1515976428 *, RuntimeObject *, EventArgs_t3591816995 *, const RuntimeMethod*))EventHandler_1_Invoke_m4124830036_gshared)(__this, p0, p1, method)
// System.Void System.EventHandler`1<GNSAdSDK.Api.VideoRewardData>::Invoke(System.Object,!0)
#define EventHandler_1_Invoke_m28932318(__this, p0, p1, method) ((  void (*) (EventHandler_1_t2650267322 *, RuntimeObject *, VideoRewardData_t431140593 *, const RuntimeMethod*))EventHandler_1_Invoke_m4124830036_gshared)(__this, p0, p1, method)
// System.Void System.EventHandler`1<GNSAdSDK.Api.VideoRewardFailedData>::Invoke(System.Object,!0)
#define EventHandler_1_Invoke_m2342911564(__this, p0, p1, method) ((  void (*) (EventHandler_1_t1820321320 *, RuntimeObject *, VideoRewardFailedData_t3896161887 *, const RuntimeMethod*))EventHandler_1_Invoke_m4124830036_gshared)(__this, p0, p1, method)
// System.Void System.EventArgs::.ctor()
extern "C"  void EventArgs__ctor_m32674013 (EventArgs_t3591816995 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Concat(System.String,System.String)
extern "C"  String_t* String_Concat_m3937257545 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Debug::Log(System.Object)
extern "C"  void Debug_Log_m4051431634 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void GNSAdSDK.iOS.RewardVideoAdClientImpl::RewardVideoAdDidReceiveAd(System.IntPtr)
extern "C"  void RewardVideoAdClientImpl_RewardVideoAdDidReceiveAd_m1121021960 (RuntimeObject * __this /* static, unused */, intptr_t ___rewardVideoAdClient0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void GNSAdSDK.iOS.RewardVideoAdClientImpl::RewardVideoAdDidStartPlaying(System.IntPtr)
extern "C"  void RewardVideoAdClientImpl_RewardVideoAdDidStartPlaying_m1506431413 (RuntimeObject * __this /* static, unused */, intptr_t ___rewardVideoAdClient0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void GNSAdSDK.iOS.RewardVideoAdClientImpl::DidRewardUserWithReward(System.IntPtr,System.String,System.Double)
extern "C"  void RewardVideoAdClientImpl_DidRewardUserWithReward_m1394350829 (RuntimeObject * __this /* static, unused */, intptr_t ___rewardVideoAdClient0, String_t* ___rewardType1, double ___rewardAmount2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void GNSAdSDK.iOS.RewardVideoAdClientImpl::RewardVideoAdDidClose(System.IntPtr)
extern "C"  void RewardVideoAdClientImpl_RewardVideoAdDidClose_m420171930 (RuntimeObject * __this /* static, unused */, intptr_t ___rewardVideoAdClient0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void GNSAdSDK.iOS.RewardVideoAdClientImpl::DidFailToLoadWithError(System.IntPtr,System.Int32,System.String)
extern "C"  void RewardVideoAdClientImpl_DidFailToLoadWithError_m2099900401 (RuntimeObject * __this /* static, unused */, intptr_t ___rewardVideoAdClient0, int32_t ___errorCode1, String_t* ___errorDescription2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void GNSAdSDK.iOS.RewardVideoAdClientImpl::CreateRewardVideoAd()
extern "C"  void RewardVideoAdClientImpl_CreateRewardVideoAd_m1561433194 (RewardVideoAdClientImpl_t1565645521 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void GNSAdSDK.iOS.Externs::GNSURelease(System.IntPtr)
extern "C"  void Externs_GNSURelease_m1265223388 (RuntimeObject * __this /* static, unused */, intptr_t ___rewardVideoAd0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Runtime.InteropServices.GCHandle System.Runtime.InteropServices.GCHandle::Alloc(System.Object)
extern "C"  GCHandle_t3351438187  GCHandle_Alloc_m3053200191 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.IntPtr System.Runtime.InteropServices.GCHandle::op_Explicit(System.Runtime.InteropServices.GCHandle)
extern "C"  intptr_t GCHandle_op_Explicit_m127498741 (RuntimeObject * __this /* static, unused */, GCHandle_t3351438187  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.IntPtr GNSAdSDK.iOS.Externs::GNSUCreateRewardVideoAd(System.IntPtr)
extern "C"  intptr_t Externs_GNSUCreateRewardVideoAd_m3821763676 (RuntimeObject * __this /* static, unused */, intptr_t ___rewardVideoAdClient0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void GNSAdSDK.iOS.RewardVideoAdClientImpl::set_RewardVideoAdPtr(System.IntPtr)
extern "C"  void RewardVideoAdClientImpl_set_RewardVideoAdPtr_m1873356605 (RewardVideoAdClientImpl_t1565645521 * __this, intptr_t ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.IntPtr GNSAdSDK.iOS.RewardVideoAdClientImpl::get_RewardVideoAdPtr()
extern "C"  intptr_t RewardVideoAdClientImpl_get_RewardVideoAdPtr_m1083220531 (RewardVideoAdClientImpl_t1565645521 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void GNSAdSDK.iOS.RewardVideoAdClientImpl/GNSURewardVideoAdDidReceiveAdCallback::.ctor(System.Object,System.IntPtr)
extern "C"  void GNSURewardVideoAdDidReceiveAdCallback__ctor_m2542616249 (GNSURewardVideoAdDidReceiveAdCallback_t2434243366 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void GNSAdSDK.iOS.RewardVideoAdClientImpl/GNSURewardVideoAdDidStartPlayingCallback::.ctor(System.Object,System.IntPtr)
extern "C"  void GNSURewardVideoAdDidStartPlayingCallback__ctor_m3166241316 (GNSURewardVideoAdDidStartPlayingCallback_t4256405145 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void GNSAdSDK.iOS.RewardVideoAdClientImpl/GNSURewardVideoAdCallback::.ctor(System.Object,System.IntPtr)
extern "C"  void GNSURewardVideoAdCallback__ctor_m3760677565 (GNSURewardVideoAdCallback_t434670165 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void GNSAdSDK.iOS.RewardVideoAdClientImpl/GNSURewardVideoAdDidCloseCallback::.ctor(System.Object,System.IntPtr)
extern "C"  void GNSURewardVideoAdDidCloseCallback__ctor_m23934238 (GNSURewardVideoAdDidCloseCallback_t4005382830 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void GNSAdSDK.iOS.RewardVideoAdClientImpl/GNSURewardVideoAdErrorCallback::.ctor(System.Object,System.IntPtr)
extern "C"  void GNSURewardVideoAdErrorCallback__ctor_m2667031627 (GNSURewardVideoAdErrorCallback_t2314677993 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void GNSAdSDK.iOS.Externs::GNSURewardVideoAdCallbacks(System.IntPtr,GNSAdSDK.iOS.RewardVideoAdClientImpl/GNSURewardVideoAdDidReceiveAdCallback,GNSAdSDK.iOS.RewardVideoAdClientImpl/GNSURewardVideoAdDidStartPlayingCallback,GNSAdSDK.iOS.RewardVideoAdClientImpl/GNSURewardVideoAdCallback,GNSAdSDK.iOS.RewardVideoAdClientImpl/GNSURewardVideoAdDidCloseCallback,GNSAdSDK.iOS.RewardVideoAdClientImpl/GNSURewardVideoAdErrorCallback)
extern "C"  void Externs_GNSURewardVideoAdCallbacks_m1806677466 (RuntimeObject * __this /* static, unused */, intptr_t ___rewardVideoAd0, GNSURewardVideoAdDidReceiveAdCallback_t2434243366 * ___rewardVideoAdDidReceiveAdCallback1, GNSURewardVideoAdDidStartPlayingCallback_t4256405145 * ___rewardVideoAdDidStartPlayingCallback2, GNSURewardVideoAdCallback_t434670165 * ___rewardVideoAdCallback3, GNSURewardVideoAdDidCloseCallback_t4005382830 * ___rewardVideoAdDidCloseCallback4, GNSURewardVideoAdErrorCallback_t2314677993 * ___rewardVideoAdErrorCallback5, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void GNSAdSDK.iOS.RewardVideoAdClientImpl::DestroyRewardVideoAd()
extern "C"  void RewardVideoAdClientImpl_DestroyRewardVideoAd_m4139553371 (RewardVideoAdClientImpl_t1565645521 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Runtime.InteropServices.GCHandle System.Runtime.InteropServices.GCHandle::op_Explicit(System.IntPtr)
extern "C"  GCHandle_t3351438187  GCHandle_op_Explicit_m976572069 (RuntimeObject * __this /* static, unused */, intptr_t p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.InteropServices.GCHandle::Free()
extern "C"  void GCHandle_Free_m1457699368 (GCHandle_t3351438187 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void GNSAdSDK.iOS.RewardVideoAdClientImpl::Dispose()
extern "C"  void RewardVideoAdClientImpl_Dispose_m3675713230 (RewardVideoAdClientImpl_t1565645521 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Object::Finalize()
extern "C"  void Object_Finalize_m3076187857 (RuntimeObject * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void GNSAdSDK.iOS.Externs::GNSURewardVideoAdLoadRequest(System.IntPtr,System.String)
extern "C"  void Externs_GNSURewardVideoAdLoadRequest_m2751123278 (RuntimeObject * __this /* static, unused */, intptr_t ___rewardVideoAd0, String_t* ___zoneId1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean GNSAdSDK.iOS.Externs::GNSURewardVideoAdCanShow(System.IntPtr)
extern "C"  bool Externs_GNSURewardVideoAdCanShow_m2483611378 (RuntimeObject * __this /* static, unused */, intptr_t ___rewardVideoAd0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void GNSAdSDK.iOS.Externs::GNSURewardVideoAdShow(System.IntPtr)
extern "C"  void Externs_GNSURewardVideoAdShow_m2360473702 (RuntimeObject * __this /* static, unused */, intptr_t ___rewardVideoAd0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// GNSAdSDK.iOS.RewardVideoAdClientImpl GNSAdSDK.iOS.RewardVideoAdClientImpl::IntPtrToRewardVideoAdClientImpl(System.IntPtr)
extern "C"  RewardVideoAdClientImpl_t1565645521 * RewardVideoAdClientImpl_IntPtrToRewardVideoAdClientImpl_m3856521960 (RuntimeObject * __this /* static, unused */, intptr_t ___rewardVideoAdClient0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void GNSAdSDK.Api.VideoRewardData::.ctor()
extern "C"  void VideoRewardData__ctor_m3738582510 (VideoRewardData_t431140593 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void GNSAdSDK.Api.VideoRewardData::set_Amount(System.Double)
extern "C"  void VideoRewardData_set_Amount_m1581478889 (VideoRewardData_t431140593 * __this, double ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void GNSAdSDK.Api.VideoRewardData::set_Type(System.String)
extern "C"  void VideoRewardData_set_Type_m3710895495 (VideoRewardData_t431140593 * __this, String_t* ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void GNSAdSDK.Api.VideoRewardFailedData::.ctor()
extern "C"  void VideoRewardFailedData__ctor_m860447526 (VideoRewardFailedData_t3896161887 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void GNSAdSDK.Api.VideoRewardFailedData::set_Code(System.Int32)
extern "C"  void VideoRewardFailedData_set_Code_m818218941 (VideoRewardFailedData_t3896161887 * __this, int32_t ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void GNSAdSDK.Api.VideoRewardFailedData::set_Message(System.String)
extern "C"  void VideoRewardFailedData_set_Message_m239672109 (VideoRewardFailedData_t3896161887 * __this, String_t* ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.InteropServices.GCHandle::get_Target()
extern "C"  RuntimeObject * GCHandle_get_Target_m1824973883 (GCHandle_t3351438187 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void GNSAdSDK.iOS.RewardVideoAdClientImpl/GNSURewardVideoAdCallback::Invoke(System.IntPtr,System.String,System.Double)
extern "C"  void GNSURewardVideoAdCallback_Invoke_m3989463145 (GNSURewardVideoAdCallback_t434670165 * __this, intptr_t ___rewardVideoAdClient0, String_t* ___rewardType1, double ___rewardAmount2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void GNSAdSDK.iOS.RewardVideoAdClientImpl/GNSURewardVideoAdDidCloseCallback::Invoke(System.IntPtr)
extern "C"  void GNSURewardVideoAdDidCloseCallback_Invoke_m793127847 (GNSURewardVideoAdDidCloseCallback_t4005382830 * __this, intptr_t ___rewardVideoAdClient0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void GNSAdSDK.iOS.RewardVideoAdClientImpl/GNSURewardVideoAdDidReceiveAdCallback::Invoke(System.IntPtr)
extern "C"  void GNSURewardVideoAdDidReceiveAdCallback_Invoke_m3685070492 (GNSURewardVideoAdDidReceiveAdCallback_t2434243366 * __this, intptr_t ___rewardVideoAdClient0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void GNSAdSDK.iOS.RewardVideoAdClientImpl/GNSURewardVideoAdDidStartPlayingCallback::Invoke(System.IntPtr)
extern "C"  void GNSURewardVideoAdDidStartPlayingCallback_Invoke_m3122020536 (GNSURewardVideoAdDidStartPlayingCallback_t4256405145 * __this, intptr_t ___rewardVideoAdClient0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void GNSAdSDK.iOS.RewardVideoAdClientImpl/GNSURewardVideoAdErrorCallback::Invoke(System.IntPtr,System.Int32,System.String)
extern "C"  void GNSURewardVideoAdErrorCallback_Invoke_m1143416352 (GNSURewardVideoAdErrorCallback_t2314677993 * __this, intptr_t ___rewardVideoAdClient0, int32_t ___errorCode1, String_t* ___errorDescription2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.MonoBehaviour::.ctor()
extern "C"  void MonoBehaviour__ctor_m1579109191 (MonoBehaviour_t3962482529 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// GNSAdSDK.Api.RewardVideoAd GNSAdSDK.Api.RewardVideoAd::get_Instance()
extern "C"  RewardVideoAd_t2059019935 * RewardVideoAd_get_Instance_m1143162705 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void GNSAdSDK.Api.RewardVideoAd::add_OnAdLoaded(System.EventHandler`1<System.EventArgs>)
extern "C"  void RewardVideoAd_add_OnAdLoaded_m1645794845 (RewardVideoAd_t2059019935 * __this, EventHandler_1_t1515976428 * ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void GNSAdSDK.Api.RewardVideoAd::add_OnAdStarted(System.EventHandler`1<GNSAdSDK.Api.VideoRewardData>)
extern "C"  void RewardVideoAd_add_OnAdStarted_m1491817010 (RewardVideoAd_t2059019935 * __this, EventHandler_1_t2650267322 * ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void GNSAdSDK.Api.RewardVideoAd::add_OnAdRewarded(System.EventHandler`1<GNSAdSDK.Api.VideoRewardData>)
extern "C"  void RewardVideoAd_add_OnAdRewarded_m2418067992 (RewardVideoAd_t2059019935 * __this, EventHandler_1_t2650267322 * ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void GNSAdSDK.Api.RewardVideoAd::add_OnAdClosed(System.EventHandler`1<GNSAdSDK.Api.VideoRewardData>)
extern "C"  void RewardVideoAd_add_OnAdClosed_m3758855288 (RewardVideoAd_t2059019935 * __this, EventHandler_1_t2650267322 * ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void GNSAdSDK.Api.RewardVideoAd::add_OnAdFailedToLoad(System.EventHandler`1<GNSAdSDK.Api.VideoRewardFailedData>)
extern "C"  void RewardVideoAd_add_OnAdFailedToLoad_m2979919485 (RewardVideoAd_t2059019935 * __this, EventHandler_1_t1820321320 * ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void ManageScrollContent::Logging(System.String)
extern "C"  void ManageScrollContent_Logging_m3887690237 (RuntimeObject * __this /* static, unused */, String_t* ___log0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void MainSceneScript::RegistRewardVideoAdEventHandler()
extern "C"  void MainSceneScript_RegistRewardVideoAdEventHandler_m2501865270 (MainSceneScript_t2935155245 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.GameObject::Find(System.String)
extern "C"  GameObject_t1113636619 * GameObject_Find_m2032535176 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.UI.Button>()
#define GameObject_GetComponent_TisButton_t4055032469_m1515138076(__this, method) ((  Button_t4055032469 * (*) (GameObject_t1113636619 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m2049753423_gshared)(__this, method)
// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::get_onClick()
extern "C"  ButtonClickedEvent_t48803504 * Button_get_onClick_m2332132945 (Button_t4055032469 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Events.UnityAction::.ctor(System.Object,System.IntPtr)
extern "C"  void UnityAction__ctor_m772160306 (UnityAction_t3245792599 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Events.UnityEvent::AddListener(UnityEngine.Events.UnityAction)
extern "C"  void UnityEvent_AddListener_m2276267359 (UnityEvent_t2581268647 * __this, UnityAction_t3245792599 * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.PlayerPrefs::GetString(System.String,System.String)
extern "C"  String_t* PlayerPrefs_GetString_m614532710 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.UI.InputField>()
#define GameObject_GetComponent_TisInputField_t3762917431_m1809916030(__this, method) ((  InputField_t3762917431 * (*) (GameObject_t1113636619 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m2049753423_gshared)(__this, method)
// System.Void UnityEngine.UI.InputField::set_text(System.String)
extern "C"  void InputField_set_text_m1877260015 (InputField_t3762917431 * __this, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.UI.Text>()
#define GameObject_GetComponent_TisText_t1901882714_m2114913816(__this, method) ((  Text_t1901882714 * (*) (GameObject_t1113636619 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m2049753423_gshared)(__this, method)
// System.String UnityEngine.Application::get_productName()
extern "C"  String_t* Application_get_productName_m2401755738 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.String::Equals(System.String)
extern "C"  bool String_Equals_m2270643605 (String_t* __this, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.PlayerPrefs::SetString(System.String,System.String)
extern "C"  void PlayerPrefs_SetString_m2101271233 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void GNSAdSDK.Api.RewardVideoAd::LoadAd(System.String)
extern "C"  void RewardVideoAd_LoadAd_m1897517061 (RewardVideoAd_t2059019935 * __this, String_t* ___zoneId0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean GNSAdSDK.Api.RewardVideoAd::IsLoaded()
extern "C"  bool RewardVideoAd_IsLoaded_m630497717 (RewardVideoAd_t2059019935 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void GNSAdSDK.Api.RewardVideoAd::ShowAd()
extern "C"  void RewardVideoAd_ShowAd_m3896786371 (RewardVideoAd_t2059019935 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void GNSAdSDK.Api.RewardVideoAd::DisposeAd()
extern "C"  void RewardVideoAd_DisposeAd_m1464643830 (RewardVideoAd_t2059019935 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Time::get_time()
extern "C"  float Time_get_time_m2907476221 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Concat(System.Object,System.Object,System.Object)
extern "C"  String_t* String_Concat_m1715369213 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, RuntimeObject * p1, RuntimeObject * p2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.String)
extern "C"  void SceneManager_LoadScene_m1758133949 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Application::Quit()
extern "C"  void Application_Quit_m470877999 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Double GNSAdSDK.Api.VideoRewardData::get_Amount()
extern "C"  double VideoRewardData_get_Amount_m3001112432 (VideoRewardData_t431140593 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Concat(System.Object,System.Object)
extern "C"  String_t* String_Concat_m904156431 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, RuntimeObject * p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String GNSAdSDK.Api.VideoRewardData::get_Type()
extern "C"  String_t* VideoRewardData_get_Type_m2596247187 (VideoRewardData_t431140593 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 GNSAdSDK.Api.VideoRewardFailedData::get_Code()
extern "C"  int32_t VideoRewardFailedData_get_Code_m4182448667 (VideoRewardFailedData_t3896161887 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String GNSAdSDK.Api.VideoRewardFailedData::get_Message()
extern "C"  String_t* VideoRewardFailedData_get_Message_m1245503744 (VideoRewardFailedData_t3896161887 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
extern "C"  GameObject_t1113636619 * Component_get_gameObject_m442555142 (Component_t1923634451 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.UI.ScrollRect>()
#define GameObject_GetComponent_TisScrollRect_t4137855814_m3217020803(__this, method) ((  ScrollRect_t4137855814 * (*) (GameObject_t1113636619 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m2049753423_gshared)(__this, method)
// UnityEngine.RectTransform UnityEngine.UI.ScrollRect::get_content()
extern "C"  RectTransform_t3704657025 * ScrollRect_get_content_m2477524320 (ScrollRect_t4137855814 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.Component::GetComponentInChildren<UnityEngine.UI.Text>()
#define Component_GetComponentInChildren_TisText_t1901882714_m396351542(__this, method) ((  Text_t1901882714 * (*) (Component_t1923634451 *, const RuntimeMethod*))Component_GetComponentInChildren_TisRuntimeObject_m1033527003_gshared)(__this, method)
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
extern "C"  bool Object_op_Inequality_m4071470834 (RuntimeObject * __this /* static, unused */, Object_t631007953 * p0, Object_t631007953 * p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.String::op_Inequality(System.String,System.String)
extern "C"  bool String_op_Inequality_m215368492 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Action::.ctor(System.Object,System.IntPtr)
extern "C"  void Action__ctor_m2994342681 (Action_t1264377477 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator ManageScrollContent::DelayMethod(System.Int32,System.Action)
extern "C"  RuntimeObject* ManageScrollContent_DelayMethod_m602896765 (ManageScrollContent_t718440180 * __this, int32_t ___delayFrameCount0, Action_t1264377477 * ___action1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
extern "C"  Coroutine_t3829159415 * MonoBehaviour_StartCoroutine_m3411253000 (MonoBehaviour_t3962482529 * __this, RuntimeObject* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.DateTime::get_Now()
extern "C"  DateTime_t3738529785  DateTime_get_Now_m1277138875 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.DateTime::ToString(System.String)
extern "C"  String_t* DateTime_ToString_m3718521780 (DateTime_t3738529785 * __this, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Concat(System.String[])
extern "C"  String_t* String_Concat_m1809518182 (RuntimeObject * __this /* static, unused */, StringU5BU5D_t1281789340* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void ManageScrollContent/<DelayMethod>c__Iterator0::.ctor()
extern "C"  void U3CDelayMethodU3Ec__Iterator0__ctor_m2834466340 (U3CDelayMethodU3Ec__Iterator0_t2878256488 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::set_verticalNormalizedPosition(System.Single)
extern "C"  void ScrollRect_set_verticalNormalizedPosition_m1452826170 (ScrollRect_t4137855814 * __this, float p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Action::Invoke()
extern "C"  void Action_Invoke_m937035532 (Action_t1264377477 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.NotSupportedException::.ctor()
extern "C"  void NotSupportedException__ctor_m2730133172 (NotSupportedException_t1314879016 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GNSAdSDK.AdClientFactory::.ctor()
extern "C"  void AdClientFactory__ctor_m3898699848 (AdClientFactory_t673636922 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// GNSAdSDK.Clients.RewardVideoAdClient GNSAdSDK.AdClientFactory::CreateRewardVideoAdClient()
extern "C"  RuntimeObject* AdClientFactory_CreateRewardVideoAdClient_m2878427344 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AdClientFactory_CreateRewardVideoAdClient_m2878427344_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RewardVideoAdClientImpl_t1565645521 * L_0 = (RewardVideoAdClientImpl_t1565645521 *)il2cpp_codegen_object_new(RewardVideoAdClientImpl_t1565645521_il2cpp_TypeInfo_var);
		RewardVideoAdClientImpl__ctor_m2803547931(L_0, /*hidden argument*/NULL);
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GNSAdSDK.Api.RewardVideoAd::.ctor()
extern "C"  void RewardVideoAd__ctor_m4107737319 (RewardVideoAd_t2059019935 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RewardVideoAd__ctor_m4107737319_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		RuntimeObject* L_0 = AdClientFactory_CreateRewardVideoAdClient_m2878427344(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_client_0(L_0);
		RuntimeObject* L_1 = __this->get_client_0();
		intptr_t L_2 = (intptr_t)RewardVideoAd_U3CRewardVideoAdU3Em__0_m573066125_RuntimeMethod_var;
		EventHandler_1_t1515976428 * L_3 = (EventHandler_1_t1515976428 *)il2cpp_codegen_object_new(EventHandler_1_t1515976428_il2cpp_TypeInfo_var);
		EventHandler_1__ctor_m4114736910(L_3, __this, L_2, /*hidden argument*/EventHandler_1__ctor_m4114736910_RuntimeMethod_var);
		NullCheck(L_1);
		InterfaceActionInvoker1< EventHandler_1_t1515976428 * >::Invoke(0 /* System.Void GNSAdSDK.Clients.RewardVideoAdClient::add_OnAdLoaded(System.EventHandler`1<System.EventArgs>) */, RewardVideoAdClient_t1572276834_il2cpp_TypeInfo_var, L_1, L_3);
		RuntimeObject* L_4 = __this->get_client_0();
		intptr_t L_5 = (intptr_t)RewardVideoAd_U3CRewardVideoAdU3Em__1_m2543563012_RuntimeMethod_var;
		EventHandler_1_t2650267322 * L_6 = (EventHandler_1_t2650267322 *)il2cpp_codegen_object_new(EventHandler_1_t2650267322_il2cpp_TypeInfo_var);
		EventHandler_1__ctor_m2791549744(L_6, __this, L_5, /*hidden argument*/EventHandler_1__ctor_m2791549744_RuntimeMethod_var);
		NullCheck(L_4);
		InterfaceActionInvoker1< EventHandler_1_t2650267322 * >::Invoke(2 /* System.Void GNSAdSDK.Clients.RewardVideoAdClient::add_OnAdStarted(System.EventHandler`1<GNSAdSDK.Api.VideoRewardData>) */, RewardVideoAdClient_t1572276834_il2cpp_TypeInfo_var, L_4, L_6);
		RuntimeObject* L_7 = __this->get_client_0();
		intptr_t L_8 = (intptr_t)RewardVideoAd_U3CRewardVideoAdU3Em__2_m980165810_RuntimeMethod_var;
		EventHandler_1_t2650267322 * L_9 = (EventHandler_1_t2650267322 *)il2cpp_codegen_object_new(EventHandler_1_t2650267322_il2cpp_TypeInfo_var);
		EventHandler_1__ctor_m2791549744(L_9, __this, L_8, /*hidden argument*/EventHandler_1__ctor_m2791549744_RuntimeMethod_var);
		NullCheck(L_7);
		InterfaceActionInvoker1< EventHandler_1_t2650267322 * >::Invoke(4 /* System.Void GNSAdSDK.Clients.RewardVideoAdClient::add_OnAdRewarded(System.EventHandler`1<GNSAdSDK.Api.VideoRewardData>) */, RewardVideoAdClient_t1572276834_il2cpp_TypeInfo_var, L_7, L_9);
		RuntimeObject* L_10 = __this->get_client_0();
		intptr_t L_11 = (intptr_t)RewardVideoAd_U3CRewardVideoAdU3Em__3_m4037255726_RuntimeMethod_var;
		EventHandler_1_t2650267322 * L_12 = (EventHandler_1_t2650267322 *)il2cpp_codegen_object_new(EventHandler_1_t2650267322_il2cpp_TypeInfo_var);
		EventHandler_1__ctor_m2791549744(L_12, __this, L_11, /*hidden argument*/EventHandler_1__ctor_m2791549744_RuntimeMethod_var);
		NullCheck(L_10);
		InterfaceActionInvoker1< EventHandler_1_t2650267322 * >::Invoke(6 /* System.Void GNSAdSDK.Clients.RewardVideoAdClient::add_OnAdClosed(System.EventHandler`1<GNSAdSDK.Api.VideoRewardData>) */, RewardVideoAdClient_t1572276834_il2cpp_TypeInfo_var, L_10, L_12);
		RuntimeObject* L_13 = __this->get_client_0();
		intptr_t L_14 = (intptr_t)RewardVideoAd_U3CRewardVideoAdU3Em__4_m1816579728_RuntimeMethod_var;
		EventHandler_1_t1820321320 * L_15 = (EventHandler_1_t1820321320 *)il2cpp_codegen_object_new(EventHandler_1_t1820321320_il2cpp_TypeInfo_var);
		EventHandler_1__ctor_m3728933429(L_15, __this, L_14, /*hidden argument*/EventHandler_1__ctor_m3728933429_RuntimeMethod_var);
		NullCheck(L_13);
		InterfaceActionInvoker1< EventHandler_1_t1820321320 * >::Invoke(8 /* System.Void GNSAdSDK.Clients.RewardVideoAdClient::add_OnAdFailedToLoad(System.EventHandler`1<GNSAdSDK.Api.VideoRewardFailedData>) */, RewardVideoAdClient_t1572276834_il2cpp_TypeInfo_var, L_13, L_15);
		return;
	}
}
// System.Void GNSAdSDK.Api.RewardVideoAd::add_OnAdLoaded(System.EventHandler`1<System.EventArgs>)
extern "C"  void RewardVideoAd_add_OnAdLoaded_m1645794845 (RewardVideoAd_t2059019935 * __this, EventHandler_1_t1515976428 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RewardVideoAd_add_OnAdLoaded_m1645794845_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t1515976428 * V_0 = NULL;
	EventHandler_1_t1515976428 * V_1 = NULL;
	{
		EventHandler_1_t1515976428 * L_0 = __this->get_OnAdLoaded_1();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_t1515976428 * L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_t1515976428 ** L_2 = __this->get_address_of_OnAdLoaded_1();
		EventHandler_1_t1515976428 * L_3 = V_1;
		EventHandler_1_t1515976428 * L_4 = ___value0;
		Delegate_t1188392813 * L_5 = Delegate_Combine_m1859655160(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		EventHandler_1_t1515976428 * L_6 = V_0;
		EventHandler_1_t1515976428 * L_7 = InterlockedCompareExchangeImpl<EventHandler_1_t1515976428 *>((EventHandler_1_t1515976428 **)L_2, ((EventHandler_1_t1515976428 *)CastclassSealed((RuntimeObject*)L_5, EventHandler_1_t1515976428_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_t1515976428 * L_8 = V_0;
		EventHandler_1_t1515976428 * L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_t1515976428 *)L_8) == ((RuntimeObject*)(EventHandler_1_t1515976428 *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GNSAdSDK.Api.RewardVideoAd::remove_OnAdLoaded(System.EventHandler`1<System.EventArgs>)
extern "C"  void RewardVideoAd_remove_OnAdLoaded_m2847277470 (RewardVideoAd_t2059019935 * __this, EventHandler_1_t1515976428 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RewardVideoAd_remove_OnAdLoaded_m2847277470_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t1515976428 * V_0 = NULL;
	EventHandler_1_t1515976428 * V_1 = NULL;
	{
		EventHandler_1_t1515976428 * L_0 = __this->get_OnAdLoaded_1();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_t1515976428 * L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_t1515976428 ** L_2 = __this->get_address_of_OnAdLoaded_1();
		EventHandler_1_t1515976428 * L_3 = V_1;
		EventHandler_1_t1515976428 * L_4 = ___value0;
		Delegate_t1188392813 * L_5 = Delegate_Remove_m334097152(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		EventHandler_1_t1515976428 * L_6 = V_0;
		EventHandler_1_t1515976428 * L_7 = InterlockedCompareExchangeImpl<EventHandler_1_t1515976428 *>((EventHandler_1_t1515976428 **)L_2, ((EventHandler_1_t1515976428 *)CastclassSealed((RuntimeObject*)L_5, EventHandler_1_t1515976428_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_t1515976428 * L_8 = V_0;
		EventHandler_1_t1515976428 * L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_t1515976428 *)L_8) == ((RuntimeObject*)(EventHandler_1_t1515976428 *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GNSAdSDK.Api.RewardVideoAd::add_OnAdStarted(System.EventHandler`1<GNSAdSDK.Api.VideoRewardData>)
extern "C"  void RewardVideoAd_add_OnAdStarted_m1491817010 (RewardVideoAd_t2059019935 * __this, EventHandler_1_t2650267322 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RewardVideoAd_add_OnAdStarted_m1491817010_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t2650267322 * V_0 = NULL;
	EventHandler_1_t2650267322 * V_1 = NULL;
	{
		EventHandler_1_t2650267322 * L_0 = __this->get_OnAdStarted_2();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_t2650267322 * L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_t2650267322 ** L_2 = __this->get_address_of_OnAdStarted_2();
		EventHandler_1_t2650267322 * L_3 = V_1;
		EventHandler_1_t2650267322 * L_4 = ___value0;
		Delegate_t1188392813 * L_5 = Delegate_Combine_m1859655160(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		EventHandler_1_t2650267322 * L_6 = V_0;
		EventHandler_1_t2650267322 * L_7 = InterlockedCompareExchangeImpl<EventHandler_1_t2650267322 *>((EventHandler_1_t2650267322 **)L_2, ((EventHandler_1_t2650267322 *)CastclassSealed((RuntimeObject*)L_5, EventHandler_1_t2650267322_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_t2650267322 * L_8 = V_0;
		EventHandler_1_t2650267322 * L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_t2650267322 *)L_8) == ((RuntimeObject*)(EventHandler_1_t2650267322 *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GNSAdSDK.Api.RewardVideoAd::remove_OnAdStarted(System.EventHandler`1<GNSAdSDK.Api.VideoRewardData>)
extern "C"  void RewardVideoAd_remove_OnAdStarted_m3743954902 (RewardVideoAd_t2059019935 * __this, EventHandler_1_t2650267322 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RewardVideoAd_remove_OnAdStarted_m3743954902_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t2650267322 * V_0 = NULL;
	EventHandler_1_t2650267322 * V_1 = NULL;
	{
		EventHandler_1_t2650267322 * L_0 = __this->get_OnAdStarted_2();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_t2650267322 * L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_t2650267322 ** L_2 = __this->get_address_of_OnAdStarted_2();
		EventHandler_1_t2650267322 * L_3 = V_1;
		EventHandler_1_t2650267322 * L_4 = ___value0;
		Delegate_t1188392813 * L_5 = Delegate_Remove_m334097152(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		EventHandler_1_t2650267322 * L_6 = V_0;
		EventHandler_1_t2650267322 * L_7 = InterlockedCompareExchangeImpl<EventHandler_1_t2650267322 *>((EventHandler_1_t2650267322 **)L_2, ((EventHandler_1_t2650267322 *)CastclassSealed((RuntimeObject*)L_5, EventHandler_1_t2650267322_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_t2650267322 * L_8 = V_0;
		EventHandler_1_t2650267322 * L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_t2650267322 *)L_8) == ((RuntimeObject*)(EventHandler_1_t2650267322 *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GNSAdSDK.Api.RewardVideoAd::add_OnAdRewarded(System.EventHandler`1<GNSAdSDK.Api.VideoRewardData>)
extern "C"  void RewardVideoAd_add_OnAdRewarded_m2418067992 (RewardVideoAd_t2059019935 * __this, EventHandler_1_t2650267322 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RewardVideoAd_add_OnAdRewarded_m2418067992_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t2650267322 * V_0 = NULL;
	EventHandler_1_t2650267322 * V_1 = NULL;
	{
		EventHandler_1_t2650267322 * L_0 = __this->get_OnAdRewarded_3();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_t2650267322 * L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_t2650267322 ** L_2 = __this->get_address_of_OnAdRewarded_3();
		EventHandler_1_t2650267322 * L_3 = V_1;
		EventHandler_1_t2650267322 * L_4 = ___value0;
		Delegate_t1188392813 * L_5 = Delegate_Combine_m1859655160(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		EventHandler_1_t2650267322 * L_6 = V_0;
		EventHandler_1_t2650267322 * L_7 = InterlockedCompareExchangeImpl<EventHandler_1_t2650267322 *>((EventHandler_1_t2650267322 **)L_2, ((EventHandler_1_t2650267322 *)CastclassSealed((RuntimeObject*)L_5, EventHandler_1_t2650267322_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_t2650267322 * L_8 = V_0;
		EventHandler_1_t2650267322 * L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_t2650267322 *)L_8) == ((RuntimeObject*)(EventHandler_1_t2650267322 *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GNSAdSDK.Api.RewardVideoAd::remove_OnAdRewarded(System.EventHandler`1<GNSAdSDK.Api.VideoRewardData>)
extern "C"  void RewardVideoAd_remove_OnAdRewarded_m2536036747 (RewardVideoAd_t2059019935 * __this, EventHandler_1_t2650267322 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RewardVideoAd_remove_OnAdRewarded_m2536036747_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t2650267322 * V_0 = NULL;
	EventHandler_1_t2650267322 * V_1 = NULL;
	{
		EventHandler_1_t2650267322 * L_0 = __this->get_OnAdRewarded_3();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_t2650267322 * L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_t2650267322 ** L_2 = __this->get_address_of_OnAdRewarded_3();
		EventHandler_1_t2650267322 * L_3 = V_1;
		EventHandler_1_t2650267322 * L_4 = ___value0;
		Delegate_t1188392813 * L_5 = Delegate_Remove_m334097152(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		EventHandler_1_t2650267322 * L_6 = V_0;
		EventHandler_1_t2650267322 * L_7 = InterlockedCompareExchangeImpl<EventHandler_1_t2650267322 *>((EventHandler_1_t2650267322 **)L_2, ((EventHandler_1_t2650267322 *)CastclassSealed((RuntimeObject*)L_5, EventHandler_1_t2650267322_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_t2650267322 * L_8 = V_0;
		EventHandler_1_t2650267322 * L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_t2650267322 *)L_8) == ((RuntimeObject*)(EventHandler_1_t2650267322 *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GNSAdSDK.Api.RewardVideoAd::add_OnAdClosed(System.EventHandler`1<GNSAdSDK.Api.VideoRewardData>)
extern "C"  void RewardVideoAd_add_OnAdClosed_m3758855288 (RewardVideoAd_t2059019935 * __this, EventHandler_1_t2650267322 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RewardVideoAd_add_OnAdClosed_m3758855288_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t2650267322 * V_0 = NULL;
	EventHandler_1_t2650267322 * V_1 = NULL;
	{
		EventHandler_1_t2650267322 * L_0 = __this->get_OnAdClosed_4();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_t2650267322 * L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_t2650267322 ** L_2 = __this->get_address_of_OnAdClosed_4();
		EventHandler_1_t2650267322 * L_3 = V_1;
		EventHandler_1_t2650267322 * L_4 = ___value0;
		Delegate_t1188392813 * L_5 = Delegate_Combine_m1859655160(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		EventHandler_1_t2650267322 * L_6 = V_0;
		EventHandler_1_t2650267322 * L_7 = InterlockedCompareExchangeImpl<EventHandler_1_t2650267322 *>((EventHandler_1_t2650267322 **)L_2, ((EventHandler_1_t2650267322 *)CastclassSealed((RuntimeObject*)L_5, EventHandler_1_t2650267322_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_t2650267322 * L_8 = V_0;
		EventHandler_1_t2650267322 * L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_t2650267322 *)L_8) == ((RuntimeObject*)(EventHandler_1_t2650267322 *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GNSAdSDK.Api.RewardVideoAd::remove_OnAdClosed(System.EventHandler`1<GNSAdSDK.Api.VideoRewardData>)
extern "C"  void RewardVideoAd_remove_OnAdClosed_m3198561935 (RewardVideoAd_t2059019935 * __this, EventHandler_1_t2650267322 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RewardVideoAd_remove_OnAdClosed_m3198561935_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t2650267322 * V_0 = NULL;
	EventHandler_1_t2650267322 * V_1 = NULL;
	{
		EventHandler_1_t2650267322 * L_0 = __this->get_OnAdClosed_4();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_t2650267322 * L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_t2650267322 ** L_2 = __this->get_address_of_OnAdClosed_4();
		EventHandler_1_t2650267322 * L_3 = V_1;
		EventHandler_1_t2650267322 * L_4 = ___value0;
		Delegate_t1188392813 * L_5 = Delegate_Remove_m334097152(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		EventHandler_1_t2650267322 * L_6 = V_0;
		EventHandler_1_t2650267322 * L_7 = InterlockedCompareExchangeImpl<EventHandler_1_t2650267322 *>((EventHandler_1_t2650267322 **)L_2, ((EventHandler_1_t2650267322 *)CastclassSealed((RuntimeObject*)L_5, EventHandler_1_t2650267322_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_t2650267322 * L_8 = V_0;
		EventHandler_1_t2650267322 * L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_t2650267322 *)L_8) == ((RuntimeObject*)(EventHandler_1_t2650267322 *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GNSAdSDK.Api.RewardVideoAd::add_OnAdFailedToLoad(System.EventHandler`1<GNSAdSDK.Api.VideoRewardFailedData>)
extern "C"  void RewardVideoAd_add_OnAdFailedToLoad_m2979919485 (RewardVideoAd_t2059019935 * __this, EventHandler_1_t1820321320 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RewardVideoAd_add_OnAdFailedToLoad_m2979919485_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t1820321320 * V_0 = NULL;
	EventHandler_1_t1820321320 * V_1 = NULL;
	{
		EventHandler_1_t1820321320 * L_0 = __this->get_OnAdFailedToLoad_5();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_t1820321320 * L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_t1820321320 ** L_2 = __this->get_address_of_OnAdFailedToLoad_5();
		EventHandler_1_t1820321320 * L_3 = V_1;
		EventHandler_1_t1820321320 * L_4 = ___value0;
		Delegate_t1188392813 * L_5 = Delegate_Combine_m1859655160(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		EventHandler_1_t1820321320 * L_6 = V_0;
		EventHandler_1_t1820321320 * L_7 = InterlockedCompareExchangeImpl<EventHandler_1_t1820321320 *>((EventHandler_1_t1820321320 **)L_2, ((EventHandler_1_t1820321320 *)CastclassSealed((RuntimeObject*)L_5, EventHandler_1_t1820321320_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_t1820321320 * L_8 = V_0;
		EventHandler_1_t1820321320 * L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_t1820321320 *)L_8) == ((RuntimeObject*)(EventHandler_1_t1820321320 *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GNSAdSDK.Api.RewardVideoAd::remove_OnAdFailedToLoad(System.EventHandler`1<GNSAdSDK.Api.VideoRewardFailedData>)
extern "C"  void RewardVideoAd_remove_OnAdFailedToLoad_m2117383440 (RewardVideoAd_t2059019935 * __this, EventHandler_1_t1820321320 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RewardVideoAd_remove_OnAdFailedToLoad_m2117383440_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t1820321320 * V_0 = NULL;
	EventHandler_1_t1820321320 * V_1 = NULL;
	{
		EventHandler_1_t1820321320 * L_0 = __this->get_OnAdFailedToLoad_5();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_t1820321320 * L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_t1820321320 ** L_2 = __this->get_address_of_OnAdFailedToLoad_5();
		EventHandler_1_t1820321320 * L_3 = V_1;
		EventHandler_1_t1820321320 * L_4 = ___value0;
		Delegate_t1188392813 * L_5 = Delegate_Remove_m334097152(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		EventHandler_1_t1820321320 * L_6 = V_0;
		EventHandler_1_t1820321320 * L_7 = InterlockedCompareExchangeImpl<EventHandler_1_t1820321320 *>((EventHandler_1_t1820321320 **)L_2, ((EventHandler_1_t1820321320 *)CastclassSealed((RuntimeObject*)L_5, EventHandler_1_t1820321320_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_t1820321320 * L_8 = V_0;
		EventHandler_1_t1820321320 * L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_t1820321320 *)L_8) == ((RuntimeObject*)(EventHandler_1_t1820321320 *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// GNSAdSDK.Api.RewardVideoAd GNSAdSDK.Api.RewardVideoAd::get_Instance()
extern "C"  RewardVideoAd_t2059019935 * RewardVideoAd_get_Instance_m1143162705 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RewardVideoAd_get_Instance_m1143162705_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RewardVideoAd_t2059019935 * L_0 = ((RewardVideoAd_t2059019935_StaticFields*)il2cpp_codegen_static_fields_for(RewardVideoAd_t2059019935_il2cpp_TypeInfo_var))->get_instance_6();
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		RewardVideoAd_t2059019935 * L_1 = (RewardVideoAd_t2059019935 *)il2cpp_codegen_object_new(RewardVideoAd_t2059019935_il2cpp_TypeInfo_var);
		RewardVideoAd__ctor_m4107737319(L_1, /*hidden argument*/NULL);
		((RewardVideoAd_t2059019935_StaticFields*)il2cpp_codegen_static_fields_for(RewardVideoAd_t2059019935_il2cpp_TypeInfo_var))->set_instance_6(L_1);
	}

IL_0014:
	{
		RewardVideoAd_t2059019935 * L_2 = ((RewardVideoAd_t2059019935_StaticFields*)il2cpp_codegen_static_fields_for(RewardVideoAd_t2059019935_il2cpp_TypeInfo_var))->get_instance_6();
		return L_2;
	}
}
// System.Void GNSAdSDK.Api.RewardVideoAd::LoadAd(System.String)
extern "C"  void RewardVideoAd_LoadAd_m1897517061 (RewardVideoAd_t2059019935 * __this, String_t* ___zoneId0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RewardVideoAd_LoadAd_m1897517061_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->get_client_0();
		String_t* L_1 = ___zoneId0;
		NullCheck(L_0);
		InterfaceActionInvoker1< String_t* >::Invoke(10 /* System.Void GNSAdSDK.Clients.RewardVideoAdClient::LoadAd(System.String) */, RewardVideoAdClient_t1572276834_il2cpp_TypeInfo_var, L_0, L_1);
		return;
	}
}
// System.Boolean GNSAdSDK.Api.RewardVideoAd::IsLoaded()
extern "C"  bool RewardVideoAd_IsLoaded_m630497717 (RewardVideoAd_t2059019935 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RewardVideoAd_IsLoaded_m630497717_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->get_client_0();
		NullCheck(L_0);
		bool L_1 = InterfaceFuncInvoker0< bool >::Invoke(11 /* System.Boolean GNSAdSDK.Clients.RewardVideoAdClient::IsLoaded() */, RewardVideoAdClient_t1572276834_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// System.Void GNSAdSDK.Api.RewardVideoAd::ShowAd()
extern "C"  void RewardVideoAd_ShowAd_m3896786371 (RewardVideoAd_t2059019935 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RewardVideoAd_ShowAd_m3896786371_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->get_client_0();
		NullCheck(L_0);
		InterfaceActionInvoker0::Invoke(12 /* System.Void GNSAdSDK.Clients.RewardVideoAdClient::ShowAd() */, RewardVideoAdClient_t1572276834_il2cpp_TypeInfo_var, L_0);
		return;
	}
}
// System.Void GNSAdSDK.Api.RewardVideoAd::DisposeAd()
extern "C"  void RewardVideoAd_DisposeAd_m1464643830 (RewardVideoAd_t2059019935 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RewardVideoAd_DisposeAd_m1464643830_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->get_client_0();
		NullCheck(L_0);
		InterfaceActionInvoker0::Invoke(13 /* System.Void GNSAdSDK.Clients.RewardVideoAdClient::DisposeAd() */, RewardVideoAdClient_t1572276834_il2cpp_TypeInfo_var, L_0);
		return;
	}
}
// System.Void GNSAdSDK.Api.RewardVideoAd::<RewardVideoAd>m__0(System.Object,System.EventArgs)
extern "C"  void RewardVideoAd_U3CRewardVideoAdU3Em__0_m573066125 (RewardVideoAd_t2059019935 * __this, RuntimeObject * ___sender0, EventArgs_t3591816995 * ___eventArgs1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RewardVideoAd_U3CRewardVideoAdU3Em__0_m573066125_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		EventHandler_1_t1515976428 * L_0 = __this->get_OnAdLoaded_1();
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		EventHandler_1_t1515976428 * L_1 = __this->get_OnAdLoaded_1();
		EventArgs_t3591816995 * L_2 = ___eventArgs1;
		NullCheck(L_1);
		EventHandler_1_Invoke_m63082545(L_1, __this, L_2, /*hidden argument*/EventHandler_1_Invoke_m63082545_RuntimeMethod_var);
	}

IL_0018:
	{
		return;
	}
}
// System.Void GNSAdSDK.Api.RewardVideoAd::<RewardVideoAd>m__1(System.Object,GNSAdSDK.Api.VideoRewardData)
extern "C"  void RewardVideoAd_U3CRewardVideoAdU3Em__1_m2543563012 (RewardVideoAd_t2059019935 * __this, RuntimeObject * ___sender0, VideoRewardData_t431140593 * ___eventArgs1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RewardVideoAd_U3CRewardVideoAdU3Em__1_m2543563012_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		EventHandler_1_t2650267322 * L_0 = __this->get_OnAdStarted_2();
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		EventHandler_1_t2650267322 * L_1 = __this->get_OnAdStarted_2();
		VideoRewardData_t431140593 * L_2 = ___eventArgs1;
		NullCheck(L_1);
		EventHandler_1_Invoke_m28932318(L_1, __this, L_2, /*hidden argument*/EventHandler_1_Invoke_m28932318_RuntimeMethod_var);
	}

IL_0018:
	{
		return;
	}
}
// System.Void GNSAdSDK.Api.RewardVideoAd::<RewardVideoAd>m__2(System.Object,GNSAdSDK.Api.VideoRewardData)
extern "C"  void RewardVideoAd_U3CRewardVideoAdU3Em__2_m980165810 (RewardVideoAd_t2059019935 * __this, RuntimeObject * ___sender0, VideoRewardData_t431140593 * ___eventArgs1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RewardVideoAd_U3CRewardVideoAdU3Em__2_m980165810_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		EventHandler_1_t2650267322 * L_0 = __this->get_OnAdRewarded_3();
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		EventHandler_1_t2650267322 * L_1 = __this->get_OnAdRewarded_3();
		VideoRewardData_t431140593 * L_2 = ___eventArgs1;
		NullCheck(L_1);
		EventHandler_1_Invoke_m28932318(L_1, __this, L_2, /*hidden argument*/EventHandler_1_Invoke_m28932318_RuntimeMethod_var);
	}

IL_0018:
	{
		return;
	}
}
// System.Void GNSAdSDK.Api.RewardVideoAd::<RewardVideoAd>m__3(System.Object,GNSAdSDK.Api.VideoRewardData)
extern "C"  void RewardVideoAd_U3CRewardVideoAdU3Em__3_m4037255726 (RewardVideoAd_t2059019935 * __this, RuntimeObject * ___sender0, VideoRewardData_t431140593 * ___eventArgs1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RewardVideoAd_U3CRewardVideoAdU3Em__3_m4037255726_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		EventHandler_1_t2650267322 * L_0 = __this->get_OnAdClosed_4();
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		EventHandler_1_t2650267322 * L_1 = __this->get_OnAdClosed_4();
		VideoRewardData_t431140593 * L_2 = ___eventArgs1;
		NullCheck(L_1);
		EventHandler_1_Invoke_m28932318(L_1, __this, L_2, /*hidden argument*/EventHandler_1_Invoke_m28932318_RuntimeMethod_var);
	}

IL_0018:
	{
		return;
	}
}
// System.Void GNSAdSDK.Api.RewardVideoAd::<RewardVideoAd>m__4(System.Object,GNSAdSDK.Api.VideoRewardFailedData)
extern "C"  void RewardVideoAd_U3CRewardVideoAdU3Em__4_m1816579728 (RewardVideoAd_t2059019935 * __this, RuntimeObject * ___sender0, VideoRewardFailedData_t3896161887 * ___eventArgs1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RewardVideoAd_U3CRewardVideoAdU3Em__4_m1816579728_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		EventHandler_1_t1820321320 * L_0 = __this->get_OnAdFailedToLoad_5();
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		EventHandler_1_t1820321320 * L_1 = __this->get_OnAdFailedToLoad_5();
		VideoRewardFailedData_t3896161887 * L_2 = ___eventArgs1;
		NullCheck(L_1);
		EventHandler_1_Invoke_m2342911564(L_1, __this, L_2, /*hidden argument*/EventHandler_1_Invoke_m2342911564_RuntimeMethod_var);
	}

IL_0018:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GNSAdSDK.Api.VideoRewardData::.ctor()
extern "C"  void VideoRewardData__ctor_m3738582510 (VideoRewardData_t431140593 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VideoRewardData__ctor_m3738582510_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(EventArgs_t3591816995_il2cpp_TypeInfo_var);
		EventArgs__ctor_m32674013(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.String GNSAdSDK.Api.VideoRewardData::get_AdName()
extern "C"  String_t* VideoRewardData_get_AdName_m2758121694 (VideoRewardData_t431140593 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CAdNameU3Ek__BackingField_1();
		return L_0;
	}
}
// System.Void GNSAdSDK.Api.VideoRewardData::set_AdName(System.String)
extern "C"  void VideoRewardData_set_AdName_m1860325100 (VideoRewardData_t431140593 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CAdNameU3Ek__BackingField_1(L_0);
		return;
	}
}
// System.Double GNSAdSDK.Api.VideoRewardData::get_Amount()
extern "C"  double VideoRewardData_get_Amount_m3001112432 (VideoRewardData_t431140593 * __this, const RuntimeMethod* method)
{
	{
		double L_0 = __this->get_U3CAmountU3Ek__BackingField_2();
		return L_0;
	}
}
// System.Void GNSAdSDK.Api.VideoRewardData::set_Amount(System.Double)
extern "C"  void VideoRewardData_set_Amount_m1581478889 (VideoRewardData_t431140593 * __this, double ___value0, const RuntimeMethod* method)
{
	{
		double L_0 = ___value0;
		__this->set_U3CAmountU3Ek__BackingField_2(L_0);
		return;
	}
}
// System.String GNSAdSDK.Api.VideoRewardData::get_Type()
extern "C"  String_t* VideoRewardData_get_Type_m2596247187 (VideoRewardData_t431140593 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CTypeU3Ek__BackingField_3();
		return L_0;
	}
}
// System.Void GNSAdSDK.Api.VideoRewardData::set_Type(System.String)
extern "C"  void VideoRewardData_set_Type_m3710895495 (VideoRewardData_t431140593 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CTypeU3Ek__BackingField_3(L_0);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GNSAdSDK.Api.VideoRewardFailedData::.ctor()
extern "C"  void VideoRewardFailedData__ctor_m860447526 (VideoRewardFailedData_t3896161887 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VideoRewardFailedData__ctor_m860447526_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(EventArgs_t3591816995_il2cpp_TypeInfo_var);
		EventArgs__ctor_m32674013(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.String GNSAdSDK.Api.VideoRewardFailedData::get_AdnetworkName()
extern "C"  String_t* VideoRewardFailedData_get_AdnetworkName_m779613118 (VideoRewardFailedData_t3896161887 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CAdnetworkNameU3Ek__BackingField_1();
		return L_0;
	}
}
// System.Void GNSAdSDK.Api.VideoRewardFailedData::set_AdnetworkName(System.String)
extern "C"  void VideoRewardFailedData_set_AdnetworkName_m544679037 (VideoRewardFailedData_t3896161887 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CAdnetworkNameU3Ek__BackingField_1(L_0);
		return;
	}
}
// System.Int32 GNSAdSDK.Api.VideoRewardFailedData::get_Code()
extern "C"  int32_t VideoRewardFailedData_get_Code_m4182448667 (VideoRewardFailedData_t3896161887 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CCodeU3Ek__BackingField_2();
		return L_0;
	}
}
// System.Void GNSAdSDK.Api.VideoRewardFailedData::set_Code(System.Int32)
extern "C"  void VideoRewardFailedData_set_Code_m818218941 (VideoRewardFailedData_t3896161887 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CCodeU3Ek__BackingField_2(L_0);
		return;
	}
}
// System.String GNSAdSDK.Api.VideoRewardFailedData::get_Message()
extern "C"  String_t* VideoRewardFailedData_get_Message_m1245503744 (VideoRewardFailedData_t3896161887 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CMessageU3Ek__BackingField_3();
		return L_0;
	}
}
// System.Void GNSAdSDK.Api.VideoRewardFailedData::set_Message(System.String)
extern "C"  void VideoRewardFailedData_set_Message_m239672109 (VideoRewardFailedData_t3896161887 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CMessageU3Ek__BackingField_3(L_0);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GNSAdSDK.Clients.MockClient::.ctor()
extern "C"  void MockClient__ctor_m3069415547 (MockClient_t1077215459 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MockClient__ctor_m3069415547_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		MethodBase_t * L_0 = il2cpp_codegen_get_method_object(MockClient__ctor_m3069415547_RuntimeMethod_var);
		NullCheck(L_0);
		String_t* L_1 = VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_0);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_2 = String_Concat_m3937257545(NULL /*static, unused*/, _stringLiteral4273247572, L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GNSAdSDK.Clients.MockClient::add_OnAdLoaded(System.EventHandler`1<System.EventArgs>)
extern "C"  void MockClient_add_OnAdLoaded_m2837677281 (MockClient_t1077215459 * __this, EventHandler_1_t1515976428 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MockClient_add_OnAdLoaded_m2837677281_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t1515976428 * V_0 = NULL;
	EventHandler_1_t1515976428 * V_1 = NULL;
	{
		EventHandler_1_t1515976428 * L_0 = __this->get_OnAdLoaded_0();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_t1515976428 * L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_t1515976428 ** L_2 = __this->get_address_of_OnAdLoaded_0();
		EventHandler_1_t1515976428 * L_3 = V_1;
		EventHandler_1_t1515976428 * L_4 = ___value0;
		Delegate_t1188392813 * L_5 = Delegate_Combine_m1859655160(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		EventHandler_1_t1515976428 * L_6 = V_0;
		EventHandler_1_t1515976428 * L_7 = InterlockedCompareExchangeImpl<EventHandler_1_t1515976428 *>((EventHandler_1_t1515976428 **)L_2, ((EventHandler_1_t1515976428 *)CastclassSealed((RuntimeObject*)L_5, EventHandler_1_t1515976428_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_t1515976428 * L_8 = V_0;
		EventHandler_1_t1515976428 * L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_t1515976428 *)L_8) == ((RuntimeObject*)(EventHandler_1_t1515976428 *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GNSAdSDK.Clients.MockClient::remove_OnAdLoaded(System.EventHandler`1<System.EventArgs>)
extern "C"  void MockClient_remove_OnAdLoaded_m3399772035 (MockClient_t1077215459 * __this, EventHandler_1_t1515976428 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MockClient_remove_OnAdLoaded_m3399772035_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t1515976428 * V_0 = NULL;
	EventHandler_1_t1515976428 * V_1 = NULL;
	{
		EventHandler_1_t1515976428 * L_0 = __this->get_OnAdLoaded_0();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_t1515976428 * L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_t1515976428 ** L_2 = __this->get_address_of_OnAdLoaded_0();
		EventHandler_1_t1515976428 * L_3 = V_1;
		EventHandler_1_t1515976428 * L_4 = ___value0;
		Delegate_t1188392813 * L_5 = Delegate_Remove_m334097152(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		EventHandler_1_t1515976428 * L_6 = V_0;
		EventHandler_1_t1515976428 * L_7 = InterlockedCompareExchangeImpl<EventHandler_1_t1515976428 *>((EventHandler_1_t1515976428 **)L_2, ((EventHandler_1_t1515976428 *)CastclassSealed((RuntimeObject*)L_5, EventHandler_1_t1515976428_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_t1515976428 * L_8 = V_0;
		EventHandler_1_t1515976428 * L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_t1515976428 *)L_8) == ((RuntimeObject*)(EventHandler_1_t1515976428 *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GNSAdSDK.Clients.MockClient::add_OnAdStarted(System.EventHandler`1<GNSAdSDK.Api.VideoRewardData>)
extern "C"  void MockClient_add_OnAdStarted_m3663468329 (MockClient_t1077215459 * __this, EventHandler_1_t2650267322 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MockClient_add_OnAdStarted_m3663468329_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t2650267322 * V_0 = NULL;
	EventHandler_1_t2650267322 * V_1 = NULL;
	{
		EventHandler_1_t2650267322 * L_0 = __this->get_OnAdStarted_1();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_t2650267322 * L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_t2650267322 ** L_2 = __this->get_address_of_OnAdStarted_1();
		EventHandler_1_t2650267322 * L_3 = V_1;
		EventHandler_1_t2650267322 * L_4 = ___value0;
		Delegate_t1188392813 * L_5 = Delegate_Combine_m1859655160(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		EventHandler_1_t2650267322 * L_6 = V_0;
		EventHandler_1_t2650267322 * L_7 = InterlockedCompareExchangeImpl<EventHandler_1_t2650267322 *>((EventHandler_1_t2650267322 **)L_2, ((EventHandler_1_t2650267322 *)CastclassSealed((RuntimeObject*)L_5, EventHandler_1_t2650267322_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_t2650267322 * L_8 = V_0;
		EventHandler_1_t2650267322 * L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_t2650267322 *)L_8) == ((RuntimeObject*)(EventHandler_1_t2650267322 *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GNSAdSDK.Clients.MockClient::remove_OnAdStarted(System.EventHandler`1<GNSAdSDK.Api.VideoRewardData>)
extern "C"  void MockClient_remove_OnAdStarted_m1989259541 (MockClient_t1077215459 * __this, EventHandler_1_t2650267322 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MockClient_remove_OnAdStarted_m1989259541_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t2650267322 * V_0 = NULL;
	EventHandler_1_t2650267322 * V_1 = NULL;
	{
		EventHandler_1_t2650267322 * L_0 = __this->get_OnAdStarted_1();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_t2650267322 * L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_t2650267322 ** L_2 = __this->get_address_of_OnAdStarted_1();
		EventHandler_1_t2650267322 * L_3 = V_1;
		EventHandler_1_t2650267322 * L_4 = ___value0;
		Delegate_t1188392813 * L_5 = Delegate_Remove_m334097152(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		EventHandler_1_t2650267322 * L_6 = V_0;
		EventHandler_1_t2650267322 * L_7 = InterlockedCompareExchangeImpl<EventHandler_1_t2650267322 *>((EventHandler_1_t2650267322 **)L_2, ((EventHandler_1_t2650267322 *)CastclassSealed((RuntimeObject*)L_5, EventHandler_1_t2650267322_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_t2650267322 * L_8 = V_0;
		EventHandler_1_t2650267322 * L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_t2650267322 *)L_8) == ((RuntimeObject*)(EventHandler_1_t2650267322 *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GNSAdSDK.Clients.MockClient::add_OnAdRewarded(System.EventHandler`1<GNSAdSDK.Api.VideoRewardData>)
extern "C"  void MockClient_add_OnAdRewarded_m3123326006 (MockClient_t1077215459 * __this, EventHandler_1_t2650267322 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MockClient_add_OnAdRewarded_m3123326006_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t2650267322 * V_0 = NULL;
	EventHandler_1_t2650267322 * V_1 = NULL;
	{
		EventHandler_1_t2650267322 * L_0 = __this->get_OnAdRewarded_2();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_t2650267322 * L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_t2650267322 ** L_2 = __this->get_address_of_OnAdRewarded_2();
		EventHandler_1_t2650267322 * L_3 = V_1;
		EventHandler_1_t2650267322 * L_4 = ___value0;
		Delegate_t1188392813 * L_5 = Delegate_Combine_m1859655160(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		EventHandler_1_t2650267322 * L_6 = V_0;
		EventHandler_1_t2650267322 * L_7 = InterlockedCompareExchangeImpl<EventHandler_1_t2650267322 *>((EventHandler_1_t2650267322 **)L_2, ((EventHandler_1_t2650267322 *)CastclassSealed((RuntimeObject*)L_5, EventHandler_1_t2650267322_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_t2650267322 * L_8 = V_0;
		EventHandler_1_t2650267322 * L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_t2650267322 *)L_8) == ((RuntimeObject*)(EventHandler_1_t2650267322 *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GNSAdSDK.Clients.MockClient::remove_OnAdRewarded(System.EventHandler`1<GNSAdSDK.Api.VideoRewardData>)
extern "C"  void MockClient_remove_OnAdRewarded_m3300571246 (MockClient_t1077215459 * __this, EventHandler_1_t2650267322 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MockClient_remove_OnAdRewarded_m3300571246_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t2650267322 * V_0 = NULL;
	EventHandler_1_t2650267322 * V_1 = NULL;
	{
		EventHandler_1_t2650267322 * L_0 = __this->get_OnAdRewarded_2();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_t2650267322 * L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_t2650267322 ** L_2 = __this->get_address_of_OnAdRewarded_2();
		EventHandler_1_t2650267322 * L_3 = V_1;
		EventHandler_1_t2650267322 * L_4 = ___value0;
		Delegate_t1188392813 * L_5 = Delegate_Remove_m334097152(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		EventHandler_1_t2650267322 * L_6 = V_0;
		EventHandler_1_t2650267322 * L_7 = InterlockedCompareExchangeImpl<EventHandler_1_t2650267322 *>((EventHandler_1_t2650267322 **)L_2, ((EventHandler_1_t2650267322 *)CastclassSealed((RuntimeObject*)L_5, EventHandler_1_t2650267322_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_t2650267322 * L_8 = V_0;
		EventHandler_1_t2650267322 * L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_t2650267322 *)L_8) == ((RuntimeObject*)(EventHandler_1_t2650267322 *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GNSAdSDK.Clients.MockClient::add_OnAdClosed(System.EventHandler`1<GNSAdSDK.Api.VideoRewardData>)
extern "C"  void MockClient_add_OnAdClosed_m2568308728 (MockClient_t1077215459 * __this, EventHandler_1_t2650267322 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MockClient_add_OnAdClosed_m2568308728_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t2650267322 * V_0 = NULL;
	EventHandler_1_t2650267322 * V_1 = NULL;
	{
		EventHandler_1_t2650267322 * L_0 = __this->get_OnAdClosed_3();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_t2650267322 * L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_t2650267322 ** L_2 = __this->get_address_of_OnAdClosed_3();
		EventHandler_1_t2650267322 * L_3 = V_1;
		EventHandler_1_t2650267322 * L_4 = ___value0;
		Delegate_t1188392813 * L_5 = Delegate_Combine_m1859655160(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		EventHandler_1_t2650267322 * L_6 = V_0;
		EventHandler_1_t2650267322 * L_7 = InterlockedCompareExchangeImpl<EventHandler_1_t2650267322 *>((EventHandler_1_t2650267322 **)L_2, ((EventHandler_1_t2650267322 *)CastclassSealed((RuntimeObject*)L_5, EventHandler_1_t2650267322_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_t2650267322 * L_8 = V_0;
		EventHandler_1_t2650267322 * L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_t2650267322 *)L_8) == ((RuntimeObject*)(EventHandler_1_t2650267322 *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GNSAdSDK.Clients.MockClient::remove_OnAdClosed(System.EventHandler`1<GNSAdSDK.Api.VideoRewardData>)
extern "C"  void MockClient_remove_OnAdClosed_m3272769839 (MockClient_t1077215459 * __this, EventHandler_1_t2650267322 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MockClient_remove_OnAdClosed_m3272769839_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t2650267322 * V_0 = NULL;
	EventHandler_1_t2650267322 * V_1 = NULL;
	{
		EventHandler_1_t2650267322 * L_0 = __this->get_OnAdClosed_3();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_t2650267322 * L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_t2650267322 ** L_2 = __this->get_address_of_OnAdClosed_3();
		EventHandler_1_t2650267322 * L_3 = V_1;
		EventHandler_1_t2650267322 * L_4 = ___value0;
		Delegate_t1188392813 * L_5 = Delegate_Remove_m334097152(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		EventHandler_1_t2650267322 * L_6 = V_0;
		EventHandler_1_t2650267322 * L_7 = InterlockedCompareExchangeImpl<EventHandler_1_t2650267322 *>((EventHandler_1_t2650267322 **)L_2, ((EventHandler_1_t2650267322 *)CastclassSealed((RuntimeObject*)L_5, EventHandler_1_t2650267322_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_t2650267322 * L_8 = V_0;
		EventHandler_1_t2650267322 * L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_t2650267322 *)L_8) == ((RuntimeObject*)(EventHandler_1_t2650267322 *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GNSAdSDK.Clients.MockClient::add_OnAdFailedToLoad(System.EventHandler`1<GNSAdSDK.Api.VideoRewardFailedData>)
extern "C"  void MockClient_add_OnAdFailedToLoad_m2959609469 (MockClient_t1077215459 * __this, EventHandler_1_t1820321320 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MockClient_add_OnAdFailedToLoad_m2959609469_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t1820321320 * V_0 = NULL;
	EventHandler_1_t1820321320 * V_1 = NULL;
	{
		EventHandler_1_t1820321320 * L_0 = __this->get_OnAdFailedToLoad_4();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_t1820321320 * L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_t1820321320 ** L_2 = __this->get_address_of_OnAdFailedToLoad_4();
		EventHandler_1_t1820321320 * L_3 = V_1;
		EventHandler_1_t1820321320 * L_4 = ___value0;
		Delegate_t1188392813 * L_5 = Delegate_Combine_m1859655160(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		EventHandler_1_t1820321320 * L_6 = V_0;
		EventHandler_1_t1820321320 * L_7 = InterlockedCompareExchangeImpl<EventHandler_1_t1820321320 *>((EventHandler_1_t1820321320 **)L_2, ((EventHandler_1_t1820321320 *)CastclassSealed((RuntimeObject*)L_5, EventHandler_1_t1820321320_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_t1820321320 * L_8 = V_0;
		EventHandler_1_t1820321320 * L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_t1820321320 *)L_8) == ((RuntimeObject*)(EventHandler_1_t1820321320 *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GNSAdSDK.Clients.MockClient::remove_OnAdFailedToLoad(System.EventHandler`1<GNSAdSDK.Api.VideoRewardFailedData>)
extern "C"  void MockClient_remove_OnAdFailedToLoad_m2413321871 (MockClient_t1077215459 * __this, EventHandler_1_t1820321320 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MockClient_remove_OnAdFailedToLoad_m2413321871_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t1820321320 * V_0 = NULL;
	EventHandler_1_t1820321320 * V_1 = NULL;
	{
		EventHandler_1_t1820321320 * L_0 = __this->get_OnAdFailedToLoad_4();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_t1820321320 * L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_t1820321320 ** L_2 = __this->get_address_of_OnAdFailedToLoad_4();
		EventHandler_1_t1820321320 * L_3 = V_1;
		EventHandler_1_t1820321320 * L_4 = ___value0;
		Delegate_t1188392813 * L_5 = Delegate_Remove_m334097152(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		EventHandler_1_t1820321320 * L_6 = V_0;
		EventHandler_1_t1820321320 * L_7 = InterlockedCompareExchangeImpl<EventHandler_1_t1820321320 *>((EventHandler_1_t1820321320 **)L_2, ((EventHandler_1_t1820321320 *)CastclassSealed((RuntimeObject*)L_5, EventHandler_1_t1820321320_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_t1820321320 * L_8 = V_0;
		EventHandler_1_t1820321320 * L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_t1820321320 *)L_8) == ((RuntimeObject*)(EventHandler_1_t1820321320 *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GNSAdSDK.Clients.MockClient::LoadAd(System.String)
extern "C"  void MockClient_LoadAd_m418661205 (MockClient_t1077215459 * __this, String_t* ___zoneId0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MockClient_LoadAd_m418661205_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		MethodBase_t * L_0 = il2cpp_codegen_get_method_object(MockClient_LoadAd_m418661205_RuntimeMethod_var);
		NullCheck(L_0);
		String_t* L_1 = VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_0);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_2 = String_Concat_m3937257545(NULL /*static, unused*/, _stringLiteral4273247572, L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean GNSAdSDK.Clients.MockClient::IsLoaded()
extern "C"  bool MockClient_IsLoaded_m3987855876 (MockClient_t1077215459 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MockClient_IsLoaded_m3987855876_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		MethodBase_t * L_0 = il2cpp_codegen_get_method_object(MockClient_IsLoaded_m3987855876_RuntimeMethod_var);
		NullCheck(L_0);
		String_t* L_1 = VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_0);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_2 = String_Concat_m3937257545(NULL /*static, unused*/, _stringLiteral4273247572, L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		return (bool)1;
	}
}
// System.Void GNSAdSDK.Clients.MockClient::ShowAd()
extern "C"  void MockClient_ShowAd_m3494856151 (MockClient_t1077215459 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MockClient_ShowAd_m3494856151_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		MethodBase_t * L_0 = il2cpp_codegen_get_method_object(MockClient_ShowAd_m3494856151_RuntimeMethod_var);
		NullCheck(L_0);
		String_t* L_1 = VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_0);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_2 = String_Concat_m3937257545(NULL /*static, unused*/, _stringLiteral4273247572, L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GNSAdSDK.Clients.MockClient::DisposeAd()
extern "C"  void MockClient_DisposeAd_m255176246 (MockClient_t1077215459 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MockClient_DisposeAd_m255176246_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		MethodBase_t * L_0 = il2cpp_codegen_get_method_object(MockClient_DisposeAd_m255176246_RuntimeMethod_var);
		NullCheck(L_0);
		String_t* L_1 = VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_0);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_2 = String_Concat_m3937257545(NULL /*static, unused*/, _stringLiteral4273247572, L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GNSAdSDK.iOS.Externs::.ctor()
extern "C"  void Externs__ctor_m2401320210 (Externs_t1263556617 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
extern "C" intptr_t DEFAULT_CALL GNSUCreateRewardVideoAd(intptr_t);
// System.IntPtr GNSAdSDK.iOS.Externs::GNSUCreateRewardVideoAd(System.IntPtr)
extern "C"  intptr_t Externs_GNSUCreateRewardVideoAd_m3821763676 (RuntimeObject * __this /* static, unused */, intptr_t ___rewardVideoAdClient0, const RuntimeMethod* method)
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (intptr_t);

	// Native function invocation
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(GNSUCreateRewardVideoAd)(___rewardVideoAdClient0);

	return returnValue;
}
extern "C" void DEFAULT_CALL GNSURewardVideoAdCallbacks(intptr_t, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer);
// System.Void GNSAdSDK.iOS.Externs::GNSURewardVideoAdCallbacks(System.IntPtr,GNSAdSDK.iOS.RewardVideoAdClientImpl/GNSURewardVideoAdDidReceiveAdCallback,GNSAdSDK.iOS.RewardVideoAdClientImpl/GNSURewardVideoAdDidStartPlayingCallback,GNSAdSDK.iOS.RewardVideoAdClientImpl/GNSURewardVideoAdCallback,GNSAdSDK.iOS.RewardVideoAdClientImpl/GNSURewardVideoAdDidCloseCallback,GNSAdSDK.iOS.RewardVideoAdClientImpl/GNSURewardVideoAdErrorCallback)
extern "C"  void Externs_GNSURewardVideoAdCallbacks_m1806677466 (RuntimeObject * __this /* static, unused */, intptr_t ___rewardVideoAd0, GNSURewardVideoAdDidReceiveAdCallback_t2434243366 * ___rewardVideoAdDidReceiveAdCallback1, GNSURewardVideoAdDidStartPlayingCallback_t4256405145 * ___rewardVideoAdDidStartPlayingCallback2, GNSURewardVideoAdCallback_t434670165 * ___rewardVideoAdCallback3, GNSURewardVideoAdDidCloseCallback_t4005382830 * ___rewardVideoAdDidCloseCallback4, GNSURewardVideoAdErrorCallback_t2314677993 * ___rewardVideoAdErrorCallback5, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer);

	// Marshaling of parameter '___rewardVideoAdDidReceiveAdCallback1' to native representation
	Il2CppMethodPointer ____rewardVideoAdDidReceiveAdCallback1_marshaled = NULL;
	____rewardVideoAdDidReceiveAdCallback1_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___rewardVideoAdDidReceiveAdCallback1));

	// Marshaling of parameter '___rewardVideoAdDidStartPlayingCallback2' to native representation
	Il2CppMethodPointer ____rewardVideoAdDidStartPlayingCallback2_marshaled = NULL;
	____rewardVideoAdDidStartPlayingCallback2_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___rewardVideoAdDidStartPlayingCallback2));

	// Marshaling of parameter '___rewardVideoAdCallback3' to native representation
	Il2CppMethodPointer ____rewardVideoAdCallback3_marshaled = NULL;
	____rewardVideoAdCallback3_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___rewardVideoAdCallback3));

	// Marshaling of parameter '___rewardVideoAdDidCloseCallback4' to native representation
	Il2CppMethodPointer ____rewardVideoAdDidCloseCallback4_marshaled = NULL;
	____rewardVideoAdDidCloseCallback4_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___rewardVideoAdDidCloseCallback4));

	// Marshaling of parameter '___rewardVideoAdErrorCallback5' to native representation
	Il2CppMethodPointer ____rewardVideoAdErrorCallback5_marshaled = NULL;
	____rewardVideoAdErrorCallback5_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___rewardVideoAdErrorCallback5));

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(GNSURewardVideoAdCallbacks)(___rewardVideoAd0, ____rewardVideoAdDidReceiveAdCallback1_marshaled, ____rewardVideoAdDidStartPlayingCallback2_marshaled, ____rewardVideoAdCallback3_marshaled, ____rewardVideoAdDidCloseCallback4_marshaled, ____rewardVideoAdErrorCallback5_marshaled);

}
extern "C" void DEFAULT_CALL GNSURelease(intptr_t);
// System.Void GNSAdSDK.iOS.Externs::GNSURelease(System.IntPtr)
extern "C"  void Externs_GNSURelease_m1265223388 (RuntimeObject * __this /* static, unused */, intptr_t ___rewardVideoAd0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(GNSURelease)(___rewardVideoAd0);

}
extern "C" void DEFAULT_CALL GNSURewardVideoAdLoadRequest(intptr_t, char*);
// System.Void GNSAdSDK.iOS.Externs::GNSURewardVideoAdLoadRequest(System.IntPtr,System.String)
extern "C"  void Externs_GNSURewardVideoAdLoadRequest_m2751123278 (RuntimeObject * __this /* static, unused */, intptr_t ___rewardVideoAd0, String_t* ___zoneId1, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t, char*);

	// Marshaling of parameter '___zoneId1' to native representation
	char* ____zoneId1_marshaled = NULL;
	____zoneId1_marshaled = il2cpp_codegen_marshal_string(___zoneId1);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(GNSURewardVideoAdLoadRequest)(___rewardVideoAd0, ____zoneId1_marshaled);

	// Marshaling cleanup of parameter '___zoneId1' native representation
	il2cpp_codegen_marshal_free(____zoneId1_marshaled);
	____zoneId1_marshaled = NULL;

}
extern "C" int32_t DEFAULT_CALL GNSURewardVideoAdCanShow(intptr_t);
// System.Boolean GNSAdSDK.iOS.Externs::GNSURewardVideoAdCanShow(System.IntPtr)
extern "C"  bool Externs_GNSURewardVideoAdCanShow_m2483611378 (RuntimeObject * __this /* static, unused */, intptr_t ___rewardVideoAd0, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(GNSURewardVideoAdCanShow)(___rewardVideoAd0);

	return static_cast<bool>(returnValue);
}
extern "C" void DEFAULT_CALL GNSURewardVideoAdShow(intptr_t);
// System.Void GNSAdSDK.iOS.Externs::GNSURewardVideoAdShow(System.IntPtr)
extern "C"  void Externs_GNSURewardVideoAdShow_m2360473702 (RuntimeObject * __this /* static, unused */, intptr_t ___rewardVideoAd0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(GNSURewardVideoAdShow)(___rewardVideoAd0);

}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_RewardVideoAdClientImpl_RewardVideoAdDidReceiveAd_m1121021960(intptr_t ___rewardVideoAdClient0)
{
	il2cpp_native_wrapper_vm_thread_attacher _vmThreadHelper;

	// Managed method invocation
	RewardVideoAdClientImpl_RewardVideoAdDidReceiveAd_m1121021960(NULL, ___rewardVideoAdClient0, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_RewardVideoAdClientImpl_RewardVideoAdDidStartPlaying_m1506431413(intptr_t ___rewardVideoAdClient0)
{
	il2cpp_native_wrapper_vm_thread_attacher _vmThreadHelper;

	// Managed method invocation
	RewardVideoAdClientImpl_RewardVideoAdDidStartPlaying_m1506431413(NULL, ___rewardVideoAdClient0, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_RewardVideoAdClientImpl_DidRewardUserWithReward_m1394350829(intptr_t ___rewardVideoAdClient0, char* ___rewardType1, double ___rewardAmount2)
{
	il2cpp_native_wrapper_vm_thread_attacher _vmThreadHelper;

	// Marshaling of parameter '___rewardType1' to managed representation
	String_t* ____rewardType1_unmarshaled = NULL;
	____rewardType1_unmarshaled = il2cpp_codegen_marshal_string_result(___rewardType1);

	// Managed method invocation
	RewardVideoAdClientImpl_DidRewardUserWithReward_m1394350829(NULL, ___rewardVideoAdClient0, ____rewardType1_unmarshaled, ___rewardAmount2, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_RewardVideoAdClientImpl_RewardVideoAdDidClose_m420171930(intptr_t ___rewardVideoAdClient0)
{
	il2cpp_native_wrapper_vm_thread_attacher _vmThreadHelper;

	// Managed method invocation
	RewardVideoAdClientImpl_RewardVideoAdDidClose_m420171930(NULL, ___rewardVideoAdClient0, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_RewardVideoAdClientImpl_DidFailToLoadWithError_m2099900401(intptr_t ___rewardVideoAdClient0, int32_t ___errorCode1, char* ___errorDescription2)
{
	il2cpp_native_wrapper_vm_thread_attacher _vmThreadHelper;

	// Marshaling of parameter '___errorDescription2' to managed representation
	String_t* ____errorDescription2_unmarshaled = NULL;
	____errorDescription2_unmarshaled = il2cpp_codegen_marshal_string_result(___errorDescription2);

	// Managed method invocation
	RewardVideoAdClientImpl_DidFailToLoadWithError_m2099900401(NULL, ___rewardVideoAdClient0, ___errorCode1, ____errorDescription2_unmarshaled, NULL);

}
// System.Void GNSAdSDK.iOS.RewardVideoAdClientImpl::.ctor()
extern "C"  void RewardVideoAdClientImpl__ctor_m2803547931 (RewardVideoAdClientImpl_t1565645521 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		RewardVideoAdClientImpl_CreateRewardVideoAd_m1561433194(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GNSAdSDK.iOS.RewardVideoAdClientImpl::add_OnAdLoaded(System.EventHandler`1<System.EventArgs>)
extern "C"  void RewardVideoAdClientImpl_add_OnAdLoaded_m186043497 (RewardVideoAdClientImpl_t1565645521 * __this, EventHandler_1_t1515976428 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RewardVideoAdClientImpl_add_OnAdLoaded_m186043497_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t1515976428 * V_0 = NULL;
	EventHandler_1_t1515976428 * V_1 = NULL;
	{
		EventHandler_1_t1515976428 * L_0 = __this->get_OnAdLoaded_2();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_t1515976428 * L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_t1515976428 ** L_2 = __this->get_address_of_OnAdLoaded_2();
		EventHandler_1_t1515976428 * L_3 = V_1;
		EventHandler_1_t1515976428 * L_4 = ___value0;
		Delegate_t1188392813 * L_5 = Delegate_Combine_m1859655160(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		EventHandler_1_t1515976428 * L_6 = V_0;
		EventHandler_1_t1515976428 * L_7 = InterlockedCompareExchangeImpl<EventHandler_1_t1515976428 *>((EventHandler_1_t1515976428 **)L_2, ((EventHandler_1_t1515976428 *)CastclassSealed((RuntimeObject*)L_5, EventHandler_1_t1515976428_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_t1515976428 * L_8 = V_0;
		EventHandler_1_t1515976428 * L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_t1515976428 *)L_8) == ((RuntimeObject*)(EventHandler_1_t1515976428 *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GNSAdSDK.iOS.RewardVideoAdClientImpl::remove_OnAdLoaded(System.EventHandler`1<System.EventArgs>)
extern "C"  void RewardVideoAdClientImpl_remove_OnAdLoaded_m2872171862 (RewardVideoAdClientImpl_t1565645521 * __this, EventHandler_1_t1515976428 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RewardVideoAdClientImpl_remove_OnAdLoaded_m2872171862_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t1515976428 * V_0 = NULL;
	EventHandler_1_t1515976428 * V_1 = NULL;
	{
		EventHandler_1_t1515976428 * L_0 = __this->get_OnAdLoaded_2();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_t1515976428 * L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_t1515976428 ** L_2 = __this->get_address_of_OnAdLoaded_2();
		EventHandler_1_t1515976428 * L_3 = V_1;
		EventHandler_1_t1515976428 * L_4 = ___value0;
		Delegate_t1188392813 * L_5 = Delegate_Remove_m334097152(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		EventHandler_1_t1515976428 * L_6 = V_0;
		EventHandler_1_t1515976428 * L_7 = InterlockedCompareExchangeImpl<EventHandler_1_t1515976428 *>((EventHandler_1_t1515976428 **)L_2, ((EventHandler_1_t1515976428 *)CastclassSealed((RuntimeObject*)L_5, EventHandler_1_t1515976428_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_t1515976428 * L_8 = V_0;
		EventHandler_1_t1515976428 * L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_t1515976428 *)L_8) == ((RuntimeObject*)(EventHandler_1_t1515976428 *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GNSAdSDK.iOS.RewardVideoAdClientImpl::add_OnAdStarted(System.EventHandler`1<GNSAdSDK.Api.VideoRewardData>)
extern "C"  void RewardVideoAdClientImpl_add_OnAdStarted_m1344536 (RewardVideoAdClientImpl_t1565645521 * __this, EventHandler_1_t2650267322 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RewardVideoAdClientImpl_add_OnAdStarted_m1344536_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t2650267322 * V_0 = NULL;
	EventHandler_1_t2650267322 * V_1 = NULL;
	{
		EventHandler_1_t2650267322 * L_0 = __this->get_OnAdStarted_3();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_t2650267322 * L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_t2650267322 ** L_2 = __this->get_address_of_OnAdStarted_3();
		EventHandler_1_t2650267322 * L_3 = V_1;
		EventHandler_1_t2650267322 * L_4 = ___value0;
		Delegate_t1188392813 * L_5 = Delegate_Combine_m1859655160(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		EventHandler_1_t2650267322 * L_6 = V_0;
		EventHandler_1_t2650267322 * L_7 = InterlockedCompareExchangeImpl<EventHandler_1_t2650267322 *>((EventHandler_1_t2650267322 **)L_2, ((EventHandler_1_t2650267322 *)CastclassSealed((RuntimeObject*)L_5, EventHandler_1_t2650267322_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_t2650267322 * L_8 = V_0;
		EventHandler_1_t2650267322 * L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_t2650267322 *)L_8) == ((RuntimeObject*)(EventHandler_1_t2650267322 *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GNSAdSDK.iOS.RewardVideoAdClientImpl::remove_OnAdStarted(System.EventHandler`1<GNSAdSDK.Api.VideoRewardData>)
extern "C"  void RewardVideoAdClientImpl_remove_OnAdStarted_m3804047749 (RewardVideoAdClientImpl_t1565645521 * __this, EventHandler_1_t2650267322 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RewardVideoAdClientImpl_remove_OnAdStarted_m3804047749_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t2650267322 * V_0 = NULL;
	EventHandler_1_t2650267322 * V_1 = NULL;
	{
		EventHandler_1_t2650267322 * L_0 = __this->get_OnAdStarted_3();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_t2650267322 * L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_t2650267322 ** L_2 = __this->get_address_of_OnAdStarted_3();
		EventHandler_1_t2650267322 * L_3 = V_1;
		EventHandler_1_t2650267322 * L_4 = ___value0;
		Delegate_t1188392813 * L_5 = Delegate_Remove_m334097152(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		EventHandler_1_t2650267322 * L_6 = V_0;
		EventHandler_1_t2650267322 * L_7 = InterlockedCompareExchangeImpl<EventHandler_1_t2650267322 *>((EventHandler_1_t2650267322 **)L_2, ((EventHandler_1_t2650267322 *)CastclassSealed((RuntimeObject*)L_5, EventHandler_1_t2650267322_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_t2650267322 * L_8 = V_0;
		EventHandler_1_t2650267322 * L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_t2650267322 *)L_8) == ((RuntimeObject*)(EventHandler_1_t2650267322 *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GNSAdSDK.iOS.RewardVideoAdClientImpl::add_OnAdRewarded(System.EventHandler`1<GNSAdSDK.Api.VideoRewardData>)
extern "C"  void RewardVideoAdClientImpl_add_OnAdRewarded_m3639139605 (RewardVideoAdClientImpl_t1565645521 * __this, EventHandler_1_t2650267322 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RewardVideoAdClientImpl_add_OnAdRewarded_m3639139605_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t2650267322 * V_0 = NULL;
	EventHandler_1_t2650267322 * V_1 = NULL;
	{
		EventHandler_1_t2650267322 * L_0 = __this->get_OnAdRewarded_4();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_t2650267322 * L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_t2650267322 ** L_2 = __this->get_address_of_OnAdRewarded_4();
		EventHandler_1_t2650267322 * L_3 = V_1;
		EventHandler_1_t2650267322 * L_4 = ___value0;
		Delegate_t1188392813 * L_5 = Delegate_Combine_m1859655160(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		EventHandler_1_t2650267322 * L_6 = V_0;
		EventHandler_1_t2650267322 * L_7 = InterlockedCompareExchangeImpl<EventHandler_1_t2650267322 *>((EventHandler_1_t2650267322 **)L_2, ((EventHandler_1_t2650267322 *)CastclassSealed((RuntimeObject*)L_5, EventHandler_1_t2650267322_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_t2650267322 * L_8 = V_0;
		EventHandler_1_t2650267322 * L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_t2650267322 *)L_8) == ((RuntimeObject*)(EventHandler_1_t2650267322 *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GNSAdSDK.iOS.RewardVideoAdClientImpl::remove_OnAdRewarded(System.EventHandler`1<GNSAdSDK.Api.VideoRewardData>)
extern "C"  void RewardVideoAdClientImpl_remove_OnAdRewarded_m3762179996 (RewardVideoAdClientImpl_t1565645521 * __this, EventHandler_1_t2650267322 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RewardVideoAdClientImpl_remove_OnAdRewarded_m3762179996_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t2650267322 * V_0 = NULL;
	EventHandler_1_t2650267322 * V_1 = NULL;
	{
		EventHandler_1_t2650267322 * L_0 = __this->get_OnAdRewarded_4();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_t2650267322 * L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_t2650267322 ** L_2 = __this->get_address_of_OnAdRewarded_4();
		EventHandler_1_t2650267322 * L_3 = V_1;
		EventHandler_1_t2650267322 * L_4 = ___value0;
		Delegate_t1188392813 * L_5 = Delegate_Remove_m334097152(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		EventHandler_1_t2650267322 * L_6 = V_0;
		EventHandler_1_t2650267322 * L_7 = InterlockedCompareExchangeImpl<EventHandler_1_t2650267322 *>((EventHandler_1_t2650267322 **)L_2, ((EventHandler_1_t2650267322 *)CastclassSealed((RuntimeObject*)L_5, EventHandler_1_t2650267322_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_t2650267322 * L_8 = V_0;
		EventHandler_1_t2650267322 * L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_t2650267322 *)L_8) == ((RuntimeObject*)(EventHandler_1_t2650267322 *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GNSAdSDK.iOS.RewardVideoAdClientImpl::add_OnAdClosed(System.EventHandler`1<GNSAdSDK.Api.VideoRewardData>)
extern "C"  void RewardVideoAdClientImpl_add_OnAdClosed_m145080423 (RewardVideoAdClientImpl_t1565645521 * __this, EventHandler_1_t2650267322 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RewardVideoAdClientImpl_add_OnAdClosed_m145080423_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t2650267322 * V_0 = NULL;
	EventHandler_1_t2650267322 * V_1 = NULL;
	{
		EventHandler_1_t2650267322 * L_0 = __this->get_OnAdClosed_5();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_t2650267322 * L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_t2650267322 ** L_2 = __this->get_address_of_OnAdClosed_5();
		EventHandler_1_t2650267322 * L_3 = V_1;
		EventHandler_1_t2650267322 * L_4 = ___value0;
		Delegate_t1188392813 * L_5 = Delegate_Combine_m1859655160(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		EventHandler_1_t2650267322 * L_6 = V_0;
		EventHandler_1_t2650267322 * L_7 = InterlockedCompareExchangeImpl<EventHandler_1_t2650267322 *>((EventHandler_1_t2650267322 **)L_2, ((EventHandler_1_t2650267322 *)CastclassSealed((RuntimeObject*)L_5, EventHandler_1_t2650267322_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_t2650267322 * L_8 = V_0;
		EventHandler_1_t2650267322 * L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_t2650267322 *)L_8) == ((RuntimeObject*)(EventHandler_1_t2650267322 *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GNSAdSDK.iOS.RewardVideoAdClientImpl::remove_OnAdClosed(System.EventHandler`1<GNSAdSDK.Api.VideoRewardData>)
extern "C"  void RewardVideoAdClientImpl_remove_OnAdClosed_m170785595 (RewardVideoAdClientImpl_t1565645521 * __this, EventHandler_1_t2650267322 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RewardVideoAdClientImpl_remove_OnAdClosed_m170785595_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t2650267322 * V_0 = NULL;
	EventHandler_1_t2650267322 * V_1 = NULL;
	{
		EventHandler_1_t2650267322 * L_0 = __this->get_OnAdClosed_5();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_t2650267322 * L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_t2650267322 ** L_2 = __this->get_address_of_OnAdClosed_5();
		EventHandler_1_t2650267322 * L_3 = V_1;
		EventHandler_1_t2650267322 * L_4 = ___value0;
		Delegate_t1188392813 * L_5 = Delegate_Remove_m334097152(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		EventHandler_1_t2650267322 * L_6 = V_0;
		EventHandler_1_t2650267322 * L_7 = InterlockedCompareExchangeImpl<EventHandler_1_t2650267322 *>((EventHandler_1_t2650267322 **)L_2, ((EventHandler_1_t2650267322 *)CastclassSealed((RuntimeObject*)L_5, EventHandler_1_t2650267322_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_t2650267322 * L_8 = V_0;
		EventHandler_1_t2650267322 * L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_t2650267322 *)L_8) == ((RuntimeObject*)(EventHandler_1_t2650267322 *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GNSAdSDK.iOS.RewardVideoAdClientImpl::add_OnAdFailedToLoad(System.EventHandler`1<GNSAdSDK.Api.VideoRewardFailedData>)
extern "C"  void RewardVideoAdClientImpl_add_OnAdFailedToLoad_m2405322016 (RewardVideoAdClientImpl_t1565645521 * __this, EventHandler_1_t1820321320 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RewardVideoAdClientImpl_add_OnAdFailedToLoad_m2405322016_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t1820321320 * V_0 = NULL;
	EventHandler_1_t1820321320 * V_1 = NULL;
	{
		EventHandler_1_t1820321320 * L_0 = __this->get_OnAdFailedToLoad_6();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_t1820321320 * L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_t1820321320 ** L_2 = __this->get_address_of_OnAdFailedToLoad_6();
		EventHandler_1_t1820321320 * L_3 = V_1;
		EventHandler_1_t1820321320 * L_4 = ___value0;
		Delegate_t1188392813 * L_5 = Delegate_Combine_m1859655160(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		EventHandler_1_t1820321320 * L_6 = V_0;
		EventHandler_1_t1820321320 * L_7 = InterlockedCompareExchangeImpl<EventHandler_1_t1820321320 *>((EventHandler_1_t1820321320 **)L_2, ((EventHandler_1_t1820321320 *)CastclassSealed((RuntimeObject*)L_5, EventHandler_1_t1820321320_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_t1820321320 * L_8 = V_0;
		EventHandler_1_t1820321320 * L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_t1820321320 *)L_8) == ((RuntimeObject*)(EventHandler_1_t1820321320 *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GNSAdSDK.iOS.RewardVideoAdClientImpl::remove_OnAdFailedToLoad(System.EventHandler`1<GNSAdSDK.Api.VideoRewardFailedData>)
extern "C"  void RewardVideoAdClientImpl_remove_OnAdFailedToLoad_m1678587269 (RewardVideoAdClientImpl_t1565645521 * __this, EventHandler_1_t1820321320 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RewardVideoAdClientImpl_remove_OnAdFailedToLoad_m1678587269_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t1820321320 * V_0 = NULL;
	EventHandler_1_t1820321320 * V_1 = NULL;
	{
		EventHandler_1_t1820321320 * L_0 = __this->get_OnAdFailedToLoad_6();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_t1820321320 * L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_t1820321320 ** L_2 = __this->get_address_of_OnAdFailedToLoad_6();
		EventHandler_1_t1820321320 * L_3 = V_1;
		EventHandler_1_t1820321320 * L_4 = ___value0;
		Delegate_t1188392813 * L_5 = Delegate_Remove_m334097152(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		EventHandler_1_t1820321320 * L_6 = V_0;
		EventHandler_1_t1820321320 * L_7 = InterlockedCompareExchangeImpl<EventHandler_1_t1820321320 *>((EventHandler_1_t1820321320 **)L_2, ((EventHandler_1_t1820321320 *)CastclassSealed((RuntimeObject*)L_5, EventHandler_1_t1820321320_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_t1820321320 * L_8 = V_0;
		EventHandler_1_t1820321320 * L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_t1820321320 *)L_8) == ((RuntimeObject*)(EventHandler_1_t1820321320 *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.IntPtr GNSAdSDK.iOS.RewardVideoAdClientImpl::get_RewardVideoAdPtr()
extern "C"  intptr_t RewardVideoAdClientImpl_get_RewardVideoAdPtr_m1083220531 (RewardVideoAdClientImpl_t1565645521 * __this, const RuntimeMethod* method)
{
	{
		intptr_t L_0 = __this->get_rewardVideoAdPtr_0();
		return L_0;
	}
}
// System.Void GNSAdSDK.iOS.RewardVideoAdClientImpl::set_RewardVideoAdPtr(System.IntPtr)
extern "C"  void RewardVideoAdClientImpl_set_RewardVideoAdPtr_m1873356605 (RewardVideoAdClientImpl_t1565645521 * __this, intptr_t ___value0, const RuntimeMethod* method)
{
	{
		intptr_t L_0 = __this->get_rewardVideoAdPtr_0();
		Externs_GNSURelease_m1265223388(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		intptr_t L_1 = ___value0;
		__this->set_rewardVideoAdPtr_0(L_1);
		return;
	}
}
// System.Void GNSAdSDK.iOS.RewardVideoAdClientImpl::CreateRewardVideoAd()
extern "C"  void RewardVideoAdClientImpl_CreateRewardVideoAd_m1561433194 (RewardVideoAdClientImpl_t1565645521 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RewardVideoAdClientImpl_CreateRewardVideoAd_m1561433194_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t G_B2_0;
	memset(&G_B2_0, 0, sizeof(G_B2_0));
	intptr_t G_B1_0;
	memset(&G_B1_0, 0, sizeof(G_B1_0));
	GNSURewardVideoAdDidReceiveAdCallback_t2434243366 * G_B4_0 = NULL;
	intptr_t G_B4_1;
	memset(&G_B4_1, 0, sizeof(G_B4_1));
	GNSURewardVideoAdDidReceiveAdCallback_t2434243366 * G_B3_0 = NULL;
	intptr_t G_B3_1;
	memset(&G_B3_1, 0, sizeof(G_B3_1));
	GNSURewardVideoAdDidStartPlayingCallback_t4256405145 * G_B6_0 = NULL;
	GNSURewardVideoAdDidReceiveAdCallback_t2434243366 * G_B6_1 = NULL;
	intptr_t G_B6_2;
	memset(&G_B6_2, 0, sizeof(G_B6_2));
	GNSURewardVideoAdDidStartPlayingCallback_t4256405145 * G_B5_0 = NULL;
	GNSURewardVideoAdDidReceiveAdCallback_t2434243366 * G_B5_1 = NULL;
	intptr_t G_B5_2;
	memset(&G_B5_2, 0, sizeof(G_B5_2));
	GNSURewardVideoAdCallback_t434670165 * G_B8_0 = NULL;
	GNSURewardVideoAdDidStartPlayingCallback_t4256405145 * G_B8_1 = NULL;
	GNSURewardVideoAdDidReceiveAdCallback_t2434243366 * G_B8_2 = NULL;
	intptr_t G_B8_3;
	memset(&G_B8_3, 0, sizeof(G_B8_3));
	GNSURewardVideoAdCallback_t434670165 * G_B7_0 = NULL;
	GNSURewardVideoAdDidStartPlayingCallback_t4256405145 * G_B7_1 = NULL;
	GNSURewardVideoAdDidReceiveAdCallback_t2434243366 * G_B7_2 = NULL;
	intptr_t G_B7_3;
	memset(&G_B7_3, 0, sizeof(G_B7_3));
	GNSURewardVideoAdDidCloseCallback_t4005382830 * G_B10_0 = NULL;
	GNSURewardVideoAdCallback_t434670165 * G_B10_1 = NULL;
	GNSURewardVideoAdDidStartPlayingCallback_t4256405145 * G_B10_2 = NULL;
	GNSURewardVideoAdDidReceiveAdCallback_t2434243366 * G_B10_3 = NULL;
	intptr_t G_B10_4;
	memset(&G_B10_4, 0, sizeof(G_B10_4));
	GNSURewardVideoAdDidCloseCallback_t4005382830 * G_B9_0 = NULL;
	GNSURewardVideoAdCallback_t434670165 * G_B9_1 = NULL;
	GNSURewardVideoAdDidStartPlayingCallback_t4256405145 * G_B9_2 = NULL;
	GNSURewardVideoAdDidReceiveAdCallback_t2434243366 * G_B9_3 = NULL;
	intptr_t G_B9_4;
	memset(&G_B9_4, 0, sizeof(G_B9_4));
	{
		GCHandle_t3351438187  L_0 = GCHandle_Alloc_m3053200191(NULL /*static, unused*/, __this, /*hidden argument*/NULL);
		intptr_t L_1 = GCHandle_op_Explicit_m127498741(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		__this->set_rewardVideoAdClientPtr_1(L_1);
		intptr_t L_2 = __this->get_rewardVideoAdClientPtr_1();
		intptr_t L_3 = Externs_GNSUCreateRewardVideoAd_m3821763676(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		RewardVideoAdClientImpl_set_RewardVideoAdPtr_m1873356605(__this, L_3, /*hidden argument*/NULL);
		intptr_t L_4 = RewardVideoAdClientImpl_get_RewardVideoAdPtr_m1083220531(__this, /*hidden argument*/NULL);
		GNSURewardVideoAdDidReceiveAdCallback_t2434243366 * L_5 = ((RewardVideoAdClientImpl_t1565645521_StaticFields*)il2cpp_codegen_static_fields_for(RewardVideoAdClientImpl_t1565645521_il2cpp_TypeInfo_var))->get_U3CU3Ef__mgU24cache0_7();
		G_B1_0 = L_4;
		if (L_5)
		{
			G_B2_0 = L_4;
			goto IL_0040;
		}
	}
	{
		intptr_t L_6 = (intptr_t)RewardVideoAdClientImpl_RewardVideoAdDidReceiveAd_m1121021960_RuntimeMethod_var;
		GNSURewardVideoAdDidReceiveAdCallback_t2434243366 * L_7 = (GNSURewardVideoAdDidReceiveAdCallback_t2434243366 *)il2cpp_codegen_object_new(GNSURewardVideoAdDidReceiveAdCallback_t2434243366_il2cpp_TypeInfo_var);
		GNSURewardVideoAdDidReceiveAdCallback__ctor_m2542616249(L_7, NULL, L_6, /*hidden argument*/NULL);
		((RewardVideoAdClientImpl_t1565645521_StaticFields*)il2cpp_codegen_static_fields_for(RewardVideoAdClientImpl_t1565645521_il2cpp_TypeInfo_var))->set_U3CU3Ef__mgU24cache0_7(L_7);
		G_B2_0 = G_B1_0;
	}

IL_0040:
	{
		GNSURewardVideoAdDidReceiveAdCallback_t2434243366 * L_8 = ((RewardVideoAdClientImpl_t1565645521_StaticFields*)il2cpp_codegen_static_fields_for(RewardVideoAdClientImpl_t1565645521_il2cpp_TypeInfo_var))->get_U3CU3Ef__mgU24cache0_7();
		GNSURewardVideoAdDidStartPlayingCallback_t4256405145 * L_9 = ((RewardVideoAdClientImpl_t1565645521_StaticFields*)il2cpp_codegen_static_fields_for(RewardVideoAdClientImpl_t1565645521_il2cpp_TypeInfo_var))->get_U3CU3Ef__mgU24cache1_8();
		G_B3_0 = L_8;
		G_B3_1 = G_B2_0;
		if (L_9)
		{
			G_B4_0 = L_8;
			G_B4_1 = G_B2_0;
			goto IL_005d;
		}
	}
	{
		intptr_t L_10 = (intptr_t)RewardVideoAdClientImpl_RewardVideoAdDidStartPlaying_m1506431413_RuntimeMethod_var;
		GNSURewardVideoAdDidStartPlayingCallback_t4256405145 * L_11 = (GNSURewardVideoAdDidStartPlayingCallback_t4256405145 *)il2cpp_codegen_object_new(GNSURewardVideoAdDidStartPlayingCallback_t4256405145_il2cpp_TypeInfo_var);
		GNSURewardVideoAdDidStartPlayingCallback__ctor_m3166241316(L_11, NULL, L_10, /*hidden argument*/NULL);
		((RewardVideoAdClientImpl_t1565645521_StaticFields*)il2cpp_codegen_static_fields_for(RewardVideoAdClientImpl_t1565645521_il2cpp_TypeInfo_var))->set_U3CU3Ef__mgU24cache1_8(L_11);
		G_B4_0 = G_B3_0;
		G_B4_1 = G_B3_1;
	}

IL_005d:
	{
		GNSURewardVideoAdDidStartPlayingCallback_t4256405145 * L_12 = ((RewardVideoAdClientImpl_t1565645521_StaticFields*)il2cpp_codegen_static_fields_for(RewardVideoAdClientImpl_t1565645521_il2cpp_TypeInfo_var))->get_U3CU3Ef__mgU24cache1_8();
		GNSURewardVideoAdCallback_t434670165 * L_13 = ((RewardVideoAdClientImpl_t1565645521_StaticFields*)il2cpp_codegen_static_fields_for(RewardVideoAdClientImpl_t1565645521_il2cpp_TypeInfo_var))->get_U3CU3Ef__mgU24cache2_9();
		G_B5_0 = L_12;
		G_B5_1 = G_B4_0;
		G_B5_2 = G_B4_1;
		if (L_13)
		{
			G_B6_0 = L_12;
			G_B6_1 = G_B4_0;
			G_B6_2 = G_B4_1;
			goto IL_007a;
		}
	}
	{
		intptr_t L_14 = (intptr_t)RewardVideoAdClientImpl_DidRewardUserWithReward_m1394350829_RuntimeMethod_var;
		GNSURewardVideoAdCallback_t434670165 * L_15 = (GNSURewardVideoAdCallback_t434670165 *)il2cpp_codegen_object_new(GNSURewardVideoAdCallback_t434670165_il2cpp_TypeInfo_var);
		GNSURewardVideoAdCallback__ctor_m3760677565(L_15, NULL, L_14, /*hidden argument*/NULL);
		((RewardVideoAdClientImpl_t1565645521_StaticFields*)il2cpp_codegen_static_fields_for(RewardVideoAdClientImpl_t1565645521_il2cpp_TypeInfo_var))->set_U3CU3Ef__mgU24cache2_9(L_15);
		G_B6_0 = G_B5_0;
		G_B6_1 = G_B5_1;
		G_B6_2 = G_B5_2;
	}

IL_007a:
	{
		GNSURewardVideoAdCallback_t434670165 * L_16 = ((RewardVideoAdClientImpl_t1565645521_StaticFields*)il2cpp_codegen_static_fields_for(RewardVideoAdClientImpl_t1565645521_il2cpp_TypeInfo_var))->get_U3CU3Ef__mgU24cache2_9();
		GNSURewardVideoAdDidCloseCallback_t4005382830 * L_17 = ((RewardVideoAdClientImpl_t1565645521_StaticFields*)il2cpp_codegen_static_fields_for(RewardVideoAdClientImpl_t1565645521_il2cpp_TypeInfo_var))->get_U3CU3Ef__mgU24cache3_10();
		G_B7_0 = L_16;
		G_B7_1 = G_B6_0;
		G_B7_2 = G_B6_1;
		G_B7_3 = G_B6_2;
		if (L_17)
		{
			G_B8_0 = L_16;
			G_B8_1 = G_B6_0;
			G_B8_2 = G_B6_1;
			G_B8_3 = G_B6_2;
			goto IL_0097;
		}
	}
	{
		intptr_t L_18 = (intptr_t)RewardVideoAdClientImpl_RewardVideoAdDidClose_m420171930_RuntimeMethod_var;
		GNSURewardVideoAdDidCloseCallback_t4005382830 * L_19 = (GNSURewardVideoAdDidCloseCallback_t4005382830 *)il2cpp_codegen_object_new(GNSURewardVideoAdDidCloseCallback_t4005382830_il2cpp_TypeInfo_var);
		GNSURewardVideoAdDidCloseCallback__ctor_m23934238(L_19, NULL, L_18, /*hidden argument*/NULL);
		((RewardVideoAdClientImpl_t1565645521_StaticFields*)il2cpp_codegen_static_fields_for(RewardVideoAdClientImpl_t1565645521_il2cpp_TypeInfo_var))->set_U3CU3Ef__mgU24cache3_10(L_19);
		G_B8_0 = G_B7_0;
		G_B8_1 = G_B7_1;
		G_B8_2 = G_B7_2;
		G_B8_3 = G_B7_3;
	}

IL_0097:
	{
		GNSURewardVideoAdDidCloseCallback_t4005382830 * L_20 = ((RewardVideoAdClientImpl_t1565645521_StaticFields*)il2cpp_codegen_static_fields_for(RewardVideoAdClientImpl_t1565645521_il2cpp_TypeInfo_var))->get_U3CU3Ef__mgU24cache3_10();
		GNSURewardVideoAdErrorCallback_t2314677993 * L_21 = ((RewardVideoAdClientImpl_t1565645521_StaticFields*)il2cpp_codegen_static_fields_for(RewardVideoAdClientImpl_t1565645521_il2cpp_TypeInfo_var))->get_U3CU3Ef__mgU24cache4_11();
		G_B9_0 = L_20;
		G_B9_1 = G_B8_0;
		G_B9_2 = G_B8_1;
		G_B9_3 = G_B8_2;
		G_B9_4 = G_B8_3;
		if (L_21)
		{
			G_B10_0 = L_20;
			G_B10_1 = G_B8_0;
			G_B10_2 = G_B8_1;
			G_B10_3 = G_B8_2;
			G_B10_4 = G_B8_3;
			goto IL_00b4;
		}
	}
	{
		intptr_t L_22 = (intptr_t)RewardVideoAdClientImpl_DidFailToLoadWithError_m2099900401_RuntimeMethod_var;
		GNSURewardVideoAdErrorCallback_t2314677993 * L_23 = (GNSURewardVideoAdErrorCallback_t2314677993 *)il2cpp_codegen_object_new(GNSURewardVideoAdErrorCallback_t2314677993_il2cpp_TypeInfo_var);
		GNSURewardVideoAdErrorCallback__ctor_m2667031627(L_23, NULL, L_22, /*hidden argument*/NULL);
		((RewardVideoAdClientImpl_t1565645521_StaticFields*)il2cpp_codegen_static_fields_for(RewardVideoAdClientImpl_t1565645521_il2cpp_TypeInfo_var))->set_U3CU3Ef__mgU24cache4_11(L_23);
		G_B10_0 = G_B9_0;
		G_B10_1 = G_B9_1;
		G_B10_2 = G_B9_2;
		G_B10_3 = G_B9_3;
		G_B10_4 = G_B9_4;
	}

IL_00b4:
	{
		GNSURewardVideoAdErrorCallback_t2314677993 * L_24 = ((RewardVideoAdClientImpl_t1565645521_StaticFields*)il2cpp_codegen_static_fields_for(RewardVideoAdClientImpl_t1565645521_il2cpp_TypeInfo_var))->get_U3CU3Ef__mgU24cache4_11();
		Externs_GNSURewardVideoAdCallbacks_m1806677466(NULL /*static, unused*/, G_B10_4, G_B10_3, G_B10_2, G_B10_1, G_B10_0, L_24, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GNSAdSDK.iOS.RewardVideoAdClientImpl::DestroyRewardVideoAd()
extern "C"  void RewardVideoAdClientImpl_DestroyRewardVideoAd_m4139553371 (RewardVideoAdClientImpl_t1565645521 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RewardVideoAdClientImpl_DestroyRewardVideoAd_m4139553371_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RewardVideoAdClientImpl_set_RewardVideoAdPtr_m1873356605(__this, (intptr_t)(0), /*hidden argument*/NULL);
		return;
	}
}
// System.Void GNSAdSDK.iOS.RewardVideoAdClientImpl::Dispose()
extern "C"  void RewardVideoAdClientImpl_Dispose_m3675713230 (RewardVideoAdClientImpl_t1565645521 * __this, const RuntimeMethod* method)
{
	GCHandle_t3351438187  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		RewardVideoAdClientImpl_DestroyRewardVideoAd_m4139553371(__this, /*hidden argument*/NULL);
		intptr_t L_0 = __this->get_rewardVideoAdClientPtr_1();
		GCHandle_t3351438187  L_1 = GCHandle_op_Explicit_m976572069(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		GCHandle_Free_m1457699368((GCHandle_t3351438187 *)(&V_0), /*hidden argument*/NULL);
		return;
	}
}
// System.Void GNSAdSDK.iOS.RewardVideoAdClientImpl::Finalize()
extern "C"  void RewardVideoAdClientImpl_Finalize_m3236517374 (RewardVideoAdClientImpl_t1565645521 * __this, const RuntimeMethod* method)
{
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);

IL_0000:
	try
	{ // begin try (depth: 1)
		RewardVideoAdClientImpl_Dispose_m3675713230(__this, /*hidden argument*/NULL);
		IL2CPP_LEAVE(0x12, FINALLY_000b);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_000b;
	}

FINALLY_000b:
	{ // begin finally (depth: 1)
		Object_Finalize_m3076187857(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(11)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(11)
	{
		IL2CPP_JUMP_TBL(0x12, IL_0012)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0012:
	{
		return;
	}
}
// System.Void GNSAdSDK.iOS.RewardVideoAdClientImpl::LoadAd(System.String)
extern "C"  void RewardVideoAdClientImpl_LoadAd_m1393376876 (RewardVideoAdClientImpl_t1565645521 * __this, String_t* ___zoneId0, const RuntimeMethod* method)
{
	{
		intptr_t L_0 = RewardVideoAdClientImpl_get_RewardVideoAdPtr_m1083220531(__this, /*hidden argument*/NULL);
		String_t* L_1 = ___zoneId0;
		Externs_GNSURewardVideoAdLoadRequest_m2751123278(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean GNSAdSDK.iOS.RewardVideoAdClientImpl::IsLoaded()
extern "C"  bool RewardVideoAdClientImpl_IsLoaded_m2925090808 (RewardVideoAdClientImpl_t1565645521 * __this, const RuntimeMethod* method)
{
	{
		intptr_t L_0 = RewardVideoAdClientImpl_get_RewardVideoAdPtr_m1083220531(__this, /*hidden argument*/NULL);
		bool L_1 = Externs_GNSURewardVideoAdCanShow_m2483611378(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void GNSAdSDK.iOS.RewardVideoAdClientImpl::ShowAd()
extern "C"  void RewardVideoAdClientImpl_ShowAd_m1888969949 (RewardVideoAdClientImpl_t1565645521 * __this, const RuntimeMethod* method)
{
	{
		intptr_t L_0 = RewardVideoAdClientImpl_get_RewardVideoAdPtr_m1083220531(__this, /*hidden argument*/NULL);
		Externs_GNSURewardVideoAdShow_m2360473702(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GNSAdSDK.iOS.RewardVideoAdClientImpl::DisposeAd()
extern "C"  void RewardVideoAdClientImpl_DisposeAd_m405708573 (RewardVideoAdClientImpl_t1565645521 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void GNSAdSDK.iOS.RewardVideoAdClientImpl::RewardVideoAdDidReceiveAd(System.IntPtr)
extern "C"  void RewardVideoAdClientImpl_RewardVideoAdDidReceiveAd_m1121021960 (RuntimeObject * __this /* static, unused */, intptr_t ___rewardVideoAdClient0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RewardVideoAdClientImpl_RewardVideoAdDidReceiveAd_m1121021960_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RewardVideoAdClientImpl_t1565645521 * V_0 = NULL;
	{
		intptr_t L_0 = ___rewardVideoAdClient0;
		RewardVideoAdClientImpl_t1565645521 * L_1 = RewardVideoAdClientImpl_IntPtrToRewardVideoAdClientImpl_m3856521960(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		RewardVideoAdClientImpl_t1565645521 * L_2 = V_0;
		NullCheck(L_2);
		EventHandler_1_t1515976428 * L_3 = L_2->get_OnAdLoaded_2();
		if (!L_3)
		{
			goto IL_0023;
		}
	}
	{
		RewardVideoAdClientImpl_t1565645521 * L_4 = V_0;
		NullCheck(L_4);
		EventHandler_1_t1515976428 * L_5 = L_4->get_OnAdLoaded_2();
		RewardVideoAdClientImpl_t1565645521 * L_6 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(EventArgs_t3591816995_il2cpp_TypeInfo_var);
		EventArgs_t3591816995 * L_7 = ((EventArgs_t3591816995_StaticFields*)il2cpp_codegen_static_fields_for(EventArgs_t3591816995_il2cpp_TypeInfo_var))->get_Empty_0();
		NullCheck(L_5);
		EventHandler_1_Invoke_m63082545(L_5, L_6, L_7, /*hidden argument*/EventHandler_1_Invoke_m63082545_RuntimeMethod_var);
	}

IL_0023:
	{
		return;
	}
}
// System.Void GNSAdSDK.iOS.RewardVideoAdClientImpl::RewardVideoAdDidStartPlaying(System.IntPtr)
extern "C"  void RewardVideoAdClientImpl_RewardVideoAdDidStartPlaying_m1506431413 (RuntimeObject * __this /* static, unused */, intptr_t ___rewardVideoAdClient0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RewardVideoAdClientImpl_RewardVideoAdDidStartPlaying_m1506431413_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RewardVideoAdClientImpl_t1565645521 * V_0 = NULL;
	{
		intptr_t L_0 = ___rewardVideoAdClient0;
		RewardVideoAdClientImpl_t1565645521 * L_1 = RewardVideoAdClientImpl_IntPtrToRewardVideoAdClientImpl_m3856521960(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		RewardVideoAdClientImpl_t1565645521 * L_2 = V_0;
		NullCheck(L_2);
		EventHandler_1_t2650267322 * L_3 = L_2->get_OnAdStarted_3();
		if (!L_3)
		{
			goto IL_0023;
		}
	}
	{
		RewardVideoAdClientImpl_t1565645521 * L_4 = V_0;
		NullCheck(L_4);
		EventHandler_1_t2650267322 * L_5 = L_4->get_OnAdStarted_3();
		RewardVideoAdClientImpl_t1565645521 * L_6 = V_0;
		VideoRewardData_t431140593 * L_7 = (VideoRewardData_t431140593 *)il2cpp_codegen_object_new(VideoRewardData_t431140593_il2cpp_TypeInfo_var);
		VideoRewardData__ctor_m3738582510(L_7, /*hidden argument*/NULL);
		NullCheck(L_5);
		EventHandler_1_Invoke_m28932318(L_5, L_6, L_7, /*hidden argument*/EventHandler_1_Invoke_m28932318_RuntimeMethod_var);
	}

IL_0023:
	{
		return;
	}
}
// System.Void GNSAdSDK.iOS.RewardVideoAdClientImpl::DidRewardUserWithReward(System.IntPtr,System.String,System.Double)
extern "C"  void RewardVideoAdClientImpl_DidRewardUserWithReward_m1394350829 (RuntimeObject * __this /* static, unused */, intptr_t ___rewardVideoAdClient0, String_t* ___rewardType1, double ___rewardAmount2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RewardVideoAdClientImpl_DidRewardUserWithReward_m1394350829_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RewardVideoAdClientImpl_t1565645521 * V_0 = NULL;
	VideoRewardData_t431140593 * V_1 = NULL;
	{
		intptr_t L_0 = ___rewardVideoAdClient0;
		RewardVideoAdClientImpl_t1565645521 * L_1 = RewardVideoAdClientImpl_IntPtrToRewardVideoAdClientImpl_m3856521960(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		RewardVideoAdClientImpl_t1565645521 * L_2 = V_0;
		NullCheck(L_2);
		EventHandler_1_t2650267322 * L_3 = L_2->get_OnAdRewarded_4();
		if (!L_3)
		{
			goto IL_0033;
		}
	}
	{
		RewardVideoAdClientImpl_t1565645521 * L_4 = V_0;
		NullCheck(L_4);
		EventHandler_1_t2650267322 * L_5 = L_4->get_OnAdRewarded_4();
		RewardVideoAdClientImpl_t1565645521 * L_6 = V_0;
		VideoRewardData_t431140593 * L_7 = (VideoRewardData_t431140593 *)il2cpp_codegen_object_new(VideoRewardData_t431140593_il2cpp_TypeInfo_var);
		VideoRewardData__ctor_m3738582510(L_7, /*hidden argument*/NULL);
		V_1 = L_7;
		VideoRewardData_t431140593 * L_8 = V_1;
		double L_9 = ___rewardAmount2;
		NullCheck(L_8);
		VideoRewardData_set_Amount_m1581478889(L_8, L_9, /*hidden argument*/NULL);
		VideoRewardData_t431140593 * L_10 = V_1;
		String_t* L_11 = ___rewardType1;
		NullCheck(L_10);
		VideoRewardData_set_Type_m3710895495(L_10, L_11, /*hidden argument*/NULL);
		VideoRewardData_t431140593 * L_12 = V_1;
		NullCheck(L_5);
		EventHandler_1_Invoke_m28932318(L_5, L_6, L_12, /*hidden argument*/EventHandler_1_Invoke_m28932318_RuntimeMethod_var);
	}

IL_0033:
	{
		return;
	}
}
// System.Void GNSAdSDK.iOS.RewardVideoAdClientImpl::RewardVideoAdDidClose(System.IntPtr)
extern "C"  void RewardVideoAdClientImpl_RewardVideoAdDidClose_m420171930 (RuntimeObject * __this /* static, unused */, intptr_t ___rewardVideoAdClient0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RewardVideoAdClientImpl_RewardVideoAdDidClose_m420171930_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RewardVideoAdClientImpl_t1565645521 * V_0 = NULL;
	{
		intptr_t L_0 = ___rewardVideoAdClient0;
		RewardVideoAdClientImpl_t1565645521 * L_1 = RewardVideoAdClientImpl_IntPtrToRewardVideoAdClientImpl_m3856521960(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		RewardVideoAdClientImpl_t1565645521 * L_2 = V_0;
		NullCheck(L_2);
		EventHandler_1_t2650267322 * L_3 = L_2->get_OnAdClosed_5();
		if (!L_3)
		{
			goto IL_0023;
		}
	}
	{
		RewardVideoAdClientImpl_t1565645521 * L_4 = V_0;
		NullCheck(L_4);
		EventHandler_1_t2650267322 * L_5 = L_4->get_OnAdClosed_5();
		RewardVideoAdClientImpl_t1565645521 * L_6 = V_0;
		VideoRewardData_t431140593 * L_7 = (VideoRewardData_t431140593 *)il2cpp_codegen_object_new(VideoRewardData_t431140593_il2cpp_TypeInfo_var);
		VideoRewardData__ctor_m3738582510(L_7, /*hidden argument*/NULL);
		NullCheck(L_5);
		EventHandler_1_Invoke_m28932318(L_5, L_6, L_7, /*hidden argument*/EventHandler_1_Invoke_m28932318_RuntimeMethod_var);
	}

IL_0023:
	{
		return;
	}
}
// System.Void GNSAdSDK.iOS.RewardVideoAdClientImpl::DidFailToLoadWithError(System.IntPtr,System.Int32,System.String)
extern "C"  void RewardVideoAdClientImpl_DidFailToLoadWithError_m2099900401 (RuntimeObject * __this /* static, unused */, intptr_t ___rewardVideoAdClient0, int32_t ___errorCode1, String_t* ___errorDescription2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RewardVideoAdClientImpl_DidFailToLoadWithError_m2099900401_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RewardVideoAdClientImpl_t1565645521 * V_0 = NULL;
	VideoRewardFailedData_t3896161887 * V_1 = NULL;
	{
		intptr_t L_0 = ___rewardVideoAdClient0;
		RewardVideoAdClientImpl_t1565645521 * L_1 = RewardVideoAdClientImpl_IntPtrToRewardVideoAdClientImpl_m3856521960(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		RewardVideoAdClientImpl_t1565645521 * L_2 = V_0;
		NullCheck(L_2);
		EventHandler_1_t1820321320 * L_3 = L_2->get_OnAdFailedToLoad_6();
		if (!L_3)
		{
			goto IL_0033;
		}
	}
	{
		RewardVideoAdClientImpl_t1565645521 * L_4 = V_0;
		NullCheck(L_4);
		EventHandler_1_t1820321320 * L_5 = L_4->get_OnAdFailedToLoad_6();
		RewardVideoAdClientImpl_t1565645521 * L_6 = V_0;
		VideoRewardFailedData_t3896161887 * L_7 = (VideoRewardFailedData_t3896161887 *)il2cpp_codegen_object_new(VideoRewardFailedData_t3896161887_il2cpp_TypeInfo_var);
		VideoRewardFailedData__ctor_m860447526(L_7, /*hidden argument*/NULL);
		V_1 = L_7;
		VideoRewardFailedData_t3896161887 * L_8 = V_1;
		int32_t L_9 = ___errorCode1;
		NullCheck(L_8);
		VideoRewardFailedData_set_Code_m818218941(L_8, L_9, /*hidden argument*/NULL);
		VideoRewardFailedData_t3896161887 * L_10 = V_1;
		String_t* L_11 = ___errorDescription2;
		NullCheck(L_10);
		VideoRewardFailedData_set_Message_m239672109(L_10, L_11, /*hidden argument*/NULL);
		VideoRewardFailedData_t3896161887 * L_12 = V_1;
		NullCheck(L_5);
		EventHandler_1_Invoke_m2342911564(L_5, L_6, L_12, /*hidden argument*/EventHandler_1_Invoke_m2342911564_RuntimeMethod_var);
	}

IL_0033:
	{
		return;
	}
}
// GNSAdSDK.iOS.RewardVideoAdClientImpl GNSAdSDK.iOS.RewardVideoAdClientImpl::IntPtrToRewardVideoAdClientImpl(System.IntPtr)
extern "C"  RewardVideoAdClientImpl_t1565645521 * RewardVideoAdClientImpl_IntPtrToRewardVideoAdClientImpl_m3856521960 (RuntimeObject * __this /* static, unused */, intptr_t ___rewardVideoAdClient0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RewardVideoAdClientImpl_IntPtrToRewardVideoAdClientImpl_m3856521960_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	GCHandle_t3351438187  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		intptr_t L_0 = ___rewardVideoAdClient0;
		GCHandle_t3351438187  L_1 = GCHandle_op_Explicit_m976572069(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		RuntimeObject * L_2 = GCHandle_get_Target_m1824973883((GCHandle_t3351438187 *)(&V_0), /*hidden argument*/NULL);
		return ((RewardVideoAdClientImpl_t1565645521 *)IsInstClass((RuntimeObject*)L_2, RewardVideoAdClientImpl_t1565645521_il2cpp_TypeInfo_var));
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern "C"  void DelegatePInvokeWrapper_GNSURewardVideoAdCallback_t434670165 (GNSURewardVideoAdCallback_t434670165 * __this, intptr_t ___rewardVideoAdClient0, String_t* ___rewardType1, double ___rewardAmount2, const RuntimeMethod* method)
{
	typedef void (STDCALL *PInvokeFunc)(intptr_t, char*, double);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Marshaling of parameter '___rewardType1' to native representation
	char* ____rewardType1_marshaled = NULL;
	____rewardType1_marshaled = il2cpp_codegen_marshal_string(___rewardType1);

	// Native function invocation
	il2cppPInvokeFunc(___rewardVideoAdClient0, ____rewardType1_marshaled, ___rewardAmount2);

	// Marshaling cleanup of parameter '___rewardType1' native representation
	il2cpp_codegen_marshal_free(____rewardType1_marshaled);
	____rewardType1_marshaled = NULL;

}
// System.Void GNSAdSDK.iOS.RewardVideoAdClientImpl/GNSURewardVideoAdCallback::.ctor(System.Object,System.IntPtr)
extern "C"  void GNSURewardVideoAdCallback__ctor_m3760677565 (GNSURewardVideoAdCallback_t434670165 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void GNSAdSDK.iOS.RewardVideoAdClientImpl/GNSURewardVideoAdCallback::Invoke(System.IntPtr,System.String,System.Double)
extern "C"  void GNSURewardVideoAdCallback_Invoke_m3989463145 (GNSURewardVideoAdCallback_t434670165 * __this, intptr_t ___rewardVideoAdClient0, String_t* ___rewardType1, double ___rewardAmount2, const RuntimeMethod* method)
{
	if(__this->get_prev_9() != NULL)
	{
		GNSURewardVideoAdCallback_Invoke_m3989463145((GNSURewardVideoAdCallback_t434670165 *)__this->get_prev_9(), ___rewardVideoAdClient0, ___rewardType1, ___rewardAmount2, method);
	}
	Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
	RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
	RuntimeObject* targetThis = __this->get_m_target_2();
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
	bool ___methodIsStatic = MethodIsStatic(targetMethod);
	if (___methodIsStatic)
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 3)
		{
			// open
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, intptr_t, String_t*, double, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, ___rewardVideoAdClient0, ___rewardType1, ___rewardAmount2, targetMethod);
			}
		}
		else
		{
			// closed
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, void*, intptr_t, String_t*, double, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___rewardVideoAdClient0, ___rewardType1, ___rewardAmount2, targetMethod);
			}
		}
	}
	else
	{
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker3< intptr_t, String_t*, double >::Invoke(targetMethod, targetThis, ___rewardVideoAdClient0, ___rewardType1, ___rewardAmount2);
					else
						GenericVirtActionInvoker3< intptr_t, String_t*, double >::Invoke(targetMethod, targetThis, ___rewardVideoAdClient0, ___rewardType1, ___rewardAmount2);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker3< intptr_t, String_t*, double >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___rewardVideoAdClient0, ___rewardType1, ___rewardAmount2);
					else
						VirtActionInvoker3< intptr_t, String_t*, double >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___rewardVideoAdClient0, ___rewardType1, ___rewardAmount2);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, intptr_t, String_t*, double, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___rewardVideoAdClient0, ___rewardType1, ___rewardAmount2, targetMethod);
			}
		}
	}
}
// System.IAsyncResult GNSAdSDK.iOS.RewardVideoAdClientImpl/GNSURewardVideoAdCallback::BeginInvoke(System.IntPtr,System.String,System.Double,System.AsyncCallback,System.Object)
extern "C"  RuntimeObject* GNSURewardVideoAdCallback_BeginInvoke_m90271464 (GNSURewardVideoAdCallback_t434670165 * __this, intptr_t ___rewardVideoAdClient0, String_t* ___rewardType1, double ___rewardAmount2, AsyncCallback_t3962456242 * ___callback3, RuntimeObject * ___object4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GNSURewardVideoAdCallback_BeginInvoke_m90271464_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___rewardVideoAdClient0);
	__d_args[1] = ___rewardType1;
	__d_args[2] = Box(Double_t594665363_il2cpp_TypeInfo_var, &___rewardAmount2);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback3, (RuntimeObject*)___object4);
}
// System.Void GNSAdSDK.iOS.RewardVideoAdClientImpl/GNSURewardVideoAdCallback::EndInvoke(System.IAsyncResult)
extern "C"  void GNSURewardVideoAdCallback_EndInvoke_m1061996554 (GNSURewardVideoAdCallback_t434670165 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern "C"  void DelegatePInvokeWrapper_GNSURewardVideoAdDidCloseCallback_t4005382830 (GNSURewardVideoAdDidCloseCallback_t4005382830 * __this, intptr_t ___rewardVideoAdClient0, const RuntimeMethod* method)
{
	typedef void (STDCALL *PInvokeFunc)(intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(___rewardVideoAdClient0);

}
// System.Void GNSAdSDK.iOS.RewardVideoAdClientImpl/GNSURewardVideoAdDidCloseCallback::.ctor(System.Object,System.IntPtr)
extern "C"  void GNSURewardVideoAdDidCloseCallback__ctor_m23934238 (GNSURewardVideoAdDidCloseCallback_t4005382830 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void GNSAdSDK.iOS.RewardVideoAdClientImpl/GNSURewardVideoAdDidCloseCallback::Invoke(System.IntPtr)
extern "C"  void GNSURewardVideoAdDidCloseCallback_Invoke_m793127847 (GNSURewardVideoAdDidCloseCallback_t4005382830 * __this, intptr_t ___rewardVideoAdClient0, const RuntimeMethod* method)
{
	if(__this->get_prev_9() != NULL)
	{
		GNSURewardVideoAdDidCloseCallback_Invoke_m793127847((GNSURewardVideoAdDidCloseCallback_t4005382830 *)__this->get_prev_9(), ___rewardVideoAdClient0, method);
	}
	Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
	RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
	RuntimeObject* targetThis = __this->get_m_target_2();
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
	bool ___methodIsStatic = MethodIsStatic(targetMethod);
	if (___methodIsStatic)
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 1)
		{
			// open
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, ___rewardVideoAdClient0, targetMethod);
			}
		}
		else
		{
			// closed
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, void*, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___rewardVideoAdClient0, targetMethod);
			}
		}
	}
	else
	{
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< intptr_t >::Invoke(targetMethod, targetThis, ___rewardVideoAdClient0);
					else
						GenericVirtActionInvoker1< intptr_t >::Invoke(targetMethod, targetThis, ___rewardVideoAdClient0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___rewardVideoAdClient0);
					else
						VirtActionInvoker1< intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___rewardVideoAdClient0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___rewardVideoAdClient0, targetMethod);
			}
		}
	}
}
// System.IAsyncResult GNSAdSDK.iOS.RewardVideoAdClientImpl/GNSURewardVideoAdDidCloseCallback::BeginInvoke(System.IntPtr,System.AsyncCallback,System.Object)
extern "C"  RuntimeObject* GNSURewardVideoAdDidCloseCallback_BeginInvoke_m3913211642 (GNSURewardVideoAdDidCloseCallback_t4005382830 * __this, intptr_t ___rewardVideoAdClient0, AsyncCallback_t3962456242 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GNSURewardVideoAdDidCloseCallback_BeginInvoke_m3913211642_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___rewardVideoAdClient0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void GNSAdSDK.iOS.RewardVideoAdClientImpl/GNSURewardVideoAdDidCloseCallback::EndInvoke(System.IAsyncResult)
extern "C"  void GNSURewardVideoAdDidCloseCallback_EndInvoke_m985295436 (GNSURewardVideoAdDidCloseCallback_t4005382830 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern "C"  void DelegatePInvokeWrapper_GNSURewardVideoAdDidReceiveAdCallback_t2434243366 (GNSURewardVideoAdDidReceiveAdCallback_t2434243366 * __this, intptr_t ___rewardVideoAdClient0, const RuntimeMethod* method)
{
	typedef void (STDCALL *PInvokeFunc)(intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(___rewardVideoAdClient0);

}
// System.Void GNSAdSDK.iOS.RewardVideoAdClientImpl/GNSURewardVideoAdDidReceiveAdCallback::.ctor(System.Object,System.IntPtr)
extern "C"  void GNSURewardVideoAdDidReceiveAdCallback__ctor_m2542616249 (GNSURewardVideoAdDidReceiveAdCallback_t2434243366 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void GNSAdSDK.iOS.RewardVideoAdClientImpl/GNSURewardVideoAdDidReceiveAdCallback::Invoke(System.IntPtr)
extern "C"  void GNSURewardVideoAdDidReceiveAdCallback_Invoke_m3685070492 (GNSURewardVideoAdDidReceiveAdCallback_t2434243366 * __this, intptr_t ___rewardVideoAdClient0, const RuntimeMethod* method)
{
	if(__this->get_prev_9() != NULL)
	{
		GNSURewardVideoAdDidReceiveAdCallback_Invoke_m3685070492((GNSURewardVideoAdDidReceiveAdCallback_t2434243366 *)__this->get_prev_9(), ___rewardVideoAdClient0, method);
	}
	Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
	RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
	RuntimeObject* targetThis = __this->get_m_target_2();
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
	bool ___methodIsStatic = MethodIsStatic(targetMethod);
	if (___methodIsStatic)
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 1)
		{
			// open
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, ___rewardVideoAdClient0, targetMethod);
			}
		}
		else
		{
			// closed
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, void*, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___rewardVideoAdClient0, targetMethod);
			}
		}
	}
	else
	{
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< intptr_t >::Invoke(targetMethod, targetThis, ___rewardVideoAdClient0);
					else
						GenericVirtActionInvoker1< intptr_t >::Invoke(targetMethod, targetThis, ___rewardVideoAdClient0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___rewardVideoAdClient0);
					else
						VirtActionInvoker1< intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___rewardVideoAdClient0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___rewardVideoAdClient0, targetMethod);
			}
		}
	}
}
// System.IAsyncResult GNSAdSDK.iOS.RewardVideoAdClientImpl/GNSURewardVideoAdDidReceiveAdCallback::BeginInvoke(System.IntPtr,System.AsyncCallback,System.Object)
extern "C"  RuntimeObject* GNSURewardVideoAdDidReceiveAdCallback_BeginInvoke_m2452301471 (GNSURewardVideoAdDidReceiveAdCallback_t2434243366 * __this, intptr_t ___rewardVideoAdClient0, AsyncCallback_t3962456242 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GNSURewardVideoAdDidReceiveAdCallback_BeginInvoke_m2452301471_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___rewardVideoAdClient0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void GNSAdSDK.iOS.RewardVideoAdClientImpl/GNSURewardVideoAdDidReceiveAdCallback::EndInvoke(System.IAsyncResult)
extern "C"  void GNSURewardVideoAdDidReceiveAdCallback_EndInvoke_m3369655922 (GNSURewardVideoAdDidReceiveAdCallback_t2434243366 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern "C"  void DelegatePInvokeWrapper_GNSURewardVideoAdDidStartPlayingCallback_t4256405145 (GNSURewardVideoAdDidStartPlayingCallback_t4256405145 * __this, intptr_t ___rewardVideoAdClient0, const RuntimeMethod* method)
{
	typedef void (STDCALL *PInvokeFunc)(intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(___rewardVideoAdClient0);

}
// System.Void GNSAdSDK.iOS.RewardVideoAdClientImpl/GNSURewardVideoAdDidStartPlayingCallback::.ctor(System.Object,System.IntPtr)
extern "C"  void GNSURewardVideoAdDidStartPlayingCallback__ctor_m3166241316 (GNSURewardVideoAdDidStartPlayingCallback_t4256405145 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void GNSAdSDK.iOS.RewardVideoAdClientImpl/GNSURewardVideoAdDidStartPlayingCallback::Invoke(System.IntPtr)
extern "C"  void GNSURewardVideoAdDidStartPlayingCallback_Invoke_m3122020536 (GNSURewardVideoAdDidStartPlayingCallback_t4256405145 * __this, intptr_t ___rewardVideoAdClient0, const RuntimeMethod* method)
{
	if(__this->get_prev_9() != NULL)
	{
		GNSURewardVideoAdDidStartPlayingCallback_Invoke_m3122020536((GNSURewardVideoAdDidStartPlayingCallback_t4256405145 *)__this->get_prev_9(), ___rewardVideoAdClient0, method);
	}
	Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
	RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
	RuntimeObject* targetThis = __this->get_m_target_2();
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
	bool ___methodIsStatic = MethodIsStatic(targetMethod);
	if (___methodIsStatic)
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 1)
		{
			// open
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, ___rewardVideoAdClient0, targetMethod);
			}
		}
		else
		{
			// closed
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, void*, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___rewardVideoAdClient0, targetMethod);
			}
		}
	}
	else
	{
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< intptr_t >::Invoke(targetMethod, targetThis, ___rewardVideoAdClient0);
					else
						GenericVirtActionInvoker1< intptr_t >::Invoke(targetMethod, targetThis, ___rewardVideoAdClient0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___rewardVideoAdClient0);
					else
						VirtActionInvoker1< intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___rewardVideoAdClient0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___rewardVideoAdClient0, targetMethod);
			}
		}
	}
}
// System.IAsyncResult GNSAdSDK.iOS.RewardVideoAdClientImpl/GNSURewardVideoAdDidStartPlayingCallback::BeginInvoke(System.IntPtr,System.AsyncCallback,System.Object)
extern "C"  RuntimeObject* GNSURewardVideoAdDidStartPlayingCallback_BeginInvoke_m1510839498 (GNSURewardVideoAdDidStartPlayingCallback_t4256405145 * __this, intptr_t ___rewardVideoAdClient0, AsyncCallback_t3962456242 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GNSURewardVideoAdDidStartPlayingCallback_BeginInvoke_m1510839498_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___rewardVideoAdClient0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void GNSAdSDK.iOS.RewardVideoAdClientImpl/GNSURewardVideoAdDidStartPlayingCallback::EndInvoke(System.IAsyncResult)
extern "C"  void GNSURewardVideoAdDidStartPlayingCallback_EndInvoke_m3776003130 (GNSURewardVideoAdDidStartPlayingCallback_t4256405145 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern "C"  void DelegatePInvokeWrapper_GNSURewardVideoAdErrorCallback_t2314677993 (GNSURewardVideoAdErrorCallback_t2314677993 * __this, intptr_t ___rewardVideoAdClient0, int32_t ___errorCode1, String_t* ___errorDescription2, const RuntimeMethod* method)
{
	typedef void (STDCALL *PInvokeFunc)(intptr_t, int32_t, char*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Marshaling of parameter '___errorDescription2' to native representation
	char* ____errorDescription2_marshaled = NULL;
	____errorDescription2_marshaled = il2cpp_codegen_marshal_string(___errorDescription2);

	// Native function invocation
	il2cppPInvokeFunc(___rewardVideoAdClient0, ___errorCode1, ____errorDescription2_marshaled);

	// Marshaling cleanup of parameter '___errorDescription2' native representation
	il2cpp_codegen_marshal_free(____errorDescription2_marshaled);
	____errorDescription2_marshaled = NULL;

}
// System.Void GNSAdSDK.iOS.RewardVideoAdClientImpl/GNSURewardVideoAdErrorCallback::.ctor(System.Object,System.IntPtr)
extern "C"  void GNSURewardVideoAdErrorCallback__ctor_m2667031627 (GNSURewardVideoAdErrorCallback_t2314677993 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void GNSAdSDK.iOS.RewardVideoAdClientImpl/GNSURewardVideoAdErrorCallback::Invoke(System.IntPtr,System.Int32,System.String)
extern "C"  void GNSURewardVideoAdErrorCallback_Invoke_m1143416352 (GNSURewardVideoAdErrorCallback_t2314677993 * __this, intptr_t ___rewardVideoAdClient0, int32_t ___errorCode1, String_t* ___errorDescription2, const RuntimeMethod* method)
{
	if(__this->get_prev_9() != NULL)
	{
		GNSURewardVideoAdErrorCallback_Invoke_m1143416352((GNSURewardVideoAdErrorCallback_t2314677993 *)__this->get_prev_9(), ___rewardVideoAdClient0, ___errorCode1, ___errorDescription2, method);
	}
	Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
	RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
	RuntimeObject* targetThis = __this->get_m_target_2();
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
	bool ___methodIsStatic = MethodIsStatic(targetMethod);
	if (___methodIsStatic)
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 3)
		{
			// open
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, intptr_t, int32_t, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, ___rewardVideoAdClient0, ___errorCode1, ___errorDescription2, targetMethod);
			}
		}
		else
		{
			// closed
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, void*, intptr_t, int32_t, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___rewardVideoAdClient0, ___errorCode1, ___errorDescription2, targetMethod);
			}
		}
	}
	else
	{
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker3< intptr_t, int32_t, String_t* >::Invoke(targetMethod, targetThis, ___rewardVideoAdClient0, ___errorCode1, ___errorDescription2);
					else
						GenericVirtActionInvoker3< intptr_t, int32_t, String_t* >::Invoke(targetMethod, targetThis, ___rewardVideoAdClient0, ___errorCode1, ___errorDescription2);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker3< intptr_t, int32_t, String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___rewardVideoAdClient0, ___errorCode1, ___errorDescription2);
					else
						VirtActionInvoker3< intptr_t, int32_t, String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___rewardVideoAdClient0, ___errorCode1, ___errorDescription2);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, intptr_t, int32_t, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___rewardVideoAdClient0, ___errorCode1, ___errorDescription2, targetMethod);
			}
		}
	}
}
// System.IAsyncResult GNSAdSDK.iOS.RewardVideoAdClientImpl/GNSURewardVideoAdErrorCallback::BeginInvoke(System.IntPtr,System.Int32,System.String,System.AsyncCallback,System.Object)
extern "C"  RuntimeObject* GNSURewardVideoAdErrorCallback_BeginInvoke_m592882720 (GNSURewardVideoAdErrorCallback_t2314677993 * __this, intptr_t ___rewardVideoAdClient0, int32_t ___errorCode1, String_t* ___errorDescription2, AsyncCallback_t3962456242 * ___callback3, RuntimeObject * ___object4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GNSURewardVideoAdErrorCallback_BeginInvoke_m592882720_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___rewardVideoAdClient0);
	__d_args[1] = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &___errorCode1);
	__d_args[2] = ___errorDescription2;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback3, (RuntimeObject*)___object4);
}
// System.Void GNSAdSDK.iOS.RewardVideoAdClientImpl/GNSURewardVideoAdErrorCallback::EndInvoke(System.IAsyncResult)
extern "C"  void GNSURewardVideoAdErrorCallback_EndInvoke_m736318543 (GNSURewardVideoAdErrorCallback_t2314677993 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void MainSceneScript::.ctor()
extern "C"  void MainSceneScript__ctor_m141265759 (MainSceneScript_t2935155245 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MainSceneScript__ctor_m141265759_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_zoneIdKey_3(_stringLiteral875271522);
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MainSceneScript::RegistRewardVideoAdEventHandler()
extern "C"  void MainSceneScript_RegistRewardVideoAdEventHandler_m2501865270 (MainSceneScript_t2935155245 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MainSceneScript_RegistRewardVideoAdEventHandler_m2501865270_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RewardVideoAd_t2059019935 * V_0 = NULL;
	RewardVideoAd_t2059019935 * G_B3_0 = NULL;
	RewardVideoAd_t2059019935 * G_B2_0 = NULL;
	RewardVideoAd_t2059019935 * G_B5_0 = NULL;
	RewardVideoAd_t2059019935 * G_B4_0 = NULL;
	RewardVideoAd_t2059019935 * G_B7_0 = NULL;
	RewardVideoAd_t2059019935 * G_B6_0 = NULL;
	RewardVideoAd_t2059019935 * G_B9_0 = NULL;
	RewardVideoAd_t2059019935 * G_B8_0 = NULL;
	RewardVideoAd_t2059019935 * G_B11_0 = NULL;
	RewardVideoAd_t2059019935 * G_B10_0 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(MainSceneScript_t2935155245_il2cpp_TypeInfo_var);
		bool L_0 = ((MainSceneScript_t2935155245_StaticFields*)il2cpp_codegen_static_fields_for(MainSceneScript_t2935155245_il2cpp_TypeInfo_var))->get_isRegistedRewardVideoEventHandler_2();
		if (L_0)
		{
			goto IL_00bf;
		}
	}
	{
		RewardVideoAd_t2059019935 * L_1 = RewardVideoAd_get_Instance_m1143162705(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_1;
		RewardVideoAd_t2059019935 * L_2 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(MainSceneScript_t2935155245_il2cpp_TypeInfo_var);
		EventHandler_1_t1515976428 * L_3 = ((MainSceneScript_t2935155245_StaticFields*)il2cpp_codegen_static_fields_for(MainSceneScript_t2935155245_il2cpp_TypeInfo_var))->get_U3CU3Ef__amU24cache0_4();
		G_B2_0 = L_2;
		if (L_3)
		{
			G_B3_0 = L_2;
			goto IL_0029;
		}
	}
	{
		intptr_t L_4 = (intptr_t)MainSceneScript_U3CRegistRewardVideoAdEventHandlerU3Em__0_m1750153989_RuntimeMethod_var;
		EventHandler_1_t1515976428 * L_5 = (EventHandler_1_t1515976428 *)il2cpp_codegen_object_new(EventHandler_1_t1515976428_il2cpp_TypeInfo_var);
		EventHandler_1__ctor_m4114736910(L_5, NULL, L_4, /*hidden argument*/EventHandler_1__ctor_m4114736910_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(MainSceneScript_t2935155245_il2cpp_TypeInfo_var);
		((MainSceneScript_t2935155245_StaticFields*)il2cpp_codegen_static_fields_for(MainSceneScript_t2935155245_il2cpp_TypeInfo_var))->set_U3CU3Ef__amU24cache0_4(L_5);
		G_B3_0 = G_B2_0;
	}

IL_0029:
	{
		IL2CPP_RUNTIME_CLASS_INIT(MainSceneScript_t2935155245_il2cpp_TypeInfo_var);
		EventHandler_1_t1515976428 * L_6 = ((MainSceneScript_t2935155245_StaticFields*)il2cpp_codegen_static_fields_for(MainSceneScript_t2935155245_il2cpp_TypeInfo_var))->get_U3CU3Ef__amU24cache0_4();
		NullCheck(G_B3_0);
		RewardVideoAd_add_OnAdLoaded_m1645794845(G_B3_0, L_6, /*hidden argument*/NULL);
		RewardVideoAd_t2059019935 * L_7 = V_0;
		EventHandler_1_t2650267322 * L_8 = ((MainSceneScript_t2935155245_StaticFields*)il2cpp_codegen_static_fields_for(MainSceneScript_t2935155245_il2cpp_TypeInfo_var))->get_U3CU3Ef__amU24cache1_5();
		G_B4_0 = L_7;
		if (L_8)
		{
			G_B5_0 = L_7;
			goto IL_004c;
		}
	}
	{
		intptr_t L_9 = (intptr_t)MainSceneScript_U3CRegistRewardVideoAdEventHandlerU3Em__1_m833489649_RuntimeMethod_var;
		EventHandler_1_t2650267322 * L_10 = (EventHandler_1_t2650267322 *)il2cpp_codegen_object_new(EventHandler_1_t2650267322_il2cpp_TypeInfo_var);
		EventHandler_1__ctor_m2791549744(L_10, NULL, L_9, /*hidden argument*/EventHandler_1__ctor_m2791549744_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(MainSceneScript_t2935155245_il2cpp_TypeInfo_var);
		((MainSceneScript_t2935155245_StaticFields*)il2cpp_codegen_static_fields_for(MainSceneScript_t2935155245_il2cpp_TypeInfo_var))->set_U3CU3Ef__amU24cache1_5(L_10);
		G_B5_0 = G_B4_0;
	}

IL_004c:
	{
		IL2CPP_RUNTIME_CLASS_INIT(MainSceneScript_t2935155245_il2cpp_TypeInfo_var);
		EventHandler_1_t2650267322 * L_11 = ((MainSceneScript_t2935155245_StaticFields*)il2cpp_codegen_static_fields_for(MainSceneScript_t2935155245_il2cpp_TypeInfo_var))->get_U3CU3Ef__amU24cache1_5();
		NullCheck(G_B5_0);
		RewardVideoAd_add_OnAdStarted_m1491817010(G_B5_0, L_11, /*hidden argument*/NULL);
		RewardVideoAd_t2059019935 * L_12 = V_0;
		EventHandler_1_t2650267322 * L_13 = ((MainSceneScript_t2935155245_StaticFields*)il2cpp_codegen_static_fields_for(MainSceneScript_t2935155245_il2cpp_TypeInfo_var))->get_U3CU3Ef__amU24cache2_6();
		G_B6_0 = L_12;
		if (L_13)
		{
			G_B7_0 = L_12;
			goto IL_006f;
		}
	}
	{
		intptr_t L_14 = (intptr_t)MainSceneScript_U3CRegistRewardVideoAdEventHandlerU3Em__2_m3311718182_RuntimeMethod_var;
		EventHandler_1_t2650267322 * L_15 = (EventHandler_1_t2650267322 *)il2cpp_codegen_object_new(EventHandler_1_t2650267322_il2cpp_TypeInfo_var);
		EventHandler_1__ctor_m2791549744(L_15, NULL, L_14, /*hidden argument*/EventHandler_1__ctor_m2791549744_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(MainSceneScript_t2935155245_il2cpp_TypeInfo_var);
		((MainSceneScript_t2935155245_StaticFields*)il2cpp_codegen_static_fields_for(MainSceneScript_t2935155245_il2cpp_TypeInfo_var))->set_U3CU3Ef__amU24cache2_6(L_15);
		G_B7_0 = G_B6_0;
	}

IL_006f:
	{
		IL2CPP_RUNTIME_CLASS_INIT(MainSceneScript_t2935155245_il2cpp_TypeInfo_var);
		EventHandler_1_t2650267322 * L_16 = ((MainSceneScript_t2935155245_StaticFields*)il2cpp_codegen_static_fields_for(MainSceneScript_t2935155245_il2cpp_TypeInfo_var))->get_U3CU3Ef__amU24cache2_6();
		NullCheck(G_B7_0);
		RewardVideoAd_add_OnAdRewarded_m2418067992(G_B7_0, L_16, /*hidden argument*/NULL);
		RewardVideoAd_t2059019935 * L_17 = V_0;
		EventHandler_1_t2650267322 * L_18 = ((MainSceneScript_t2935155245_StaticFields*)il2cpp_codegen_static_fields_for(MainSceneScript_t2935155245_il2cpp_TypeInfo_var))->get_U3CU3Ef__amU24cache3_7();
		G_B8_0 = L_17;
		if (L_18)
		{
			G_B9_0 = L_17;
			goto IL_0092;
		}
	}
	{
		intptr_t L_19 = (intptr_t)MainSceneScript_U3CRegistRewardVideoAdEventHandlerU3Em__3_m1965033432_RuntimeMethod_var;
		EventHandler_1_t2650267322 * L_20 = (EventHandler_1_t2650267322 *)il2cpp_codegen_object_new(EventHandler_1_t2650267322_il2cpp_TypeInfo_var);
		EventHandler_1__ctor_m2791549744(L_20, NULL, L_19, /*hidden argument*/EventHandler_1__ctor_m2791549744_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(MainSceneScript_t2935155245_il2cpp_TypeInfo_var);
		((MainSceneScript_t2935155245_StaticFields*)il2cpp_codegen_static_fields_for(MainSceneScript_t2935155245_il2cpp_TypeInfo_var))->set_U3CU3Ef__amU24cache3_7(L_20);
		G_B9_0 = G_B8_0;
	}

IL_0092:
	{
		IL2CPP_RUNTIME_CLASS_INIT(MainSceneScript_t2935155245_il2cpp_TypeInfo_var);
		EventHandler_1_t2650267322 * L_21 = ((MainSceneScript_t2935155245_StaticFields*)il2cpp_codegen_static_fields_for(MainSceneScript_t2935155245_il2cpp_TypeInfo_var))->get_U3CU3Ef__amU24cache3_7();
		NullCheck(G_B9_0);
		RewardVideoAd_add_OnAdClosed_m3758855288(G_B9_0, L_21, /*hidden argument*/NULL);
		RewardVideoAd_t2059019935 * L_22 = V_0;
		EventHandler_1_t1820321320 * L_23 = ((MainSceneScript_t2935155245_StaticFields*)il2cpp_codegen_static_fields_for(MainSceneScript_t2935155245_il2cpp_TypeInfo_var))->get_U3CU3Ef__amU24cache4_8();
		G_B10_0 = L_22;
		if (L_23)
		{
			G_B11_0 = L_22;
			goto IL_00b5;
		}
	}
	{
		intptr_t L_24 = (intptr_t)MainSceneScript_U3CRegistRewardVideoAdEventHandlerU3Em__4_m1988063305_RuntimeMethod_var;
		EventHandler_1_t1820321320 * L_25 = (EventHandler_1_t1820321320 *)il2cpp_codegen_object_new(EventHandler_1_t1820321320_il2cpp_TypeInfo_var);
		EventHandler_1__ctor_m3728933429(L_25, NULL, L_24, /*hidden argument*/EventHandler_1__ctor_m3728933429_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(MainSceneScript_t2935155245_il2cpp_TypeInfo_var);
		((MainSceneScript_t2935155245_StaticFields*)il2cpp_codegen_static_fields_for(MainSceneScript_t2935155245_il2cpp_TypeInfo_var))->set_U3CU3Ef__amU24cache4_8(L_25);
		G_B11_0 = G_B10_0;
	}

IL_00b5:
	{
		IL2CPP_RUNTIME_CLASS_INIT(MainSceneScript_t2935155245_il2cpp_TypeInfo_var);
		EventHandler_1_t1820321320 * L_26 = ((MainSceneScript_t2935155245_StaticFields*)il2cpp_codegen_static_fields_for(MainSceneScript_t2935155245_il2cpp_TypeInfo_var))->get_U3CU3Ef__amU24cache4_8();
		NullCheck(G_B11_0);
		RewardVideoAd_add_OnAdFailedToLoad_m2979919485(G_B11_0, L_26, /*hidden argument*/NULL);
	}

IL_00bf:
	{
		IL2CPP_RUNTIME_CLASS_INIT(MainSceneScript_t2935155245_il2cpp_TypeInfo_var);
		((MainSceneScript_t2935155245_StaticFields*)il2cpp_codegen_static_fields_for(MainSceneScript_t2935155245_il2cpp_TypeInfo_var))->set_isRegistedRewardVideoEventHandler_2((bool)1);
		return;
	}
}
// System.Void MainSceneScript::Start()
extern "C"  void MainSceneScript_Start_m1653874663 (MainSceneScript_t2935155245 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MainSceneScript_Start_m1653874663_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(ManageScrollContent_t718440180_il2cpp_TypeInfo_var);
		ManageScrollContent_Logging_m3887690237(NULL /*static, unused*/, _stringLiteral3513872187, /*hidden argument*/NULL);
		MainSceneScript_RegistRewardVideoAdEventHandler_m2501865270(__this, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_0 = GameObject_Find_m2032535176(NULL /*static, unused*/, _stringLiteral419861575, /*hidden argument*/NULL);
		NullCheck(L_0);
		Button_t4055032469 * L_1 = GameObject_GetComponent_TisButton_t4055032469_m1515138076(L_0, /*hidden argument*/GameObject_GetComponent_TisButton_t4055032469_m1515138076_RuntimeMethod_var);
		NullCheck(L_1);
		ButtonClickedEvent_t48803504 * L_2 = Button_get_onClick_m2332132945(L_1, /*hidden argument*/NULL);
		intptr_t L_3 = (intptr_t)MainSceneScript_LoadRewardVideoAd_m1765922608_RuntimeMethod_var;
		UnityAction_t3245792599 * L_4 = (UnityAction_t3245792599 *)il2cpp_codegen_object_new(UnityAction_t3245792599_il2cpp_TypeInfo_var);
		UnityAction__ctor_m772160306(L_4, __this, L_3, /*hidden argument*/NULL);
		NullCheck(L_2);
		UnityEvent_AddListener_m2276267359(L_2, L_4, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_5 = GameObject_Find_m2032535176(NULL /*static, unused*/, _stringLiteral4027735308, /*hidden argument*/NULL);
		NullCheck(L_5);
		Button_t4055032469 * L_6 = GameObject_GetComponent_TisButton_t4055032469_m1515138076(L_5, /*hidden argument*/GameObject_GetComponent_TisButton_t4055032469_m1515138076_RuntimeMethod_var);
		NullCheck(L_6);
		ButtonClickedEvent_t48803504 * L_7 = Button_get_onClick_m2332132945(L_6, /*hidden argument*/NULL);
		intptr_t L_8 = (intptr_t)MainSceneScript_ShowRewardVideoAd_m1612877932_RuntimeMethod_var;
		UnityAction_t3245792599 * L_9 = (UnityAction_t3245792599 *)il2cpp_codegen_object_new(UnityAction_t3245792599_il2cpp_TypeInfo_var);
		UnityAction__ctor_m772160306(L_9, __this, L_8, /*hidden argument*/NULL);
		NullCheck(L_7);
		UnityEvent_AddListener_m2276267359(L_7, L_9, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_10 = GameObject_Find_m2032535176(NULL /*static, unused*/, _stringLiteral3476661386, /*hidden argument*/NULL);
		NullCheck(L_10);
		Button_t4055032469 * L_11 = GameObject_GetComponent_TisButton_t4055032469_m1515138076(L_10, /*hidden argument*/GameObject_GetComponent_TisButton_t4055032469_m1515138076_RuntimeMethod_var);
		NullCheck(L_11);
		ButtonClickedEvent_t48803504 * L_12 = Button_get_onClick_m2332132945(L_11, /*hidden argument*/NULL);
		intptr_t L_13 = (intptr_t)MainSceneScript_OnClickNextScene_m4090450118_RuntimeMethod_var;
		UnityAction_t3245792599 * L_14 = (UnityAction_t3245792599 *)il2cpp_codegen_object_new(UnityAction_t3245792599_il2cpp_TypeInfo_var);
		UnityAction__ctor_m772160306(L_14, __this, L_13, /*hidden argument*/NULL);
		NullCheck(L_12);
		UnityEvent_AddListener_m2276267359(L_12, L_14, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_15 = GameObject_Find_m2032535176(NULL /*static, unused*/, _stringLiteral2154379127, /*hidden argument*/NULL);
		NullCheck(L_15);
		Button_t4055032469 * L_16 = GameObject_GetComponent_TisButton_t4055032469_m1515138076(L_15, /*hidden argument*/GameObject_GetComponent_TisButton_t4055032469_m1515138076_RuntimeMethod_var);
		NullCheck(L_16);
		ButtonClickedEvent_t48803504 * L_17 = Button_get_onClick_m2332132945(L_16, /*hidden argument*/NULL);
		intptr_t L_18 = (intptr_t)MainSceneScript_OnClickExit_m3217141347_RuntimeMethod_var;
		UnityAction_t3245792599 * L_19 = (UnityAction_t3245792599 *)il2cpp_codegen_object_new(UnityAction_t3245792599_il2cpp_TypeInfo_var);
		UnityAction__ctor_m772160306(L_19, __this, L_18, /*hidden argument*/NULL);
		NullCheck(L_17);
		UnityEvent_AddListener_m2276267359(L_17, L_19, /*hidden argument*/NULL);
		String_t* L_20 = __this->get_zoneIdKey_3();
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_21 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		String_t* L_22 = PlayerPrefs_GetString_m614532710(NULL /*static, unused*/, L_20, L_21, /*hidden argument*/NULL);
		V_0 = L_22;
		GameObject_t1113636619 * L_23 = GameObject_Find_m2032535176(NULL /*static, unused*/, _stringLiteral2739578658, /*hidden argument*/NULL);
		NullCheck(L_23);
		InputField_t3762917431 * L_24 = GameObject_GetComponent_TisInputField_t3762917431_m1809916030(L_23, /*hidden argument*/GameObject_GetComponent_TisInputField_t3762917431_m1809916030_RuntimeMethod_var);
		String_t* L_25 = V_0;
		NullCheck(L_24);
		InputField_set_text_m1877260015(L_24, L_25, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_26 = GameObject_Find_m2032535176(NULL /*static, unused*/, _stringLiteral1095207881, /*hidden argument*/NULL);
		NullCheck(L_26);
		Text_t1901882714 * L_27 = GameObject_GetComponent_TisText_t1901882714_m2114913816(L_26, /*hidden argument*/GameObject_GetComponent_TisText_t1901882714_m2114913816_RuntimeMethod_var);
		String_t* L_28 = Application_get_productName_m2401755738(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_27);
		VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_27, L_28);
		return;
	}
}
// System.Void MainSceneScript::LoadRewardVideoAd()
extern "C"  void MainSceneScript_LoadRewardVideoAd_m1765922608 (MainSceneScript_t2935155245 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MainSceneScript_LoadRewardVideoAd_m1765922608_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	GameObject_t1113636619 * V_1 = NULL;
	RewardVideoAd_t2059019935 * V_2 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(ManageScrollContent_t718440180_il2cpp_TypeInfo_var);
		ManageScrollContent_Logging_m3887690237(NULL /*static, unused*/, _stringLiteral3144612925, /*hidden argument*/NULL);
		V_0 = _stringLiteral1564842861;
		V_0 = _stringLiteral1564842861;
		GameObject_t1113636619 * L_0 = GameObject_Find_m2032535176(NULL /*static, unused*/, _stringLiteral3154935626, /*hidden argument*/NULL);
		V_1 = L_0;
		String_t* L_1 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_2 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		NullCheck(L_1);
		bool L_3 = String_Equals_m2270643605(L_1, L_2, /*hidden argument*/NULL);
		if (L_3)
		{
			goto IL_0041;
		}
	}
	{
		String_t* L_4 = V_0;
		NullCheck(L_4);
		bool L_5 = String_Equals_m2270643605(L_4, _stringLiteral1564842861, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0069;
		}
	}

IL_0041:
	{
		GameObject_t1113636619 * L_6 = V_1;
		NullCheck(L_6);
		Text_t1901882714 * L_7 = GameObject_GetComponent_TisText_t1901882714_m2114913816(L_6, /*hidden argument*/GameObject_GetComponent_TisText_t1901882714_m2114913816_RuntimeMethod_var);
		NullCheck(L_7);
		String_t* L_8 = VirtFuncInvoker0< String_t* >::Invoke(71 /* System.String UnityEngine.UI.Text::get_text() */, L_7);
		V_0 = L_8;
		String_t* L_9 = __this->get_zoneIdKey_3();
		String_t* L_10 = V_0;
		PlayerPrefs_SetString_m2101271233(NULL /*static, unused*/, L_9, L_10, /*hidden argument*/NULL);
		String_t* L_11 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_12 = String_Concat_m3937257545(NULL /*static, unused*/, _stringLiteral1024832400, L_11, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, L_12, /*hidden argument*/NULL);
	}

IL_0069:
	{
		String_t* L_13 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_14 = String_Concat_m3937257545(NULL /*static, unused*/, _stringLiteral3853051492, L_13, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(ManageScrollContent_t718440180_il2cpp_TypeInfo_var);
		ManageScrollContent_Logging_m3887690237(NULL /*static, unused*/, L_14, /*hidden argument*/NULL);
		RewardVideoAd_t2059019935 * L_15 = RewardVideoAd_get_Instance_m1143162705(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_2 = L_15;
		RewardVideoAd_t2059019935 * L_16 = V_2;
		String_t* L_17 = V_0;
		NullCheck(L_16);
		RewardVideoAd_LoadAd_m1897517061(L_16, L_17, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MainSceneScript::ShowRewardVideoAd()
extern "C"  void MainSceneScript_ShowRewardVideoAd_m1612877932 (MainSceneScript_t2935155245 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MainSceneScript_ShowRewardVideoAd_m1612877932_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RewardVideoAd_t2059019935 * V_0 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(ManageScrollContent_t718440180_il2cpp_TypeInfo_var);
		ManageScrollContent_Logging_m3887690237(NULL /*static, unused*/, _stringLiteral468106446, /*hidden argument*/NULL);
		RewardVideoAd_t2059019935 * L_0 = RewardVideoAd_get_Instance_m1143162705(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_0;
		RewardVideoAd_t2059019935 * L_1 = V_0;
		NullCheck(L_1);
		bool L_2 = RewardVideoAd_IsLoaded_m630497717(L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RewardVideoAd_t2059019935 * L_3 = V_0;
		NullCheck(L_3);
		RewardVideoAd_ShowAd_m3896786371(L_3, /*hidden argument*/NULL);
		goto IL_0030;
	}

IL_0026:
	{
		IL2CPP_RUNTIME_CLASS_INIT(ManageScrollContent_t718440180_il2cpp_TypeInfo_var);
		ManageScrollContent_Logging_m3887690237(NULL /*static, unused*/, _stringLiteral2803577287, /*hidden argument*/NULL);
	}

IL_0030:
	{
		return;
	}
}
// System.Void MainSceneScript::OnApplicationQuit()
extern "C"  void MainSceneScript_OnApplicationQuit_m2601312062 (MainSceneScript_t2935155245 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MainSceneScript_OnApplicationQuit_m2601312062_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RewardVideoAd_t2059019935 * L_0 = RewardVideoAd_get_Instance_m1143162705(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		RewardVideoAd_DisposeAd_m1464643830(L_0, /*hidden argument*/NULL);
		float L_1 = Time_get_time_m2907476221(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_2 = L_1;
		RuntimeObject * L_3 = Box(Single_t1397266774_il2cpp_TypeInfo_var, &L_2);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_4 = String_Concat_m1715369213(NULL /*static, unused*/, _stringLiteral2781406721, L_3, _stringLiteral857495742, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MainSceneScript::OnClickNextScene()
extern "C"  void MainSceneScript_OnClickNextScene_m4090450118 (MainSceneScript_t2935155245 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MainSceneScript_OnClickNextScene_m4090450118_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		SceneManager_LoadScene_m1758133949(NULL /*static, unused*/, _stringLiteral728544754, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MainSceneScript::OnClickExit()
extern "C"  void MainSceneScript_OnClickExit_m3217141347 (MainSceneScript_t2935155245 * __this, const RuntimeMethod* method)
{
	{
		Application_Quit_m470877999(NULL /*static, unused*/, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MainSceneScript::.cctor()
extern "C"  void MainSceneScript__cctor_m3839588426 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void MainSceneScript::<RegistRewardVideoAdEventHandler>m__0(System.Object,System.EventArgs)
extern "C"  void MainSceneScript_U3CRegistRewardVideoAdEventHandlerU3Em__0_m1750153989 (RuntimeObject * __this /* static, unused */, RuntimeObject * ___sender0, EventArgs_t3591816995 * ___args1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MainSceneScript_U3CRegistRewardVideoAdEventHandlerU3Em__0_m1750153989_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(ManageScrollContent_t718440180_il2cpp_TypeInfo_var);
		ManageScrollContent_Logging_m3887690237(NULL /*static, unused*/, _stringLiteral2385996849, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MainSceneScript::<RegistRewardVideoAdEventHandler>m__1(System.Object,GNSAdSDK.Api.VideoRewardData)
extern "C"  void MainSceneScript_U3CRegistRewardVideoAdEventHandlerU3Em__1_m833489649 (RuntimeObject * __this /* static, unused */, RuntimeObject * ___sender0, VideoRewardData_t431140593 * ___args1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MainSceneScript_U3CRegistRewardVideoAdEventHandlerU3Em__1_m833489649_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(ManageScrollContent_t718440180_il2cpp_TypeInfo_var);
		ManageScrollContent_Logging_m3887690237(NULL /*static, unused*/, _stringLiteral241953956, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MainSceneScript::<RegistRewardVideoAdEventHandler>m__2(System.Object,GNSAdSDK.Api.VideoRewardData)
extern "C"  void MainSceneScript_U3CRegistRewardVideoAdEventHandlerU3Em__2_m3311718182 (RuntimeObject * __this /* static, unused */, RuntimeObject * ___sender0, VideoRewardData_t431140593 * ___args1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MainSceneScript_U3CRegistRewardVideoAdEventHandlerU3Em__2_m3311718182_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		VideoRewardData_t431140593 * L_0 = ___args1;
		NullCheck(L_0);
		double L_1 = VideoRewardData_get_Amount_m3001112432(L_0, /*hidden argument*/NULL);
		double L_2 = L_1;
		RuntimeObject * L_3 = Box(Double_t594665363_il2cpp_TypeInfo_var, &L_2);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_4 = String_Concat_m904156431(NULL /*static, unused*/, _stringLiteral631135578, L_3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(ManageScrollContent_t718440180_il2cpp_TypeInfo_var);
		ManageScrollContent_Logging_m3887690237(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		VideoRewardData_t431140593 * L_5 = ___args1;
		NullCheck(L_5);
		String_t* L_6 = VideoRewardData_get_Type_m2596247187(L_5, /*hidden argument*/NULL);
		String_t* L_7 = String_Concat_m3937257545(NULL /*static, unused*/, _stringLiteral2882319845, L_6, /*hidden argument*/NULL);
		ManageScrollContent_Logging_m3887690237(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MainSceneScript::<RegistRewardVideoAdEventHandler>m__3(System.Object,GNSAdSDK.Api.VideoRewardData)
extern "C"  void MainSceneScript_U3CRegistRewardVideoAdEventHandlerU3Em__3_m1965033432 (RuntimeObject * __this /* static, unused */, RuntimeObject * ___sender0, VideoRewardData_t431140593 * ___args1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MainSceneScript_U3CRegistRewardVideoAdEventHandlerU3Em__3_m1965033432_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(ManageScrollContent_t718440180_il2cpp_TypeInfo_var);
		ManageScrollContent_Logging_m3887690237(NULL /*static, unused*/, _stringLiteral1361361614, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MainSceneScript::<RegistRewardVideoAdEventHandler>m__4(System.Object,GNSAdSDK.Api.VideoRewardFailedData)
extern "C"  void MainSceneScript_U3CRegistRewardVideoAdEventHandlerU3Em__4_m1988063305 (RuntimeObject * __this /* static, unused */, RuntimeObject * ___sender0, VideoRewardFailedData_t3896161887 * ___args1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MainSceneScript_U3CRegistRewardVideoAdEventHandlerU3Em__4_m1988063305_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		VideoRewardFailedData_t3896161887 * L_0 = ___args1;
		NullCheck(L_0);
		int32_t L_1 = VideoRewardFailedData_get_Code_m4182448667(L_0, /*hidden argument*/NULL);
		int32_t L_2 = L_1;
		RuntimeObject * L_3 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_2);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_4 = String_Concat_m904156431(NULL /*static, unused*/, _stringLiteral2078720334, L_3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(ManageScrollContent_t718440180_il2cpp_TypeInfo_var);
		ManageScrollContent_Logging_m3887690237(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		VideoRewardFailedData_t3896161887 * L_5 = ___args1;
		NullCheck(L_5);
		String_t* L_6 = VideoRewardFailedData_get_Message_m1245503744(L_5, /*hidden argument*/NULL);
		String_t* L_7 = String_Concat_m3937257545(NULL /*static, unused*/, _stringLiteral4008244697, L_6, /*hidden argument*/NULL);
		ManageScrollContent_Logging_m3887690237(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ManageScrollContent::.ctor()
extern "C"  void ManageScrollContent__ctor_m2330158000 (ManageScrollContent_t718440180 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ManageScrollContent::Start()
extern "C"  void ManageScrollContent_Start_m2768040484 (ManageScrollContent_t718440180 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ManageScrollContent_Start_m2768040484_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		GameObject_t1113636619 * L_0 = Component_get_gameObject_m442555142(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		ScrollRect_t4137855814 * L_1 = GameObject_GetComponent_TisScrollRect_t4137855814_m3217020803(L_0, /*hidden argument*/GameObject_GetComponent_TisScrollRect_t4137855814_m3217020803_RuntimeMethod_var);
		__this->set_scrollRect_4(L_1);
		ScrollRect_t4137855814 * L_2 = __this->get_scrollRect_4();
		NullCheck(L_2);
		RectTransform_t3704657025 * L_3 = ScrollRect_get_content_m2477524320(L_2, /*hidden argument*/NULL);
		NullCheck(L_3);
		Text_t1901882714 * L_4 = Component_GetComponentInChildren_TisText_t1901882714_m396351542(L_3, /*hidden argument*/Component_GetComponentInChildren_TisText_t1901882714_m396351542_RuntimeMethod_var);
		__this->set_textLog_5(L_4);
		return;
	}
}
// System.Void ManageScrollContent::Update()
extern "C"  void ManageScrollContent_Update_m3356628244 (ManageScrollContent_t718440180 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ManageScrollContent_Update_m3356628244_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ScrollRect_t4137855814 * L_0 = __this->get_scrollRect_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_0, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0059;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(ManageScrollContent_t718440180_il2cpp_TypeInfo_var);
		String_t* L_2 = ((ManageScrollContent_t718440180_StaticFields*)il2cpp_codegen_static_fields_for(ManageScrollContent_t718440180_il2cpp_TypeInfo_var))->get_logs_2();
		String_t* L_3 = ((ManageScrollContent_t718440180_StaticFields*)il2cpp_codegen_static_fields_for(ManageScrollContent_t718440180_il2cpp_TypeInfo_var))->get_oldLogs_3();
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_4 = String_op_Inequality_m215368492(NULL /*static, unused*/, L_2, L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0059;
		}
	}
	{
		Text_t1901882714 * L_5 = __this->get_textLog_5();
		IL2CPP_RUNTIME_CLASS_INIT(ManageScrollContent_t718440180_il2cpp_TypeInfo_var);
		String_t* L_6 = ((ManageScrollContent_t718440180_StaticFields*)il2cpp_codegen_static_fields_for(ManageScrollContent_t718440180_il2cpp_TypeInfo_var))->get_logs_2();
		NullCheck(L_5);
		VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_5, L_6);
		intptr_t L_7 = (intptr_t)ManageScrollContent_U3CUpdateU3Em__0_m3545291356_RuntimeMethod_var;
		Action_t1264377477 * L_8 = (Action_t1264377477 *)il2cpp_codegen_object_new(Action_t1264377477_il2cpp_TypeInfo_var);
		Action__ctor_m2994342681(L_8, __this, L_7, /*hidden argument*/NULL);
		RuntimeObject* L_9 = ManageScrollContent_DelayMethod_m602896765(__this, 5, L_8, /*hidden argument*/NULL);
		MonoBehaviour_StartCoroutine_m3411253000(__this, L_9, /*hidden argument*/NULL);
		String_t* L_10 = ((ManageScrollContent_t718440180_StaticFields*)il2cpp_codegen_static_fields_for(ManageScrollContent_t718440180_il2cpp_TypeInfo_var))->get_logs_2();
		((ManageScrollContent_t718440180_StaticFields*)il2cpp_codegen_static_fields_for(ManageScrollContent_t718440180_il2cpp_TypeInfo_var))->set_oldLogs_3(L_10);
	}

IL_0059:
	{
		return;
	}
}
// System.Void ManageScrollContent::Logging(System.String)
extern "C"  void ManageScrollContent_Logging_m3887690237 (RuntimeObject * __this /* static, unused */, String_t* ___log0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ManageScrollContent_Logging_m3887690237_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	DateTime_t3738529785  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		IL2CPP_RUNTIME_CLASS_INIT(ManageScrollContent_t718440180_il2cpp_TypeInfo_var);
		String_t* L_0 = ((ManageScrollContent_t718440180_StaticFields*)il2cpp_codegen_static_fields_for(ManageScrollContent_t718440180_il2cpp_TypeInfo_var))->get_logs_2();
		V_0 = L_0;
		StringU5BU5D_t1281789340* L_1 = ((StringU5BU5D_t1281789340*)SZArrayNew(StringU5BU5D_t1281789340_il2cpp_TypeInfo_var, (uint32_t)5));
		String_t* L_2 = V_0;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_2);
		StringU5BU5D_t1281789340* L_3 = L_1;
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_t3738529785_il2cpp_TypeInfo_var);
		DateTime_t3738529785  L_4 = DateTime_get_Now_m1277138875(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_1 = L_4;
		String_t* L_5 = DateTime_ToString_m3718521780((DateTime_t3738529785 *)(&V_1), _stringLiteral3452614636, /*hidden argument*/NULL);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_5);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_5);
		StringU5BU5D_t1281789340* L_6 = L_3;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, _stringLiteral3452614528);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral3452614528);
		StringU5BU5D_t1281789340* L_7 = L_6;
		String_t* L_8 = ___log0;
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_8);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_8);
		StringU5BU5D_t1281789340* L_9 = L_7;
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, _stringLiteral3452614566);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral3452614566);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_10 = String_Concat_m1809518182(NULL /*static, unused*/, L_9, /*hidden argument*/NULL);
		((ManageScrollContent_t718440180_StaticFields*)il2cpp_codegen_static_fields_for(ManageScrollContent_t718440180_il2cpp_TypeInfo_var))->set_logs_2(L_10);
		String_t* L_11 = ___log0;
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, L_11, /*hidden argument*/NULL);
		return;
	}
}
// System.Collections.IEnumerator ManageScrollContent::DelayMethod(System.Int32,System.Action)
extern "C"  RuntimeObject* ManageScrollContent_DelayMethod_m602896765 (ManageScrollContent_t718440180 * __this, int32_t ___delayFrameCount0, Action_t1264377477 * ___action1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ManageScrollContent_DelayMethod_m602896765_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CDelayMethodU3Ec__Iterator0_t2878256488 * V_0 = NULL;
	{
		U3CDelayMethodU3Ec__Iterator0_t2878256488 * L_0 = (U3CDelayMethodU3Ec__Iterator0_t2878256488 *)il2cpp_codegen_object_new(U3CDelayMethodU3Ec__Iterator0_t2878256488_il2cpp_TypeInfo_var);
		U3CDelayMethodU3Ec__Iterator0__ctor_m2834466340(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CDelayMethodU3Ec__Iterator0_t2878256488 * L_1 = V_0;
		int32_t L_2 = ___delayFrameCount0;
		NullCheck(L_1);
		L_1->set_delayFrameCount_1(L_2);
		U3CDelayMethodU3Ec__Iterator0_t2878256488 * L_3 = V_0;
		Action_t1264377477 * L_4 = ___action1;
		NullCheck(L_3);
		L_3->set_action_2(L_4);
		U3CDelayMethodU3Ec__Iterator0_t2878256488 * L_5 = V_0;
		return L_5;
	}
}
// System.Void ManageScrollContent::.cctor()
extern "C"  void ManageScrollContent__cctor_m4125206710 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ManageScrollContent__cctor_m4125206710_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_0 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		((ManageScrollContent_t718440180_StaticFields*)il2cpp_codegen_static_fields_for(ManageScrollContent_t718440180_il2cpp_TypeInfo_var))->set_logs_2(L_0);
		String_t* L_1 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		((ManageScrollContent_t718440180_StaticFields*)il2cpp_codegen_static_fields_for(ManageScrollContent_t718440180_il2cpp_TypeInfo_var))->set_oldLogs_3(L_1);
		return;
	}
}
// System.Void ManageScrollContent::<Update>m__0()
extern "C"  void ManageScrollContent_U3CUpdateU3Em__0_m3545291356 (ManageScrollContent_t718440180 * __this, const RuntimeMethod* method)
{
	{
		ScrollRect_t4137855814 * L_0 = __this->get_scrollRect_4();
		NullCheck(L_0);
		ScrollRect_set_verticalNormalizedPosition_m1452826170(L_0, (0.0f), /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ManageScrollContent/<DelayMethod>c__Iterator0::.ctor()
extern "C"  void U3CDelayMethodU3Ec__Iterator0__ctor_m2834466340 (U3CDelayMethodU3Ec__Iterator0_t2878256488 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean ManageScrollContent/<DelayMethod>c__Iterator0::MoveNext()
extern "C"  bool U3CDelayMethodU3Ec__Iterator0_MoveNext_m1589811647 (U3CDelayMethodU3Ec__Iterator0_t2878256488 * __this, const RuntimeMethod* method)
{
	uint32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_U24PC_5();
		V_0 = L_0;
		__this->set_U24PC_5((-1));
		uint32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_0021;
			}
			case 1:
			{
				goto IL_0048;
			}
		}
	}
	{
		goto IL_0079;
	}

IL_0021:
	{
		__this->set_U3CiU3E__1_0(0);
		goto IL_0056;
	}

IL_002d:
	{
		__this->set_U24current_3(NULL);
		bool L_2 = __this->get_U24disposing_4();
		if (L_2)
		{
			goto IL_0043;
		}
	}
	{
		__this->set_U24PC_5(1);
	}

IL_0043:
	{
		goto IL_007b;
	}

IL_0048:
	{
		int32_t L_3 = __this->get_U3CiU3E__1_0();
		__this->set_U3CiU3E__1_0(((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)1)));
	}

IL_0056:
	{
		int32_t L_4 = __this->get_U3CiU3E__1_0();
		int32_t L_5 = __this->get_delayFrameCount_1();
		if ((((int32_t)L_4) < ((int32_t)L_5)))
		{
			goto IL_002d;
		}
	}
	{
		Action_t1264377477 * L_6 = __this->get_action_2();
		NullCheck(L_6);
		Action_Invoke_m937035532(L_6, /*hidden argument*/NULL);
		__this->set_U24PC_5((-1));
	}

IL_0079:
	{
		return (bool)0;
	}

IL_007b:
	{
		return (bool)1;
	}
}
// System.Object ManageScrollContent/<DelayMethod>c__Iterator0::System.Collections.Generic.IEnumerator<object>.get_Current()
extern "C"  RuntimeObject * U3CDelayMethodU3Ec__Iterator0_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m1632698503 (U3CDelayMethodU3Ec__Iterator0_t2878256488 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_3();
		return L_0;
	}
}
// System.Object ManageScrollContent/<DelayMethod>c__Iterator0::System.Collections.IEnumerator.get_Current()
extern "C"  RuntimeObject * U3CDelayMethodU3Ec__Iterator0_System_Collections_IEnumerator_get_Current_m190463397 (U3CDelayMethodU3Ec__Iterator0_t2878256488 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_3();
		return L_0;
	}
}
// System.Void ManageScrollContent/<DelayMethod>c__Iterator0::Dispose()
extern "C"  void U3CDelayMethodU3Ec__Iterator0_Dispose_m2379221276 (U3CDelayMethodU3Ec__Iterator0_t2878256488 * __this, const RuntimeMethod* method)
{
	{
		__this->set_U24disposing_4((bool)1);
		__this->set_U24PC_5((-1));
		return;
	}
}
// System.Void ManageScrollContent/<DelayMethod>c__Iterator0::Reset()
extern "C"  void U3CDelayMethodU3Ec__Iterator0_Reset_m1249264252 (U3CDelayMethodU3Ec__Iterator0_t2878256488 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CDelayMethodU3Ec__Iterator0_Reset_m1249264252_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_t1314879016 * L_0 = (NotSupportedException_t1314879016 *)il2cpp_codegen_object_new(NotSupportedException_t1314879016_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2730133172(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, NULL, U3CDelayMethodU3Ec__Iterator0_Reset_m1249264252_RuntimeMethod_var);
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void SubSceneScript::.ctor()
extern "C"  void SubSceneScript__ctor_m1346342648 (SubSceneScript_t3706814722 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SubSceneScript__ctor_m1346342648_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_zoneIdKey_2(_stringLiteral875271522);
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SubSceneScript::Start()
extern "C"  void SubSceneScript_Start_m2721099214 (SubSceneScript_t3706814722 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SubSceneScript_Start_m2721099214_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(ManageScrollContent_t718440180_il2cpp_TypeInfo_var);
		ManageScrollContent_Logging_m3887690237(NULL /*static, unused*/, _stringLiteral645420295, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_0 = GameObject_Find_m2032535176(NULL /*static, unused*/, _stringLiteral419861575, /*hidden argument*/NULL);
		NullCheck(L_0);
		Button_t4055032469 * L_1 = GameObject_GetComponent_TisButton_t4055032469_m1515138076(L_0, /*hidden argument*/GameObject_GetComponent_TisButton_t4055032469_m1515138076_RuntimeMethod_var);
		NullCheck(L_1);
		ButtonClickedEvent_t48803504 * L_2 = Button_get_onClick_m2332132945(L_1, /*hidden argument*/NULL);
		intptr_t L_3 = (intptr_t)SubSceneScript_LoadRewardVideoAd_m1183002328_RuntimeMethod_var;
		UnityAction_t3245792599 * L_4 = (UnityAction_t3245792599 *)il2cpp_codegen_object_new(UnityAction_t3245792599_il2cpp_TypeInfo_var);
		UnityAction__ctor_m772160306(L_4, __this, L_3, /*hidden argument*/NULL);
		NullCheck(L_2);
		UnityEvent_AddListener_m2276267359(L_2, L_4, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_5 = GameObject_Find_m2032535176(NULL /*static, unused*/, _stringLiteral4027735308, /*hidden argument*/NULL);
		NullCheck(L_5);
		Button_t4055032469 * L_6 = GameObject_GetComponent_TisButton_t4055032469_m1515138076(L_5, /*hidden argument*/GameObject_GetComponent_TisButton_t4055032469_m1515138076_RuntimeMethod_var);
		NullCheck(L_6);
		ButtonClickedEvent_t48803504 * L_7 = Button_get_onClick_m2332132945(L_6, /*hidden argument*/NULL);
		intptr_t L_8 = (intptr_t)SubSceneScript_ShowRewardVideoAd_m1251283582_RuntimeMethod_var;
		UnityAction_t3245792599 * L_9 = (UnityAction_t3245792599 *)il2cpp_codegen_object_new(UnityAction_t3245792599_il2cpp_TypeInfo_var);
		UnityAction__ctor_m772160306(L_9, __this, L_8, /*hidden argument*/NULL);
		NullCheck(L_7);
		UnityEvent_AddListener_m2276267359(L_7, L_9, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_10 = GameObject_Find_m2032535176(NULL /*static, unused*/, _stringLiteral3476661386, /*hidden argument*/NULL);
		NullCheck(L_10);
		Button_t4055032469 * L_11 = GameObject_GetComponent_TisButton_t4055032469_m1515138076(L_10, /*hidden argument*/GameObject_GetComponent_TisButton_t4055032469_m1515138076_RuntimeMethod_var);
		NullCheck(L_11);
		ButtonClickedEvent_t48803504 * L_12 = Button_get_onClick_m2332132945(L_11, /*hidden argument*/NULL);
		intptr_t L_13 = (intptr_t)SubSceneScript_OnClickNextScene_m2939430960_RuntimeMethod_var;
		UnityAction_t3245792599 * L_14 = (UnityAction_t3245792599 *)il2cpp_codegen_object_new(UnityAction_t3245792599_il2cpp_TypeInfo_var);
		UnityAction__ctor_m772160306(L_14, __this, L_13, /*hidden argument*/NULL);
		NullCheck(L_12);
		UnityEvent_AddListener_m2276267359(L_12, L_14, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_15 = GameObject_Find_m2032535176(NULL /*static, unused*/, _stringLiteral2154379127, /*hidden argument*/NULL);
		NullCheck(L_15);
		Button_t4055032469 * L_16 = GameObject_GetComponent_TisButton_t4055032469_m1515138076(L_15, /*hidden argument*/GameObject_GetComponent_TisButton_t4055032469_m1515138076_RuntimeMethod_var);
		NullCheck(L_16);
		ButtonClickedEvent_t48803504 * L_17 = Button_get_onClick_m2332132945(L_16, /*hidden argument*/NULL);
		intptr_t L_18 = (intptr_t)SubSceneScript_OnClickExit_m2860104867_RuntimeMethod_var;
		UnityAction_t3245792599 * L_19 = (UnityAction_t3245792599 *)il2cpp_codegen_object_new(UnityAction_t3245792599_il2cpp_TypeInfo_var);
		UnityAction__ctor_m772160306(L_19, __this, L_18, /*hidden argument*/NULL);
		NullCheck(L_17);
		UnityEvent_AddListener_m2276267359(L_17, L_19, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SubSceneScript::LoadRewardVideoAd()
extern "C"  void SubSceneScript_LoadRewardVideoAd_m1183002328 (SubSceneScript_t3706814722 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SubSceneScript_LoadRewardVideoAd_m1183002328_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	RewardVideoAd_t2059019935 * V_1 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(ManageScrollContent_t718440180_il2cpp_TypeInfo_var);
		ManageScrollContent_Logging_m3887690237(NULL /*static, unused*/, _stringLiteral3144612925, /*hidden argument*/NULL);
		String_t* L_0 = __this->get_zoneIdKey_2();
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_1 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		String_t* L_2 = PlayerPrefs_GetString_m614532710(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		String_t* L_3 = V_0;
		String_t* L_4 = String_Concat_m3937257545(NULL /*static, unused*/, _stringLiteral1024832400, L_3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		String_t* L_5 = V_0;
		String_t* L_6 = String_Concat_m3937257545(NULL /*static, unused*/, _stringLiteral3853051492, L_5, /*hidden argument*/NULL);
		ManageScrollContent_Logging_m3887690237(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
		RewardVideoAd_t2059019935 * L_7 = RewardVideoAd_get_Instance_m1143162705(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_1 = L_7;
		RewardVideoAd_t2059019935 * L_8 = V_1;
		String_t* L_9 = V_0;
		NullCheck(L_8);
		RewardVideoAd_LoadAd_m1897517061(L_8, L_9, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SubSceneScript::ShowRewardVideoAd()
extern "C"  void SubSceneScript_ShowRewardVideoAd_m1251283582 (SubSceneScript_t3706814722 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SubSceneScript_ShowRewardVideoAd_m1251283582_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RewardVideoAd_t2059019935 * V_0 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(ManageScrollContent_t718440180_il2cpp_TypeInfo_var);
		ManageScrollContent_Logging_m3887690237(NULL /*static, unused*/, _stringLiteral468106446, /*hidden argument*/NULL);
		RewardVideoAd_t2059019935 * L_0 = RewardVideoAd_get_Instance_m1143162705(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_0;
		RewardVideoAd_t2059019935 * L_1 = V_0;
		NullCheck(L_1);
		bool L_2 = RewardVideoAd_IsLoaded_m630497717(L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RewardVideoAd_t2059019935 * L_3 = V_0;
		NullCheck(L_3);
		RewardVideoAd_ShowAd_m3896786371(L_3, /*hidden argument*/NULL);
		goto IL_0030;
	}

IL_0026:
	{
		IL2CPP_RUNTIME_CLASS_INIT(ManageScrollContent_t718440180_il2cpp_TypeInfo_var);
		ManageScrollContent_Logging_m3887690237(NULL /*static, unused*/, _stringLiteral2803577287, /*hidden argument*/NULL);
	}

IL_0030:
	{
		return;
	}
}
// System.Void SubSceneScript::OnApplicationQuit()
extern "C"  void SubSceneScript_OnApplicationQuit_m3455088268 (SubSceneScript_t3706814722 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SubSceneScript_OnApplicationQuit_m3455088268_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RewardVideoAd_t2059019935 * L_0 = RewardVideoAd_get_Instance_m1143162705(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		RewardVideoAd_DisposeAd_m1464643830(L_0, /*hidden argument*/NULL);
		float L_1 = Time_get_time_m2907476221(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_2 = L_1;
		RuntimeObject * L_3 = Box(Single_t1397266774_il2cpp_TypeInfo_var, &L_2);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_4 = String_Concat_m1715369213(NULL /*static, unused*/, _stringLiteral2781406721, L_3, _stringLiteral857495742, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SubSceneScript::OnClickNextScene()
extern "C"  void SubSceneScript_OnClickNextScene_m2939430960 (SubSceneScript_t3706814722 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SubSceneScript_OnClickNextScene_m2939430960_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		SceneManager_LoadScene_m1758133949(NULL /*static, unused*/, _stringLiteral1853239370, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SubSceneScript::OnClickExit()
extern "C"  void SubSceneScript_OnClickExit_m2860104867 (SubSceneScript_t3706814722 * __this, const RuntimeMethod* method)
{
	{
		Application_Quit_m470877999(NULL /*static, unused*/, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
