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
struct VirtActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
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
template <typename R, typename T1>
struct VirtFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};

// BallController
struct BallController_t2992829471;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t3962482529;
// UnityEngine.Component
struct Component_t1923634451;
// UnityEngine.AudioSource
struct AudioSource_t3935305588;
// UnityEngine.Rigidbody
struct Rigidbody_t3916780224;
// UnityEngine.GameObject
struct GameObject_t1113636619;
// UnityEngine.Light
struct Light_t3756812086;
// ScorekeeperScript
struct ScorekeeperScript_t1868293023;
// UnityEngine.Transform
struct Transform_t3600365921;
// UnityEngine.AsyncOperation
struct AsyncOperation_t1445031843;
// System.String
struct String_t;
// UnityEngine.Collider
struct Collider_t1773347010;
// UnityEngine.AudioClip
struct AudioClip_t3680889665;
// CloudManager
struct CloudManager_t3437809148;
// CreditRoll
struct CreditRoll_t721334825;
// DJ
struct DJ_t167059238;
// FloorGenerator
struct FloorGenerator_t4284275110;
// GameState
struct GameState_t184198630;
// Loading
struct Loading_t2310272025;
// UnityEngine.RectTransform
struct RectTransform_t3704657025;
// UnityEngine.UI.Image
struct Image_t2670269651;
// LogoFade
struct LogoFade_t2650879019;
// System.Collections.IEnumerator
struct IEnumerator_t1853284238;
// LogoFade/<Start>c__Iterator0
struct U3CStartU3Ec__Iterator0_t2357419268;
// UnityEngine.UI.Graphic
struct Graphic_t1660335611;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_t2598313366;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_t1699091251;
// UnityEngine.Behaviour
struct Behaviour_t1437897464;
// System.NotSupportedException
struct NotSupportedException_t1314879016;
// MainMenuControl
struct MainMenuControl_t4231413698;
// MainMenuControl/<LoadAsyncScene>c__Iterator0
struct U3CLoadAsyncSceneU3Ec__Iterator0_t44264939;
// UnityEngine.Coroutine
struct Coroutine_t3829159415;
// Player1Paddle
struct Player1Paddle_t3157062208;
// System.Random
struct Random_t108471755;
// Player2Paddle
struct Player2Paddle_t3694861021;
// PowerUpManager
struct PowerUpManager_t2784844421;
// UnityEngine.UI.Selectable
struct Selectable_t3250028441;
// StateHolder
struct StateHolder_t2173541826;
// WallPopIn
struct WallPopIn_t1055995948;
// UnityEngine.MeshRenderer
struct MeshRenderer_t587009260;
// UnityEngine.Renderer
struct Renderer_t2627027031;
// UnityEngine.Material
struct Material_t340375123;
// System.IntPtr[]
struct IntPtrU5BU5D_t4013366056;
// System.Collections.IDictionary
struct IDictionary_t1363984059;
// System.Int32[]
struct Int32U5BU5D_t385246372;
// System.Char[]
struct CharU5BU5D_t3528271667;
// System.Void
struct Void_t1185182177;
// UnityEngine.Sprite
struct Sprite_t280657092;
// System.Action`1<UnityEngine.AsyncOperation>
struct Action_1_t1617499438;
// UnityEngine.AudioClip/PCMReaderCallback
struct PCMReaderCallback_t1677636661;
// UnityEngine.AudioClip/PCMSetPositionCallback
struct PCMSetPositionCallback_t1059417452;
// UnityEngine.AudioSourceExtension
struct AudioSourceExtension_t3064908834;
// UnityEngine.RectTransform/ReapplyDrivenProperties
struct ReapplyDrivenProperties_t1258266594;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t3328599146;
// UnityEngine.UI.Text
struct Text_t1901882714;
// UnityEngine.UI.Button
struct Button_t4055032469;
// UnityEngine.UI.Toggle
struct Toggle_t2735377061;
// UnityEngine.Texture2D
struct Texture2D_t3840446185;
// UnityEngine.Canvas
struct Canvas_t3310196443;
// UnityEngine.Events.UnityAction
struct UnityAction_t3245792599;
// UnityEngine.Mesh
struct Mesh_t3648964284;
// UnityEngine.UI.VertexHelper
struct VertexHelper_t2453304189;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t3055525458;
// System.Collections.Generic.List`1<UnityEngine.UI.Selectable>
struct List_1_t427135887;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_t2532145056;
// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t1260619206;
// UnityEngine.UI.RectMask2D
struct RectMask2D_t3474889437;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t3661388177;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t1718750761;
// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_t48803504;
// UnityEngine.UI.ToggleGroup
struct ToggleGroup_t123837990;
// UnityEngine.UI.Toggle/ToggleEvent
struct ToggleEvent_t1873685584;
// UnityEngine.UI.FontData
struct FontData_t746620069;
// UnityEngine.TextGenerator
struct TextGenerator_t3211863866;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_t1981460040;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_t1457185986;

extern const RuntimeMethod* Component_GetComponent_TisAudioSource_t3935305588_m1977431131_RuntimeMethod_var;
extern const uint32_t BallController_Awake_m1358219274_MetadataUsageId;
extern const RuntimeMethod* Component_GetComponent_TisRigidbody_t3916780224_m279685075_RuntimeMethod_var;
extern const RuntimeMethod* GameObject_GetComponent_TisLight_t3756812086_m4145843913_RuntimeMethod_var;
extern const uint32_t BallController_Start_m2577057129_MetadataUsageId;
extern String_t* _stringLiteral1436381680;
extern const uint32_t BallController_ResetBall_m1083045695_MetadataUsageId;
extern RuntimeClass* Input_t1431474628_il2cpp_TypeInfo_var;
extern RuntimeClass* String_t_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral1959671426;
extern String_t* _stringLiteral691301542;
extern const uint32_t BallController_CheckKeys_m1226406922_MetadataUsageId;
extern RuntimeClass* Vector3_t3722313464_il2cpp_TypeInfo_var;
extern const uint32_t BallController_FixedUpdate_m4077237557_MetadataUsageId;
extern String_t* _stringLiteral789097671;
extern String_t* _stringLiteral789097865;
extern String_t* _stringLiteral789098269;
extern String_t* _stringLiteral787918621;
extern const uint32_t BallController_OnTriggerEnter_m1083917119_MetadataUsageId;
extern const uint32_t CloudManager_Update_m1953117237_MetadataUsageId;
extern const uint32_t CreditRoll_Update_m164071144_MetadataUsageId;
extern const uint32_t DJ_Update_m1230642770_MetadataUsageId;
extern RuntimeClass* Object_t631007953_il2cpp_TypeInfo_var;
extern const RuntimeMethod* Object_Instantiate_TisGameObject_t1113636619_m3006960551_RuntimeMethod_var;
extern const uint32_t FloorGenerator_Start_m515083721_MetadataUsageId;
extern const RuntimeMethod* Component_GetComponent_TisRectTransform_t3704657025_m3396022872_RuntimeMethod_var;
extern const RuntimeMethod* Component_GetComponent_TisImage_t2670269651_m980647750_RuntimeMethod_var;
extern const uint32_t Loading_Start_m7686961_MetadataUsageId;
extern RuntimeClass* U3CStartU3Ec__Iterator0_t2357419268_il2cpp_TypeInfo_var;
extern const uint32_t LogoFade_Start_m2133747789_MetadataUsageId;
extern RuntimeClass* WaitForSeconds_t1699091251_il2cpp_TypeInfo_var;
extern const uint32_t U3CStartU3Ec__Iterator0_MoveNext_m3385840069_MetadataUsageId;
extern RuntimeClass* NotSupportedException_t1314879016_il2cpp_TypeInfo_var;
extern const uint32_t U3CStartU3Ec__Iterator0_Reset_m1404279933_MetadataUsageId;
extern RuntimeClass* U3CLoadAsyncSceneU3Ec__Iterator0_t44264939_il2cpp_TypeInfo_var;
extern const uint32_t MainMenuControl_LoadAsyncScene_m88225536_MetadataUsageId;
extern String_t* _stringLiteral3136851520;
extern const uint32_t MainMenuControl_PlayCredits_m1644095604_MetadataUsageId;
extern String_t* _stringLiteral3298262754;
extern const uint32_t U3CLoadAsyncSceneU3Ec__Iterator0_MoveNext_m3009559731_MetadataUsageId;
extern const uint32_t U3CLoadAsyncSceneU3Ec__Iterator0_Reset_m324180423_MetadataUsageId;
extern RuntimeClass* Random_t108471755_il2cpp_TypeInfo_var;
extern const uint32_t Player1Paddle__ctor_m3386033362_MetadataUsageId;
extern const uint32_t Player1Paddle_Start_m626490070_MetadataUsageId;
extern String_t* _stringLiteral3452614640;
extern const uint32_t Player1Paddle_Update_m1154683471_MetadataUsageId;
extern String_t* _stringLiteral1828639942;
extern String_t* _stringLiteral2984908384;
extern const uint32_t Player1Paddle_FixedUpdate_m3287934885_MetadataUsageId;
extern String_t* _stringLiteral852186541;
extern String_t* _stringLiteral56757516;
extern String_t* _stringLiteral2424904890;
extern String_t* _stringLiteral1787172304;
extern String_t* _stringLiteral343282126;
extern const uint32_t Player1Paddle_OnTriggerEnter_m2811710102_MetadataUsageId;
extern const uint32_t Player2Paddle_Start_m4233158211_MetadataUsageId;
extern const uint32_t Player2Paddle_FixedUpdate_m3653812168_MetadataUsageId;
extern const RuntimeMethod* Object_Instantiate_TisGameObject_t1113636619_m3215236302_RuntimeMethod_var;
extern const uint32_t PowerUpManager_Start_m1819700524_MetadataUsageId;
extern const uint32_t PowerUpManager_Update_m2908221272_MetadataUsageId;
extern RuntimeClass* Int32_t2950945753_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral2058722280;
extern String_t* _stringLiteral2058656744;
extern String_t* _stringLiteral434274249;
extern String_t* _stringLiteral2650898377;
extern const uint32_t ScorekeeperScript_SetCountText_m3098137846_MetadataUsageId;
extern String_t* _stringLiteral1620615438;
extern const uint32_t ScorekeeperScript_Update_m2735237961_MetadataUsageId;
extern RuntimeClass* GameState_t184198630_il2cpp_TypeInfo_var;
extern const uint32_t StateHolder_Start_m3789155092_MetadataUsageId;
extern const uint32_t StateHolder_Update_m334322068_MetadataUsageId;
extern const RuntimeMethod* GameObject_GetComponent_TisRigidbody_t3916780224_m564316479_RuntimeMethod_var;
extern const uint32_t StateHolder_LoadState_m3722913745_MetadataUsageId;
extern const RuntimeMethod* Component_GetComponent_TisMeshRenderer_t587009260_m2899624428_RuntimeMethod_var;
extern const RuntimeMethod* Component_GetComponent_TisRenderer_t2627027031_m2651633905_RuntimeMethod_var;
extern const uint32_t WallPopIn_Start_m2958924835_MetadataUsageId;
extern String_t* _stringLiteral2261822918;
extern const uint32_t WallPopIn_OnTriggerEnter_m2213833158_MetadataUsageId;

struct GameObjectU5BU5D_t3328599146;


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
#ifndef U3CSTARTU3EC__ITERATOR0_T2357419268_H
#define U3CSTARTU3EC__ITERATOR0_T2357419268_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LogoFade/<Start>c__Iterator0
struct  U3CStartU3Ec__Iterator0_t2357419268  : public RuntimeObject
{
public:
	// LogoFade LogoFade/<Start>c__Iterator0::$this
	LogoFade_t2650879019 * ___U24this_0;
	// System.Object LogoFade/<Start>c__Iterator0::$current
	RuntimeObject * ___U24current_1;
	// System.Boolean LogoFade/<Start>c__Iterator0::$disposing
	bool ___U24disposing_2;
	// System.Int32 LogoFade/<Start>c__Iterator0::$PC
	int32_t ___U24PC_3;

public:
	inline static int32_t get_offset_of_U24this_0() { return static_cast<int32_t>(offsetof(U3CStartU3Ec__Iterator0_t2357419268, ___U24this_0)); }
	inline LogoFade_t2650879019 * get_U24this_0() const { return ___U24this_0; }
	inline LogoFade_t2650879019 ** get_address_of_U24this_0() { return &___U24this_0; }
	inline void set_U24this_0(LogoFade_t2650879019 * value)
	{
		___U24this_0 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_0), value);
	}

	inline static int32_t get_offset_of_U24current_1() { return static_cast<int32_t>(offsetof(U3CStartU3Ec__Iterator0_t2357419268, ___U24current_1)); }
	inline RuntimeObject * get_U24current_1() const { return ___U24current_1; }
	inline RuntimeObject ** get_address_of_U24current_1() { return &___U24current_1; }
	inline void set_U24current_1(RuntimeObject * value)
	{
		___U24current_1 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_1), value);
	}

	inline static int32_t get_offset_of_U24disposing_2() { return static_cast<int32_t>(offsetof(U3CStartU3Ec__Iterator0_t2357419268, ___U24disposing_2)); }
	inline bool get_U24disposing_2() const { return ___U24disposing_2; }
	inline bool* get_address_of_U24disposing_2() { return &___U24disposing_2; }
	inline void set_U24disposing_2(bool value)
	{
		___U24disposing_2 = value;
	}

	inline static int32_t get_offset_of_U24PC_3() { return static_cast<int32_t>(offsetof(U3CStartU3Ec__Iterator0_t2357419268, ___U24PC_3)); }
	inline int32_t get_U24PC_3() const { return ___U24PC_3; }
	inline int32_t* get_address_of_U24PC_3() { return &___U24PC_3; }
	inline void set_U24PC_3(int32_t value)
	{
		___U24PC_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CSTARTU3EC__ITERATOR0_T2357419268_H
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
#ifndef U3CLOADASYNCSCENEU3EC__ITERATOR0_T44264939_H
#define U3CLOADASYNCSCENEU3EC__ITERATOR0_T44264939_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MainMenuControl/<LoadAsyncScene>c__Iterator0
struct  U3CLoadAsyncSceneU3Ec__Iterator0_t44264939  : public RuntimeObject
{
public:
	// UnityEngine.AsyncOperation MainMenuControl/<LoadAsyncScene>c__Iterator0::<asyncLoad>__0
	AsyncOperation_t1445031843 * ___U3CasyncLoadU3E__0_0;
	// System.Object MainMenuControl/<LoadAsyncScene>c__Iterator0::$current
	RuntimeObject * ___U24current_1;
	// System.Boolean MainMenuControl/<LoadAsyncScene>c__Iterator0::$disposing
	bool ___U24disposing_2;
	// System.Int32 MainMenuControl/<LoadAsyncScene>c__Iterator0::$PC
	int32_t ___U24PC_3;

public:
	inline static int32_t get_offset_of_U3CasyncLoadU3E__0_0() { return static_cast<int32_t>(offsetof(U3CLoadAsyncSceneU3Ec__Iterator0_t44264939, ___U3CasyncLoadU3E__0_0)); }
	inline AsyncOperation_t1445031843 * get_U3CasyncLoadU3E__0_0() const { return ___U3CasyncLoadU3E__0_0; }
	inline AsyncOperation_t1445031843 ** get_address_of_U3CasyncLoadU3E__0_0() { return &___U3CasyncLoadU3E__0_0; }
	inline void set_U3CasyncLoadU3E__0_0(AsyncOperation_t1445031843 * value)
	{
		___U3CasyncLoadU3E__0_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CasyncLoadU3E__0_0), value);
	}

	inline static int32_t get_offset_of_U24current_1() { return static_cast<int32_t>(offsetof(U3CLoadAsyncSceneU3Ec__Iterator0_t44264939, ___U24current_1)); }
	inline RuntimeObject * get_U24current_1() const { return ___U24current_1; }
	inline RuntimeObject ** get_address_of_U24current_1() { return &___U24current_1; }
	inline void set_U24current_1(RuntimeObject * value)
	{
		___U24current_1 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_1), value);
	}

	inline static int32_t get_offset_of_U24disposing_2() { return static_cast<int32_t>(offsetof(U3CLoadAsyncSceneU3Ec__Iterator0_t44264939, ___U24disposing_2)); }
	inline bool get_U24disposing_2() const { return ___U24disposing_2; }
	inline bool* get_address_of_U24disposing_2() { return &___U24disposing_2; }
	inline void set_U24disposing_2(bool value)
	{
		___U24disposing_2 = value;
	}

	inline static int32_t get_offset_of_U24PC_3() { return static_cast<int32_t>(offsetof(U3CLoadAsyncSceneU3Ec__Iterator0_t44264939, ___U24PC_3)); }
	inline int32_t get_U24PC_3() const { return ___U24PC_3; }
	inline int32_t* get_address_of_U24PC_3() { return &___U24PC_3; }
	inline void set_U24PC_3(int32_t value)
	{
		___U24PC_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CLOADASYNCSCENEU3EC__ITERATOR0_T44264939_H
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
#ifndef RANDOM_T108471755_H
#define RANDOM_T108471755_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Random
struct  Random_t108471755  : public RuntimeObject
{
public:
	// System.Int32 System.Random::inext
	int32_t ___inext_3;
	// System.Int32 System.Random::inextp
	int32_t ___inextp_4;
	// System.Int32[] System.Random::SeedArray
	Int32U5BU5D_t385246372* ___SeedArray_5;

public:
	inline static int32_t get_offset_of_inext_3() { return static_cast<int32_t>(offsetof(Random_t108471755, ___inext_3)); }
	inline int32_t get_inext_3() const { return ___inext_3; }
	inline int32_t* get_address_of_inext_3() { return &___inext_3; }
	inline void set_inext_3(int32_t value)
	{
		___inext_3 = value;
	}

	inline static int32_t get_offset_of_inextp_4() { return static_cast<int32_t>(offsetof(Random_t108471755, ___inextp_4)); }
	inline int32_t get_inextp_4() const { return ___inextp_4; }
	inline int32_t* get_address_of_inextp_4() { return &___inextp_4; }
	inline void set_inextp_4(int32_t value)
	{
		___inextp_4 = value;
	}

	inline static int32_t get_offset_of_SeedArray_5() { return static_cast<int32_t>(offsetof(Random_t108471755, ___SeedArray_5)); }
	inline Int32U5BU5D_t385246372* get_SeedArray_5() const { return ___SeedArray_5; }
	inline Int32U5BU5D_t385246372** get_address_of_SeedArray_5() { return &___SeedArray_5; }
	inline void set_SeedArray_5(Int32U5BU5D_t385246372* value)
	{
		___SeedArray_5 = value;
		Il2CppCodeGenWriteBarrier((&___SeedArray_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RANDOM_T108471755_H
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
#ifndef WAITFORSECONDS_T1699091251_H
#define WAITFORSECONDS_T1699091251_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.WaitForSeconds
struct  WaitForSeconds_t1699091251  : public YieldInstruction_t403091072
{
public:
	// System.Single UnityEngine.WaitForSeconds::m_Seconds
	float ___m_Seconds_0;

public:
	inline static int32_t get_offset_of_m_Seconds_0() { return static_cast<int32_t>(offsetof(WaitForSeconds_t1699091251, ___m_Seconds_0)); }
	inline float get_m_Seconds_0() const { return ___m_Seconds_0; }
	inline float* get_address_of_m_Seconds_0() { return &___m_Seconds_0; }
	inline void set_m_Seconds_0(float value)
	{
		___m_Seconds_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_t1699091251_marshaled_pinvoke : public YieldInstruction_t403091072_marshaled_pinvoke
{
	float ___m_Seconds_0;
};
// Native definition for COM marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_t1699091251_marshaled_com : public YieldInstruction_t403091072_marshaled_com
{
	float ___m_Seconds_0;
};
#endif // WAITFORSECONDS_T1699091251_H
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
#ifndef QUATERNION_T2301928331_H
#define QUATERNION_T2301928331_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Quaternion
struct  Quaternion_t2301928331 
{
public:
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t2301928331_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t2301928331  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t2301928331  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t2301928331 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t2301928331  value)
	{
		___identityQuaternion_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // QUATERNION_T2301928331_H
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
#ifndef ASYNCOPERATION_T1445031843_H
#define ASYNCOPERATION_T1445031843_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AsyncOperation
struct  AsyncOperation_t1445031843  : public YieldInstruction_t403091072
{
public:
	// System.IntPtr UnityEngine.AsyncOperation::m_Ptr
	intptr_t ___m_Ptr_0;
	// System.Action`1<UnityEngine.AsyncOperation> UnityEngine.AsyncOperation::m_completeCallback
	Action_1_t1617499438 * ___m_completeCallback_1;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(AsyncOperation_t1445031843, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_m_completeCallback_1() { return static_cast<int32_t>(offsetof(AsyncOperation_t1445031843, ___m_completeCallback_1)); }
	inline Action_1_t1617499438 * get_m_completeCallback_1() const { return ___m_completeCallback_1; }
	inline Action_1_t1617499438 ** get_address_of_m_completeCallback_1() { return &___m_completeCallback_1; }
	inline void set_m_completeCallback_1(Action_1_t1617499438 * value)
	{
		___m_completeCallback_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_completeCallback_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.AsyncOperation
struct AsyncOperation_t1445031843_marshaled_pinvoke : public YieldInstruction_t403091072_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___m_completeCallback_1;
};
// Native definition for COM marshalling of UnityEngine.AsyncOperation
struct AsyncOperation_t1445031843_marshaled_com : public YieldInstruction_t403091072_marshaled_com
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___m_completeCallback_1;
};
#endif // ASYNCOPERATION_T1445031843_H
#ifndef TOGGLETRANSITION_T3587297765_H
#define TOGGLETRANSITION_T3587297765_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Toggle/ToggleTransition
struct  ToggleTransition_t3587297765 
{
public:
	// System.Int32 UnityEngine.UI.Toggle/ToggleTransition::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ToggleTransition_t3587297765, ___value___1)); }
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
#endif // TOGGLETRANSITION_T3587297765_H
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
#ifndef FILLMETHOD_T1167457570_H
#define FILLMETHOD_T1167457570_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Image/FillMethod
struct  FillMethod_t1167457570 
{
public:
	// System.Int32 UnityEngine.UI.Image/FillMethod::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(FillMethod_t1167457570, ___value___1)); }
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
#endif // FILLMETHOD_T1167457570_H
#ifndef TYPE_T1152881528_H
#define TYPE_T1152881528_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Image/Type
struct  Type_t1152881528 
{
public:
	// System.Int32 UnityEngine.UI.Image/Type::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(Type_t1152881528, ___value___1)); }
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
#endif // TYPE_T1152881528_H
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
#ifndef KEYCODE_T2599294277_H
#define KEYCODE_T2599294277_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.KeyCode
struct  KeyCode_t2599294277 
{
public:
	// System.Int32 UnityEngine.KeyCode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(KeyCode_t2599294277, ___value___1)); }
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
#endif // KEYCODE_T2599294277_H
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
#ifndef POWERUPS_T2042225547_H
#define POWERUPS_T2042225547_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Player1Paddle/PowerUps
struct  PowerUps_t2042225547 
{
public:
	// System.Int32 Player1Paddle/PowerUps::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(PowerUps_t2042225547, ___value___1)); }
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
#endif // POWERUPS_T2042225547_H
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
#ifndef GAMESTATE_T184198630_H
#define GAMESTATE_T184198630_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GameState
struct  GameState_t184198630  : public RuntimeObject
{
public:
	// UnityEngine.Vector3 GameState::Paddle1Pos
	Vector3_t3722313464  ___Paddle1Pos_0;
	// UnityEngine.Vector3 GameState::Paddle2Pos
	Vector3_t3722313464  ___Paddle2Pos_1;
	// UnityEngine.Vector3 GameState::BallPos
	Vector3_t3722313464  ___BallPos_2;
	// UnityEngine.Vector3 GameState::BallDir
	Vector3_t3722313464  ___BallDir_3;
	// System.Single GameState::speed
	float ___speed_4;

public:
	inline static int32_t get_offset_of_Paddle1Pos_0() { return static_cast<int32_t>(offsetof(GameState_t184198630, ___Paddle1Pos_0)); }
	inline Vector3_t3722313464  get_Paddle1Pos_0() const { return ___Paddle1Pos_0; }
	inline Vector3_t3722313464 * get_address_of_Paddle1Pos_0() { return &___Paddle1Pos_0; }
	inline void set_Paddle1Pos_0(Vector3_t3722313464  value)
	{
		___Paddle1Pos_0 = value;
	}

	inline static int32_t get_offset_of_Paddle2Pos_1() { return static_cast<int32_t>(offsetof(GameState_t184198630, ___Paddle2Pos_1)); }
	inline Vector3_t3722313464  get_Paddle2Pos_1() const { return ___Paddle2Pos_1; }
	inline Vector3_t3722313464 * get_address_of_Paddle2Pos_1() { return &___Paddle2Pos_1; }
	inline void set_Paddle2Pos_1(Vector3_t3722313464  value)
	{
		___Paddle2Pos_1 = value;
	}

	inline static int32_t get_offset_of_BallPos_2() { return static_cast<int32_t>(offsetof(GameState_t184198630, ___BallPos_2)); }
	inline Vector3_t3722313464  get_BallPos_2() const { return ___BallPos_2; }
	inline Vector3_t3722313464 * get_address_of_BallPos_2() { return &___BallPos_2; }
	inline void set_BallPos_2(Vector3_t3722313464  value)
	{
		___BallPos_2 = value;
	}

	inline static int32_t get_offset_of_BallDir_3() { return static_cast<int32_t>(offsetof(GameState_t184198630, ___BallDir_3)); }
	inline Vector3_t3722313464  get_BallDir_3() const { return ___BallDir_3; }
	inline Vector3_t3722313464 * get_address_of_BallDir_3() { return &___BallDir_3; }
	inline void set_BallDir_3(Vector3_t3722313464  value)
	{
		___BallDir_3 = value;
	}

	inline static int32_t get_offset_of_speed_4() { return static_cast<int32_t>(offsetof(GameState_t184198630, ___speed_4)); }
	inline float get_speed_4() const { return ___speed_4; }
	inline float* get_address_of_speed_4() { return &___speed_4; }
	inline void set_speed_4(float value)
	{
		___speed_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GAMESTATE_T184198630_H
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
#ifndef AUDIOCLIP_T3680889665_H
#define AUDIOCLIP_T3680889665_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AudioClip
struct  AudioClip_t3680889665  : public Object_t631007953
{
public:
	// UnityEngine.AudioClip/PCMReaderCallback UnityEngine.AudioClip::m_PCMReaderCallback
	PCMReaderCallback_t1677636661 * ___m_PCMReaderCallback_2;
	// UnityEngine.AudioClip/PCMSetPositionCallback UnityEngine.AudioClip::m_PCMSetPositionCallback
	PCMSetPositionCallback_t1059417452 * ___m_PCMSetPositionCallback_3;

public:
	inline static int32_t get_offset_of_m_PCMReaderCallback_2() { return static_cast<int32_t>(offsetof(AudioClip_t3680889665, ___m_PCMReaderCallback_2)); }
	inline PCMReaderCallback_t1677636661 * get_m_PCMReaderCallback_2() const { return ___m_PCMReaderCallback_2; }
	inline PCMReaderCallback_t1677636661 ** get_address_of_m_PCMReaderCallback_2() { return &___m_PCMReaderCallback_2; }
	inline void set_m_PCMReaderCallback_2(PCMReaderCallback_t1677636661 * value)
	{
		___m_PCMReaderCallback_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_PCMReaderCallback_2), value);
	}

	inline static int32_t get_offset_of_m_PCMSetPositionCallback_3() { return static_cast<int32_t>(offsetof(AudioClip_t3680889665, ___m_PCMSetPositionCallback_3)); }
	inline PCMSetPositionCallback_t1059417452 * get_m_PCMSetPositionCallback_3() const { return ___m_PCMSetPositionCallback_3; }
	inline PCMSetPositionCallback_t1059417452 ** get_address_of_m_PCMSetPositionCallback_3() { return &___m_PCMSetPositionCallback_3; }
	inline void set_m_PCMSetPositionCallback_3(PCMSetPositionCallback_t1059417452 * value)
	{
		___m_PCMSetPositionCallback_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_PCMSetPositionCallback_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AUDIOCLIP_T3680889665_H
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
#ifndef MATERIAL_T340375123_H
#define MATERIAL_T340375123_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Material
struct  Material_t340375123  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MATERIAL_T340375123_H
#ifndef COLLIDER_T1773347010_H
#define COLLIDER_T1773347010_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Collider
struct  Collider_t1773347010  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLLIDER_T1773347010_H
#ifndef CANVASRENDERER_T2598313366_H
#define CANVASRENDERER_T2598313366_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.CanvasRenderer
struct  CanvasRenderer_t2598313366  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CANVASRENDERER_T2598313366_H
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
#ifndef RIGIDBODY_T3916780224_H
#define RIGIDBODY_T3916780224_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Rigidbody
struct  Rigidbody_t3916780224  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RIGIDBODY_T3916780224_H
#ifndef RENDERER_T2627027031_H
#define RENDERER_T2627027031_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Renderer
struct  Renderer_t2627027031  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RENDERER_T2627027031_H
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
#ifndef AUDIOSOURCE_T3935305588_H
#define AUDIOSOURCE_T3935305588_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AudioSource
struct  AudioSource_t3935305588  : public Behaviour_t1437897464
{
public:
	// UnityEngine.AudioSourceExtension UnityEngine.AudioSource::spatializerExtension
	AudioSourceExtension_t3064908834 * ___spatializerExtension_2;
	// UnityEngine.AudioSourceExtension UnityEngine.AudioSource::ambisonicExtension
	AudioSourceExtension_t3064908834 * ___ambisonicExtension_3;

public:
	inline static int32_t get_offset_of_spatializerExtension_2() { return static_cast<int32_t>(offsetof(AudioSource_t3935305588, ___spatializerExtension_2)); }
	inline AudioSourceExtension_t3064908834 * get_spatializerExtension_2() const { return ___spatializerExtension_2; }
	inline AudioSourceExtension_t3064908834 ** get_address_of_spatializerExtension_2() { return &___spatializerExtension_2; }
	inline void set_spatializerExtension_2(AudioSourceExtension_t3064908834 * value)
	{
		___spatializerExtension_2 = value;
		Il2CppCodeGenWriteBarrier((&___spatializerExtension_2), value);
	}

	inline static int32_t get_offset_of_ambisonicExtension_3() { return static_cast<int32_t>(offsetof(AudioSource_t3935305588, ___ambisonicExtension_3)); }
	inline AudioSourceExtension_t3064908834 * get_ambisonicExtension_3() const { return ___ambisonicExtension_3; }
	inline AudioSourceExtension_t3064908834 ** get_address_of_ambisonicExtension_3() { return &___ambisonicExtension_3; }
	inline void set_ambisonicExtension_3(AudioSourceExtension_t3064908834 * value)
	{
		___ambisonicExtension_3 = value;
		Il2CppCodeGenWriteBarrier((&___ambisonicExtension_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AUDIOSOURCE_T3935305588_H
#ifndef MESHRENDERER_T587009260_H
#define MESHRENDERER_T587009260_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.MeshRenderer
struct  MeshRenderer_t587009260  : public Renderer_t2627027031
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MESHRENDERER_T587009260_H
#ifndef LIGHT_T3756812086_H
#define LIGHT_T3756812086_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Light
struct  Light_t3756812086  : public Behaviour_t1437897464
{
public:
	// System.Int32 UnityEngine.Light::m_BakedIndex
	int32_t ___m_BakedIndex_2;

public:
	inline static int32_t get_offset_of_m_BakedIndex_2() { return static_cast<int32_t>(offsetof(Light_t3756812086, ___m_BakedIndex_2)); }
	inline int32_t get_m_BakedIndex_2() const { return ___m_BakedIndex_2; }
	inline int32_t* get_address_of_m_BakedIndex_2() { return &___m_BakedIndex_2; }
	inline void set_m_BakedIndex_2(int32_t value)
	{
		___m_BakedIndex_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIGHT_T3756812086_H
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
#ifndef FLOORGENERATOR_T4284275110_H
#define FLOORGENERATOR_T4284275110_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// FloorGenerator
struct  FloorGenerator_t4284275110  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.GameObject[] FloorGenerator::floorTiles
	GameObjectU5BU5D_t3328599146* ___floorTiles_2;

public:
	inline static int32_t get_offset_of_floorTiles_2() { return static_cast<int32_t>(offsetof(FloorGenerator_t4284275110, ___floorTiles_2)); }
	inline GameObjectU5BU5D_t3328599146* get_floorTiles_2() const { return ___floorTiles_2; }
	inline GameObjectU5BU5D_t3328599146** get_address_of_floorTiles_2() { return &___floorTiles_2; }
	inline void set_floorTiles_2(GameObjectU5BU5D_t3328599146* value)
	{
		___floorTiles_2 = value;
		Il2CppCodeGenWriteBarrier((&___floorTiles_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FLOORGENERATOR_T4284275110_H
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
#ifndef CREDITROLL_T721334825_H
#define CREDITROLL_T721334825_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CreditRoll
struct  CreditRoll_t721334825  : public MonoBehaviour_t3962482529
{
public:
	// System.Single CreditRoll::speed
	float ___speed_2;
	// System.Single CreditRoll::duration
	float ___duration_3;
	// System.Single CreditRoll::time
	float ___time_4;

public:
	inline static int32_t get_offset_of_speed_2() { return static_cast<int32_t>(offsetof(CreditRoll_t721334825, ___speed_2)); }
	inline float get_speed_2() const { return ___speed_2; }
	inline float* get_address_of_speed_2() { return &___speed_2; }
	inline void set_speed_2(float value)
	{
		___speed_2 = value;
	}

	inline static int32_t get_offset_of_duration_3() { return static_cast<int32_t>(offsetof(CreditRoll_t721334825, ___duration_3)); }
	inline float get_duration_3() const { return ___duration_3; }
	inline float* get_address_of_duration_3() { return &___duration_3; }
	inline void set_duration_3(float value)
	{
		___duration_3 = value;
	}

	inline static int32_t get_offset_of_time_4() { return static_cast<int32_t>(offsetof(CreditRoll_t721334825, ___time_4)); }
	inline float get_time_4() const { return ___time_4; }
	inline float* get_address_of_time_4() { return &___time_4; }
	inline void set_time_4(float value)
	{
		___time_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CREDITROLL_T721334825_H
#ifndef DJ_T167059238_H
#define DJ_T167059238_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DJ
struct  DJ_t167059238  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.AudioSource DJ::source1
	AudioSource_t3935305588 * ___source1_2;
	// UnityEngine.AudioSource DJ::source2
	AudioSource_t3935305588 * ___source2_3;
	// UnityEngine.AudioSource DJ::source3
	AudioSource_t3935305588 * ___source3_4;

public:
	inline static int32_t get_offset_of_source1_2() { return static_cast<int32_t>(offsetof(DJ_t167059238, ___source1_2)); }
	inline AudioSource_t3935305588 * get_source1_2() const { return ___source1_2; }
	inline AudioSource_t3935305588 ** get_address_of_source1_2() { return &___source1_2; }
	inline void set_source1_2(AudioSource_t3935305588 * value)
	{
		___source1_2 = value;
		Il2CppCodeGenWriteBarrier((&___source1_2), value);
	}

	inline static int32_t get_offset_of_source2_3() { return static_cast<int32_t>(offsetof(DJ_t167059238, ___source2_3)); }
	inline AudioSource_t3935305588 * get_source2_3() const { return ___source2_3; }
	inline AudioSource_t3935305588 ** get_address_of_source2_3() { return &___source2_3; }
	inline void set_source2_3(AudioSource_t3935305588 * value)
	{
		___source2_3 = value;
		Il2CppCodeGenWriteBarrier((&___source2_3), value);
	}

	inline static int32_t get_offset_of_source3_4() { return static_cast<int32_t>(offsetof(DJ_t167059238, ___source3_4)); }
	inline AudioSource_t3935305588 * get_source3_4() const { return ___source3_4; }
	inline AudioSource_t3935305588 ** get_address_of_source3_4() { return &___source3_4; }
	inline void set_source3_4(AudioSource_t3935305588 * value)
	{
		___source3_4 = value;
		Il2CppCodeGenWriteBarrier((&___source3_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DJ_T167059238_H
#ifndef LOGOFADE_T2650879019_H
#define LOGOFADE_T2650879019_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LogoFade
struct  LogoFade_t2650879019  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.UI.Image LogoFade::schoolLogo
	Image_t2670269651 * ___schoolLogo_2;
	// UnityEngine.UI.Image LogoFade::teamLogo
	Image_t2670269651 * ___teamLogo_3;
	// UnityEngine.UI.Image LogoFade::teamPicture
	Image_t2670269651 * ___teamPicture_4;
	// UnityEngine.UI.Image LogoFade::Curtain
	Image_t2670269651 * ___Curtain_5;

public:
	inline static int32_t get_offset_of_schoolLogo_2() { return static_cast<int32_t>(offsetof(LogoFade_t2650879019, ___schoolLogo_2)); }
	inline Image_t2670269651 * get_schoolLogo_2() const { return ___schoolLogo_2; }
	inline Image_t2670269651 ** get_address_of_schoolLogo_2() { return &___schoolLogo_2; }
	inline void set_schoolLogo_2(Image_t2670269651 * value)
	{
		___schoolLogo_2 = value;
		Il2CppCodeGenWriteBarrier((&___schoolLogo_2), value);
	}

	inline static int32_t get_offset_of_teamLogo_3() { return static_cast<int32_t>(offsetof(LogoFade_t2650879019, ___teamLogo_3)); }
	inline Image_t2670269651 * get_teamLogo_3() const { return ___teamLogo_3; }
	inline Image_t2670269651 ** get_address_of_teamLogo_3() { return &___teamLogo_3; }
	inline void set_teamLogo_3(Image_t2670269651 * value)
	{
		___teamLogo_3 = value;
		Il2CppCodeGenWriteBarrier((&___teamLogo_3), value);
	}

	inline static int32_t get_offset_of_teamPicture_4() { return static_cast<int32_t>(offsetof(LogoFade_t2650879019, ___teamPicture_4)); }
	inline Image_t2670269651 * get_teamPicture_4() const { return ___teamPicture_4; }
	inline Image_t2670269651 ** get_address_of_teamPicture_4() { return &___teamPicture_4; }
	inline void set_teamPicture_4(Image_t2670269651 * value)
	{
		___teamPicture_4 = value;
		Il2CppCodeGenWriteBarrier((&___teamPicture_4), value);
	}

	inline static int32_t get_offset_of_Curtain_5() { return static_cast<int32_t>(offsetof(LogoFade_t2650879019, ___Curtain_5)); }
	inline Image_t2670269651 * get_Curtain_5() const { return ___Curtain_5; }
	inline Image_t2670269651 ** get_address_of_Curtain_5() { return &___Curtain_5; }
	inline void set_Curtain_5(Image_t2670269651 * value)
	{
		___Curtain_5 = value;
		Il2CppCodeGenWriteBarrier((&___Curtain_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LOGOFADE_T2650879019_H
#ifndef PLAYER1PADDLE_T3157062208_H
#define PLAYER1PADDLE_T3157062208_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Player1Paddle
struct  Player1Paddle_t3157062208  : public MonoBehaviour_t3962482529
{
public:
	// Player1Paddle/PowerUps Player1Paddle::type
	int32_t ___type_2;
	// System.Random Player1Paddle::rnd
	Random_t108471755 * ___rnd_3;
	// System.Single Player1Paddle::xMin
	float ___xMin_4;
	// System.Single Player1Paddle::xMax
	float ___xMax_5;
	// System.Single Player1Paddle::yMin
	float ___yMin_6;
	// System.Single Player1Paddle::yMax
	float ___yMax_7;
	// System.Single Player1Paddle::PaddleSpeed
	float ___PaddleSpeed_8;
	// UnityEngine.UI.Text Player1Paddle::Messenger
	Text_t1901882714 * ___Messenger_9;
	// System.Single Player1Paddle::curX
	float ___curX_11;
	// System.Single Player1Paddle::curY
	float ___curY_12;
	// UnityEngine.Rigidbody Player1Paddle::rb
	Rigidbody_t3916780224 * ___rb_13;
	// System.Single Player1Paddle::powerUpCounter
	float ___powerUpCounter_14;
	// System.Single Player1Paddle::powerUpDuration
	float ___powerUpDuration_15;
	// UnityEngine.GameObject Player1Paddle::powerUp
	GameObject_t1113636619 * ___powerUp_16;

public:
	inline static int32_t get_offset_of_type_2() { return static_cast<int32_t>(offsetof(Player1Paddle_t3157062208, ___type_2)); }
	inline int32_t get_type_2() const { return ___type_2; }
	inline int32_t* get_address_of_type_2() { return &___type_2; }
	inline void set_type_2(int32_t value)
	{
		___type_2 = value;
	}

	inline static int32_t get_offset_of_rnd_3() { return static_cast<int32_t>(offsetof(Player1Paddle_t3157062208, ___rnd_3)); }
	inline Random_t108471755 * get_rnd_3() const { return ___rnd_3; }
	inline Random_t108471755 ** get_address_of_rnd_3() { return &___rnd_3; }
	inline void set_rnd_3(Random_t108471755 * value)
	{
		___rnd_3 = value;
		Il2CppCodeGenWriteBarrier((&___rnd_3), value);
	}

	inline static int32_t get_offset_of_xMin_4() { return static_cast<int32_t>(offsetof(Player1Paddle_t3157062208, ___xMin_4)); }
	inline float get_xMin_4() const { return ___xMin_4; }
	inline float* get_address_of_xMin_4() { return &___xMin_4; }
	inline void set_xMin_4(float value)
	{
		___xMin_4 = value;
	}

	inline static int32_t get_offset_of_xMax_5() { return static_cast<int32_t>(offsetof(Player1Paddle_t3157062208, ___xMax_5)); }
	inline float get_xMax_5() const { return ___xMax_5; }
	inline float* get_address_of_xMax_5() { return &___xMax_5; }
	inline void set_xMax_5(float value)
	{
		___xMax_5 = value;
	}

	inline static int32_t get_offset_of_yMin_6() { return static_cast<int32_t>(offsetof(Player1Paddle_t3157062208, ___yMin_6)); }
	inline float get_yMin_6() const { return ___yMin_6; }
	inline float* get_address_of_yMin_6() { return &___yMin_6; }
	inline void set_yMin_6(float value)
	{
		___yMin_6 = value;
	}

	inline static int32_t get_offset_of_yMax_7() { return static_cast<int32_t>(offsetof(Player1Paddle_t3157062208, ___yMax_7)); }
	inline float get_yMax_7() const { return ___yMax_7; }
	inline float* get_address_of_yMax_7() { return &___yMax_7; }
	inline void set_yMax_7(float value)
	{
		___yMax_7 = value;
	}

	inline static int32_t get_offset_of_PaddleSpeed_8() { return static_cast<int32_t>(offsetof(Player1Paddle_t3157062208, ___PaddleSpeed_8)); }
	inline float get_PaddleSpeed_8() const { return ___PaddleSpeed_8; }
	inline float* get_address_of_PaddleSpeed_8() { return &___PaddleSpeed_8; }
	inline void set_PaddleSpeed_8(float value)
	{
		___PaddleSpeed_8 = value;
	}

	inline static int32_t get_offset_of_Messenger_9() { return static_cast<int32_t>(offsetof(Player1Paddle_t3157062208, ___Messenger_9)); }
	inline Text_t1901882714 * get_Messenger_9() const { return ___Messenger_9; }
	inline Text_t1901882714 ** get_address_of_Messenger_9() { return &___Messenger_9; }
	inline void set_Messenger_9(Text_t1901882714 * value)
	{
		___Messenger_9 = value;
		Il2CppCodeGenWriteBarrier((&___Messenger_9), value);
	}

	inline static int32_t get_offset_of_curX_11() { return static_cast<int32_t>(offsetof(Player1Paddle_t3157062208, ___curX_11)); }
	inline float get_curX_11() const { return ___curX_11; }
	inline float* get_address_of_curX_11() { return &___curX_11; }
	inline void set_curX_11(float value)
	{
		___curX_11 = value;
	}

	inline static int32_t get_offset_of_curY_12() { return static_cast<int32_t>(offsetof(Player1Paddle_t3157062208, ___curY_12)); }
	inline float get_curY_12() const { return ___curY_12; }
	inline float* get_address_of_curY_12() { return &___curY_12; }
	inline void set_curY_12(float value)
	{
		___curY_12 = value;
	}

	inline static int32_t get_offset_of_rb_13() { return static_cast<int32_t>(offsetof(Player1Paddle_t3157062208, ___rb_13)); }
	inline Rigidbody_t3916780224 * get_rb_13() const { return ___rb_13; }
	inline Rigidbody_t3916780224 ** get_address_of_rb_13() { return &___rb_13; }
	inline void set_rb_13(Rigidbody_t3916780224 * value)
	{
		___rb_13 = value;
		Il2CppCodeGenWriteBarrier((&___rb_13), value);
	}

	inline static int32_t get_offset_of_powerUpCounter_14() { return static_cast<int32_t>(offsetof(Player1Paddle_t3157062208, ___powerUpCounter_14)); }
	inline float get_powerUpCounter_14() const { return ___powerUpCounter_14; }
	inline float* get_address_of_powerUpCounter_14() { return &___powerUpCounter_14; }
	inline void set_powerUpCounter_14(float value)
	{
		___powerUpCounter_14 = value;
	}

	inline static int32_t get_offset_of_powerUpDuration_15() { return static_cast<int32_t>(offsetof(Player1Paddle_t3157062208, ___powerUpDuration_15)); }
	inline float get_powerUpDuration_15() const { return ___powerUpDuration_15; }
	inline float* get_address_of_powerUpDuration_15() { return &___powerUpDuration_15; }
	inline void set_powerUpDuration_15(float value)
	{
		___powerUpDuration_15 = value;
	}

	inline static int32_t get_offset_of_powerUp_16() { return static_cast<int32_t>(offsetof(Player1Paddle_t3157062208, ___powerUp_16)); }
	inline GameObject_t1113636619 * get_powerUp_16() const { return ___powerUp_16; }
	inline GameObject_t1113636619 ** get_address_of_powerUp_16() { return &___powerUp_16; }
	inline void set_powerUp_16(GameObject_t1113636619 * value)
	{
		___powerUp_16 = value;
		Il2CppCodeGenWriteBarrier((&___powerUp_16), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYER1PADDLE_T3157062208_H
#ifndef BALLCONTROLLER_T2992829471_H
#define BALLCONTROLLER_T2992829471_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// BallController
struct  BallController_t2992829471  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.UI.Text BallController::message
	Text_t1901882714 * ___message_2;
	// UnityEngine.AudioClip BallController::hit
	AudioClip_t3680889665 * ___hit_3;
	// UnityEngine.AudioClip BallController::bounce
	AudioClip_t3680889665 * ___bounce_4;
	// UnityEngine.AudioSource BallController::source
	AudioSource_t3935305588 * ___source_5;
	// System.Single BallController::zMin
	float ___zMin_6;
	// System.Single BallController::zMax
	float ___zMax_7;
	// System.Single BallController::Speed
	float ___Speed_8;
	// System.Single BallController::BounceMult
	float ___BounceMult_9;
	// System.Boolean BallController::darkMode
	bool ___darkMode_10;
	// System.Boolean BallController::paused
	bool ___paused_11;
	// System.Boolean BallController::waitForPress
	bool ___waitForPress_12;
	// System.Single BallController::localSpeed
	float ___localSpeed_14;
	// UnityEngine.Rigidbody BallController::rb
	Rigidbody_t3916780224 * ___rb_15;
	// UnityEngine.Vector3 BallController::direction
	Vector3_t3722313464  ___direction_16;
	// System.Int32 BallController::nextDir
	int32_t ___nextDir_17;
	// UnityEngine.Light BallController::halo
	Light_t3756812086 * ___halo_18;
	// System.Boolean BallController::glowingUp
	bool ___glowingUp_19;
	// System.Boolean BallController::glowingDown
	bool ___glowingDown_20;
	// System.Boolean BallController::environmentDimming
	bool ___environmentDimming_21;
	// System.Boolean BallController::environmentLightingUp
	bool ___environmentLightingUp_22;
	// UnityEngine.Light BallController::MainLight
	Light_t3756812086 * ___MainLight_23;
	// ScorekeeperScript BallController::scorekeeper
	ScorekeeperScript_t1868293023 * ___scorekeeper_24;

public:
	inline static int32_t get_offset_of_message_2() { return static_cast<int32_t>(offsetof(BallController_t2992829471, ___message_2)); }
	inline Text_t1901882714 * get_message_2() const { return ___message_2; }
	inline Text_t1901882714 ** get_address_of_message_2() { return &___message_2; }
	inline void set_message_2(Text_t1901882714 * value)
	{
		___message_2 = value;
		Il2CppCodeGenWriteBarrier((&___message_2), value);
	}

	inline static int32_t get_offset_of_hit_3() { return static_cast<int32_t>(offsetof(BallController_t2992829471, ___hit_3)); }
	inline AudioClip_t3680889665 * get_hit_3() const { return ___hit_3; }
	inline AudioClip_t3680889665 ** get_address_of_hit_3() { return &___hit_3; }
	inline void set_hit_3(AudioClip_t3680889665 * value)
	{
		___hit_3 = value;
		Il2CppCodeGenWriteBarrier((&___hit_3), value);
	}

	inline static int32_t get_offset_of_bounce_4() { return static_cast<int32_t>(offsetof(BallController_t2992829471, ___bounce_4)); }
	inline AudioClip_t3680889665 * get_bounce_4() const { return ___bounce_4; }
	inline AudioClip_t3680889665 ** get_address_of_bounce_4() { return &___bounce_4; }
	inline void set_bounce_4(AudioClip_t3680889665 * value)
	{
		___bounce_4 = value;
		Il2CppCodeGenWriteBarrier((&___bounce_4), value);
	}

	inline static int32_t get_offset_of_source_5() { return static_cast<int32_t>(offsetof(BallController_t2992829471, ___source_5)); }
	inline AudioSource_t3935305588 * get_source_5() const { return ___source_5; }
	inline AudioSource_t3935305588 ** get_address_of_source_5() { return &___source_5; }
	inline void set_source_5(AudioSource_t3935305588 * value)
	{
		___source_5 = value;
		Il2CppCodeGenWriteBarrier((&___source_5), value);
	}

	inline static int32_t get_offset_of_zMin_6() { return static_cast<int32_t>(offsetof(BallController_t2992829471, ___zMin_6)); }
	inline float get_zMin_6() const { return ___zMin_6; }
	inline float* get_address_of_zMin_6() { return &___zMin_6; }
	inline void set_zMin_6(float value)
	{
		___zMin_6 = value;
	}

	inline static int32_t get_offset_of_zMax_7() { return static_cast<int32_t>(offsetof(BallController_t2992829471, ___zMax_7)); }
	inline float get_zMax_7() const { return ___zMax_7; }
	inline float* get_address_of_zMax_7() { return &___zMax_7; }
	inline void set_zMax_7(float value)
	{
		___zMax_7 = value;
	}

	inline static int32_t get_offset_of_Speed_8() { return static_cast<int32_t>(offsetof(BallController_t2992829471, ___Speed_8)); }
	inline float get_Speed_8() const { return ___Speed_8; }
	inline float* get_address_of_Speed_8() { return &___Speed_8; }
	inline void set_Speed_8(float value)
	{
		___Speed_8 = value;
	}

	inline static int32_t get_offset_of_BounceMult_9() { return static_cast<int32_t>(offsetof(BallController_t2992829471, ___BounceMult_9)); }
	inline float get_BounceMult_9() const { return ___BounceMult_9; }
	inline float* get_address_of_BounceMult_9() { return &___BounceMult_9; }
	inline void set_BounceMult_9(float value)
	{
		___BounceMult_9 = value;
	}

	inline static int32_t get_offset_of_darkMode_10() { return static_cast<int32_t>(offsetof(BallController_t2992829471, ___darkMode_10)); }
	inline bool get_darkMode_10() const { return ___darkMode_10; }
	inline bool* get_address_of_darkMode_10() { return &___darkMode_10; }
	inline void set_darkMode_10(bool value)
	{
		___darkMode_10 = value;
	}

	inline static int32_t get_offset_of_paused_11() { return static_cast<int32_t>(offsetof(BallController_t2992829471, ___paused_11)); }
	inline bool get_paused_11() const { return ___paused_11; }
	inline bool* get_address_of_paused_11() { return &___paused_11; }
	inline void set_paused_11(bool value)
	{
		___paused_11 = value;
	}

	inline static int32_t get_offset_of_waitForPress_12() { return static_cast<int32_t>(offsetof(BallController_t2992829471, ___waitForPress_12)); }
	inline bool get_waitForPress_12() const { return ___waitForPress_12; }
	inline bool* get_address_of_waitForPress_12() { return &___waitForPress_12; }
	inline void set_waitForPress_12(bool value)
	{
		___waitForPress_12 = value;
	}

	inline static int32_t get_offset_of_localSpeed_14() { return static_cast<int32_t>(offsetof(BallController_t2992829471, ___localSpeed_14)); }
	inline float get_localSpeed_14() const { return ___localSpeed_14; }
	inline float* get_address_of_localSpeed_14() { return &___localSpeed_14; }
	inline void set_localSpeed_14(float value)
	{
		___localSpeed_14 = value;
	}

	inline static int32_t get_offset_of_rb_15() { return static_cast<int32_t>(offsetof(BallController_t2992829471, ___rb_15)); }
	inline Rigidbody_t3916780224 * get_rb_15() const { return ___rb_15; }
	inline Rigidbody_t3916780224 ** get_address_of_rb_15() { return &___rb_15; }
	inline void set_rb_15(Rigidbody_t3916780224 * value)
	{
		___rb_15 = value;
		Il2CppCodeGenWriteBarrier((&___rb_15), value);
	}

	inline static int32_t get_offset_of_direction_16() { return static_cast<int32_t>(offsetof(BallController_t2992829471, ___direction_16)); }
	inline Vector3_t3722313464  get_direction_16() const { return ___direction_16; }
	inline Vector3_t3722313464 * get_address_of_direction_16() { return &___direction_16; }
	inline void set_direction_16(Vector3_t3722313464  value)
	{
		___direction_16 = value;
	}

	inline static int32_t get_offset_of_nextDir_17() { return static_cast<int32_t>(offsetof(BallController_t2992829471, ___nextDir_17)); }
	inline int32_t get_nextDir_17() const { return ___nextDir_17; }
	inline int32_t* get_address_of_nextDir_17() { return &___nextDir_17; }
	inline void set_nextDir_17(int32_t value)
	{
		___nextDir_17 = value;
	}

	inline static int32_t get_offset_of_halo_18() { return static_cast<int32_t>(offsetof(BallController_t2992829471, ___halo_18)); }
	inline Light_t3756812086 * get_halo_18() const { return ___halo_18; }
	inline Light_t3756812086 ** get_address_of_halo_18() { return &___halo_18; }
	inline void set_halo_18(Light_t3756812086 * value)
	{
		___halo_18 = value;
		Il2CppCodeGenWriteBarrier((&___halo_18), value);
	}

	inline static int32_t get_offset_of_glowingUp_19() { return static_cast<int32_t>(offsetof(BallController_t2992829471, ___glowingUp_19)); }
	inline bool get_glowingUp_19() const { return ___glowingUp_19; }
	inline bool* get_address_of_glowingUp_19() { return &___glowingUp_19; }
	inline void set_glowingUp_19(bool value)
	{
		___glowingUp_19 = value;
	}

	inline static int32_t get_offset_of_glowingDown_20() { return static_cast<int32_t>(offsetof(BallController_t2992829471, ___glowingDown_20)); }
	inline bool get_glowingDown_20() const { return ___glowingDown_20; }
	inline bool* get_address_of_glowingDown_20() { return &___glowingDown_20; }
	inline void set_glowingDown_20(bool value)
	{
		___glowingDown_20 = value;
	}

	inline static int32_t get_offset_of_environmentDimming_21() { return static_cast<int32_t>(offsetof(BallController_t2992829471, ___environmentDimming_21)); }
	inline bool get_environmentDimming_21() const { return ___environmentDimming_21; }
	inline bool* get_address_of_environmentDimming_21() { return &___environmentDimming_21; }
	inline void set_environmentDimming_21(bool value)
	{
		___environmentDimming_21 = value;
	}

	inline static int32_t get_offset_of_environmentLightingUp_22() { return static_cast<int32_t>(offsetof(BallController_t2992829471, ___environmentLightingUp_22)); }
	inline bool get_environmentLightingUp_22() const { return ___environmentLightingUp_22; }
	inline bool* get_address_of_environmentLightingUp_22() { return &___environmentLightingUp_22; }
	inline void set_environmentLightingUp_22(bool value)
	{
		___environmentLightingUp_22 = value;
	}

	inline static int32_t get_offset_of_MainLight_23() { return static_cast<int32_t>(offsetof(BallController_t2992829471, ___MainLight_23)); }
	inline Light_t3756812086 * get_MainLight_23() const { return ___MainLight_23; }
	inline Light_t3756812086 ** get_address_of_MainLight_23() { return &___MainLight_23; }
	inline void set_MainLight_23(Light_t3756812086 * value)
	{
		___MainLight_23 = value;
		Il2CppCodeGenWriteBarrier((&___MainLight_23), value);
	}

	inline static int32_t get_offset_of_scorekeeper_24() { return static_cast<int32_t>(offsetof(BallController_t2992829471, ___scorekeeper_24)); }
	inline ScorekeeperScript_t1868293023 * get_scorekeeper_24() const { return ___scorekeeper_24; }
	inline ScorekeeperScript_t1868293023 ** get_address_of_scorekeeper_24() { return &___scorekeeper_24; }
	inline void set_scorekeeper_24(ScorekeeperScript_t1868293023 * value)
	{
		___scorekeeper_24 = value;
		Il2CppCodeGenWriteBarrier((&___scorekeeper_24), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BALLCONTROLLER_T2992829471_H
#ifndef LOADING_T2310272025_H
#define LOADING_T2310272025_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Loading
struct  Loading_t2310272025  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.RectTransform Loading::rectComponent
	RectTransform_t3704657025 * ___rectComponent_2;
	// UnityEngine.UI.Image Loading::imageComp
	Image_t2670269651 * ___imageComp_3;
	// System.Boolean Loading::up
	bool ___up_4;
	// System.Single Loading::rotateSpeed
	float ___rotateSpeed_5;
	// System.Single Loading::openSpeed
	float ___openSpeed_6;
	// System.Single Loading::closeSpeed
	float ___closeSpeed_7;

public:
	inline static int32_t get_offset_of_rectComponent_2() { return static_cast<int32_t>(offsetof(Loading_t2310272025, ___rectComponent_2)); }
	inline RectTransform_t3704657025 * get_rectComponent_2() const { return ___rectComponent_2; }
	inline RectTransform_t3704657025 ** get_address_of_rectComponent_2() { return &___rectComponent_2; }
	inline void set_rectComponent_2(RectTransform_t3704657025 * value)
	{
		___rectComponent_2 = value;
		Il2CppCodeGenWriteBarrier((&___rectComponent_2), value);
	}

	inline static int32_t get_offset_of_imageComp_3() { return static_cast<int32_t>(offsetof(Loading_t2310272025, ___imageComp_3)); }
	inline Image_t2670269651 * get_imageComp_3() const { return ___imageComp_3; }
	inline Image_t2670269651 ** get_address_of_imageComp_3() { return &___imageComp_3; }
	inline void set_imageComp_3(Image_t2670269651 * value)
	{
		___imageComp_3 = value;
		Il2CppCodeGenWriteBarrier((&___imageComp_3), value);
	}

	inline static int32_t get_offset_of_up_4() { return static_cast<int32_t>(offsetof(Loading_t2310272025, ___up_4)); }
	inline bool get_up_4() const { return ___up_4; }
	inline bool* get_address_of_up_4() { return &___up_4; }
	inline void set_up_4(bool value)
	{
		___up_4 = value;
	}

	inline static int32_t get_offset_of_rotateSpeed_5() { return static_cast<int32_t>(offsetof(Loading_t2310272025, ___rotateSpeed_5)); }
	inline float get_rotateSpeed_5() const { return ___rotateSpeed_5; }
	inline float* get_address_of_rotateSpeed_5() { return &___rotateSpeed_5; }
	inline void set_rotateSpeed_5(float value)
	{
		___rotateSpeed_5 = value;
	}

	inline static int32_t get_offset_of_openSpeed_6() { return static_cast<int32_t>(offsetof(Loading_t2310272025, ___openSpeed_6)); }
	inline float get_openSpeed_6() const { return ___openSpeed_6; }
	inline float* get_address_of_openSpeed_6() { return &___openSpeed_6; }
	inline void set_openSpeed_6(float value)
	{
		___openSpeed_6 = value;
	}

	inline static int32_t get_offset_of_closeSpeed_7() { return static_cast<int32_t>(offsetof(Loading_t2310272025, ___closeSpeed_7)); }
	inline float get_closeSpeed_7() const { return ___closeSpeed_7; }
	inline float* get_address_of_closeSpeed_7() { return &___closeSpeed_7; }
	inline void set_closeSpeed_7(float value)
	{
		___closeSpeed_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LOADING_T2310272025_H
#ifndef PLAYER2PADDLE_T3694861021_H
#define PLAYER2PADDLE_T3694861021_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Player2Paddle
struct  Player2Paddle_t3694861021  : public MonoBehaviour_t3962482529
{
public:
	// System.Boolean Player2Paddle::AiActive
	bool ___AiActive_2;
	// System.Single Player2Paddle::xMin
	float ___xMin_3;
	// System.Single Player2Paddle::xMax
	float ___xMax_4;
	// System.Single Player2Paddle::yMin
	float ___yMin_5;
	// System.Single Player2Paddle::yMax
	float ___yMax_6;
	// System.Single Player2Paddle::PaddleSpeed
	float ___PaddleSpeed_7;
	// System.Single Player2Paddle::AiSpeedMult
	float ___AiSpeedMult_8;
	// UnityEngine.GameObject Player2Paddle::Ball
	GameObject_t1113636619 * ___Ball_9;
	// UnityEngine.Rigidbody Player2Paddle::rb
	Rigidbody_t3916780224 * ___rb_11;

public:
	inline static int32_t get_offset_of_AiActive_2() { return static_cast<int32_t>(offsetof(Player2Paddle_t3694861021, ___AiActive_2)); }
	inline bool get_AiActive_2() const { return ___AiActive_2; }
	inline bool* get_address_of_AiActive_2() { return &___AiActive_2; }
	inline void set_AiActive_2(bool value)
	{
		___AiActive_2 = value;
	}

	inline static int32_t get_offset_of_xMin_3() { return static_cast<int32_t>(offsetof(Player2Paddle_t3694861021, ___xMin_3)); }
	inline float get_xMin_3() const { return ___xMin_3; }
	inline float* get_address_of_xMin_3() { return &___xMin_3; }
	inline void set_xMin_3(float value)
	{
		___xMin_3 = value;
	}

	inline static int32_t get_offset_of_xMax_4() { return static_cast<int32_t>(offsetof(Player2Paddle_t3694861021, ___xMax_4)); }
	inline float get_xMax_4() const { return ___xMax_4; }
	inline float* get_address_of_xMax_4() { return &___xMax_4; }
	inline void set_xMax_4(float value)
	{
		___xMax_4 = value;
	}

	inline static int32_t get_offset_of_yMin_5() { return static_cast<int32_t>(offsetof(Player2Paddle_t3694861021, ___yMin_5)); }
	inline float get_yMin_5() const { return ___yMin_5; }
	inline float* get_address_of_yMin_5() { return &___yMin_5; }
	inline void set_yMin_5(float value)
	{
		___yMin_5 = value;
	}

	inline static int32_t get_offset_of_yMax_6() { return static_cast<int32_t>(offsetof(Player2Paddle_t3694861021, ___yMax_6)); }
	inline float get_yMax_6() const { return ___yMax_6; }
	inline float* get_address_of_yMax_6() { return &___yMax_6; }
	inline void set_yMax_6(float value)
	{
		___yMax_6 = value;
	}

	inline static int32_t get_offset_of_PaddleSpeed_7() { return static_cast<int32_t>(offsetof(Player2Paddle_t3694861021, ___PaddleSpeed_7)); }
	inline float get_PaddleSpeed_7() const { return ___PaddleSpeed_7; }
	inline float* get_address_of_PaddleSpeed_7() { return &___PaddleSpeed_7; }
	inline void set_PaddleSpeed_7(float value)
	{
		___PaddleSpeed_7 = value;
	}

	inline static int32_t get_offset_of_AiSpeedMult_8() { return static_cast<int32_t>(offsetof(Player2Paddle_t3694861021, ___AiSpeedMult_8)); }
	inline float get_AiSpeedMult_8() const { return ___AiSpeedMult_8; }
	inline float* get_address_of_AiSpeedMult_8() { return &___AiSpeedMult_8; }
	inline void set_AiSpeedMult_8(float value)
	{
		___AiSpeedMult_8 = value;
	}

	inline static int32_t get_offset_of_Ball_9() { return static_cast<int32_t>(offsetof(Player2Paddle_t3694861021, ___Ball_9)); }
	inline GameObject_t1113636619 * get_Ball_9() const { return ___Ball_9; }
	inline GameObject_t1113636619 ** get_address_of_Ball_9() { return &___Ball_9; }
	inline void set_Ball_9(GameObject_t1113636619 * value)
	{
		___Ball_9 = value;
		Il2CppCodeGenWriteBarrier((&___Ball_9), value);
	}

	inline static int32_t get_offset_of_rb_11() { return static_cast<int32_t>(offsetof(Player2Paddle_t3694861021, ___rb_11)); }
	inline Rigidbody_t3916780224 * get_rb_11() const { return ___rb_11; }
	inline Rigidbody_t3916780224 ** get_address_of_rb_11() { return &___rb_11; }
	inline void set_rb_11(Rigidbody_t3916780224 * value)
	{
		___rb_11 = value;
		Il2CppCodeGenWriteBarrier((&___rb_11), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYER2PADDLE_T3694861021_H
#ifndef POWERUPMANAGER_T2784844421_H
#define POWERUPMANAGER_T2784844421_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PowerUpManager
struct  PowerUpManager_t2784844421  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.GameObject PowerUpManager::powerUp
	GameObject_t1113636619 * ___powerUp_2;
	// UnityEngine.GameObject PowerUpManager::tmp
	GameObject_t1113636619 * ___tmp_3;
	// System.Single PowerUpManager::freq
	float ___freq_4;
	// System.Single PowerUpManager::timeCount
	float ___timeCount_5;
	// System.Single PowerUpManager::spd
	float ___spd_6;
	// BallController PowerUpManager::ball
	BallController_t2992829471 * ___ball_7;

public:
	inline static int32_t get_offset_of_powerUp_2() { return static_cast<int32_t>(offsetof(PowerUpManager_t2784844421, ___powerUp_2)); }
	inline GameObject_t1113636619 * get_powerUp_2() const { return ___powerUp_2; }
	inline GameObject_t1113636619 ** get_address_of_powerUp_2() { return &___powerUp_2; }
	inline void set_powerUp_2(GameObject_t1113636619 * value)
	{
		___powerUp_2 = value;
		Il2CppCodeGenWriteBarrier((&___powerUp_2), value);
	}

	inline static int32_t get_offset_of_tmp_3() { return static_cast<int32_t>(offsetof(PowerUpManager_t2784844421, ___tmp_3)); }
	inline GameObject_t1113636619 * get_tmp_3() const { return ___tmp_3; }
	inline GameObject_t1113636619 ** get_address_of_tmp_3() { return &___tmp_3; }
	inline void set_tmp_3(GameObject_t1113636619 * value)
	{
		___tmp_3 = value;
		Il2CppCodeGenWriteBarrier((&___tmp_3), value);
	}

	inline static int32_t get_offset_of_freq_4() { return static_cast<int32_t>(offsetof(PowerUpManager_t2784844421, ___freq_4)); }
	inline float get_freq_4() const { return ___freq_4; }
	inline float* get_address_of_freq_4() { return &___freq_4; }
	inline void set_freq_4(float value)
	{
		___freq_4 = value;
	}

	inline static int32_t get_offset_of_timeCount_5() { return static_cast<int32_t>(offsetof(PowerUpManager_t2784844421, ___timeCount_5)); }
	inline float get_timeCount_5() const { return ___timeCount_5; }
	inline float* get_address_of_timeCount_5() { return &___timeCount_5; }
	inline void set_timeCount_5(float value)
	{
		___timeCount_5 = value;
	}

	inline static int32_t get_offset_of_spd_6() { return static_cast<int32_t>(offsetof(PowerUpManager_t2784844421, ___spd_6)); }
	inline float get_spd_6() const { return ___spd_6; }
	inline float* get_address_of_spd_6() { return &___spd_6; }
	inline void set_spd_6(float value)
	{
		___spd_6 = value;
	}

	inline static int32_t get_offset_of_ball_7() { return static_cast<int32_t>(offsetof(PowerUpManager_t2784844421, ___ball_7)); }
	inline BallController_t2992829471 * get_ball_7() const { return ___ball_7; }
	inline BallController_t2992829471 ** get_address_of_ball_7() { return &___ball_7; }
	inline void set_ball_7(BallController_t2992829471 * value)
	{
		___ball_7 = value;
		Il2CppCodeGenWriteBarrier((&___ball_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // POWERUPMANAGER_T2784844421_H
#ifndef SCOREKEEPERSCRIPT_T1868293023_H
#define SCOREKEEPERSCRIPT_T1868293023_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ScorekeeperScript
struct  ScorekeeperScript_t1868293023  : public MonoBehaviour_t3962482529
{
public:
	// System.Int32 ScorekeeperScript::P1Score
	int32_t ___P1Score_2;
	// System.Int32 ScorekeeperScript::P2Score
	int32_t ___P2Score_3;
	// UnityEngine.UI.Text ScorekeeperScript::LeftScore
	Text_t1901882714 * ___LeftScore_4;
	// UnityEngine.UI.Text ScorekeeperScript::RightScore
	Text_t1901882714 * ___RightScore_5;
	// UnityEngine.UI.Text ScorekeeperScript::Center
	Text_t1901882714 * ___Center_6;
	// System.Boolean ScorekeeperScript::<GameOver>k__BackingField
	bool ___U3CGameOverU3Ek__BackingField_7;
	// UnityEngine.UI.Button ScorekeeperScript::resetButton
	Button_t4055032469 * ___resetButton_8;
	// UnityEngine.UI.Toggle ScorekeeperScript::lightMode
	Toggle_t2735377061 * ___lightMode_9;
	// System.Int32 ScorekeeperScript::ScoreToWin
	int32_t ___ScoreToWin_10;

public:
	inline static int32_t get_offset_of_P1Score_2() { return static_cast<int32_t>(offsetof(ScorekeeperScript_t1868293023, ___P1Score_2)); }
	inline int32_t get_P1Score_2() const { return ___P1Score_2; }
	inline int32_t* get_address_of_P1Score_2() { return &___P1Score_2; }
	inline void set_P1Score_2(int32_t value)
	{
		___P1Score_2 = value;
	}

	inline static int32_t get_offset_of_P2Score_3() { return static_cast<int32_t>(offsetof(ScorekeeperScript_t1868293023, ___P2Score_3)); }
	inline int32_t get_P2Score_3() const { return ___P2Score_3; }
	inline int32_t* get_address_of_P2Score_3() { return &___P2Score_3; }
	inline void set_P2Score_3(int32_t value)
	{
		___P2Score_3 = value;
	}

	inline static int32_t get_offset_of_LeftScore_4() { return static_cast<int32_t>(offsetof(ScorekeeperScript_t1868293023, ___LeftScore_4)); }
	inline Text_t1901882714 * get_LeftScore_4() const { return ___LeftScore_4; }
	inline Text_t1901882714 ** get_address_of_LeftScore_4() { return &___LeftScore_4; }
	inline void set_LeftScore_4(Text_t1901882714 * value)
	{
		___LeftScore_4 = value;
		Il2CppCodeGenWriteBarrier((&___LeftScore_4), value);
	}

	inline static int32_t get_offset_of_RightScore_5() { return static_cast<int32_t>(offsetof(ScorekeeperScript_t1868293023, ___RightScore_5)); }
	inline Text_t1901882714 * get_RightScore_5() const { return ___RightScore_5; }
	inline Text_t1901882714 ** get_address_of_RightScore_5() { return &___RightScore_5; }
	inline void set_RightScore_5(Text_t1901882714 * value)
	{
		___RightScore_5 = value;
		Il2CppCodeGenWriteBarrier((&___RightScore_5), value);
	}

	inline static int32_t get_offset_of_Center_6() { return static_cast<int32_t>(offsetof(ScorekeeperScript_t1868293023, ___Center_6)); }
	inline Text_t1901882714 * get_Center_6() const { return ___Center_6; }
	inline Text_t1901882714 ** get_address_of_Center_6() { return &___Center_6; }
	inline void set_Center_6(Text_t1901882714 * value)
	{
		___Center_6 = value;
		Il2CppCodeGenWriteBarrier((&___Center_6), value);
	}

	inline static int32_t get_offset_of_U3CGameOverU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(ScorekeeperScript_t1868293023, ___U3CGameOverU3Ek__BackingField_7)); }
	inline bool get_U3CGameOverU3Ek__BackingField_7() const { return ___U3CGameOverU3Ek__BackingField_7; }
	inline bool* get_address_of_U3CGameOverU3Ek__BackingField_7() { return &___U3CGameOverU3Ek__BackingField_7; }
	inline void set_U3CGameOverU3Ek__BackingField_7(bool value)
	{
		___U3CGameOverU3Ek__BackingField_7 = value;
	}

	inline static int32_t get_offset_of_resetButton_8() { return static_cast<int32_t>(offsetof(ScorekeeperScript_t1868293023, ___resetButton_8)); }
	inline Button_t4055032469 * get_resetButton_8() const { return ___resetButton_8; }
	inline Button_t4055032469 ** get_address_of_resetButton_8() { return &___resetButton_8; }
	inline void set_resetButton_8(Button_t4055032469 * value)
	{
		___resetButton_8 = value;
		Il2CppCodeGenWriteBarrier((&___resetButton_8), value);
	}

	inline static int32_t get_offset_of_lightMode_9() { return static_cast<int32_t>(offsetof(ScorekeeperScript_t1868293023, ___lightMode_9)); }
	inline Toggle_t2735377061 * get_lightMode_9() const { return ___lightMode_9; }
	inline Toggle_t2735377061 ** get_address_of_lightMode_9() { return &___lightMode_9; }
	inline void set_lightMode_9(Toggle_t2735377061 * value)
	{
		___lightMode_9 = value;
		Il2CppCodeGenWriteBarrier((&___lightMode_9), value);
	}

	inline static int32_t get_offset_of_ScoreToWin_10() { return static_cast<int32_t>(offsetof(ScorekeeperScript_t1868293023, ___ScoreToWin_10)); }
	inline int32_t get_ScoreToWin_10() const { return ___ScoreToWin_10; }
	inline int32_t* get_address_of_ScoreToWin_10() { return &___ScoreToWin_10; }
	inline void set_ScoreToWin_10(int32_t value)
	{
		___ScoreToWin_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SCOREKEEPERSCRIPT_T1868293023_H
#ifndef WALLPOPIN_T1055995948_H
#define WALLPOPIN_T1055995948_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// WallPopIn
struct  WallPopIn_t1055995948  : public MonoBehaviour_t3962482529
{
public:
	// System.Single WallPopIn::timer
	float ___timer_3;
	// UnityEngine.MeshRenderer WallPopIn::mr
	MeshRenderer_t587009260 * ___mr_4;
	// UnityEngine.Renderer WallPopIn::m
	Renderer_t2627027031 * ___m_5;

public:
	inline static int32_t get_offset_of_timer_3() { return static_cast<int32_t>(offsetof(WallPopIn_t1055995948, ___timer_3)); }
	inline float get_timer_3() const { return ___timer_3; }
	inline float* get_address_of_timer_3() { return &___timer_3; }
	inline void set_timer_3(float value)
	{
		___timer_3 = value;
	}

	inline static int32_t get_offset_of_mr_4() { return static_cast<int32_t>(offsetof(WallPopIn_t1055995948, ___mr_4)); }
	inline MeshRenderer_t587009260 * get_mr_4() const { return ___mr_4; }
	inline MeshRenderer_t587009260 ** get_address_of_mr_4() { return &___mr_4; }
	inline void set_mr_4(MeshRenderer_t587009260 * value)
	{
		___mr_4 = value;
		Il2CppCodeGenWriteBarrier((&___mr_4), value);
	}

	inline static int32_t get_offset_of_m_5() { return static_cast<int32_t>(offsetof(WallPopIn_t1055995948, ___m_5)); }
	inline Renderer_t2627027031 * get_m_5() const { return ___m_5; }
	inline Renderer_t2627027031 ** get_address_of_m_5() { return &___m_5; }
	inline void set_m_5(Renderer_t2627027031 * value)
	{
		___m_5 = value;
		Il2CppCodeGenWriteBarrier((&___m_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WALLPOPIN_T1055995948_H
#ifndef STATEHOLDER_T2173541826_H
#define STATEHOLDER_T2173541826_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// StateHolder
struct  StateHolder_t2173541826  : public MonoBehaviour_t3962482529
{
public:
	// GameState StateHolder::defaultNoBounce
	GameState_t184198630 * ___defaultNoBounce_2;
	// GameState StateHolder::defaultBounce
	GameState_t184198630 * ___defaultBounce_3;
	// GameState StateHolder::custom
	GameState_t184198630 * ___custom_4;
	// UnityEngine.GameObject StateHolder::Pad1
	GameObject_t1113636619 * ___Pad1_5;
	// UnityEngine.GameObject StateHolder::Pad2
	GameObject_t1113636619 * ___Pad2_6;
	// UnityEngine.GameObject StateHolder::Ball
	GameObject_t1113636619 * ___Ball_7;
	// BallController StateHolder::ballInfo
	BallController_t2992829471 * ___ballInfo_8;

public:
	inline static int32_t get_offset_of_defaultNoBounce_2() { return static_cast<int32_t>(offsetof(StateHolder_t2173541826, ___defaultNoBounce_2)); }
	inline GameState_t184198630 * get_defaultNoBounce_2() const { return ___defaultNoBounce_2; }
	inline GameState_t184198630 ** get_address_of_defaultNoBounce_2() { return &___defaultNoBounce_2; }
	inline void set_defaultNoBounce_2(GameState_t184198630 * value)
	{
		___defaultNoBounce_2 = value;
		Il2CppCodeGenWriteBarrier((&___defaultNoBounce_2), value);
	}

	inline static int32_t get_offset_of_defaultBounce_3() { return static_cast<int32_t>(offsetof(StateHolder_t2173541826, ___defaultBounce_3)); }
	inline GameState_t184198630 * get_defaultBounce_3() const { return ___defaultBounce_3; }
	inline GameState_t184198630 ** get_address_of_defaultBounce_3() { return &___defaultBounce_3; }
	inline void set_defaultBounce_3(GameState_t184198630 * value)
	{
		___defaultBounce_3 = value;
		Il2CppCodeGenWriteBarrier((&___defaultBounce_3), value);
	}

	inline static int32_t get_offset_of_custom_4() { return static_cast<int32_t>(offsetof(StateHolder_t2173541826, ___custom_4)); }
	inline GameState_t184198630 * get_custom_4() const { return ___custom_4; }
	inline GameState_t184198630 ** get_address_of_custom_4() { return &___custom_4; }
	inline void set_custom_4(GameState_t184198630 * value)
	{
		___custom_4 = value;
		Il2CppCodeGenWriteBarrier((&___custom_4), value);
	}

	inline static int32_t get_offset_of_Pad1_5() { return static_cast<int32_t>(offsetof(StateHolder_t2173541826, ___Pad1_5)); }
	inline GameObject_t1113636619 * get_Pad1_5() const { return ___Pad1_5; }
	inline GameObject_t1113636619 ** get_address_of_Pad1_5() { return &___Pad1_5; }
	inline void set_Pad1_5(GameObject_t1113636619 * value)
	{
		___Pad1_5 = value;
		Il2CppCodeGenWriteBarrier((&___Pad1_5), value);
	}

	inline static int32_t get_offset_of_Pad2_6() { return static_cast<int32_t>(offsetof(StateHolder_t2173541826, ___Pad2_6)); }
	inline GameObject_t1113636619 * get_Pad2_6() const { return ___Pad2_6; }
	inline GameObject_t1113636619 ** get_address_of_Pad2_6() { return &___Pad2_6; }
	inline void set_Pad2_6(GameObject_t1113636619 * value)
	{
		___Pad2_6 = value;
		Il2CppCodeGenWriteBarrier((&___Pad2_6), value);
	}

	inline static int32_t get_offset_of_Ball_7() { return static_cast<int32_t>(offsetof(StateHolder_t2173541826, ___Ball_7)); }
	inline GameObject_t1113636619 * get_Ball_7() const { return ___Ball_7; }
	inline GameObject_t1113636619 ** get_address_of_Ball_7() { return &___Ball_7; }
	inline void set_Ball_7(GameObject_t1113636619 * value)
	{
		___Ball_7 = value;
		Il2CppCodeGenWriteBarrier((&___Ball_7), value);
	}

	inline static int32_t get_offset_of_ballInfo_8() { return static_cast<int32_t>(offsetof(StateHolder_t2173541826, ___ballInfo_8)); }
	inline BallController_t2992829471 * get_ballInfo_8() const { return ___ballInfo_8; }
	inline BallController_t2992829471 ** get_address_of_ballInfo_8() { return &___ballInfo_8; }
	inline void set_ballInfo_8(BallController_t2992829471 * value)
	{
		___ballInfo_8 = value;
		Il2CppCodeGenWriteBarrier((&___ballInfo_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STATEHOLDER_T2173541826_H
#ifndef CLOUDMANAGER_T3437809148_H
#define CLOUDMANAGER_T3437809148_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CloudManager
struct  CloudManager_t3437809148  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.Vector3 CloudManager::speed
	Vector3_t3722313464  ___speed_2;
	// System.Int32 CloudManager::cloudCount
	int32_t ___cloudCount_3;

public:
	inline static int32_t get_offset_of_speed_2() { return static_cast<int32_t>(offsetof(CloudManager_t3437809148, ___speed_2)); }
	inline Vector3_t3722313464  get_speed_2() const { return ___speed_2; }
	inline Vector3_t3722313464 * get_address_of_speed_2() { return &___speed_2; }
	inline void set_speed_2(Vector3_t3722313464  value)
	{
		___speed_2 = value;
	}

	inline static int32_t get_offset_of_cloudCount_3() { return static_cast<int32_t>(offsetof(CloudManager_t3437809148, ___cloudCount_3)); }
	inline int32_t get_cloudCount_3() const { return ___cloudCount_3; }
	inline int32_t* get_address_of_cloudCount_3() { return &___cloudCount_3; }
	inline void set_cloudCount_3(int32_t value)
	{
		___cloudCount_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CLOUDMANAGER_T3437809148_H
#ifndef MAINMENUCONTROL_T4231413698_H
#define MAINMENUCONTROL_T4231413698_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MainMenuControl
struct  MainMenuControl_t4231413698  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.UI.Image MainMenuControl::load
	Image_t2670269651 * ___load_2;
	// UnityEngine.UI.Image MainMenuControl::load2
	Image_t2670269651 * ___load2_3;
	// UnityEngine.UI.Image MainMenuControl::curtain
	Image_t2670269651 * ___curtain_4;

public:
	inline static int32_t get_offset_of_load_2() { return static_cast<int32_t>(offsetof(MainMenuControl_t4231413698, ___load_2)); }
	inline Image_t2670269651 * get_load_2() const { return ___load_2; }
	inline Image_t2670269651 ** get_address_of_load_2() { return &___load_2; }
	inline void set_load_2(Image_t2670269651 * value)
	{
		___load_2 = value;
		Il2CppCodeGenWriteBarrier((&___load_2), value);
	}

	inline static int32_t get_offset_of_load2_3() { return static_cast<int32_t>(offsetof(MainMenuControl_t4231413698, ___load2_3)); }
	inline Image_t2670269651 * get_load2_3() const { return ___load2_3; }
	inline Image_t2670269651 ** get_address_of_load2_3() { return &___load2_3; }
	inline void set_load2_3(Image_t2670269651 * value)
	{
		___load2_3 = value;
		Il2CppCodeGenWriteBarrier((&___load2_3), value);
	}

	inline static int32_t get_offset_of_curtain_4() { return static_cast<int32_t>(offsetof(MainMenuControl_t4231413698, ___curtain_4)); }
	inline Image_t2670269651 * get_curtain_4() const { return ___curtain_4; }
	inline Image_t2670269651 ** get_address_of_curtain_4() { return &___curtain_4; }
	inline void set_curtain_4(Image_t2670269651 * value)
	{
		___curtain_4 = value;
		Il2CppCodeGenWriteBarrier((&___curtain_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MAINMENUCONTROL_T4231413698_H
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
#ifndef TOGGLE_T2735377061_H
#define TOGGLE_T2735377061_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Toggle
struct  Toggle_t2735377061  : public Selectable_t3250028441
{
public:
	// UnityEngine.UI.Toggle/ToggleTransition UnityEngine.UI.Toggle::toggleTransition
	int32_t ___toggleTransition_16;
	// UnityEngine.UI.Graphic UnityEngine.UI.Toggle::graphic
	Graphic_t1660335611 * ___graphic_17;
	// UnityEngine.UI.ToggleGroup UnityEngine.UI.Toggle::m_Group
	ToggleGroup_t123837990 * ___m_Group_18;
	// UnityEngine.UI.Toggle/ToggleEvent UnityEngine.UI.Toggle::onValueChanged
	ToggleEvent_t1873685584 * ___onValueChanged_19;
	// System.Boolean UnityEngine.UI.Toggle::m_IsOn
	bool ___m_IsOn_20;

public:
	inline static int32_t get_offset_of_toggleTransition_16() { return static_cast<int32_t>(offsetof(Toggle_t2735377061, ___toggleTransition_16)); }
	inline int32_t get_toggleTransition_16() const { return ___toggleTransition_16; }
	inline int32_t* get_address_of_toggleTransition_16() { return &___toggleTransition_16; }
	inline void set_toggleTransition_16(int32_t value)
	{
		___toggleTransition_16 = value;
	}

	inline static int32_t get_offset_of_graphic_17() { return static_cast<int32_t>(offsetof(Toggle_t2735377061, ___graphic_17)); }
	inline Graphic_t1660335611 * get_graphic_17() const { return ___graphic_17; }
	inline Graphic_t1660335611 ** get_address_of_graphic_17() { return &___graphic_17; }
	inline void set_graphic_17(Graphic_t1660335611 * value)
	{
		___graphic_17 = value;
		Il2CppCodeGenWriteBarrier((&___graphic_17), value);
	}

	inline static int32_t get_offset_of_m_Group_18() { return static_cast<int32_t>(offsetof(Toggle_t2735377061, ___m_Group_18)); }
	inline ToggleGroup_t123837990 * get_m_Group_18() const { return ___m_Group_18; }
	inline ToggleGroup_t123837990 ** get_address_of_m_Group_18() { return &___m_Group_18; }
	inline void set_m_Group_18(ToggleGroup_t123837990 * value)
	{
		___m_Group_18 = value;
		Il2CppCodeGenWriteBarrier((&___m_Group_18), value);
	}

	inline static int32_t get_offset_of_onValueChanged_19() { return static_cast<int32_t>(offsetof(Toggle_t2735377061, ___onValueChanged_19)); }
	inline ToggleEvent_t1873685584 * get_onValueChanged_19() const { return ___onValueChanged_19; }
	inline ToggleEvent_t1873685584 ** get_address_of_onValueChanged_19() { return &___onValueChanged_19; }
	inline void set_onValueChanged_19(ToggleEvent_t1873685584 * value)
	{
		___onValueChanged_19 = value;
		Il2CppCodeGenWriteBarrier((&___onValueChanged_19), value);
	}

	inline static int32_t get_offset_of_m_IsOn_20() { return static_cast<int32_t>(offsetof(Toggle_t2735377061, ___m_IsOn_20)); }
	inline bool get_m_IsOn_20() const { return ___m_IsOn_20; }
	inline bool* get_address_of_m_IsOn_20() { return &___m_IsOn_20; }
	inline void set_m_IsOn_20(bool value)
	{
		___m_IsOn_20 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TOGGLE_T2735377061_H
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
#ifndef IMAGE_T2670269651_H
#define IMAGE_T2670269651_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Image
struct  Image_t2670269651  : public MaskableGraphic_t3839221559
{
public:
	// UnityEngine.Sprite UnityEngine.UI.Image::m_Sprite
	Sprite_t280657092 * ___m_Sprite_29;
	// UnityEngine.Sprite UnityEngine.UI.Image::m_OverrideSprite
	Sprite_t280657092 * ___m_OverrideSprite_30;
	// UnityEngine.UI.Image/Type UnityEngine.UI.Image::m_Type
	int32_t ___m_Type_31;
	// System.Boolean UnityEngine.UI.Image::m_PreserveAspect
	bool ___m_PreserveAspect_32;
	// System.Boolean UnityEngine.UI.Image::m_FillCenter
	bool ___m_FillCenter_33;
	// UnityEngine.UI.Image/FillMethod UnityEngine.UI.Image::m_FillMethod
	int32_t ___m_FillMethod_34;
	// System.Single UnityEngine.UI.Image::m_FillAmount
	float ___m_FillAmount_35;
	// System.Boolean UnityEngine.UI.Image::m_FillClockwise
	bool ___m_FillClockwise_36;
	// System.Int32 UnityEngine.UI.Image::m_FillOrigin
	int32_t ___m_FillOrigin_37;
	// System.Single UnityEngine.UI.Image::m_AlphaHitTestMinimumThreshold
	float ___m_AlphaHitTestMinimumThreshold_38;

public:
	inline static int32_t get_offset_of_m_Sprite_29() { return static_cast<int32_t>(offsetof(Image_t2670269651, ___m_Sprite_29)); }
	inline Sprite_t280657092 * get_m_Sprite_29() const { return ___m_Sprite_29; }
	inline Sprite_t280657092 ** get_address_of_m_Sprite_29() { return &___m_Sprite_29; }
	inline void set_m_Sprite_29(Sprite_t280657092 * value)
	{
		___m_Sprite_29 = value;
		Il2CppCodeGenWriteBarrier((&___m_Sprite_29), value);
	}

	inline static int32_t get_offset_of_m_OverrideSprite_30() { return static_cast<int32_t>(offsetof(Image_t2670269651, ___m_OverrideSprite_30)); }
	inline Sprite_t280657092 * get_m_OverrideSprite_30() const { return ___m_OverrideSprite_30; }
	inline Sprite_t280657092 ** get_address_of_m_OverrideSprite_30() { return &___m_OverrideSprite_30; }
	inline void set_m_OverrideSprite_30(Sprite_t280657092 * value)
	{
		___m_OverrideSprite_30 = value;
		Il2CppCodeGenWriteBarrier((&___m_OverrideSprite_30), value);
	}

	inline static int32_t get_offset_of_m_Type_31() { return static_cast<int32_t>(offsetof(Image_t2670269651, ___m_Type_31)); }
	inline int32_t get_m_Type_31() const { return ___m_Type_31; }
	inline int32_t* get_address_of_m_Type_31() { return &___m_Type_31; }
	inline void set_m_Type_31(int32_t value)
	{
		___m_Type_31 = value;
	}

	inline static int32_t get_offset_of_m_PreserveAspect_32() { return static_cast<int32_t>(offsetof(Image_t2670269651, ___m_PreserveAspect_32)); }
	inline bool get_m_PreserveAspect_32() const { return ___m_PreserveAspect_32; }
	inline bool* get_address_of_m_PreserveAspect_32() { return &___m_PreserveAspect_32; }
	inline void set_m_PreserveAspect_32(bool value)
	{
		___m_PreserveAspect_32 = value;
	}

	inline static int32_t get_offset_of_m_FillCenter_33() { return static_cast<int32_t>(offsetof(Image_t2670269651, ___m_FillCenter_33)); }
	inline bool get_m_FillCenter_33() const { return ___m_FillCenter_33; }
	inline bool* get_address_of_m_FillCenter_33() { return &___m_FillCenter_33; }
	inline void set_m_FillCenter_33(bool value)
	{
		___m_FillCenter_33 = value;
	}

	inline static int32_t get_offset_of_m_FillMethod_34() { return static_cast<int32_t>(offsetof(Image_t2670269651, ___m_FillMethod_34)); }
	inline int32_t get_m_FillMethod_34() const { return ___m_FillMethod_34; }
	inline int32_t* get_address_of_m_FillMethod_34() { return &___m_FillMethod_34; }
	inline void set_m_FillMethod_34(int32_t value)
	{
		___m_FillMethod_34 = value;
	}

	inline static int32_t get_offset_of_m_FillAmount_35() { return static_cast<int32_t>(offsetof(Image_t2670269651, ___m_FillAmount_35)); }
	inline float get_m_FillAmount_35() const { return ___m_FillAmount_35; }
	inline float* get_address_of_m_FillAmount_35() { return &___m_FillAmount_35; }
	inline void set_m_FillAmount_35(float value)
	{
		___m_FillAmount_35 = value;
	}

	inline static int32_t get_offset_of_m_FillClockwise_36() { return static_cast<int32_t>(offsetof(Image_t2670269651, ___m_FillClockwise_36)); }
	inline bool get_m_FillClockwise_36() const { return ___m_FillClockwise_36; }
	inline bool* get_address_of_m_FillClockwise_36() { return &___m_FillClockwise_36; }
	inline void set_m_FillClockwise_36(bool value)
	{
		___m_FillClockwise_36 = value;
	}

	inline static int32_t get_offset_of_m_FillOrigin_37() { return static_cast<int32_t>(offsetof(Image_t2670269651, ___m_FillOrigin_37)); }
	inline int32_t get_m_FillOrigin_37() const { return ___m_FillOrigin_37; }
	inline int32_t* get_address_of_m_FillOrigin_37() { return &___m_FillOrigin_37; }
	inline void set_m_FillOrigin_37(int32_t value)
	{
		___m_FillOrigin_37 = value;
	}

	inline static int32_t get_offset_of_m_AlphaHitTestMinimumThreshold_38() { return static_cast<int32_t>(offsetof(Image_t2670269651, ___m_AlphaHitTestMinimumThreshold_38)); }
	inline float get_m_AlphaHitTestMinimumThreshold_38() const { return ___m_AlphaHitTestMinimumThreshold_38; }
	inline float* get_address_of_m_AlphaHitTestMinimumThreshold_38() { return &___m_AlphaHitTestMinimumThreshold_38; }
	inline void set_m_AlphaHitTestMinimumThreshold_38(float value)
	{
		___m_AlphaHitTestMinimumThreshold_38 = value;
	}
};

struct Image_t2670269651_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Image::s_ETC1DefaultUI
	Material_t340375123 * ___s_ETC1DefaultUI_28;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_VertScratch
	Vector2U5BU5D_t1457185986* ___s_VertScratch_39;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_UVScratch
	Vector2U5BU5D_t1457185986* ___s_UVScratch_40;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Xy
	Vector3U5BU5D_t1718750761* ___s_Xy_41;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Uv
	Vector3U5BU5D_t1718750761* ___s_Uv_42;

public:
	inline static int32_t get_offset_of_s_ETC1DefaultUI_28() { return static_cast<int32_t>(offsetof(Image_t2670269651_StaticFields, ___s_ETC1DefaultUI_28)); }
	inline Material_t340375123 * get_s_ETC1DefaultUI_28() const { return ___s_ETC1DefaultUI_28; }
	inline Material_t340375123 ** get_address_of_s_ETC1DefaultUI_28() { return &___s_ETC1DefaultUI_28; }
	inline void set_s_ETC1DefaultUI_28(Material_t340375123 * value)
	{
		___s_ETC1DefaultUI_28 = value;
		Il2CppCodeGenWriteBarrier((&___s_ETC1DefaultUI_28), value);
	}

	inline static int32_t get_offset_of_s_VertScratch_39() { return static_cast<int32_t>(offsetof(Image_t2670269651_StaticFields, ___s_VertScratch_39)); }
	inline Vector2U5BU5D_t1457185986* get_s_VertScratch_39() const { return ___s_VertScratch_39; }
	inline Vector2U5BU5D_t1457185986** get_address_of_s_VertScratch_39() { return &___s_VertScratch_39; }
	inline void set_s_VertScratch_39(Vector2U5BU5D_t1457185986* value)
	{
		___s_VertScratch_39 = value;
		Il2CppCodeGenWriteBarrier((&___s_VertScratch_39), value);
	}

	inline static int32_t get_offset_of_s_UVScratch_40() { return static_cast<int32_t>(offsetof(Image_t2670269651_StaticFields, ___s_UVScratch_40)); }
	inline Vector2U5BU5D_t1457185986* get_s_UVScratch_40() const { return ___s_UVScratch_40; }
	inline Vector2U5BU5D_t1457185986** get_address_of_s_UVScratch_40() { return &___s_UVScratch_40; }
	inline void set_s_UVScratch_40(Vector2U5BU5D_t1457185986* value)
	{
		___s_UVScratch_40 = value;
		Il2CppCodeGenWriteBarrier((&___s_UVScratch_40), value);
	}

	inline static int32_t get_offset_of_s_Xy_41() { return static_cast<int32_t>(offsetof(Image_t2670269651_StaticFields, ___s_Xy_41)); }
	inline Vector3U5BU5D_t1718750761* get_s_Xy_41() const { return ___s_Xy_41; }
	inline Vector3U5BU5D_t1718750761** get_address_of_s_Xy_41() { return &___s_Xy_41; }
	inline void set_s_Xy_41(Vector3U5BU5D_t1718750761* value)
	{
		___s_Xy_41 = value;
		Il2CppCodeGenWriteBarrier((&___s_Xy_41), value);
	}

	inline static int32_t get_offset_of_s_Uv_42() { return static_cast<int32_t>(offsetof(Image_t2670269651_StaticFields, ___s_Uv_42)); }
	inline Vector3U5BU5D_t1718750761* get_s_Uv_42() const { return ___s_Uv_42; }
	inline Vector3U5BU5D_t1718750761** get_address_of_s_Uv_42() { return &___s_Uv_42; }
	inline void set_s_Uv_42(Vector3U5BU5D_t1718750761* value)
	{
		___s_Uv_42 = value;
		Il2CppCodeGenWriteBarrier((&___s_Uv_42), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // IMAGE_T2670269651_H
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t3328599146  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) GameObject_t1113636619 * m_Items[1];

public:
	inline GameObject_t1113636619 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GameObject_t1113636619 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GameObject_t1113636619 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline GameObject_t1113636619 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GameObject_t1113636619 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GameObject_t1113636619 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};


// !!0 UnityEngine.Component::GetComponent<System.Object>()
extern "C"  RuntimeObject * Component_GetComponent_TisRuntimeObject_m2906321015_gshared (Component_t1923634451 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
extern "C"  RuntimeObject * GameObject_GetComponent_TisRuntimeObject_m2049753423_gshared (GameObject_t1113636619 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<System.Object>(!!0,UnityEngine.Vector3,UnityEngine.Quaternion)
extern "C"  RuntimeObject * Object_Instantiate_TisRuntimeObject_m1135049463_gshared (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, Vector3_t3722313464  p1, Quaternion_t2301928331  p2, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<System.Object>(!!0,UnityEngine.Transform)
extern "C"  RuntimeObject * Object_Instantiate_TisRuntimeObject_m1061214600_gshared (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, Transform_t3600365921 * p1, const RuntimeMethod* method);

// System.Void UnityEngine.MonoBehaviour::.ctor()
extern "C"  void MonoBehaviour__ctor_m1579109191 (MonoBehaviour_t3962482529 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.Component::GetComponent<UnityEngine.AudioSource>()
#define Component_GetComponent_TisAudioSource_t3935305588_m1977431131(__this, method) ((  AudioSource_t3935305588 * (*) (Component_t1923634451 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m2906321015_gshared)(__this, method)
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Rigidbody>()
#define Component_GetComponent_TisRigidbody_t3916780224_m279685075(__this, method) ((  Rigidbody_t3916780224 * (*) (Component_t1923634451 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m2906321015_gshared)(__this, method)
// System.Void BallController::ResetBall()
extern "C"  void BallController_ResetBall_m1083045695 (BallController_t2992829471 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
extern "C"  GameObject_t1113636619 * Component_get_gameObject_m442555142 (Component_t1923634451 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.Light>()
#define GameObject_GetComponent_TisLight_t3756812086_m4145843913(__this, method) ((  Light_t3756812086 * (*) (GameObject_t1113636619 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m2049753423_gshared)(__this, method)
// System.Void ScorekeeperScript::ResetScore()
extern "C"  void ScorekeeperScript_ResetScore_m4042766342 (ScorekeeperScript_t1868293023 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Time::set_timeScale(System.Single)
extern "C"  void Time_set_timeScale_m1127545364 (RuntimeObject * __this /* static, unused */, float p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Random::Range(System.Int32,System.Int32)
extern "C"  int32_t Random_Range_m4054026115 (RuntimeObject * __this /* static, unused */, int32_t p0, int32_t p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
extern "C"  void Vector3__ctor_m3353183577 (Vector3_t3722313464 * __this, float p0, float p1, float p2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::get_normalized()
extern "C"  Vector3_t3722313464  Vector3_get_normalized_m2454957984 (Vector3_t3722313464 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.Component::get_transform()
extern "C"  Transform_t3600365921 * Component_get_transform_m3162698980 (Component_t1923634451 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::set_localPosition(UnityEngine.Vector3)
extern "C"  void Transform_set_localPosition_m4128471975 (Transform_t3600365921 * __this, Vector3_t3722313464  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Light::get_intensity()
extern "C"  float Light_get_intensity_m767788470 (Light_t3756812086 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Light::set_intensity(System.Single)
extern "C"  void Light_set_intensity_m2345549762 (Light_t3756812086 * __this, float p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Light::get_range()
extern "C"  float Light_get_range_m74476907 (Light_t3756812086 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Light::set_range(System.Single)
extern "C"  void Light_set_range_m859514479 (Light_t3756812086 * __this, float p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Input::get_anyKeyDown()
extern "C"  bool Input_get_anyKeyDown_m1564765341 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Input::GetMouseButtonDown(System.Int32)
extern "C"  bool Input_GetMouseButtonDown_m2081676745 (RuntimeObject * __this /* static, unused */, int32_t p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Input::GetKeyDown(UnityEngine.KeyCode)
extern "C"  bool Input_GetKeyDown_m17791917 (RuntimeObject * __this /* static, unused */, int32_t p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean ScorekeeperScript::get_GameOver()
extern "C"  bool ScorekeeperScript_get_GameOver_m433323004 (ScorekeeperScript_t1868293023 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.AsyncOperation UnityEngine.SceneManagement.SceneManager::LoadSceneAsync(System.String)
extern "C"  AsyncOperation_t1445031843 * SceneManager_LoadSceneAsync_m18587237 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void BallController::CheckKeys()
extern "C"  void BallController_CheckKeys_m1226406922 (BallController_t2992829471 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Transform::get_localPosition()
extern "C"  Vector3_t3722313464  Transform_get_localPosition_m4234289348 (Transform_t3600365921 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void ScorekeeperScript::P2ScoreOne()
extern "C"  void ScorekeeperScript_P2ScoreOne_m1171748733 (ScorekeeperScript_t1868293023 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void ScorekeeperScript::P1ScoreOne()
extern "C"  void ScorekeeperScript_P1ScoreOne_m1171754034 (ScorekeeperScript_t1868293023 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void BallController::SmoothDim()
extern "C"  void BallController_SmoothDim_m1042107922 (BallController_t2992829471 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void BallController::BallGlow()
extern "C"  void BallController_BallGlow_m1710861676 (BallController_t2992829471 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(System.Single,UnityEngine.Vector3)
extern "C"  Vector3_t3722313464  Vector3_op_Multiply_m2104357790 (RuntimeObject * __this /* static, unused */, float p0, Vector3_t3722313464  p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody::set_velocity(UnityEngine.Vector3)
extern "C"  void Rigidbody_set_velocity_m2899403247 (Rigidbody_t3916780224 * __this, Vector3_t3722313464  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GameObject::CompareTag(System.String)
extern "C"  bool GameObject_CompareTag_m3144439756 (GameObject_t1113636619 * __this, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color UnityEngine.Color::get_white()
extern "C"  Color_t2555686324  Color_get_white_m332174077 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Light::set_color(UnityEngine.Color)
extern "C"  void Light_set_color_m608660336 (Light_t3756812086 * __this, Color_t2555686324  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AudioSource::PlayOneShot(UnityEngine.AudioClip,System.Single)
extern "C"  void AudioSource_PlayOneShot_m2678069419 (AudioSource_t3935305588 * __this, AudioClip_t3680889665 * p0, float p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Rigidbody::get_velocity()
extern "C"  Vector3_t3722313464  Rigidbody_get_velocity_m2993632669 (Rigidbody_t3916780224 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  Vector3_t3722313464  Vector3_op_Subtraction_m3073674971 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  p0, Vector3_t3722313464  p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
extern "C"  void Vector2__ctor_m3970636864 (Vector2_t2156229523 * __this, float p0, float p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.Vector2::get_normalized()
extern "C"  Vector2_t2156229523  Vector2_get_normalized_m2683665860 (Vector2_t2156229523 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color UnityEngine.Color::get_red()
extern "C"  Color_t2555686324  Color_get_red_m3227813939 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color UnityEngine.Color::get_blue()
extern "C"  Color_t2555686324  Color_get_blue_m3190273327 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
extern "C"  Transform_t3600365921 * GameObject_get_transform_m1369836730 (GameObject_t1113636619 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Transform::get_childCount()
extern "C"  int32_t Transform_get_childCount_m3145433196 (Transform_t3600365921 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.Transform::GetChild(System.Int32)
extern "C"  Transform_t3600365921 * Transform_GetChild_m1092972975 (Transform_t3600365921 * __this, int32_t p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
extern "C"  Vector3_t3722313464  Transform_get_position_m36019626 (Transform_t3600365921 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  Vector3_t3722313464  Vector3_op_Addition_m779775034 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  p0, Vector3_t3722313464  p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
extern "C"  void Transform_set_position_m3387557959 (Transform_t3600365921 * __this, Vector3_t3722313464  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Time::get_deltaTime()
extern "C"  float Time_get_deltaTime_m372706562 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AudioSource::Play()
extern "C"  void AudioSource_Play_m48294159 (AudioSource_t3935305588 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.AudioSource::get_isPlaying()
extern "C"  bool AudioSource_get_isPlaying_m1896551654 (AudioSource_t3935305588 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AudioSource::Stop()
extern "C"  void AudioSource_Stop_m2682712816 (AudioSource_t3935305588 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.Object::Instantiate<UnityEngine.GameObject>(!!0,UnityEngine.Vector3,UnityEngine.Quaternion)
#define Object_Instantiate_TisGameObject_t1113636619_m3006960551(__this /* static, unused */, p0, p1, p2, method) ((  GameObject_t1113636619 * (*) (RuntimeObject * /* static, unused */, GameObject_t1113636619 *, Vector3_t3722313464 , Quaternion_t2301928331 , const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m1135049463_gshared)(__this /* static, unused */, p0, p1, p2, method)
// System.Void UnityEngine.Transform::set_parent(UnityEngine.Transform)
extern "C"  void Transform_set_parent_m786917804 (Transform_t3600365921 * __this, Transform_t3600365921 * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Object::.ctor()
extern "C"  void Object__ctor_m297566312 (RuntimeObject * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.Component::GetComponent<UnityEngine.RectTransform>()
#define Component_GetComponent_TisRectTransform_t3704657025_m3396022872(__this, method) ((  RectTransform_t3704657025 * (*) (Component_t1923634451 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m2906321015_gshared)(__this, method)
// !!0 UnityEngine.Component::GetComponent<UnityEngine.UI.Image>()
#define Component_GetComponent_TisImage_t2670269651_m980647750(__this, method) ((  Image_t2670269651 * (*) (Component_t1923634451 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m2906321015_gshared)(__this, method)
// System.Void UnityEngine.Transform::Rotate(System.Single,System.Single,System.Single)
extern "C"  void Transform_Rotate_m3172098886 (Transform_t3600365921 * __this, float p0, float p1, float p2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Loading::changeSize()
extern "C"  void Loading_changeSize_m3760621452 (Loading_t2310272025 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.Image::get_fillAmount()
extern "C"  float Image_get_fillAmount_m2193224718 (Image_t2670269651 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Image::set_fillAmount(System.Single)
extern "C"  void Image_set_fillAmount_m3737925590 (Image_t2670269651 * __this, float p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void LogoFade/<Start>c__Iterator0::.ctor()
extern "C"  void U3CStartU3Ec__Iterator0__ctor_m2079361280 (U3CStartU3Ec__Iterator0_t2357419268 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Time::get_realtimeSinceStartup()
extern "C"  float Time_get_realtimeSinceStartup_m3141794964 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::get_canvasRenderer()
extern "C"  CanvasRenderer_t2598313366 * Graphic_get_canvasRenderer_m315509948 (Graphic_t1660335611 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.CanvasRenderer::SetAlpha(System.Single)
extern "C"  void CanvasRenderer_SetAlpha_m317732912 (CanvasRenderer_t2598313366 * __this, float p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void LogoFade::FadeIn(UnityEngine.UI.Image,System.Single)
extern "C"  void LogoFade_FadeIn_m758595234 (LogoFade_t2650879019 * __this, Image_t2670269651 * ___img0, float ___time1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
extern "C"  void WaitForSeconds__ctor_m2199082655 (WaitForSeconds_t1699091251 * __this, float p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void LogoFade::FadeOut(UnityEngine.UI.Image,System.Single)
extern "C"  void LogoFade_FadeOut_m887997020 (LogoFade_t2650879019 * __this, Image_t2670269651 * ___img0, float ___time1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Behaviour::set_enabled(System.Boolean)
extern "C"  void Behaviour_set_enabled_m20417929 (Behaviour_t1437897464 * __this, bool p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.NotSupportedException::.ctor()
extern "C"  void NotSupportedException__ctor_m2730133172 (NotSupportedException_t1314879016 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void MainMenuControl/<LoadAsyncScene>c__Iterator0::.ctor()
extern "C"  void U3CLoadAsyncSceneU3Ec__Iterator0__ctor_m1726073256 (U3CLoadAsyncSceneU3Ec__Iterator0_t44264939 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator MainMenuControl::LoadAsyncScene()
extern "C"  RuntimeObject* MainMenuControl_LoadAsyncScene_m88225536 (MainMenuControl_t4231413698 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
extern "C"  Coroutine_t3829159415 * MonoBehaviour_StartCoroutine_m3411253000 (MonoBehaviour_t3962482529 * __this, RuntimeObject* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.String)
extern "C"  void SceneManager_LoadScene_m1758133949 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Application::Quit()
extern "C"  void Application_Quit_m470877999 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.AsyncOperation::get_isDone()
extern "C"  bool AsyncOperation_get_isDone_m412925263 (AsyncOperation_t1445031843 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Random::.ctor()
extern "C"  void Random__ctor_m4122933043 (Random_t108471755 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
extern "C"  void Transform_set_localScale_m3053443106 (Transform_t3600365921 * __this, Vector3_t3722313464  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.String::StartsWith(System.String)
extern "C"  bool String_StartsWith_m1759067526 (String_t* __this, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Input::GetAxis(System.String)
extern "C"  float Input_GetAxis_m4009438427 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
extern "C"  void GameObject_SetActive_m796801857 (GameObject_t1113636619 * __this, bool p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Math::Sign(System.Single)
extern "C"  int32_t Math_Sign_m1545180090 (RuntimeObject * __this /* static, unused */, float p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody::AddForce(UnityEngine.Vector3)
extern "C"  void Rigidbody_AddForce_m3395934484 (Rigidbody_t3916780224 * __this, Vector3_t3722313464  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.Object::Instantiate<UnityEngine.GameObject>(!!0,UnityEngine.Transform)
#define Object_Instantiate_TisGameObject_t1113636619_m3215236302(__this /* static, unused */, p0, p1, method) ((  GameObject_t1113636619 * (*) (RuntimeObject * /* static, unused */, GameObject_t1113636619 *, Transform_t3600365921 *, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m1061214600_gshared)(__this /* static, unused */, p0, p1, method)
// UnityEngine.GameObject UnityEngine.GameObject::get_gameObject()
extern "C"  GameObject_t1113636619 * GameObject_get_gameObject_m3693461266 (GameObject_t1113636619 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void ScorekeeperScript::SetCountText()
extern "C"  void ScorekeeperScript_SetCountText_m3098137846 (ScorekeeperScript_t1868293023 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void ScorekeeperScript::set_GameOver(System.Boolean)
extern "C"  void ScorekeeperScript_set_GameOver_m3738847712 (ScorekeeperScript_t1868293023 * __this, bool ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Selectable::set_interactable(System.Boolean)
extern "C"  void Selectable_set_interactable_m3105888815 (Selectable_t3250028441 * __this, bool p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Concat(System.Object,System.Object)
extern "C"  String_t* String_Concat_m904156431 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, RuntimeObject * p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void ScorekeeperScript::EndGame()
extern "C"  void ScorekeeperScript_EndGame_m704318642 (ScorekeeperScript_t1868293023 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.ScreenCapture::CaptureScreenshot(System.String,System.Int32)
extern "C"  void ScreenCapture_CaptureScreenshot_m467787810 (RuntimeObject * __this /* static, unused */, String_t* p0, int32_t p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void GameState::.ctor(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
extern "C"  void GameState__ctor_m1856705146 (GameState_t184198630 * __this, Vector3_t3722313464  ___p10, Vector3_t3722313464  ___p21, Vector3_t3722313464  ___b2, Vector3_t3722313464  ___bDir3, float ___spd4, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
extern "C"  Vector3_t3722313464  Vector3_get_zero_m1409827619 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void StateHolder::LoadState(GameState)
extern "C"  void StateHolder_LoadState_m3722913745 (StateHolder_t2173541826 * __this, GameState_t184198630 * ___state0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void StateHolder::SaveState()
extern "C"  void StateHolder_SaveState_m2228537647 (StateHolder_t2173541826 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.Rigidbody>()
#define GameObject_GetComponent_TisRigidbody_t3916780224_m564316479(__this, method) ((  Rigidbody_t3916780224 * (*) (GameObject_t1113636619 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m2049753423_gshared)(__this, method)
// System.Void GameState::Update(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
extern "C"  void GameState_Update_m1196730667 (GameState_t184198630 * __this, Vector3_t3722313464  ___p10, Vector3_t3722313464  ___p21, Vector3_t3722313464  ___b2, Vector3_t3722313464  ___bDir3, float ___spd4, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.Component::GetComponent<UnityEngine.MeshRenderer>()
#define Component_GetComponent_TisMeshRenderer_t587009260_m2899624428(__this, method) ((  MeshRenderer_t587009260 * (*) (Component_t1923634451 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m2906321015_gshared)(__this, method)
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Renderer>()
#define Component_GetComponent_TisRenderer_t2627027031_m2651633905(__this, method) ((  Renderer_t2627027031 * (*) (Component_t1923634451 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m2906321015_gshared)(__this, method)
// System.Void UnityEngine.Renderer::set_enabled(System.Boolean)
extern "C"  void Renderer_set_enabled_m1727253150 (Renderer_t2627027031 * __this, bool p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material UnityEngine.Renderer::get_material()
extern "C"  Material_t340375123 * Renderer_get_material_m4171603682 (Renderer_t2627027031 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color UnityEngine.Material::get_color()
extern "C"  Color_t2555686324  Material_get_color_m3827673574 (Material_t340375123 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
extern "C"  void Color__ctor_m2943235014 (Color_t2555686324 * __this, float p0, float p1, float p2, float p3, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::set_color(UnityEngine.Color)
extern "C"  void Material_set_color_m1794818007 (Material_t340375123 * __this, Color_t2555686324  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
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
// System.Void BallController::.ctor()
extern "C"  void BallController__ctor_m3532614227 (BallController_t2992829471 * __this, const RuntimeMethod* method)
{
	{
		__this->set_nextDir_17(1);
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void BallController::toggleDarkMode(System.Boolean)
extern "C"  void BallController_toggleDarkMode_m2745769879 (BallController_t2992829471 * __this, bool ___newValue0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___newValue0;
		__this->set_darkMode_10(L_0);
		bool L_1 = __this->get_darkMode_10();
		__this->set_environmentDimming_21(L_1);
		bool L_2 = __this->get_darkMode_10();
		__this->set_environmentLightingUp_22((bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0));
		return;
	}
}
// System.Void BallController::Awake()
extern "C"  void BallController_Awake_m1358219274 (BallController_t2992829471 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BallController_Awake_m1358219274_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		AudioSource_t3935305588 * L_0 = Component_GetComponent_TisAudioSource_t3935305588_m1977431131(__this, /*hidden argument*/Component_GetComponent_TisAudioSource_t3935305588_m1977431131_RuntimeMethod_var);
		__this->set_source_5(L_0);
		return;
	}
}
// System.Void BallController::Start()
extern "C"  void BallController_Start_m2577057129 (BallController_t2992829471 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BallController_Start_m2577057129_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Rigidbody_t3916780224 * L_0 = Component_GetComponent_TisRigidbody_t3916780224_m279685075(__this, /*hidden argument*/Component_GetComponent_TisRigidbody_t3916780224_m279685075_RuntimeMethod_var);
		__this->set_rb_15(L_0);
		BallController_ResetBall_m1083045695(__this, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_1 = Component_get_gameObject_m442555142(__this, /*hidden argument*/NULL);
		Light_t3756812086 * L_2 = GameObject_GetComponent_TisLight_t3756812086_m4145843913(L_1, /*hidden argument*/GameObject_GetComponent_TisLight_t3756812086_m4145843913_RuntimeMethod_var);
		__this->set_halo_18(L_2);
		return;
	}
}
// System.Void BallController::RestartGame()
extern "C"  void BallController_RestartGame_m1591714964 (BallController_t2992829471 * __this, const RuntimeMethod* method)
{
	{
		ScorekeeperScript_t1868293023 * L_0 = __this->get_scorekeeper_24();
		ScorekeeperScript_ResetScore_m4042766342(L_0, /*hidden argument*/NULL);
		BallController_ResetBall_m1083045695(__this, /*hidden argument*/NULL);
		Time_set_timeScale_m1127545364(NULL /*static, unused*/, (1.0f), /*hidden argument*/NULL);
		return;
	}
}
// System.Void BallController::ResetBall()
extern "C"  void BallController_ResetBall_m1083045695 (BallController_t2992829471 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BallController_ResetBall_m1083045695_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t3722313464  V_0;
	memset(&V_0, 0, sizeof(V_0));
	bool V_1 = false;
	{
		int32_t L_0 = Random_Range_m4054026115(NULL /*static, unused*/, ((int32_t)-3), 3, /*hidden argument*/NULL);
		int32_t L_1 = Random_Range_m4054026115(NULL /*static, unused*/, ((int32_t)-3), 3, /*hidden argument*/NULL);
		int32_t L_2 = __this->get_nextDir_17();
		Vector3__ctor_m3353183577((&V_0), (((float)((float)L_0))), (((float)((float)L_1))), (((float)((float)((int32_t)il2cpp_codegen_multiply((int32_t)L_2, (int32_t)2))))), /*hidden argument*/NULL);
		Vector3_t3722313464  L_3 = Vector3_get_normalized_m2454957984((&V_0), /*hidden argument*/NULL);
		__this->set_direction_16(L_3);
		Transform_t3600365921 * L_4 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		int32_t L_5 = __this->get_nextDir_17();
		Vector3_t3722313464  L_6;
		memset(&L_6, 0, sizeof(L_6));
		Vector3__ctor_m3353183577((&L_6), (0.0f), (10.0f), (((float)((float)((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)10), (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_5, (int32_t)((int32_t)10)))))))), /*hidden argument*/NULL);
		Transform_set_localPosition_m4128471975(L_4, L_6, /*hidden argument*/NULL);
		float L_7 = __this->get_Speed_8();
		__this->set_localSpeed_14(L_7);
		int32_t L_8 = 0;
		V_1 = (bool)L_8;
		__this->set_environmentLightingUp_22((bool)L_8);
		bool L_9 = V_1;
		bool L_10 = L_9;
		V_1 = L_10;
		__this->set_environmentDimming_21(L_10);
		bool L_11 = V_1;
		bool L_12 = L_11;
		V_1 = L_12;
		__this->set_glowingDown_20(L_12);
		bool L_13 = V_1;
		__this->set_glowingUp_19(L_13);
		__this->set_waitForPress_12((bool)1);
		Text_t1901882714 * L_14 = __this->get_message_2();
		VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_14, _stringLiteral1436381680);
		return;
	}
}
// System.Void BallController::SmoothDim()
extern "C"  void BallController_SmoothDim_m1042107922 (BallController_t2992829471 * __this, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		Light_t3756812086 * L_0 = __this->get_MainLight_23();
		float L_1 = Light_get_intensity_m767788470(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		bool L_2 = __this->get_environmentDimming_21();
		if (!L_2)
		{
			goto IL_003c;
		}
	}
	{
		float L_3 = V_0;
		if ((!(((float)L_3) > ((float)(0.0f)))))
		{
			goto IL_002f;
		}
	}
	{
		float L_4 = V_0;
		V_0 = ((float)il2cpp_codegen_subtract((float)L_4, (float)(0.1f)));
		goto IL_003c;
	}

IL_002f:
	{
		V_0 = (0.0f);
		__this->set_environmentDimming_21((bool)0);
	}

IL_003c:
	{
		bool L_5 = __this->get_environmentLightingUp_22();
		if (!L_5)
		{
			goto IL_006c;
		}
	}
	{
		float L_6 = V_0;
		if ((!(((float)L_6) < ((float)(1.0f)))))
		{
			goto IL_005f;
		}
	}
	{
		float L_7 = V_0;
		V_0 = ((float)il2cpp_codegen_add((float)L_7, (float)(0.1f)));
		goto IL_006c;
	}

IL_005f:
	{
		V_0 = (1.0f);
		__this->set_environmentLightingUp_22((bool)0);
	}

IL_006c:
	{
		Light_t3756812086 * L_8 = __this->get_MainLight_23();
		float L_9 = V_0;
		Light_set_intensity_m2345549762(L_8, L_9, /*hidden argument*/NULL);
		return;
	}
}
// System.Void BallController::BallGlow()
extern "C"  void BallController_BallGlow_m1710861676 (BallController_t2992829471 * __this, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		bool L_0 = __this->get_darkMode_10();
		if (!L_0)
		{
			goto IL_008a;
		}
	}
	{
		Light_t3756812086 * L_1 = __this->get_halo_18();
		float L_2 = Light_get_range_m74476907(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		bool L_3 = __this->get_glowingUp_19();
		if (!L_3)
		{
			goto IL_004d;
		}
	}
	{
		float L_4 = V_0;
		if ((!(((double)(((double)((double)L_4)))) < ((double)(0.5)))))
		{
			goto IL_003f;
		}
	}
	{
		float L_5 = V_0;
		V_0 = ((float)il2cpp_codegen_add((float)L_5, (float)(0.05f)));
		goto IL_004d;
	}

IL_003f:
	{
		__this->set_glowingUp_19((bool)0);
		__this->set_glowingDown_20((bool)1);
	}

IL_004d:
	{
		bool L_6 = __this->get_glowingDown_20();
		if (!L_6)
		{
			goto IL_007e;
		}
	}
	{
		float L_7 = V_0;
		if ((!(((float)L_7) > ((float)(0.0f)))))
		{
			goto IL_0070;
		}
	}
	{
		float L_8 = V_0;
		V_0 = ((float)il2cpp_codegen_subtract((float)L_8, (float)(0.05f)));
		goto IL_007e;
	}

IL_0070:
	{
		__this->set_glowingUp_19((bool)0);
		__this->set_glowingDown_20((bool)0);
	}

IL_007e:
	{
		Light_t3756812086 * L_9 = __this->get_halo_18();
		float L_10 = V_0;
		Light_set_range_m859514479(L_9, L_10, /*hidden argument*/NULL);
	}

IL_008a:
	{
		return;
	}
}
// System.Void BallController::CheckKeys()
extern "C"  void BallController_CheckKeys_m1226406922 (BallController_t2992829471 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BallController_CheckKeys_m1226406922_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t G_B9_0 = 0;
	Text_t1901882714 * G_B11_0 = NULL;
	Text_t1901882714 * G_B10_0 = NULL;
	String_t* G_B12_0 = NULL;
	Text_t1901882714 * G_B12_1 = NULL;
	{
		bool L_0 = __this->get_waitForPress_12();
		if (!L_0)
		{
			goto IL_0037;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1431474628_il2cpp_TypeInfo_var);
		bool L_1 = Input_get_anyKeyDown_m1564765341(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0037;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1431474628_il2cpp_TypeInfo_var);
		bool L_2 = Input_GetMouseButtonDown_m2081676745(NULL /*static, unused*/, 0, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_0037;
		}
	}
	{
		Text_t1901882714 * L_3 = __this->get_message_2();
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_4 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_3, L_4);
		__this->set_waitForPress_12((bool)0);
	}

IL_0037:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1431474628_il2cpp_TypeInfo_var);
		bool L_5 = Input_GetKeyDown_m17791917(NULL /*static, unused*/, ((int32_t)112), /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_009f;
		}
	}
	{
		ScorekeeperScript_t1868293023 * L_6 = __this->get_scorekeeper_24();
		bool L_7 = ScorekeeperScript_get_GameOver_m433323004(L_6, /*hidden argument*/NULL);
		if (L_7)
		{
			goto IL_009f;
		}
	}
	{
		bool L_8 = __this->get_paused_11();
		__this->set_paused_11((bool)((((int32_t)L_8) == ((int32_t)0))? 1 : 0));
		bool L_9 = __this->get_paused_11();
		if (!L_9)
		{
			goto IL_0073;
		}
	}
	{
		G_B9_0 = 0;
		goto IL_0074;
	}

IL_0073:
	{
		G_B9_0 = 1;
	}

IL_0074:
	{
		Time_set_timeScale_m1127545364(NULL /*static, unused*/, (((float)((float)G_B9_0))), /*hidden argument*/NULL);
		Text_t1901882714 * L_10 = __this->get_message_2();
		bool L_11 = __this->get_paused_11();
		G_B10_0 = L_10;
		if (!L_11)
		{
			G_B11_0 = L_10;
			goto IL_0095;
		}
	}
	{
		G_B12_0 = _stringLiteral1959671426;
		G_B12_1 = G_B10_0;
		goto IL_009a;
	}

IL_0095:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_12 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		G_B12_0 = L_12;
		G_B12_1 = G_B11_0;
	}

IL_009a:
	{
		VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, G_B12_1, G_B12_0);
	}

IL_009f:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1431474628_il2cpp_TypeInfo_var);
		bool L_13 = Input_GetKeyDown_m17791917(NULL /*static, unused*/, ((int32_t)27), /*hidden argument*/NULL);
		if (!L_13)
		{
			goto IL_00c0;
		}
	}
	{
		Time_set_timeScale_m1127545364(NULL /*static, unused*/, (1.0f), /*hidden argument*/NULL);
		SceneManager_LoadSceneAsync_m18587237(NULL /*static, unused*/, _stringLiteral691301542, /*hidden argument*/NULL);
	}

IL_00c0:
	{
		return;
	}
}
// System.Void BallController::Update()
extern "C"  void BallController_Update_m3327480371 (BallController_t2992829471 * __this, const RuntimeMethod* method)
{
	Vector3_t3722313464  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		BallController_CheckKeys_m1226406922(__this, /*hidden argument*/NULL);
		Transform_t3600365921 * L_0 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Vector3_t3722313464  L_1 = Transform_get_localPosition_m4234289348(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		float L_2 = (&V_0)->get_z_3();
		float L_3 = __this->get_zMin_6();
		if ((!(((float)L_2) < ((float)L_3))))
		{
			goto IL_0062;
		}
	}
	{
		BallController_ResetBall_m1083045695(__this, /*hidden argument*/NULL);
		ScorekeeperScript_t1868293023 * L_4 = __this->get_scorekeeper_24();
		ScorekeeperScript_P2ScoreOne_m1171748733(L_4, /*hidden argument*/NULL);
		__this->set_nextDir_17(1);
		ScorekeeperScript_t1868293023 * L_5 = __this->get_scorekeeper_24();
		bool L_6 = ScorekeeperScript_get_GameOver_m433323004(L_5, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_005d;
		}
	}
	{
		__this->set_waitForPress_12((bool)0);
		Time_set_timeScale_m1127545364(NULL /*static, unused*/, (0.0f), /*hidden argument*/NULL);
	}

IL_005d:
	{
		goto IL_00ad;
	}

IL_0062:
	{
		float L_7 = (&V_0)->get_z_3();
		float L_8 = __this->get_zMax_7();
		if ((!(((float)L_7) > ((float)L_8))))
		{
			goto IL_00ad;
		}
	}
	{
		BallController_ResetBall_m1083045695(__this, /*hidden argument*/NULL);
		ScorekeeperScript_t1868293023 * L_9 = __this->get_scorekeeper_24();
		ScorekeeperScript_P1ScoreOne_m1171754034(L_9, /*hidden argument*/NULL);
		__this->set_nextDir_17((-1));
		ScorekeeperScript_t1868293023 * L_10 = __this->get_scorekeeper_24();
		bool L_11 = ScorekeeperScript_get_GameOver_m433323004(L_10, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_00ad;
		}
	}
	{
		__this->set_waitForPress_12((bool)0);
		Time_set_timeScale_m1127545364(NULL /*static, unused*/, (0.0f), /*hidden argument*/NULL);
	}

IL_00ad:
	{
		return;
	}
}
// System.Void BallController::FixedUpdate()
extern "C"  void BallController_FixedUpdate_m4077237557 (BallController_t2992829471 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BallController_FixedUpdate_m4077237557_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Rigidbody_t3916780224 * G_B2_0 = NULL;
	Rigidbody_t3916780224 * G_B1_0 = NULL;
	float G_B3_0 = 0.0f;
	Rigidbody_t3916780224 * G_B3_1 = NULL;
	{
		BallController_SmoothDim_m1042107922(__this, /*hidden argument*/NULL);
		BallController_BallGlow_m1710861676(__this, /*hidden argument*/NULL);
		Rigidbody_t3916780224 * L_0 = __this->get_rb_15();
		bool L_1 = __this->get_waitForPress_12();
		G_B1_0 = L_0;
		if (!L_1)
		{
			G_B2_0 = L_0;
			goto IL_0027;
		}
	}
	{
		G_B3_0 = (0.0f);
		G_B3_1 = G_B1_0;
		goto IL_002d;
	}

IL_0027:
	{
		float L_2 = __this->get_localSpeed_14();
		G_B3_0 = L_2;
		G_B3_1 = G_B2_0;
	}

IL_002d:
	{
		Vector3_t3722313464  L_3 = __this->get_direction_16();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_4 = Vector3_op_Multiply_m2104357790(NULL /*static, unused*/, G_B3_0, L_3, /*hidden argument*/NULL);
		Rigidbody_set_velocity_m2899403247(G_B3_1, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void BallController::OnTriggerEnter(UnityEngine.Collider)
extern "C"  void BallController_OnTriggerEnter_m1083917119 (BallController_t2992829471 * __this, Collider_t1773347010 * ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BallController_OnTriggerEnter_m1083917119_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	Vector3_t3722313464  V_4;
	memset(&V_4, 0, sizeof(V_4));
	Vector3_t3722313464  V_5;
	memset(&V_5, 0, sizeof(V_5));
	Vector3_t3722313464  V_6;
	memset(&V_6, 0, sizeof(V_6));
	Vector2_t2156229523  V_7;
	memset(&V_7, 0, sizeof(V_7));
	Vector2_t2156229523  V_8;
	memset(&V_8, 0, sizeof(V_8));
	BallController_t2992829471 * G_B6_0 = NULL;
	BallController_t2992829471 * G_B5_0 = NULL;
	Vector3_t3722313464  G_B7_0;
	memset(&G_B7_0, 0, sizeof(G_B7_0));
	BallController_t2992829471 * G_B7_1 = NULL;
	Light_t3756812086 * G_B14_0 = NULL;
	Light_t3756812086 * G_B13_0 = NULL;
	Color_t2555686324  G_B15_0;
	memset(&G_B15_0, 0, sizeof(G_B15_0));
	Light_t3756812086 * G_B15_1 = NULL;
	{
		bool L_0 = __this->get_darkMode_10();
		if (!L_0)
		{
			goto IL_0019;
		}
	}
	{
		__this->set_glowingUp_19((bool)1);
		__this->set_glowingDown_20((bool)0);
	}

IL_0019:
	{
		Collider_t1773347010 * L_1 = ___other0;
		GameObject_t1113636619 * L_2 = Component_get_gameObject_m442555142(L_1, /*hidden argument*/NULL);
		bool L_3 = GameObject_CompareTag_m3144439756(L_2, _stringLiteral789097671, /*hidden argument*/NULL);
		V_0 = L_3;
		Collider_t1773347010 * L_4 = ___other0;
		GameObject_t1113636619 * L_5 = Component_get_gameObject_m442555142(L_4, /*hidden argument*/NULL);
		bool L_6 = GameObject_CompareTag_m3144439756(L_5, _stringLiteral789097865, /*hidden argument*/NULL);
		V_1 = L_6;
		Collider_t1773347010 * L_7 = ___other0;
		GameObject_t1113636619 * L_8 = Component_get_gameObject_m442555142(L_7, /*hidden argument*/NULL);
		bool L_9 = GameObject_CompareTag_m3144439756(L_8, _stringLiteral789098269, /*hidden argument*/NULL);
		V_2 = L_9;
		Collider_t1773347010 * L_10 = ___other0;
		GameObject_t1113636619 * L_11 = Component_get_gameObject_m442555142(L_10, /*hidden argument*/NULL);
		bool L_12 = GameObject_CompareTag_m3144439756(L_11, _stringLiteral787918621, /*hidden argument*/NULL);
		V_3 = L_12;
		bool L_13 = V_0;
		if (L_13)
		{
			goto IL_0069;
		}
	}
	{
		bool L_14 = V_1;
		if (!L_14)
		{
			goto IL_00fe;
		}
	}

IL_0069:
	{
		bool L_15 = V_0;
		G_B5_0 = __this;
		if (!L_15)
		{
			G_B6_0 = __this;
			goto IL_009c;
		}
	}
	{
		Vector3_t3722313464 * L_16 = __this->get_address_of_direction_16();
		float L_17 = L_16->get_x_1();
		Vector3_t3722313464 * L_18 = __this->get_address_of_direction_16();
		float L_19 = L_18->get_y_2();
		Vector3_t3722313464 * L_20 = __this->get_address_of_direction_16();
		float L_21 = L_20->get_z_3();
		Vector3_t3722313464  L_22;
		memset(&L_22, 0, sizeof(L_22));
		Vector3__ctor_m3353183577((&L_22), L_17, ((-L_19)), L_21, /*hidden argument*/NULL);
		G_B7_0 = L_22;
		G_B7_1 = G_B5_0;
		goto IL_00ce;
	}

IL_009c:
	{
		Vector3_t3722313464 * L_23 = __this->get_address_of_direction_16();
		float L_24 = L_23->get_x_1();
		Vector3_t3722313464 * L_25 = __this->get_address_of_direction_16();
		float L_26 = L_25->get_y_2();
		Vector3_t3722313464 * L_27 = __this->get_address_of_direction_16();
		float L_28 = L_27->get_z_3();
		Vector3_t3722313464  L_29;
		memset(&L_29, 0, sizeof(L_29));
		Vector3__ctor_m3353183577((&L_29), ((-L_24)), L_26, L_28, /*hidden argument*/NULL);
		Vector3_t3722313464  L_30 = L_29;
		V_4 = L_30;
		__this->set_direction_16(L_30);
		Vector3_t3722313464  L_31 = V_4;
		G_B7_0 = L_31;
		G_B7_1 = G_B6_0;
	}

IL_00ce:
	{
		G_B7_1->set_direction_16(G_B7_0);
		Light_t3756812086 * L_32 = __this->get_halo_18();
		Color_t2555686324  L_33 = Color_get_white_m332174077(NULL /*static, unused*/, /*hidden argument*/NULL);
		Light_set_color_m608660336(L_32, L_33, /*hidden argument*/NULL);
		AudioSource_t3935305588 * L_34 = __this->get_source_5();
		AudioClip_t3680889665 * L_35 = __this->get_bounce_4();
		AudioSource_PlayOneShot_m2678069419(L_34, L_35, (1.0f), /*hidden argument*/NULL);
		goto IL_01ef;
	}

IL_00fe:
	{
		bool L_36 = V_2;
		if (!L_36)
		{
			goto IL_0122;
		}
	}
	{
		Rigidbody_t3916780224 * L_37 = __this->get_rb_15();
		Vector3_t3722313464  L_38 = Rigidbody_get_velocity_m2993632669(L_37, /*hidden argument*/NULL);
		V_4 = L_38;
		float L_39 = (&V_4)->get_z_3();
		if ((((float)L_39) < ((float)(0.0f))))
		{
			goto IL_0146;
		}
	}

IL_0122:
	{
		bool L_40 = V_3;
		if (!L_40)
		{
			goto IL_01ef;
		}
	}
	{
		Rigidbody_t3916780224 * L_41 = __this->get_rb_15();
		Vector3_t3722313464  L_42 = Rigidbody_get_velocity_m2993632669(L_41, /*hidden argument*/NULL);
		V_5 = L_42;
		float L_43 = (&V_5)->get_z_3();
		if ((!(((float)L_43) > ((float)(0.0f)))))
		{
			goto IL_01ef;
		}
	}

IL_0146:
	{
		Transform_t3600365921 * L_44 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Vector3_t3722313464  L_45 = Transform_get_localPosition_m4234289348(L_44, /*hidden argument*/NULL);
		Collider_t1773347010 * L_46 = ___other0;
		Transform_t3600365921 * L_47 = Component_get_transform_m3162698980(L_46, /*hidden argument*/NULL);
		Vector3_t3722313464  L_48 = Transform_get_localPosition_m4234289348(L_47, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_49 = Vector3_op_Subtraction_m3073674971(NULL /*static, unused*/, L_45, L_48, /*hidden argument*/NULL);
		V_6 = L_49;
		float L_50 = (&V_6)->get_x_1();
		float L_51 = (&V_6)->get_y_2();
		Vector2__ctor_m3970636864((&V_8), L_50, L_51, /*hidden argument*/NULL);
		Vector2_t2156229523  L_52 = Vector2_get_normalized_m2683665860((&V_8), /*hidden argument*/NULL);
		V_7 = L_52;
		float L_53 = (&V_7)->get_x_0();
		float L_54 = (&V_7)->get_y_1();
		Vector3_t3722313464 * L_55 = __this->get_address_of_direction_16();
		float L_56 = L_55->get_z_3();
		Vector3_t3722313464  L_57;
		memset(&L_57, 0, sizeof(L_57));
		Vector3__ctor_m3353183577((&L_57), L_53, L_54, ((-L_56)), /*hidden argument*/NULL);
		__this->set_direction_16(L_57);
		float L_58 = __this->get_localSpeed_14();
		float L_59 = __this->get_BounceMult_9();
		__this->set_localSpeed_14(((float)il2cpp_codegen_multiply((float)L_58, (float)L_59)));
		Light_t3756812086 * L_60 = __this->get_halo_18();
		bool L_61 = V_2;
		G_B13_0 = L_60;
		if (!L_61)
		{
			G_B14_0 = L_60;
			goto IL_01cf;
		}
	}
	{
		Color_t2555686324  L_62 = Color_get_red_m3227813939(NULL /*static, unused*/, /*hidden argument*/NULL);
		G_B15_0 = L_62;
		G_B15_1 = G_B13_0;
		goto IL_01d4;
	}

IL_01cf:
	{
		Color_t2555686324  L_63 = Color_get_blue_m3190273327(NULL /*static, unused*/, /*hidden argument*/NULL);
		G_B15_0 = L_63;
		G_B15_1 = G_B14_0;
	}

IL_01d4:
	{
		Light_set_color_m608660336(G_B15_1, G_B15_0, /*hidden argument*/NULL);
		AudioSource_t3935305588 * L_64 = __this->get_source_5();
		AudioClip_t3680889665 * L_65 = __this->get_hit_3();
		AudioSource_PlayOneShot_m2678069419(L_64, L_65, (1.0f), /*hidden argument*/NULL);
	}

IL_01ef:
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
// System.Void CloudManager::.ctor()
extern "C"  void CloudManager__ctor_m3632307831 (CloudManager_t3437809148 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void CloudManager::Start()
extern "C"  void CloudManager_Start_m3246152783 (CloudManager_t3437809148 * __this, const RuntimeMethod* method)
{
	{
		GameObject_t1113636619 * L_0 = Component_get_gameObject_m442555142(__this, /*hidden argument*/NULL);
		Transform_t3600365921 * L_1 = GameObject_get_transform_m1369836730(L_0, /*hidden argument*/NULL);
		int32_t L_2 = Transform_get_childCount_m3145433196(L_1, /*hidden argument*/NULL);
		__this->set_cloudCount_3(L_2);
		Vector3_t3722313464  L_3;
		memset(&L_3, 0, sizeof(L_3));
		Vector3__ctor_m3353183577((&L_3), (0.05f), (0.0f), (0.0f), /*hidden argument*/NULL);
		__this->set_speed_2(L_3);
		return;
	}
}
// System.Void CloudManager::Update()
extern "C"  void CloudManager_Update_m1953117237 (CloudManager_t3437809148 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CloudManager_Update_m1953117237_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	GameObject_t1113636619 * V_1 = NULL;
	Vector3_t3722313464  V_2;
	memset(&V_2, 0, sizeof(V_2));
	{
		V_0 = 0;
		goto IL_005f;
	}

IL_0007:
	{
		Transform_t3600365921 * L_0 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		int32_t L_1 = V_0;
		Transform_t3600365921 * L_2 = Transform_GetChild_m1092972975(L_0, L_1, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_3 = Component_get_gameObject_m442555142(L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		GameObject_t1113636619 * L_4 = V_1;
		Transform_t3600365921 * L_5 = GameObject_get_transform_m1369836730(L_4, /*hidden argument*/NULL);
		Vector3_t3722313464  L_6 = Transform_get_position_m36019626(L_5, /*hidden argument*/NULL);
		V_2 = L_6;
		Vector3_t3722313464  L_7 = V_2;
		Vector3_t3722313464  L_8 = __this->get_speed_2();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_9 = Vector3_op_Addition_m779775034(NULL /*static, unused*/, L_7, L_8, /*hidden argument*/NULL);
		V_2 = L_9;
		float L_10 = (&V_2)->get_x_1();
		if ((!(((float)L_10) > ((float)(150.0f)))))
		{
			goto IL_004f;
		}
	}
	{
		(&V_2)->set_x_1((-40.0f));
	}

IL_004f:
	{
		GameObject_t1113636619 * L_11 = V_1;
		Transform_t3600365921 * L_12 = GameObject_get_transform_m1369836730(L_11, /*hidden argument*/NULL);
		Vector3_t3722313464  L_13 = V_2;
		Transform_set_position_m3387557959(L_12, L_13, /*hidden argument*/NULL);
		int32_t L_14 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_14, (int32_t)1));
	}

IL_005f:
	{
		int32_t L_15 = V_0;
		int32_t L_16 = __this->get_cloudCount_3();
		if ((((int32_t)L_15) < ((int32_t)L_16)))
		{
			goto IL_0007;
		}
	}
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
// System.Void CreditRoll::.ctor()
extern "C"  void CreditRoll__ctor_m942182110 (CreditRoll_t721334825 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void CreditRoll::Start()
extern "C"  void CreditRoll_Start_m4217352302 (CreditRoll_t721334825 * __this, const RuntimeMethod* method)
{
	{
		__this->set_time_4((0.0f));
		return;
	}
}
// System.Void CreditRoll::Update()
extern "C"  void CreditRoll_Update_m164071144 (CreditRoll_t721334825 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CreditRoll_Update_m164071144_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t3722313464  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		Transform_t3600365921 * L_0 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Vector3_t3722313464  L_1 = Transform_get_position_m36019626(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		Vector3_t3722313464  L_2 = V_0;
		float L_3 = __this->get_speed_2();
		Vector3_t3722313464  L_4;
		memset(&L_4, 0, sizeof(L_4));
		Vector3__ctor_m3353183577((&L_4), (0.0f), L_3, (0.0f), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_5 = Vector3_op_Addition_m779775034(NULL /*static, unused*/, L_2, L_4, /*hidden argument*/NULL);
		V_0 = L_5;
		Transform_t3600365921 * L_6 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Vector3_t3722313464  L_7 = V_0;
		Transform_set_position_m3387557959(L_6, L_7, /*hidden argument*/NULL);
		float L_8 = __this->get_time_4();
		float L_9 = Time_get_deltaTime_m372706562(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_time_4(((float)il2cpp_codegen_add((float)L_8, (float)L_9)));
		float L_10 = __this->get_time_4();
		float L_11 = __this->get_duration_3();
		if ((!(((float)L_10) > ((float)L_11))))
		{
			goto IL_0062;
		}
	}
	{
		SceneManager_LoadSceneAsync_m18587237(NULL /*static, unused*/, _stringLiteral691301542, /*hidden argument*/NULL);
	}

IL_0062:
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
// System.Void DJ::.ctor()
extern "C"  void DJ__ctor_m3315985836 (DJ_t167059238 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void DJ::Awake()
extern "C"  void DJ_Awake_m34891913 (DJ_t167059238 * __this, const RuntimeMethod* method)
{
	{
		AudioSource_t3935305588 * L_0 = __this->get_source1_2();
		AudioSource_Play_m48294159(L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void DJ::Start()
extern "C"  void DJ_Start_m1237871428 (DJ_t167059238 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void DJ::Update()
extern "C"  void DJ_Update_m1230642770 (DJ_t167059238 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DJ_Update_m1230642770_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1431474628_il2cpp_TypeInfo_var);
		bool L_0 = Input_GetKeyDown_m17791917(NULL /*static, unused*/, ((int32_t)120), /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0088;
		}
	}
	{
		AudioSource_t3935305588 * L_1 = __this->get_source1_2();
		bool L_2 = AudioSource_get_isPlaying_m1896551654(L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0037;
		}
	}
	{
		AudioSource_t3935305588 * L_3 = __this->get_source1_2();
		AudioSource_Stop_m2682712816(L_3, /*hidden argument*/NULL);
		AudioSource_t3935305588 * L_4 = __this->get_source2_3();
		AudioSource_Play_m48294159(L_4, /*hidden argument*/NULL);
		goto IL_0088;
	}

IL_0037:
	{
		AudioSource_t3935305588 * L_5 = __this->get_source2_3();
		bool L_6 = AudioSource_get_isPlaying_m1896551654(L_5, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0062;
		}
	}
	{
		AudioSource_t3935305588 * L_7 = __this->get_source2_3();
		AudioSource_Stop_m2682712816(L_7, /*hidden argument*/NULL);
		AudioSource_t3935305588 * L_8 = __this->get_source3_4();
		AudioSource_Play_m48294159(L_8, /*hidden argument*/NULL);
		goto IL_0088;
	}

IL_0062:
	{
		AudioSource_t3935305588 * L_9 = __this->get_source3_4();
		bool L_10 = AudioSource_get_isPlaying_m1896551654(L_9, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_0088;
		}
	}
	{
		AudioSource_t3935305588 * L_11 = __this->get_source3_4();
		AudioSource_Stop_m2682712816(L_11, /*hidden argument*/NULL);
		AudioSource_t3935305588 * L_12 = __this->get_source1_2();
		AudioSource_Play_m48294159(L_12, /*hidden argument*/NULL);
	}

IL_0088:
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
// System.Void FloorGenerator::.ctor()
extern "C"  void FloorGenerator__ctor_m2949918489 (FloorGenerator_t4284275110 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void FloorGenerator::Start()
extern "C"  void FloorGenerator_Start_m515083721 (FloorGenerator_t4284275110 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FloorGenerator_Start_m515083721_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	GameObject_t1113636619 * V_3 = NULL;
	Quaternion_t2301928331  V_4;
	memset(&V_4, 0, sizeof(V_4));
	{
		V_0 = 0;
		goto IL_0061;
	}

IL_0007:
	{
		V_1 = 0;
		goto IL_0055;
	}

IL_000e:
	{
		int32_t L_0 = Random_Range_m4054026115(NULL /*static, unused*/, 0, 7, /*hidden argument*/NULL);
		V_2 = L_0;
		GameObjectU5BU5D_t3328599146* L_1 = __this->get_floorTiles_2();
		int32_t L_2 = V_2;
		int32_t L_3 = L_2;
		GameObject_t1113636619 * L_4 = (L_1)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_3));
		int32_t L_5 = V_0;
		int32_t L_6 = V_1;
		Vector3_t3722313464  L_7;
		memset(&L_7, 0, sizeof(L_7));
		Vector3__ctor_m3353183577((&L_7), (((float)((float)((int32_t)il2cpp_codegen_multiply((int32_t)L_5, (int32_t)3))))), (0.0f), (((float)((float)((int32_t)il2cpp_codegen_multiply((int32_t)L_6, (int32_t)3))))), /*hidden argument*/NULL);
		il2cpp_codegen_initobj((&V_4), sizeof(Quaternion_t2301928331 ));
		Quaternion_t2301928331  L_8 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		GameObject_t1113636619 * L_9 = Object_Instantiate_TisGameObject_t1113636619_m3006960551(NULL /*static, unused*/, L_4, L_7, L_8, /*hidden argument*/Object_Instantiate_TisGameObject_t1113636619_m3006960551_RuntimeMethod_var);
		V_3 = L_9;
		GameObject_t1113636619 * L_10 = V_3;
		Transform_t3600365921 * L_11 = GameObject_get_transform_m1369836730(L_10, /*hidden argument*/NULL);
		Transform_t3600365921 * L_12 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Transform_set_parent_m786917804(L_11, L_12, /*hidden argument*/NULL);
		int32_t L_13 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_13, (int32_t)1));
	}

IL_0055:
	{
		int32_t L_14 = V_1;
		if ((((int32_t)L_14) < ((int32_t)((int32_t)30))))
		{
			goto IL_000e;
		}
	}
	{
		int32_t L_15 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)1));
	}

IL_0061:
	{
		int32_t L_16 = V_0;
		if ((((int32_t)L_16) < ((int32_t)((int32_t)30))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void FloorGenerator::Update()
extern "C"  void FloorGenerator_Update_m22615049 (FloorGenerator_t4284275110 * __this, const RuntimeMethod* method)
{
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
// System.Void GameState::.ctor(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
extern "C"  void GameState__ctor_m1856705146 (GameState_t184198630 * __this, Vector3_t3722313464  ___p10, Vector3_t3722313464  ___p21, Vector3_t3722313464  ___b2, Vector3_t3722313464  ___bDir3, float ___spd4, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		Vector3_t3722313464  L_0 = ___p10;
		__this->set_Paddle1Pos_0(L_0);
		Vector3_t3722313464  L_1 = ___p21;
		__this->set_Paddle2Pos_1(L_1);
		Vector3_t3722313464  L_2 = ___b2;
		__this->set_BallPos_2(L_2);
		Vector3_t3722313464  L_3 = ___bDir3;
		__this->set_BallDir_3(L_3);
		float L_4 = ___spd4;
		__this->set_speed_4(L_4);
		return;
	}
}
// System.Void GameState::Update(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
extern "C"  void GameState_Update_m1196730667 (GameState_t184198630 * __this, Vector3_t3722313464  ___p10, Vector3_t3722313464  ___p21, Vector3_t3722313464  ___b2, Vector3_t3722313464  ___bDir3, float ___spd4, const RuntimeMethod* method)
{
	{
		Vector3_t3722313464  L_0 = ___p10;
		__this->set_Paddle1Pos_0(L_0);
		Vector3_t3722313464  L_1 = ___p21;
		__this->set_Paddle2Pos_1(L_1);
		Vector3_t3722313464  L_2 = ___b2;
		__this->set_BallPos_2(L_2);
		Vector3_t3722313464  L_3 = ___bDir3;
		__this->set_BallDir_3(L_3);
		float L_4 = ___spd4;
		__this->set_speed_4(L_4);
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
// System.Void Loading::.ctor()
extern "C"  void Loading__ctor_m2990469971 (Loading_t2310272025 * __this, const RuntimeMethod* method)
{
	{
		__this->set_rotateSpeed_5((200.0f));
		__this->set_openSpeed_6((0.005f));
		__this->set_closeSpeed_7((0.01f));
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Loading::Start()
extern "C"  void Loading_Start_m7686961 (Loading_t2310272025 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Loading_Start_m7686961_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RectTransform_t3704657025 * L_0 = Component_GetComponent_TisRectTransform_t3704657025_m3396022872(__this, /*hidden argument*/Component_GetComponent_TisRectTransform_t3704657025_m3396022872_RuntimeMethod_var);
		__this->set_rectComponent_2(L_0);
		RectTransform_t3704657025 * L_1 = __this->get_rectComponent_2();
		Image_t2670269651 * L_2 = Component_GetComponent_TisImage_t2670269651_m980647750(L_1, /*hidden argument*/Component_GetComponent_TisImage_t2670269651_m980647750_RuntimeMethod_var);
		__this->set_imageComp_3(L_2);
		__this->set_up_4((bool)1);
		return;
	}
}
// System.Void Loading::Update()
extern "C"  void Loading_Update_m2140584780 (Loading_t2310272025 * __this, const RuntimeMethod* method)
{
	{
		RectTransform_t3704657025 * L_0 = __this->get_rectComponent_2();
		float L_1 = __this->get_rotateSpeed_5();
		float L_2 = Time_get_deltaTime_m372706562(NULL /*static, unused*/, /*hidden argument*/NULL);
		Transform_Rotate_m3172098886(L_0, (0.0f), (0.0f), ((float)il2cpp_codegen_multiply((float)L_1, (float)L_2)), /*hidden argument*/NULL);
		Loading_changeSize_m3760621452(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Loading::changeSize()
extern "C"  void Loading_changeSize_m3760621452 (Loading_t2310272025 * __this, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		Image_t2670269651 * L_0 = __this->get_imageComp_3();
		float L_1 = Image_get_fillAmount_m2193224718(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		float L_2 = V_0;
		if ((!(((float)L_2) < ((float)(0.3f)))))
		{
			goto IL_003f;
		}
	}
	{
		bool L_3 = __this->get_up_4();
		if (!L_3)
		{
			goto IL_003f;
		}
	}
	{
		Image_t2670269651 * L_4 = __this->get_imageComp_3();
		Image_t2670269651 * L_5 = L_4;
		float L_6 = Image_get_fillAmount_m2193224718(L_5, /*hidden argument*/NULL);
		float L_7 = __this->get_openSpeed_6();
		Image_set_fillAmount_m3737925590(L_5, ((float)il2cpp_codegen_add((float)L_6, (float)L_7)), /*hidden argument*/NULL);
		goto IL_00b1;
	}

IL_003f:
	{
		float L_8 = V_0;
		if ((!(((float)L_8) >= ((float)(0.3f)))))
		{
			goto IL_0061;
		}
	}
	{
		bool L_9 = __this->get_up_4();
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		__this->set_up_4((bool)0);
		goto IL_00b1;
	}

IL_0061:
	{
		float L_10 = V_0;
		if ((!(((float)L_10) >= ((float)(0.02f)))))
		{
			goto IL_0094;
		}
	}
	{
		bool L_11 = __this->get_up_4();
		if (L_11)
		{
			goto IL_0094;
		}
	}
	{
		Image_t2670269651 * L_12 = __this->get_imageComp_3();
		Image_t2670269651 * L_13 = L_12;
		float L_14 = Image_get_fillAmount_m2193224718(L_13, /*hidden argument*/NULL);
		float L_15 = __this->get_closeSpeed_7();
		Image_set_fillAmount_m3737925590(L_13, ((float)il2cpp_codegen_subtract((float)L_14, (float)L_15)), /*hidden argument*/NULL);
		goto IL_00b1;
	}

IL_0094:
	{
		float L_16 = V_0;
		if ((!(((float)L_16) < ((float)(0.02f)))))
		{
			goto IL_00b1;
		}
	}
	{
		bool L_17 = __this->get_up_4();
		if (L_17)
		{
			goto IL_00b1;
		}
	}
	{
		__this->set_up_4((bool)1);
	}

IL_00b1:
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
// System.Void LogoFade::.ctor()
extern "C"  void LogoFade__ctor_m3447882366 (LogoFade_t2650879019 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Collections.IEnumerator LogoFade::Start()
extern "C"  RuntimeObject* LogoFade_Start_m2133747789 (LogoFade_t2650879019 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (LogoFade_Start_m2133747789_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CStartU3Ec__Iterator0_t2357419268 * V_0 = NULL;
	{
		U3CStartU3Ec__Iterator0_t2357419268 * L_0 = (U3CStartU3Ec__Iterator0_t2357419268 *)il2cpp_codegen_object_new(U3CStartU3Ec__Iterator0_t2357419268_il2cpp_TypeInfo_var);
		U3CStartU3Ec__Iterator0__ctor_m2079361280(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CStartU3Ec__Iterator0_t2357419268 * L_1 = V_0;
		L_1->set_U24this_0(__this);
		U3CStartU3Ec__Iterator0_t2357419268 * L_2 = V_0;
		return L_2;
	}
}
// System.Void LogoFade::FadeIn(UnityEngine.UI.Image,System.Single)
extern "C"  void LogoFade_FadeIn_m758595234 (LogoFade_t2650879019 * __this, Image_t2670269651 * ___img0, float ___time1, const RuntimeMethod* method)
{
	{
		Image_t2670269651 * L_0 = ___img0;
		float L_1 = ___time1;
		VirtActionInvoker3< float, float, bool >::Invoke(48 /* System.Void UnityEngine.UI.Graphic::CrossFadeAlpha(System.Single,System.Single,System.Boolean) */, L_0, (1.0f), L_1, (bool)0);
		return;
	}
}
// System.Void LogoFade::FadeOut(UnityEngine.UI.Image,System.Single)
extern "C"  void LogoFade_FadeOut_m887997020 (LogoFade_t2650879019 * __this, Image_t2670269651 * ___img0, float ___time1, const RuntimeMethod* method)
{
	{
		Image_t2670269651 * L_0 = ___img0;
		float L_1 = ___time1;
		VirtActionInvoker3< float, float, bool >::Invoke(48 /* System.Void UnityEngine.UI.Graphic::CrossFadeAlpha(System.Single,System.Single,System.Boolean) */, L_0, (0.0f), L_1, (bool)0);
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
// System.Void LogoFade/<Start>c__Iterator0::.ctor()
extern "C"  void U3CStartU3Ec__Iterator0__ctor_m2079361280 (U3CStartU3Ec__Iterator0_t2357419268 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean LogoFade/<Start>c__Iterator0::MoveNext()
extern "C"  bool U3CStartU3Ec__Iterator0_MoveNext_m3385840069 (U3CStartU3Ec__Iterator0_t2357419268 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CStartU3Ec__Iterator0_MoveNext_m3385840069_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_U24PC_3();
		V_0 = L_0;
		__this->set_U24PC_3((-1));
		uint32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_0035;
			}
			case 1:
			{
				goto IL_00d1;
			}
			case 2:
			{
				goto IL_0110;
			}
			case 3:
			{
				goto IL_014f;
			}
			case 4:
			{
				goto IL_018e;
			}
			case 5:
			{
				goto IL_01cd;
			}
			case 6:
			{
				goto IL_0227;
			}
		}
	}
	{
		goto IL_0272;
	}

IL_0035:
	{
		float L_2 = Time_get_realtimeSinceStartup_m3141794964(NULL /*static, unused*/, /*hidden argument*/NULL);
		if ((!(((float)L_2) < ((float)(10.0f)))))
		{
			goto IL_0227;
		}
	}
	{
		LogoFade_t2650879019 * L_3 = __this->get_U24this_0();
		Image_t2670269651 * L_4 = L_3->get_schoolLogo_2();
		CanvasRenderer_t2598313366 * L_5 = Graphic_get_canvasRenderer_m315509948(L_4, /*hidden argument*/NULL);
		CanvasRenderer_SetAlpha_m317732912(L_5, (0.0f), /*hidden argument*/NULL);
		LogoFade_t2650879019 * L_6 = __this->get_U24this_0();
		Image_t2670269651 * L_7 = L_6->get_teamLogo_3();
		CanvasRenderer_t2598313366 * L_8 = Graphic_get_canvasRenderer_m315509948(L_7, /*hidden argument*/NULL);
		CanvasRenderer_SetAlpha_m317732912(L_8, (0.0f), /*hidden argument*/NULL);
		LogoFade_t2650879019 * L_9 = __this->get_U24this_0();
		Image_t2670269651 * L_10 = L_9->get_teamPicture_4();
		CanvasRenderer_t2598313366 * L_11 = Graphic_get_canvasRenderer_m315509948(L_10, /*hidden argument*/NULL);
		CanvasRenderer_SetAlpha_m317732912(L_11, (0.0f), /*hidden argument*/NULL);
		LogoFade_t2650879019 * L_12 = __this->get_U24this_0();
		LogoFade_t2650879019 * L_13 = __this->get_U24this_0();
		Image_t2670269651 * L_14 = L_13->get_schoolLogo_2();
		LogoFade_FadeIn_m758595234(L_12, L_14, (1.5f), /*hidden argument*/NULL);
		WaitForSeconds_t1699091251 * L_15 = (WaitForSeconds_t1699091251 *)il2cpp_codegen_object_new(WaitForSeconds_t1699091251_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m2199082655(L_15, (1.5f), /*hidden argument*/NULL);
		__this->set_U24current_1(L_15);
		bool L_16 = __this->get_U24disposing_2();
		if (L_16)
		{
			goto IL_00cc;
		}
	}
	{
		__this->set_U24PC_3(1);
	}

IL_00cc:
	{
		goto IL_0274;
	}

IL_00d1:
	{
		LogoFade_t2650879019 * L_17 = __this->get_U24this_0();
		LogoFade_t2650879019 * L_18 = __this->get_U24this_0();
		Image_t2670269651 * L_19 = L_18->get_schoolLogo_2();
		LogoFade_FadeOut_m887997020(L_17, L_19, (1.5f), /*hidden argument*/NULL);
		WaitForSeconds_t1699091251 * L_20 = (WaitForSeconds_t1699091251 *)il2cpp_codegen_object_new(WaitForSeconds_t1699091251_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m2199082655(L_20, (1.5f), /*hidden argument*/NULL);
		__this->set_U24current_1(L_20);
		bool L_21 = __this->get_U24disposing_2();
		if (L_21)
		{
			goto IL_010b;
		}
	}
	{
		__this->set_U24PC_3(2);
	}

IL_010b:
	{
		goto IL_0274;
	}

IL_0110:
	{
		LogoFade_t2650879019 * L_22 = __this->get_U24this_0();
		LogoFade_t2650879019 * L_23 = __this->get_U24this_0();
		Image_t2670269651 * L_24 = L_23->get_teamLogo_3();
		LogoFade_FadeIn_m758595234(L_22, L_24, (1.5f), /*hidden argument*/NULL);
		WaitForSeconds_t1699091251 * L_25 = (WaitForSeconds_t1699091251 *)il2cpp_codegen_object_new(WaitForSeconds_t1699091251_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m2199082655(L_25, (2.0f), /*hidden argument*/NULL);
		__this->set_U24current_1(L_25);
		bool L_26 = __this->get_U24disposing_2();
		if (L_26)
		{
			goto IL_014a;
		}
	}
	{
		__this->set_U24PC_3(3);
	}

IL_014a:
	{
		goto IL_0274;
	}

IL_014f:
	{
		LogoFade_t2650879019 * L_27 = __this->get_U24this_0();
		LogoFade_t2650879019 * L_28 = __this->get_U24this_0();
		Image_t2670269651 * L_29 = L_28->get_teamLogo_3();
		LogoFade_FadeOut_m887997020(L_27, L_29, (1.5f), /*hidden argument*/NULL);
		WaitForSeconds_t1699091251 * L_30 = (WaitForSeconds_t1699091251 *)il2cpp_codegen_object_new(WaitForSeconds_t1699091251_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m2199082655(L_30, (1.5f), /*hidden argument*/NULL);
		__this->set_U24current_1(L_30);
		bool L_31 = __this->get_U24disposing_2();
		if (L_31)
		{
			goto IL_0189;
		}
	}
	{
		__this->set_U24PC_3(4);
	}

IL_0189:
	{
		goto IL_0274;
	}

IL_018e:
	{
		LogoFade_t2650879019 * L_32 = __this->get_U24this_0();
		LogoFade_t2650879019 * L_33 = __this->get_U24this_0();
		Image_t2670269651 * L_34 = L_33->get_teamPicture_4();
		LogoFade_FadeIn_m758595234(L_32, L_34, (1.5f), /*hidden argument*/NULL);
		WaitForSeconds_t1699091251 * L_35 = (WaitForSeconds_t1699091251 *)il2cpp_codegen_object_new(WaitForSeconds_t1699091251_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m2199082655(L_35, (2.0f), /*hidden argument*/NULL);
		__this->set_U24current_1(L_35);
		bool L_36 = __this->get_U24disposing_2();
		if (L_36)
		{
			goto IL_01c8;
		}
	}
	{
		__this->set_U24PC_3(5);
	}

IL_01c8:
	{
		goto IL_0274;
	}

IL_01cd:
	{
		LogoFade_t2650879019 * L_37 = __this->get_U24this_0();
		LogoFade_t2650879019 * L_38 = __this->get_U24this_0();
		Image_t2670269651 * L_39 = L_38->get_teamPicture_4();
		LogoFade_FadeOut_m887997020(L_37, L_39, (2.0f), /*hidden argument*/NULL);
		LogoFade_t2650879019 * L_40 = __this->get_U24this_0();
		LogoFade_t2650879019 * L_41 = __this->get_U24this_0();
		Image_t2670269651 * L_42 = L_41->get_Curtain_5();
		LogoFade_FadeOut_m887997020(L_40, L_42, (2.0f), /*hidden argument*/NULL);
		WaitForSeconds_t1699091251 * L_43 = (WaitForSeconds_t1699091251 *)il2cpp_codegen_object_new(WaitForSeconds_t1699091251_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m2199082655(L_43, (2.0f), /*hidden argument*/NULL);
		__this->set_U24current_1(L_43);
		bool L_44 = __this->get_U24disposing_2();
		if (L_44)
		{
			goto IL_0222;
		}
	}
	{
		__this->set_U24PC_3(6);
	}

IL_0222:
	{
		goto IL_0274;
	}

IL_0227:
	{
		LogoFade_t2650879019 * L_45 = __this->get_U24this_0();
		Image_t2670269651 * L_46 = L_45->get_schoolLogo_2();
		Behaviour_set_enabled_m20417929(L_46, (bool)0, /*hidden argument*/NULL);
		LogoFade_t2650879019 * L_47 = __this->get_U24this_0();
		Image_t2670269651 * L_48 = L_47->get_teamLogo_3();
		Behaviour_set_enabled_m20417929(L_48, (bool)0, /*hidden argument*/NULL);
		LogoFade_t2650879019 * L_49 = __this->get_U24this_0();
		Image_t2670269651 * L_50 = L_49->get_teamPicture_4();
		Behaviour_set_enabled_m20417929(L_50, (bool)0, /*hidden argument*/NULL);
		LogoFade_t2650879019 * L_51 = __this->get_U24this_0();
		Image_t2670269651 * L_52 = L_51->get_Curtain_5();
		Behaviour_set_enabled_m20417929(L_52, (bool)0, /*hidden argument*/NULL);
		__this->set_U24PC_3((-1));
	}

IL_0272:
	{
		return (bool)0;
	}

IL_0274:
	{
		return (bool)1;
	}
}
// System.Object LogoFade/<Start>c__Iterator0::System.Collections.Generic.IEnumerator<object>.get_Current()
extern "C"  RuntimeObject * U3CStartU3Ec__Iterator0_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m575650406 (U3CStartU3Ec__Iterator0_t2357419268 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_1();
		return L_0;
	}
}
// System.Object LogoFade/<Start>c__Iterator0::System.Collections.IEnumerator.get_Current()
extern "C"  RuntimeObject * U3CStartU3Ec__Iterator0_System_Collections_IEnumerator_get_Current_m372961260 (U3CStartU3Ec__Iterator0_t2357419268 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_1();
		return L_0;
	}
}
// System.Void LogoFade/<Start>c__Iterator0::Dispose()
extern "C"  void U3CStartU3Ec__Iterator0_Dispose_m2344160387 (U3CStartU3Ec__Iterator0_t2357419268 * __this, const RuntimeMethod* method)
{
	{
		__this->set_U24disposing_2((bool)1);
		__this->set_U24PC_3((-1));
		return;
	}
}
// System.Void LogoFade/<Start>c__Iterator0::Reset()
extern "C"  void U3CStartU3Ec__Iterator0_Reset_m1404279933 (U3CStartU3Ec__Iterator0_t2357419268 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CStartU3Ec__Iterator0_Reset_m1404279933_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_t1314879016 * L_0 = (NotSupportedException_t1314879016 *)il2cpp_codegen_object_new(NotSupportedException_t1314879016_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2730133172(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0);
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
// System.Void MainMenuControl::.ctor()
extern "C"  void MainMenuControl__ctor_m1493321804 (MainMenuControl_t4231413698 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MainMenuControl::Start()
extern "C"  void MainMenuControl_Start_m1263247528 (MainMenuControl_t4231413698 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		Image_t2670269651 * L_0 = __this->get_load_2();
		V_0 = (bool)0;
		Image_t2670269651 * L_1 = __this->get_load2_3();
		bool L_2 = V_0;
		Behaviour_set_enabled_m20417929(L_1, L_2, /*hidden argument*/NULL);
		bool L_3 = V_0;
		Behaviour_set_enabled_m20417929(L_0, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Collections.IEnumerator MainMenuControl::LoadAsyncScene()
extern "C"  RuntimeObject* MainMenuControl_LoadAsyncScene_m88225536 (MainMenuControl_t4231413698 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MainMenuControl_LoadAsyncScene_m88225536_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CLoadAsyncSceneU3Ec__Iterator0_t44264939 * V_0 = NULL;
	{
		U3CLoadAsyncSceneU3Ec__Iterator0_t44264939 * L_0 = (U3CLoadAsyncSceneU3Ec__Iterator0_t44264939 *)il2cpp_codegen_object_new(U3CLoadAsyncSceneU3Ec__Iterator0_t44264939_il2cpp_TypeInfo_var);
		U3CLoadAsyncSceneU3Ec__Iterator0__ctor_m1726073256(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CLoadAsyncSceneU3Ec__Iterator0_t44264939 * L_1 = V_0;
		return L_1;
	}
}
// System.Void MainMenuControl::Play()
extern "C"  void MainMenuControl_Play_m3832858780 (MainMenuControl_t4231413698 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		Image_t2670269651 * L_0 = __this->get_load_2();
		V_0 = (bool)1;
		Image_t2670269651 * L_1 = __this->get_curtain_4();
		bool L_2 = V_0;
		Behaviour_set_enabled_m20417929(L_1, L_2, /*hidden argument*/NULL);
		bool L_3 = V_0;
		V_0 = L_3;
		Image_t2670269651 * L_4 = __this->get_load2_3();
		bool L_5 = V_0;
		Behaviour_set_enabled_m20417929(L_4, L_5, /*hidden argument*/NULL);
		bool L_6 = V_0;
		Behaviour_set_enabled_m20417929(L_0, L_6, /*hidden argument*/NULL);
		RuntimeObject* L_7 = MainMenuControl_LoadAsyncScene_m88225536(__this, /*hidden argument*/NULL);
		MonoBehaviour_StartCoroutine_m3411253000(__this, L_7, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MainMenuControl::PlayCredits()
extern "C"  void MainMenuControl_PlayCredits_m1644095604 (MainMenuControl_t4231413698 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MainMenuControl_PlayCredits_m1644095604_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		SceneManager_LoadScene_m1758133949(NULL /*static, unused*/, _stringLiteral3136851520, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MainMenuControl::Quit()
extern "C"  void MainMenuControl_Quit_m3864736778 (MainMenuControl_t4231413698 * __this, const RuntimeMethod* method)
{
	{
		Application_Quit_m470877999(NULL /*static, unused*/, /*hidden argument*/NULL);
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
// System.Void MainMenuControl/<LoadAsyncScene>c__Iterator0::.ctor()
extern "C"  void U3CLoadAsyncSceneU3Ec__Iterator0__ctor_m1726073256 (U3CLoadAsyncSceneU3Ec__Iterator0_t44264939 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean MainMenuControl/<LoadAsyncScene>c__Iterator0::MoveNext()
extern "C"  bool U3CLoadAsyncSceneU3Ec__Iterator0_MoveNext_m3009559731 (U3CLoadAsyncSceneU3Ec__Iterator0_t44264939 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CLoadAsyncSceneU3Ec__Iterator0_MoveNext_m3009559731_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_U24PC_3();
		V_0 = L_0;
		__this->set_U24PC_3((-1));
		uint32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_0021;
			}
			case 1:
			{
				goto IL_0051;
			}
		}
	}
	{
		goto IL_0068;
	}

IL_0021:
	{
		AsyncOperation_t1445031843 * L_2 = SceneManager_LoadSceneAsync_m18587237(NULL /*static, unused*/, _stringLiteral3298262754, /*hidden argument*/NULL);
		__this->set_U3CasyncLoadU3E__0_0(L_2);
		goto IL_0051;
	}

IL_0036:
	{
		__this->set_U24current_1(NULL);
		bool L_3 = __this->get_U24disposing_2();
		if (L_3)
		{
			goto IL_004c;
		}
	}
	{
		__this->set_U24PC_3(1);
	}

IL_004c:
	{
		goto IL_006a;
	}

IL_0051:
	{
		AsyncOperation_t1445031843 * L_4 = __this->get_U3CasyncLoadU3E__0_0();
		bool L_5 = AsyncOperation_get_isDone_m412925263(L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0036;
		}
	}
	{
		__this->set_U24PC_3((-1));
	}

IL_0068:
	{
		return (bool)0;
	}

IL_006a:
	{
		return (bool)1;
	}
}
// System.Object MainMenuControl/<LoadAsyncScene>c__Iterator0::System.Collections.Generic.IEnumerator<object>.get_Current()
extern "C"  RuntimeObject * U3CLoadAsyncSceneU3Ec__Iterator0_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m3545155698 (U3CLoadAsyncSceneU3Ec__Iterator0_t44264939 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_1();
		return L_0;
	}
}
// System.Object MainMenuControl/<LoadAsyncScene>c__Iterator0::System.Collections.IEnumerator.get_Current()
extern "C"  RuntimeObject * U3CLoadAsyncSceneU3Ec__Iterator0_System_Collections_IEnumerator_get_Current_m2047846460 (U3CLoadAsyncSceneU3Ec__Iterator0_t44264939 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_1();
		return L_0;
	}
}
// System.Void MainMenuControl/<LoadAsyncScene>c__Iterator0::Dispose()
extern "C"  void U3CLoadAsyncSceneU3Ec__Iterator0_Dispose_m1207484212 (U3CLoadAsyncSceneU3Ec__Iterator0_t44264939 * __this, const RuntimeMethod* method)
{
	{
		__this->set_U24disposing_2((bool)1);
		__this->set_U24PC_3((-1));
		return;
	}
}
// System.Void MainMenuControl/<LoadAsyncScene>c__Iterator0::Reset()
extern "C"  void U3CLoadAsyncSceneU3Ec__Iterator0_Reset_m324180423 (U3CLoadAsyncSceneU3Ec__Iterator0_t44264939 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CLoadAsyncSceneU3Ec__Iterator0_Reset_m324180423_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_t1314879016 * L_0 = (NotSupportedException_t1314879016 *)il2cpp_codegen_object_new(NotSupportedException_t1314879016_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2730133172(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0);
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
// System.Void Player1Paddle::.ctor()
extern "C"  void Player1Paddle__ctor_m3386033362 (Player1Paddle_t3157062208 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Player1Paddle__ctor_m3386033362_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Random_t108471755 * L_0 = (Random_t108471755 *)il2cpp_codegen_object_new(Random_t108471755_il2cpp_TypeInfo_var);
		Random__ctor_m4122933043(L_0, /*hidden argument*/NULL);
		__this->set_rnd_3(L_0);
		__this->set_powerUpDuration_15((4.0f));
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Player1Paddle::Start()
extern "C"  void Player1Paddle_Start_m626490070 (Player1Paddle_t3157062208 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Player1Paddle_Start_m626490070_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		Rigidbody_t3916780224 * L_0 = Component_GetComponent_TisRigidbody_t3916780224_m279685075(__this, /*hidden argument*/Component_GetComponent_TisRigidbody_t3916780224_m279685075_RuntimeMethod_var);
		__this->set_rb_13(L_0);
		float L_1 = (5.0f);
		V_0 = L_1;
		__this->set_curY_12(L_1);
		float L_2 = V_0;
		__this->set_curX_11(L_2);
		__this->set_type_2(4);
		return;
	}
}
// System.Void Player1Paddle::Update()
extern "C"  void Player1Paddle_Update_m1154683471 (Player1Paddle_t3157062208 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Player1Paddle_Update_m1154683471_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t3722313464  V_0;
	memset(&V_0, 0, sizeof(V_0));
	float V_1 = 0.0f;
	{
		Transform_t3600365921 * L_0 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Vector3_t3722313464  L_1 = Transform_get_localPosition_m4234289348(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		float L_2 = (&V_0)->get_x_1();
		float L_3 = __this->get_curX_11();
		float L_4 = __this->get_xMin_4();
		if ((!(((float)((float)il2cpp_codegen_subtract((float)L_2, (float)((float)((float)L_3/(float)(2.0f)))))) < ((float)L_4))))
		{
			goto IL_0061;
		}
	}
	{
		Transform_t3600365921 * L_5 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		float L_6 = __this->get_xMin_4();
		float L_7 = __this->get_curX_11();
		float L_8 = (&V_0)->get_y_2();
		float L_9 = (&V_0)->get_z_3();
		Vector3_t3722313464  L_10;
		memset(&L_10, 0, sizeof(L_10));
		Vector3__ctor_m3353183577((&L_10), ((float)il2cpp_codegen_add((float)L_6, (float)((float)((float)L_7/(float)(2.0f))))), L_8, L_9, /*hidden argument*/NULL);
		Transform_set_localPosition_m4128471975(L_5, L_10, /*hidden argument*/NULL);
		goto IL_00b1;
	}

IL_0061:
	{
		float L_11 = (&V_0)->get_x_1();
		float L_12 = __this->get_curX_11();
		float L_13 = __this->get_xMax_5();
		if ((!(((float)((float)il2cpp_codegen_add((float)L_11, (float)((float)((float)L_12/(float)(2.0f)))))) > ((float)L_13))))
		{
			goto IL_00b1;
		}
	}
	{
		Transform_t3600365921 * L_14 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		float L_15 = __this->get_xMax_5();
		float L_16 = __this->get_curX_11();
		float L_17 = (&V_0)->get_y_2();
		float L_18 = (&V_0)->get_z_3();
		Vector3_t3722313464  L_19;
		memset(&L_19, 0, sizeof(L_19));
		Vector3__ctor_m3353183577((&L_19), ((float)il2cpp_codegen_subtract((float)L_15, (float)((float)((float)L_16/(float)(2.0f))))), L_17, L_18, /*hidden argument*/NULL);
		Transform_set_localPosition_m4128471975(L_14, L_19, /*hidden argument*/NULL);
	}

IL_00b1:
	{
		Transform_t3600365921 * L_20 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Vector3_t3722313464  L_21 = Transform_get_localPosition_m4234289348(L_20, /*hidden argument*/NULL);
		V_0 = L_21;
		float L_22 = (&V_0)->get_y_2();
		float L_23 = __this->get_curY_12();
		float L_24 = __this->get_yMin_6();
		if ((!(((float)((float)il2cpp_codegen_subtract((float)L_22, (float)((float)((float)L_23/(float)(2.0f)))))) < ((float)L_24))))
		{
			goto IL_0112;
		}
	}
	{
		Transform_t3600365921 * L_25 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		float L_26 = (&V_0)->get_x_1();
		float L_27 = __this->get_yMin_6();
		float L_28 = __this->get_curY_12();
		float L_29 = (&V_0)->get_z_3();
		Vector3_t3722313464  L_30;
		memset(&L_30, 0, sizeof(L_30));
		Vector3__ctor_m3353183577((&L_30), L_26, ((float)il2cpp_codegen_add((float)L_27, (float)((float)((float)L_28/(float)(2.0f))))), L_29, /*hidden argument*/NULL);
		Transform_set_localPosition_m4128471975(L_25, L_30, /*hidden argument*/NULL);
		goto IL_0162;
	}

IL_0112:
	{
		float L_31 = (&V_0)->get_y_2();
		float L_32 = __this->get_curY_12();
		float L_33 = __this->get_yMax_7();
		if ((!(((float)((float)il2cpp_codegen_add((float)L_31, (float)((float)((float)L_32/(float)(2.0f)))))) > ((float)L_33))))
		{
			goto IL_0162;
		}
	}
	{
		Transform_t3600365921 * L_34 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		float L_35 = (&V_0)->get_x_1();
		float L_36 = __this->get_yMax_7();
		float L_37 = __this->get_curY_12();
		float L_38 = (&V_0)->get_z_3();
		Vector3_t3722313464  L_39;
		memset(&L_39, 0, sizeof(L_39));
		Vector3__ctor_m3353183577((&L_39), L_35, ((float)il2cpp_codegen_subtract((float)L_36, (float)((float)((float)L_37/(float)(2.0f))))), L_38, /*hidden argument*/NULL);
		Transform_set_localPosition_m4128471975(L_34, L_39, /*hidden argument*/NULL);
	}

IL_0162:
	{
		float L_40 = __this->get_powerUpCounter_14();
		if ((!(((float)L_40) > ((float)(0.0f)))))
		{
			goto IL_01fa;
		}
	}
	{
		float L_41 = __this->get_powerUpCounter_14();
		float L_42 = Time_get_deltaTime_m372706562(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_powerUpCounter_14(((float)il2cpp_codegen_subtract((float)L_41, (float)L_42)));
		float L_43 = __this->get_powerUpCounter_14();
		if ((!(((float)L_43) < ((float)(0.0f)))))
		{
			goto IL_01fa;
		}
	}
	{
		__this->set_type_2(4);
		float L_44 = (5.0f);
		V_1 = L_44;
		__this->set_curX_11(L_44);
		float L_45 = V_1;
		__this->set_curY_12(L_45);
		Transform_t3600365921 * L_46 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		float L_47 = __this->get_curX_11();
		float L_48 = __this->get_curY_12();
		Vector3_t3722313464  L_49;
		memset(&L_49, 0, sizeof(L_49));
		Vector3__ctor_m3353183577((&L_49), L_47, L_48, (1.0f), /*hidden argument*/NULL);
		Transform_set_localScale_m3053443106(L_46, L_49, /*hidden argument*/NULL);
		Text_t1901882714 * L_50 = __this->get_Messenger_9();
		String_t* L_51 = VirtFuncInvoker0< String_t* >::Invoke(71 /* System.String UnityEngine.UI.Text::get_text() */, L_50);
		bool L_52 = String_StartsWith_m1759067526(L_51, _stringLiteral3452614640, /*hidden argument*/NULL);
		if (L_52)
		{
			goto IL_01fa;
		}
	}
	{
		Text_t1901882714 * L_53 = __this->get_Messenger_9();
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_54 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_53, L_54);
	}

IL_01fa:
	{
		return;
	}
}
// System.Void Player1Paddle::FixedUpdate()
extern "C"  void Player1Paddle_FixedUpdate_m3287934885 (Player1Paddle_t3157062208 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Player1Paddle_FixedUpdate_m3287934885_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	int32_t V_2 = 0;
	int32_t G_B3_0 = 0;
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1431474628_il2cpp_TypeInfo_var);
		float L_0 = Input_GetAxis_m4009438427(NULL /*static, unused*/, _stringLiteral1828639942, /*hidden argument*/NULL);
		V_0 = L_0;
		float L_1 = Input_GetAxis_m4009438427(NULL /*static, unused*/, _stringLiteral2984908384, /*hidden argument*/NULL);
		V_1 = L_1;
		int32_t L_2 = __this->get_type_2();
		if ((!(((uint32_t)L_2) == ((uint32_t)1))))
		{
			goto IL_0028;
		}
	}
	{
		G_B3_0 = 2;
		goto IL_0029;
	}

IL_0028:
	{
		G_B3_0 = 1;
	}

IL_0029:
	{
		V_2 = G_B3_0;
		Rigidbody_t3916780224 * L_3 = __this->get_rb_13();
		int32_t L_4 = V_2;
		float L_5 = __this->get_PaddleSpeed_8();
		float L_6 = V_0;
		float L_7 = V_1;
		Vector3_t3722313464  L_8;
		memset(&L_8, 0, sizeof(L_8));
		Vector3__ctor_m3353183577((&L_8), L_6, L_7, (0.0f), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_9 = Vector3_op_Multiply_m2104357790(NULL /*static, unused*/, ((float)il2cpp_codegen_multiply((float)(((float)((float)L_4))), (float)L_5)), L_8, /*hidden argument*/NULL);
		Rigidbody_set_velocity_m2899403247(L_3, L_9, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Player1Paddle::OnTriggerEnter(UnityEngine.Collider)
extern "C"  void Player1Paddle_OnTriggerEnter_m2811710102 (Player1Paddle_t3157062208 * __this, Collider_t1773347010 * ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Player1Paddle_OnTriggerEnter_m2811710102_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	float V_1 = 0.0f;
	{
		Collider_t1773347010 * L_0 = ___other0;
		GameObject_t1113636619 * L_1 = Component_get_gameObject_m442555142(L_0, /*hidden argument*/NULL);
		bool L_2 = GameObject_CompareTag_m3144439756(L_1, _stringLiteral852186541, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0152;
		}
	}
	{
		Collider_t1773347010 * L_3 = ___other0;
		GameObject_t1113636619 * L_4 = Component_get_gameObject_m442555142(L_3, /*hidden argument*/NULL);
		GameObject_SetActive_m796801857(L_4, (bool)0, /*hidden argument*/NULL);
		float L_5 = __this->get_powerUpDuration_15();
		__this->set_powerUpCounter_14(L_5);
		Random_t108471755 * L_6 = __this->get_rnd_3();
		int32_t L_7 = VirtFuncInvoker1< int32_t, int32_t >::Invoke(5 /* System.Int32 System.Random::Next(System.Int32) */, L_6, 4);
		V_0 = L_7;
		int32_t L_8 = V_0;
		switch (L_8)
		{
			case 0:
			{
				goto IL_0055;
			}
			case 1:
			{
				goto IL_0071;
			}
			case 2:
			{
				goto IL_00b9;
			}
			case 3:
			{
				goto IL_0101;
			}
		}
	}
	{
		goto IL_0152;
	}

IL_0055:
	{
		__this->set_type_2(1);
		Text_t1901882714 * L_9 = __this->get_Messenger_9();
		VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_9, _stringLiteral56757516);
		goto IL_0152;
	}

IL_0071:
	{
		__this->set_type_2(3);
		__this->set_curY_12((10.0f));
		Transform_t3600365921 * L_10 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		float L_11 = __this->get_curX_11();
		float L_12 = __this->get_curY_12();
		Vector3_t3722313464  L_13;
		memset(&L_13, 0, sizeof(L_13));
		Vector3__ctor_m3353183577((&L_13), L_11, L_12, (1.0f), /*hidden argument*/NULL);
		Transform_set_localScale_m3053443106(L_10, L_13, /*hidden argument*/NULL);
		Text_t1901882714 * L_14 = __this->get_Messenger_9();
		VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_14, _stringLiteral2424904890);
		goto IL_0152;
	}

IL_00b9:
	{
		__this->set_type_2(2);
		__this->set_curX_11((10.0f));
		Transform_t3600365921 * L_15 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		float L_16 = __this->get_curX_11();
		float L_17 = __this->get_curY_12();
		Vector3_t3722313464  L_18;
		memset(&L_18, 0, sizeof(L_18));
		Vector3__ctor_m3353183577((&L_18), L_16, L_17, (1.0f), /*hidden argument*/NULL);
		Transform_set_localScale_m3053443106(L_15, L_18, /*hidden argument*/NULL);
		Text_t1901882714 * L_19 = __this->get_Messenger_9();
		VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_19, _stringLiteral1787172304);
		goto IL_0152;
	}

IL_0101:
	{
		__this->set_type_2(0);
		float L_20 = (7.5f);
		V_1 = L_20;
		__this->set_curY_12(L_20);
		float L_21 = V_1;
		__this->set_curX_11(L_21);
		Transform_t3600365921 * L_22 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		float L_23 = __this->get_curX_11();
		float L_24 = __this->get_curY_12();
		Vector3_t3722313464  L_25;
		memset(&L_25, 0, sizeof(L_25));
		Vector3__ctor_m3353183577((&L_25), L_23, L_24, (1.0f), /*hidden argument*/NULL);
		Transform_set_localScale_m3053443106(L_22, L_25, /*hidden argument*/NULL);
		Text_t1901882714 * L_26 = __this->get_Messenger_9();
		VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_26, _stringLiteral343282126);
		goto IL_0152;
	}

IL_0152:
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Player2Paddle::.ctor()
extern "C"  void Player2Paddle__ctor_m1482721465 (Player2Paddle_t3694861021 * __this, const RuntimeMethod* method)
{
	{
		__this->set_AiActive_2((bool)1);
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Player2Paddle::Start()
extern "C"  void Player2Paddle_Start_m4233158211 (Player2Paddle_t3694861021 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Player2Paddle_Start_m4233158211_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Rigidbody_t3916780224 * L_0 = Component_GetComponent_TisRigidbody_t3916780224_m279685075(__this, /*hidden argument*/Component_GetComponent_TisRigidbody_t3916780224_m279685075_RuntimeMethod_var);
		__this->set_rb_11(L_0);
		return;
	}
}
// System.Void Player2Paddle::Update()
extern "C"  void Player2Paddle_Update_m510862904 (Player2Paddle_t3694861021 * __this, const RuntimeMethod* method)
{
	Vector3_t3722313464  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Vector3_t3722313464  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Vector3_t3722313464  V_2;
	memset(&V_2, 0, sizeof(V_2));
	Vector3_t3722313464  V_3;
	memset(&V_3, 0, sizeof(V_3));
	Vector3_t3722313464  V_4;
	memset(&V_4, 0, sizeof(V_4));
	{
		Transform_t3600365921 * L_0 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Vector3_t3722313464  L_1 = Transform_get_localPosition_m4234289348(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		float L_2 = (&V_0)->get_x_1();
		float L_3 = __this->get_xMin_3();
		if ((!(((float)((float)il2cpp_codegen_subtract((float)L_2, (float)(2.5f)))) < ((float)L_3))))
		{
			goto IL_008b;
		}
	}
	{
		Transform_t3600365921 * L_4 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		float L_5 = __this->get_xMin_3();
		float L_6 = (&V_0)->get_y_2();
		float L_7 = (&V_0)->get_z_3();
		Vector3_t3722313464  L_8;
		memset(&L_8, 0, sizeof(L_8));
		Vector3__ctor_m3353183577((&L_8), ((float)il2cpp_codegen_add((float)L_5, (float)(2.5f))), L_6, L_7, /*hidden argument*/NULL);
		Transform_set_localPosition_m4128471975(L_4, L_8, /*hidden argument*/NULL);
		bool L_9 = __this->get_AiActive_2();
		if (!L_9)
		{
			goto IL_0086;
		}
	}
	{
		Rigidbody_t3916780224 * L_10 = __this->get_rb_11();
		Rigidbody_t3916780224 * L_11 = __this->get_rb_11();
		Vector3_t3722313464  L_12 = Rigidbody_get_velocity_m2993632669(L_11, /*hidden argument*/NULL);
		V_1 = L_12;
		float L_13 = (&V_1)->get_y_2();
		Vector3_t3722313464  L_14;
		memset(&L_14, 0, sizeof(L_14));
		Vector3__ctor_m3353183577((&L_14), (0.0f), L_13, (0.0f), /*hidden argument*/NULL);
		Rigidbody_set_velocity_m2899403247(L_10, L_14, /*hidden argument*/NULL);
	}

IL_0086:
	{
		goto IL_0105;
	}

IL_008b:
	{
		float L_15 = (&V_0)->get_x_1();
		float L_16 = __this->get_xMax_4();
		if ((!(((float)((float)il2cpp_codegen_add((float)L_15, (float)(2.5f)))) > ((float)L_16))))
		{
			goto IL_0105;
		}
	}
	{
		Transform_t3600365921 * L_17 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		float L_18 = __this->get_xMax_4();
		float L_19 = (&V_0)->get_y_2();
		float L_20 = (&V_0)->get_z_3();
		Vector3_t3722313464  L_21;
		memset(&L_21, 0, sizeof(L_21));
		Vector3__ctor_m3353183577((&L_21), ((float)il2cpp_codegen_subtract((float)L_18, (float)(2.5f))), L_19, L_20, /*hidden argument*/NULL);
		Transform_set_localPosition_m4128471975(L_17, L_21, /*hidden argument*/NULL);
		bool L_22 = __this->get_AiActive_2();
		if (!L_22)
		{
			goto IL_0105;
		}
	}
	{
		Rigidbody_t3916780224 * L_23 = __this->get_rb_11();
		Rigidbody_t3916780224 * L_24 = __this->get_rb_11();
		Vector3_t3722313464  L_25 = Rigidbody_get_velocity_m2993632669(L_24, /*hidden argument*/NULL);
		V_2 = L_25;
		float L_26 = (&V_2)->get_y_2();
		Vector3_t3722313464  L_27;
		memset(&L_27, 0, sizeof(L_27));
		Vector3__ctor_m3353183577((&L_27), (0.0f), L_26, (0.0f), /*hidden argument*/NULL);
		Rigidbody_set_velocity_m2899403247(L_23, L_27, /*hidden argument*/NULL);
	}

IL_0105:
	{
		Transform_t3600365921 * L_28 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Vector3_t3722313464  L_29 = Transform_get_localPosition_m4234289348(L_28, /*hidden argument*/NULL);
		V_0 = L_29;
		float L_30 = (&V_0)->get_y_2();
		float L_31 = __this->get_yMin_5();
		if ((!(((float)((float)il2cpp_codegen_subtract((float)L_30, (float)(2.5f)))) < ((float)L_31))))
		{
			goto IL_0190;
		}
	}
	{
		Transform_t3600365921 * L_32 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		float L_33 = (&V_0)->get_x_1();
		float L_34 = __this->get_yMin_5();
		float L_35 = (&V_0)->get_z_3();
		Vector3_t3722313464  L_36;
		memset(&L_36, 0, sizeof(L_36));
		Vector3__ctor_m3353183577((&L_36), L_33, ((float)il2cpp_codegen_add((float)L_34, (float)(2.5f))), L_35, /*hidden argument*/NULL);
		Transform_set_localPosition_m4128471975(L_32, L_36, /*hidden argument*/NULL);
		bool L_37 = __this->get_AiActive_2();
		if (!L_37)
		{
			goto IL_018b;
		}
	}
	{
		Rigidbody_t3916780224 * L_38 = __this->get_rb_11();
		Rigidbody_t3916780224 * L_39 = __this->get_rb_11();
		Vector3_t3722313464  L_40 = Rigidbody_get_velocity_m2993632669(L_39, /*hidden argument*/NULL);
		V_3 = L_40;
		float L_41 = (&V_3)->get_x_1();
		Vector3_t3722313464  L_42;
		memset(&L_42, 0, sizeof(L_42));
		Vector3__ctor_m3353183577((&L_42), L_41, (0.0f), (0.0f), /*hidden argument*/NULL);
		Rigidbody_set_velocity_m2899403247(L_38, L_42, /*hidden argument*/NULL);
	}

IL_018b:
	{
		goto IL_020b;
	}

IL_0190:
	{
		float L_43 = (&V_0)->get_y_2();
		float L_44 = __this->get_yMax_6();
		if ((!(((float)((float)il2cpp_codegen_add((float)L_43, (float)(2.5f)))) > ((float)L_44))))
		{
			goto IL_020b;
		}
	}
	{
		Transform_t3600365921 * L_45 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		float L_46 = (&V_0)->get_x_1();
		float L_47 = __this->get_yMax_6();
		float L_48 = (&V_0)->get_z_3();
		Vector3_t3722313464  L_49;
		memset(&L_49, 0, sizeof(L_49));
		Vector3__ctor_m3353183577((&L_49), L_46, ((float)il2cpp_codegen_subtract((float)L_47, (float)(2.5f))), L_48, /*hidden argument*/NULL);
		Transform_set_localPosition_m4128471975(L_45, L_49, /*hidden argument*/NULL);
		bool L_50 = __this->get_AiActive_2();
		if (!L_50)
		{
			goto IL_020b;
		}
	}
	{
		Rigidbody_t3916780224 * L_51 = __this->get_rb_11();
		Rigidbody_t3916780224 * L_52 = __this->get_rb_11();
		Vector3_t3722313464  L_53 = Rigidbody_get_velocity_m2993632669(L_52, /*hidden argument*/NULL);
		V_4 = L_53;
		float L_54 = (&V_4)->get_x_1();
		Vector3_t3722313464  L_55;
		memset(&L_55, 0, sizeof(L_55));
		Vector3__ctor_m3353183577((&L_55), L_54, (0.0f), (0.0f), /*hidden argument*/NULL);
		Rigidbody_set_velocity_m2899403247(L_51, L_55, /*hidden argument*/NULL);
	}

IL_020b:
	{
		return;
	}
}
// System.Void Player2Paddle::FixedUpdate()
extern "C"  void Player2Paddle_FixedUpdate_m3653812168 (Player2Paddle_t3694861021 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Player2Paddle_FixedUpdate_m3653812168_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	Vector3_t3722313464  V_2;
	memset(&V_2, 0, sizeof(V_2));
	{
		bool L_0 = __this->get_AiActive_2();
		if (!L_0)
		{
			goto IL_007d;
		}
	}
	{
		GameObject_t1113636619 * L_1 = __this->get_Ball_9();
		Transform_t3600365921 * L_2 = GameObject_get_transform_m1369836730(L_1, /*hidden argument*/NULL);
		Vector3_t3722313464  L_3 = Transform_get_localPosition_m4234289348(L_2, /*hidden argument*/NULL);
		Transform_t3600365921 * L_4 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Vector3_t3722313464  L_5 = Transform_get_localPosition_m4234289348(L_4, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_6 = Vector3_op_Subtraction_m3073674971(NULL /*static, unused*/, L_3, L_5, /*hidden argument*/NULL);
		V_2 = L_6;
		float L_7 = __this->get_AiSpeedMult_8();
		float L_8 = (&V_2)->get_x_1();
		int32_t L_9 = Math_Sign_m1545180090(NULL /*static, unused*/, L_8, /*hidden argument*/NULL);
		V_0 = ((float)il2cpp_codegen_multiply((float)L_7, (float)(((float)((float)L_9)))));
		float L_10 = __this->get_AiSpeedMult_8();
		float L_11 = (&V_2)->get_y_2();
		int32_t L_12 = Math_Sign_m1545180090(NULL /*static, unused*/, L_11, /*hidden argument*/NULL);
		V_1 = ((float)il2cpp_codegen_multiply((float)L_10, (float)(((float)((float)L_12)))));
		Rigidbody_t3916780224 * L_13 = __this->get_rb_11();
		float L_14 = __this->get_PaddleSpeed_7();
		float L_15 = V_0;
		float L_16 = V_1;
		Vector3_t3722313464  L_17;
		memset(&L_17, 0, sizeof(L_17));
		Vector3__ctor_m3353183577((&L_17), L_15, L_16, (0.0f), /*hidden argument*/NULL);
		Vector3_t3722313464  L_18 = Vector3_op_Multiply_m2104357790(NULL /*static, unused*/, L_14, L_17, /*hidden argument*/NULL);
		Rigidbody_AddForce_m3395934484(L_13, L_18, /*hidden argument*/NULL);
		goto IL_00b5;
	}

IL_007d:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1431474628_il2cpp_TypeInfo_var);
		float L_19 = Input_GetAxis_m4009438427(NULL /*static, unused*/, _stringLiteral1828639942, /*hidden argument*/NULL);
		V_0 = L_19;
		float L_20 = Input_GetAxis_m4009438427(NULL /*static, unused*/, _stringLiteral2984908384, /*hidden argument*/NULL);
		V_1 = L_20;
		Rigidbody_t3916780224 * L_21 = __this->get_rb_11();
		float L_22 = __this->get_PaddleSpeed_7();
		float L_23 = V_0;
		float L_24 = V_1;
		Vector3_t3722313464  L_25;
		memset(&L_25, 0, sizeof(L_25));
		Vector3__ctor_m3353183577((&L_25), L_23, L_24, (0.0f), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_26 = Vector3_op_Multiply_m2104357790(NULL /*static, unused*/, L_22, L_25, /*hidden argument*/NULL);
		Rigidbody_set_velocity_m2899403247(L_21, L_26, /*hidden argument*/NULL);
	}

IL_00b5:
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
// System.Void PowerUpManager::.ctor()
extern "C"  void PowerUpManager__ctor_m3728193228 (PowerUpManager_t2784844421 * __this, const RuntimeMethod* method)
{
	{
		__this->set_freq_4((8.0f));
		__this->set_spd_6((2.0f));
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PowerUpManager::Start()
extern "C"  void PowerUpManager_Start_m1819700524 (PowerUpManager_t2784844421 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PowerUpManager_Start_m1819700524_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		GameObject_t1113636619 * L_0 = __this->get_powerUp_2();
		Transform_t3600365921 * L_1 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		GameObject_t1113636619 * L_2 = Object_Instantiate_TisGameObject_t1113636619_m3215236302(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/Object_Instantiate_TisGameObject_t1113636619_m3215236302_RuntimeMethod_var);
		__this->set_tmp_3(L_2);
		GameObject_t1113636619 * L_3 = __this->get_tmp_3();
		Transform_t3600365921 * L_4 = GameObject_get_transform_m1369836730(L_3, /*hidden argument*/NULL);
		Vector3_t3722313464  L_5;
		memset(&L_5, 0, sizeof(L_5));
		Vector3__ctor_m3353183577((&L_5), (0.0f), (0.0f), (-100.0f), /*hidden argument*/NULL);
		Transform_set_localPosition_m4128471975(L_4, L_5, /*hidden argument*/NULL);
		float L_6 = __this->get_freq_4();
		__this->set_timeCount_5(L_6);
		return;
	}
}
// System.Void PowerUpManager::Update()
extern "C"  void PowerUpManager_Update_m2908221272 (PowerUpManager_t2784844421 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PowerUpManager_Update_m2908221272_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1431474628_il2cpp_TypeInfo_var);
		bool L_0 = Input_GetKeyDown_m17791917(NULL /*static, unused*/, ((int32_t)48), /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		__this->set_timeCount_5((0.0f));
	}

IL_0017:
	{
		BallController_t2992829471 * L_1 = __this->get_ball_7();
		bool L_2 = L_1->get_waitForPress_12();
		if (L_2)
		{
			goto IL_0037;
		}
	}
	{
		BallController_t2992829471 * L_3 = __this->get_ball_7();
		bool L_4 = L_3->get_paused_11();
		if (!L_4)
		{
			goto IL_0038;
		}
	}

IL_0037:
	{
		return;
	}

IL_0038:
	{
		float L_5 = __this->get_timeCount_5();
		float L_6 = Time_get_deltaTime_m372706562(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_timeCount_5(((float)il2cpp_codegen_subtract((float)L_5, (float)L_6)));
		float L_7 = __this->get_timeCount_5();
		if ((!(((float)L_7) < ((float)(0.0f)))))
		{
			goto IL_00a3;
		}
	}
	{
		GameObject_t1113636619 * L_8 = __this->get_tmp_3();
		GameObject_t1113636619 * L_9 = GameObject_get_gameObject_m3693461266(L_8, /*hidden argument*/NULL);
		GameObject_SetActive_m796801857(L_9, (bool)1, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_10 = __this->get_tmp_3();
		Transform_t3600365921 * L_11 = GameObject_get_transform_m1369836730(L_10, /*hidden argument*/NULL);
		int32_t L_12 = Random_Range_m4054026115(NULL /*static, unused*/, ((int32_t)-8), 8, /*hidden argument*/NULL);
		int32_t L_13 = Random_Range_m4054026115(NULL /*static, unused*/, 2, ((int32_t)18), /*hidden argument*/NULL);
		Vector3_t3722313464  L_14;
		memset(&L_14, 0, sizeof(L_14));
		Vector3__ctor_m3353183577((&L_14), (((float)((float)L_12))), (((float)((float)L_13))), (10.0f), /*hidden argument*/NULL);
		Transform_set_localPosition_m4128471975(L_11, L_14, /*hidden argument*/NULL);
		float L_15 = __this->get_freq_4();
		__this->set_timeCount_5(L_15);
	}

IL_00a3:
	{
		GameObject_t1113636619 * L_16 = __this->get_tmp_3();
		Transform_t3600365921 * L_17 = GameObject_get_transform_m1369836730(L_16, /*hidden argument*/NULL);
		Transform_t3600365921 * L_18 = L_17;
		Vector3_t3722313464  L_19 = Transform_get_position_m36019626(L_18, /*hidden argument*/NULL);
		float L_20 = __this->get_spd_6();
		float L_21 = Time_get_deltaTime_m372706562(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector3_t3722313464  L_22;
		memset(&L_22, 0, sizeof(L_22));
		Vector3__ctor_m3353183577((&L_22), (0.0f), (0.0f), ((float)il2cpp_codegen_multiply((float)L_20, (float)L_21)), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_23 = Vector3_op_Subtraction_m3073674971(NULL /*static, unused*/, L_19, L_22, /*hidden argument*/NULL);
		Transform_set_position_m3387557959(L_18, L_23, /*hidden argument*/NULL);
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
// System.Void ScorekeeperScript::.ctor()
extern "C"  void ScorekeeperScript__ctor_m4093516590 (ScorekeeperScript_t1868293023 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ScorekeeperScript::set_GameOver(System.Boolean)
extern "C"  void ScorekeeperScript_set_GameOver_m3738847712 (ScorekeeperScript_t1868293023 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_U3CGameOverU3Ek__BackingField_7(L_0);
		return;
	}
}
// System.Boolean ScorekeeperScript::get_GameOver()
extern "C"  bool ScorekeeperScript_get_GameOver_m433323004 (ScorekeeperScript_t1868293023 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_U3CGameOverU3Ek__BackingField_7();
		return L_0;
	}
}
// System.Void ScorekeeperScript::Start()
extern "C"  void ScorekeeperScript_Start_m3989421026 (ScorekeeperScript_t1868293023 * __this, const RuntimeMethod* method)
{
	{
		ScorekeeperScript_ResetScore_m4042766342(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ScorekeeperScript::P1ScoreOne()
extern "C"  void ScorekeeperScript_P1ScoreOne_m1171754034 (ScorekeeperScript_t1868293023 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_P1Score_2();
		__this->set_P1Score_2(((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)1)));
		ScorekeeperScript_SetCountText_m3098137846(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ScorekeeperScript::P2ScoreOne()
extern "C"  void ScorekeeperScript_P2ScoreOne_m1171748733 (ScorekeeperScript_t1868293023 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_P2Score_3();
		__this->set_P2Score_3(((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)1)));
		ScorekeeperScript_SetCountText_m3098137846(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ScorekeeperScript::ResetScore()
extern "C"  void ScorekeeperScript_ResetScore_m4042766342 (ScorekeeperScript_t1868293023 * __this, const RuntimeMethod* method)
{
	{
		__this->set_P1Score_2(0);
		__this->set_P2Score_3(0);
		ScorekeeperScript_SetCountText_m3098137846(__this, /*hidden argument*/NULL);
		ScorekeeperScript_set_GameOver_m3738847712(__this, (bool)0, /*hidden argument*/NULL);
		Button_t4055032469 * L_0 = __this->get_resetButton_8();
		Selectable_set_interactable_m3105888815(L_0, (bool)0, /*hidden argument*/NULL);
		Toggle_t2735377061 * L_1 = __this->get_lightMode_9();
		Selectable_set_interactable_m3105888815(L_1, (bool)1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ScorekeeperScript::SetCountText()
extern "C"  void ScorekeeperScript_SetCountText_m3098137846 (ScorekeeperScript_t1868293023 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ScorekeeperScript_SetCountText_m3098137846_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Text_t1901882714 * L_0 = __this->get_LeftScore_4();
		int32_t L_1 = __this->get_P1Score_2();
		int32_t L_2 = L_1;
		RuntimeObject * L_3 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_2);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_4 = String_Concat_m904156431(NULL /*static, unused*/, _stringLiteral2058722280, L_3, /*hidden argument*/NULL);
		VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, L_4);
		Text_t1901882714 * L_5 = __this->get_RightScore_5();
		int32_t L_6 = __this->get_P2Score_3();
		int32_t L_7 = L_6;
		RuntimeObject * L_8 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_7);
		String_t* L_9 = String_Concat_m904156431(NULL /*static, unused*/, _stringLiteral2058656744, L_8, /*hidden argument*/NULL);
		VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_5, L_9);
		int32_t L_10 = __this->get_P1Score_2();
		int32_t L_11 = __this->get_ScoreToWin_10();
		if ((((int32_t)L_10) < ((int32_t)L_11)))
		{
			goto IL_0067;
		}
	}
	{
		Text_t1901882714 * L_12 = __this->get_Center_6();
		VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_12, _stringLiteral434274249);
		ScorekeeperScript_EndGame_m704318642(__this, /*hidden argument*/NULL);
	}

IL_0067:
	{
		int32_t L_13 = __this->get_P2Score_3();
		int32_t L_14 = __this->get_ScoreToWin_10();
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_008e;
		}
	}
	{
		Text_t1901882714 * L_15 = __this->get_Center_6();
		VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_15, _stringLiteral2650898377);
		ScorekeeperScript_EndGame_m704318642(__this, /*hidden argument*/NULL);
	}

IL_008e:
	{
		return;
	}
}
// System.Void ScorekeeperScript::Update()
extern "C"  void ScorekeeperScript_Update_m2735237961 (ScorekeeperScript_t1868293023 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ScorekeeperScript_Update_m2735237961_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1431474628_il2cpp_TypeInfo_var);
		bool L_0 = Input_GetKeyDown_m17791917(NULL /*static, unused*/, ((int32_t)32), /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		ScreenCapture_CaptureScreenshot_m467787810(NULL /*static, unused*/, _stringLiteral1620615438, 2, /*hidden argument*/NULL);
	}

IL_0017:
	{
		return;
	}
}
// System.Void ScorekeeperScript::EndGame()
extern "C"  void ScorekeeperScript_EndGame_m704318642 (ScorekeeperScript_t1868293023 * __this, const RuntimeMethod* method)
{
	{
		ScorekeeperScript_set_GameOver_m3738847712(__this, (bool)1, /*hidden argument*/NULL);
		Button_t4055032469 * L_0 = __this->get_resetButton_8();
		Selectable_set_interactable_m3105888815(L_0, (bool)1, /*hidden argument*/NULL);
		Toggle_t2735377061 * L_1 = __this->get_lightMode_9();
		Selectable_set_interactable_m3105888815(L_1, (bool)0, /*hidden argument*/NULL);
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
// System.Void StateHolder::.ctor()
extern "C"  void StateHolder__ctor_m2201715568 (StateHolder_t2173541826 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void StateHolder::Start()
extern "C"  void StateHolder_Start_m3789155092 (StateHolder_t2173541826 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StateHolder_Start_m3789155092_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t3722313464  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		GameObject_t1113636619 * L_0 = __this->get_Pad1_5();
		Transform_t3600365921 * L_1 = GameObject_get_transform_m1369836730(L_0, /*hidden argument*/NULL);
		Vector3_t3722313464  L_2 = Transform_get_localPosition_m4234289348(L_1, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_3 = __this->get_Pad2_6();
		Transform_t3600365921 * L_4 = GameObject_get_transform_m1369836730(L_3, /*hidden argument*/NULL);
		Vector3_t3722313464  L_5 = Transform_get_localPosition_m4234289348(L_4, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_6 = __this->get_Ball_7();
		Transform_t3600365921 * L_7 = GameObject_get_transform_m1369836730(L_6, /*hidden argument*/NULL);
		Vector3_t3722313464  L_8 = Transform_get_localPosition_m4234289348(L_7, /*hidden argument*/NULL);
		Vector3_t3722313464  L_9;
		memset(&L_9, 0, sizeof(L_9));
		Vector3__ctor_m3353183577((&L_9), (0.0f), (0.0f), (1.0f), /*hidden argument*/NULL);
		BallController_t2992829471 * L_10 = __this->get_ballInfo_8();
		float L_11 = L_10->get_Speed_8();
		GameState_t184198630 * L_12 = (GameState_t184198630 *)il2cpp_codegen_object_new(GameState_t184198630_il2cpp_TypeInfo_var);
		GameState__ctor_m1856705146(L_12, L_2, L_5, L_8, L_9, L_11, /*hidden argument*/NULL);
		__this->set_defaultNoBounce_2(L_12);
		GameState_t184198630 * L_13 = __this->get_defaultNoBounce_2();
		Vector3_t3722313464  L_14 = L_13->get_Paddle1Pos_0();
		GameState_t184198630 * L_15 = __this->get_defaultNoBounce_2();
		Vector3_t3722313464  L_16 = L_15->get_Paddle2Pos_1();
		GameState_t184198630 * L_17 = __this->get_defaultNoBounce_2();
		Vector3_t3722313464  L_18 = L_17->get_BallPos_2();
		Vector3__ctor_m3353183577((&V_0), (-1.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		Vector3_t3722313464  L_19 = Vector3_get_normalized_m2454957984((&V_0), /*hidden argument*/NULL);
		GameState_t184198630 * L_20 = __this->get_defaultNoBounce_2();
		float L_21 = L_20->get_speed_4();
		GameState_t184198630 * L_22 = (GameState_t184198630 *)il2cpp_codegen_object_new(GameState_t184198630_il2cpp_TypeInfo_var);
		GameState__ctor_m1856705146(L_22, L_14, L_16, L_18, L_19, L_21, /*hidden argument*/NULL);
		__this->set_defaultBounce_3(L_22);
		GameState_t184198630 * L_23 = __this->get_defaultNoBounce_2();
		Vector3_t3722313464  L_24 = L_23->get_Paddle1Pos_0();
		GameState_t184198630 * L_25 = __this->get_defaultNoBounce_2();
		Vector3_t3722313464  L_26 = L_25->get_Paddle2Pos_1();
		GameState_t184198630 * L_27 = __this->get_defaultNoBounce_2();
		Vector3_t3722313464  L_28 = L_27->get_BallPos_2();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_29 = Vector3_get_zero_m1409827619(NULL /*static, unused*/, /*hidden argument*/NULL);
		GameState_t184198630 * L_30 = (GameState_t184198630 *)il2cpp_codegen_object_new(GameState_t184198630_il2cpp_TypeInfo_var);
		GameState__ctor_m1856705146(L_30, L_24, L_26, L_28, L_29, (0.0f), /*hidden argument*/NULL);
		__this->set_custom_4(L_30);
		return;
	}
}
// System.Void StateHolder::Update()
extern "C"  void StateHolder_Update_m334322068 (StateHolder_t2173541826 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StateHolder_Update_m334322068_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1431474628_il2cpp_TypeInfo_var);
		bool L_0 = Input_GetKeyDown_m17791917(NULL /*static, unused*/, ((int32_t)49), /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		GameState_t184198630 * L_1 = __this->get_defaultNoBounce_2();
		StateHolder_LoadState_m3722913745(__this, L_1, /*hidden argument*/NULL);
	}

IL_0018:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1431474628_il2cpp_TypeInfo_var);
		bool L_2 = Input_GetKeyDown_m17791917(NULL /*static, unused*/, ((int32_t)50), /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0030;
		}
	}
	{
		GameState_t184198630 * L_3 = __this->get_defaultBounce_3();
		StateHolder_LoadState_m3722913745(__this, L_3, /*hidden argument*/NULL);
	}

IL_0030:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1431474628_il2cpp_TypeInfo_var);
		bool L_4 = Input_GetKeyDown_m17791917(NULL /*static, unused*/, ((int32_t)13), /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0042;
		}
	}
	{
		StateHolder_SaveState_m2228537647(__this, /*hidden argument*/NULL);
	}

IL_0042:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1431474628_il2cpp_TypeInfo_var);
		bool L_5 = Input_GetKeyDown_m17791917(NULL /*static, unused*/, 8, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0059;
		}
	}
	{
		GameState_t184198630 * L_6 = __this->get_custom_4();
		StateHolder_LoadState_m3722913745(__this, L_6, /*hidden argument*/NULL);
	}

IL_0059:
	{
		return;
	}
}
// System.Void StateHolder::LoadState(GameState)
extern "C"  void StateHolder_LoadState_m3722913745 (StateHolder_t2173541826 * __this, GameState_t184198630 * ___state0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StateHolder_LoadState_m3722913745_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		GameObject_t1113636619 * L_0 = __this->get_Pad1_5();
		Transform_t3600365921 * L_1 = GameObject_get_transform_m1369836730(L_0, /*hidden argument*/NULL);
		GameState_t184198630 * L_2 = ___state0;
		Vector3_t3722313464  L_3 = L_2->get_Paddle1Pos_0();
		Transform_set_localPosition_m4128471975(L_1, L_3, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_4 = __this->get_Pad2_6();
		Transform_t3600365921 * L_5 = GameObject_get_transform_m1369836730(L_4, /*hidden argument*/NULL);
		GameState_t184198630 * L_6 = ___state0;
		Vector3_t3722313464  L_7 = L_6->get_Paddle2Pos_1();
		Transform_set_localPosition_m4128471975(L_5, L_7, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_8 = __this->get_Ball_7();
		Transform_t3600365921 * L_9 = GameObject_get_transform_m1369836730(L_8, /*hidden argument*/NULL);
		GameState_t184198630 * L_10 = ___state0;
		Vector3_t3722313464  L_11 = L_10->get_BallPos_2();
		Transform_set_localPosition_m4128471975(L_9, L_11, /*hidden argument*/NULL);
		BallController_t2992829471 * L_12 = __this->get_ballInfo_8();
		GameState_t184198630 * L_13 = ___state0;
		Vector3_t3722313464  L_14 = L_13->get_BallDir_3();
		L_12->set_direction_16(L_14);
		BallController_t2992829471 * L_15 = __this->get_ballInfo_8();
		GameState_t184198630 * L_16 = ___state0;
		float L_17 = L_16->get_speed_4();
		L_15->set_localSpeed_14(L_17);
		GameObject_t1113636619 * L_18 = __this->get_Pad2_6();
		Rigidbody_t3916780224 * L_19 = GameObject_GetComponent_TisRigidbody_t3916780224_m564316479(L_18, /*hidden argument*/GameObject_GetComponent_TisRigidbody_t3916780224_m564316479_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_20 = Vector3_get_zero_m1409827619(NULL /*static, unused*/, /*hidden argument*/NULL);
		Rigidbody_set_velocity_m2899403247(L_19, L_20, /*hidden argument*/NULL);
		return;
	}
}
// System.Void StateHolder::SaveState()
extern "C"  void StateHolder_SaveState_m2228537647 (StateHolder_t2173541826 * __this, const RuntimeMethod* method)
{
	{
		GameState_t184198630 * L_0 = __this->get_custom_4();
		GameObject_t1113636619 * L_1 = __this->get_Pad1_5();
		Transform_t3600365921 * L_2 = GameObject_get_transform_m1369836730(L_1, /*hidden argument*/NULL);
		Vector3_t3722313464  L_3 = Transform_get_localPosition_m4234289348(L_2, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_4 = __this->get_Pad2_6();
		Transform_t3600365921 * L_5 = GameObject_get_transform_m1369836730(L_4, /*hidden argument*/NULL);
		Vector3_t3722313464  L_6 = Transform_get_localPosition_m4234289348(L_5, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_7 = __this->get_Ball_7();
		Transform_t3600365921 * L_8 = GameObject_get_transform_m1369836730(L_7, /*hidden argument*/NULL);
		Vector3_t3722313464  L_9 = Transform_get_localPosition_m4234289348(L_8, /*hidden argument*/NULL);
		BallController_t2992829471 * L_10 = __this->get_ballInfo_8();
		Vector3_t3722313464  L_11 = L_10->get_direction_16();
		BallController_t2992829471 * L_12 = __this->get_ballInfo_8();
		float L_13 = L_12->get_localSpeed_14();
		GameState_Update_m1196730667(L_0, L_3, L_6, L_9, L_11, L_13, /*hidden argument*/NULL);
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
// System.Void WallPopIn::.ctor()
extern "C"  void WallPopIn__ctor_m907099497 (WallPopIn_t1055995948 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void WallPopIn::Start()
extern "C"  void WallPopIn_Start_m2958924835 (WallPopIn_t1055995948 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WallPopIn_Start_m2958924835_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		MeshRenderer_t587009260 * L_0 = Component_GetComponent_TisMeshRenderer_t587009260_m2899624428(__this, /*hidden argument*/Component_GetComponent_TisMeshRenderer_t587009260_m2899624428_RuntimeMethod_var);
		__this->set_mr_4(L_0);
		Renderer_t2627027031 * L_1 = Component_GetComponent_TisRenderer_t2627027031_m2651633905(__this, /*hidden argument*/Component_GetComponent_TisRenderer_t2627027031_m2651633905_RuntimeMethod_var);
		__this->set_m_5(L_1);
		MeshRenderer_t587009260 * L_2 = __this->get_mr_4();
		Renderer_set_enabled_m1727253150(L_2, (bool)0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void WallPopIn::Update()
extern "C"  void WallPopIn_Update_m1529058016 (WallPopIn_t1055995948 * __this, const RuntimeMethod* method)
{
	Color_t2555686324  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Color_t2555686324  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Color_t2555686324  V_2;
	memset(&V_2, 0, sizeof(V_2));
	{
		float L_0 = __this->get_timer_3();
		if ((!(((float)L_0) > ((float)(0.0f)))))
		{
			goto IL_00a1;
		}
	}
	{
		float L_1 = __this->get_timer_3();
		float L_2 = Time_get_deltaTime_m372706562(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_timer_3(((float)il2cpp_codegen_subtract((float)L_1, (float)L_2)));
		Renderer_t2627027031 * L_3 = __this->get_m_5();
		Material_t340375123 * L_4 = Renderer_get_material_m4171603682(L_3, /*hidden argument*/NULL);
		Renderer_t2627027031 * L_5 = __this->get_m_5();
		Material_t340375123 * L_6 = Renderer_get_material_m4171603682(L_5, /*hidden argument*/NULL);
		Color_t2555686324  L_7 = Material_get_color_m3827673574(L_6, /*hidden argument*/NULL);
		V_0 = L_7;
		float L_8 = (&V_0)->get_r_0();
		Renderer_t2627027031 * L_9 = __this->get_m_5();
		Material_t340375123 * L_10 = Renderer_get_material_m4171603682(L_9, /*hidden argument*/NULL);
		Color_t2555686324  L_11 = Material_get_color_m3827673574(L_10, /*hidden argument*/NULL);
		V_1 = L_11;
		float L_12 = (&V_1)->get_g_1();
		Renderer_t2627027031 * L_13 = __this->get_m_5();
		Material_t340375123 * L_14 = Renderer_get_material_m4171603682(L_13, /*hidden argument*/NULL);
		Color_t2555686324  L_15 = Material_get_color_m3827673574(L_14, /*hidden argument*/NULL);
		V_2 = L_15;
		float L_16 = (&V_2)->get_b_2();
		float L_17 = __this->get_timer_3();
		Color_t2555686324  L_18;
		memset(&L_18, 0, sizeof(L_18));
		Color__ctor_m2943235014((&L_18), L_8, L_12, L_16, L_17, /*hidden argument*/NULL);
		Material_set_color_m1794818007(L_4, L_18, /*hidden argument*/NULL);
		float L_19 = __this->get_timer_3();
		if ((!(((float)L_19) < ((float)(0.0f)))))
		{
			goto IL_00a1;
		}
	}
	{
		MeshRenderer_t587009260 * L_20 = __this->get_mr_4();
		Renderer_set_enabled_m1727253150(L_20, (bool)0, /*hidden argument*/NULL);
	}

IL_00a1:
	{
		return;
	}
}
// System.Void WallPopIn::OnTriggerEnter(UnityEngine.Collider)
extern "C"  void WallPopIn_OnTriggerEnter_m2213833158 (WallPopIn_t1055995948 * __this, Collider_t1773347010 * ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WallPopIn_OnTriggerEnter_m2213833158_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Color_t2555686324  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Color_t2555686324  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Color_t2555686324  V_2;
	memset(&V_2, 0, sizeof(V_2));
	{
		Collider_t1773347010 * L_0 = ___other0;
		GameObject_t1113636619 * L_1 = Component_get_gameObject_m442555142(L_0, /*hidden argument*/NULL);
		bool L_2 = GameObject_CompareTag_m3144439756(L_1, _stringLiteral2261822918, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_008f;
		}
	}
	{
		MeshRenderer_t587009260 * L_3 = __this->get_mr_4();
		Renderer_set_enabled_m1727253150(L_3, (bool)1, /*hidden argument*/NULL);
		__this->set_timer_3((1.0f));
		Renderer_t2627027031 * L_4 = __this->get_m_5();
		Material_t340375123 * L_5 = Renderer_get_material_m4171603682(L_4, /*hidden argument*/NULL);
		Renderer_t2627027031 * L_6 = __this->get_m_5();
		Material_t340375123 * L_7 = Renderer_get_material_m4171603682(L_6, /*hidden argument*/NULL);
		Color_t2555686324  L_8 = Material_get_color_m3827673574(L_7, /*hidden argument*/NULL);
		V_0 = L_8;
		float L_9 = (&V_0)->get_r_0();
		Renderer_t2627027031 * L_10 = __this->get_m_5();
		Material_t340375123 * L_11 = Renderer_get_material_m4171603682(L_10, /*hidden argument*/NULL);
		Color_t2555686324  L_12 = Material_get_color_m3827673574(L_11, /*hidden argument*/NULL);
		V_1 = L_12;
		float L_13 = (&V_1)->get_g_1();
		Renderer_t2627027031 * L_14 = __this->get_m_5();
		Material_t340375123 * L_15 = Renderer_get_material_m4171603682(L_14, /*hidden argument*/NULL);
		Color_t2555686324  L_16 = Material_get_color_m3827673574(L_15, /*hidden argument*/NULL);
		V_2 = L_16;
		float L_17 = (&V_2)->get_b_2();
		float L_18 = __this->get_timer_3();
		Color_t2555686324  L_19;
		memset(&L_19, 0, sizeof(L_19));
		Color__ctor_m2943235014((&L_19), L_9, L_13, L_17, L_18, /*hidden argument*/NULL);
		Material_set_color_m1794818007(L_5, L_19, /*hidden argument*/NULL);
	}

IL_008f:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
