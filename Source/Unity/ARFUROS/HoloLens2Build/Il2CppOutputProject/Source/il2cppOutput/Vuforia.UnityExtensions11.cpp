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

#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"

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

// System.Action`1<UnityEngine.AsyncOperation>
struct Action_1_tCBF754C290FAE894631BED8FD56E9E22C4C187F9;
// System.Action`1<Vuforia.TrackableBehaviour/StatusChangeResult>
struct Action_1_t6AC22AF716ED9149BAB0EF67822C504F3206A72E;
// System.AsyncCallback
struct AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4;
// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
// System.Collections.Generic.Dictionary`2/Entry<System.String,Vuforia.WebCamProfile/ProfileData>[]
struct EntryU5BU5D_t40CAC9E88675AB5C85F438966487F0BA07B5B243;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,Vuforia.WebCamProfile/ProfileData>
struct KeyCollection_t63B4436D6F691E27AAAE477AB59BAD6DF2879A12;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,Vuforia.WebCamProfile/ProfileData>
struct ValueCollection_tB3624341B82294FADCFFFEB88D30DE8FFD302C51;
// System.Collections.Generic.Dictionary`2<System.Object,Vuforia.WebCamProfile/ProfileData>
struct Dictionary_2_tA5AF8276D11870C8297C218E08DBEF84C31A1B28;
// System.Collections.Generic.Dictionary`2<System.String,Vuforia.WebCamProfile/ProfileData>
struct Dictionary_2_t3039270ADBC232731ABE07616CAC5DE79149ABE2;
// System.Collections.Generic.Dictionary`2<Vuforia.PIXEL_FORMAT,Vuforia.UnmanagedImage>
struct Dictionary_2_tEFA9BA4A93DC841D9D0D123D03831FE455C9DFA3;
// System.Collections.Generic.ICollection`1<System.Action`1<Vuforia.TrackableBehaviour/StatusChangeResult>>
struct ICollection_1_tC566D56CFA697F51D6B8F237D5E076E19E339A0F;
// System.Collections.Generic.ICollection`1<System.Action`1<Vuforia.TrackableBehaviour/StatusInfoChangeResult>>
struct ICollection_1_tE547E07AF910A13F38B0BF52149BDF60387C9448;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_t1F07EAC22CC1D4F279164B144240E4718BD7E7A9;
// System.Collections.Generic.LinkedList`1<Vuforia.VuforiaManager/TrackableIdPair>
struct LinkedList_1_t12E84E629C56E3A7185D46C82C901945FF66CA0B;
// System.DelegateData
struct DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE;
// System.Delegate[]
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86;
// System.Func`3<System.String,Vuforia.WebCamProfile/ProfileData,Vuforia.IWebCamTexAdaptor>
struct Func_3_t87BC373F33E919F51562B16AA76D49243BEAED30;
// System.IAsyncResult
struct IAsyncResult_t8E194308510B375B42432981AE5E7488C458D598;
// System.Int32[]
struct Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83;
// System.Object[]
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.String
struct String_t;
// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017;
// UnityEngine.AsyncOperation
struct AsyncOperation_t304C51ABED8AE734CC8DDDFE13013D8D5A44641D;
// UnityEngine.Behaviour
struct Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8;
// UnityEngine.Camera
struct Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0;
// UnityEngine.Camera[]
struct CameraU5BU5D_t2A1957E88FB79357C12B87941970D776D30E90F9;
// UnityEngine.Collider
struct Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF;
// UnityEngine.Collider[]
struct ColliderU5BU5D_t70D1FDAE17E4359298B2BAA828048D1B7CFFE252;
// UnityEngine.Component
struct Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621;
// UnityEngine.GameObject
struct GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F;
// UnityEngine.Material
struct Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598;
// UnityEngine.Mesh
struct Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C;
// UnityEngine.MeshFilter
struct MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0;
// UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0;
// UnityEngine.Renderer
struct Renderer_t0556D67DD582620D1F495627EDE30D03284151F4;
// UnityEngine.Renderer[]
struct RendererU5BU5D_t711BACBBBFC0E06179ADB8932DBA208665108C93;
// UnityEngine.Texture
struct Texture_t387FE83BB848001FD06B14707AEA6D5A0F6A95F4;
// UnityEngine.Transform
struct Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28;
// UnityEngine.WebCamTexture
struct WebCamTexture_tEC97A7A0A101B159FEC9A3E95B14E41DD84EFD73;
// Vuforia.CameraCalibrationComparer
struct CameraCalibrationComparer_t72B785E0B7FDD0F2768912072A927135BD99E0D5;
// Vuforia.IPlayModeEditorUtility
struct IPlayModeEditorUtility_t455513D381F5848C883EBF7AC34494311660BF3A;
// Vuforia.IWebCamTexAdaptor
struct IWebCamTexAdaptor_tBC96CE703C41910E601CA0E7F0940BF09E6F3225;
// Vuforia.LateLatchingManager
struct LateLatchingManager_t7DB89BD7142F693327D85C14042D8DE9F3576707;
// Vuforia.Trackable
struct Trackable_t23C5878DB2854465E7DBFBA1EEA3FC4BE20B53BD;
// Vuforia.TrackableBehaviour
struct TrackableBehaviour_tEB5841E37069E05AACF43C4F6E75EE1B6B49D445;
// Vuforia.TrackerData/TrackableResultData[]
struct TrackableResultDataU5BU5D_t02EFEEC5DF5FE385935CEADA8A722AF05776FAC7;
// Vuforia.TrackerData/VirtualButtonData[]
struct VirtualButtonDataU5BU5D_tF8F3BB1AA5532D83349ED228E208321907DBAF24;
// Vuforia.TrackerData/VuMarkTargetData[]
struct VuMarkTargetDataU5BU5D_tD6A0E6BC08B2980FBAE15CE1EB321240421D9CB6;
// Vuforia.TrackerData/VuMarkTargetResultData[]
struct VuMarkTargetResultDataU5BU5D_t365DEE5FF4733F805056DBE46FAC98EF3F7024A5;
// Vuforia.VuMarkBehaviour
struct VuMarkBehaviour_t3313B0FDC425C763B9FF22F5249204E90C08125D;
// Vuforia.VuforiaManager
struct VuforiaManager_tC5EAD9B005741ED776A8B4C47B5B583BA79EF0D4;
// Vuforia.VuforiaMonoBehaviour
struct VuforiaMonoBehaviour_t77BA0F1340884D0EDFE4A2D81BEACC760157309F;
// Vuforia.WebCamARController/<>c
struct U3CU3Ec_tEEB2B24B40B9A5CB6D7DA0C0CFCDF54DFA0ED399;
// Vuforia.WebCamProfile
struct WebCamProfile_t412A1646A88AF83CE44EE036E0E513F2E867373B;
// Vuforia.WebCamTexAdaptor
struct WebCamTexAdaptor_t5D6B63102D1CE806620EC1D2CD6C98FB5739AF13;
// Vuforia.WireframeBehaviour
struct WireframeBehaviour_t2D40F2BC6BB4E6A6FB8A02A7339960FAB0B68971;
// Vuforia.WireframeBehaviour[]
struct WireframeBehaviourU5BU5D_tDEDB3E75E88EF7885B300EA39B1C524378CB450B;
// Vuforia.WireframeTrackableEventHandler
struct WireframeTrackableEventHandler_tF7638FBCA1F66A9A53BE2D4715F9869AEA286B81;
// Vuforia.WorldCenterTrackableBehaviour
struct WorldCenterTrackableBehaviour_t69BEFC84BED919159FE1B9CD06B9D70326BF9CA0;

IL2CPP_EXTERN_C RuntimeClass* Action_1_t6AC22AF716ED9149BAB0EF67822C504F3206A72E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IPlayModeEditorUtility_t455513D381F5848C883EBF7AC34494311660BF3A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tEEB2B24B40B9A5CB6D7DA0C0CFCDF54DFA0ED399_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* VuforiaManager_tC5EAD9B005741ED776A8B4C47B5B583BA79EF0D4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WebCamTexAdaptor_t5D6B63102D1CE806620EC1D2CD6C98FB5739AF13_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WebCamTexture_tEC97A7A0A101B159FEC9A3E95B14E41DD84EFD73_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral2E7A3758EF7FA247816915839E5EC2FDF0333645;
IL2CPP_EXTERN_C String_t* _stringLiteral36BDCAB142B91EE6C030073C24B3B2A5605ED74A;
IL2CPP_EXTERN_C String_t* _stringLiteralA4F567B120FD121F5453D7FBBE92A3F258EAC0F2;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1__ctor_m53259879184872E10895C4F37D375FC10EC3BE35_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisMeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0_mF3F89565A9CEFF85AA1FB27C6EC64BE590DC386B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisTrackableBehaviour_tEB5841E37069E05AACF43C4F6E75EE1B6B49D445_mF3E7AB6B516D899DA0F49B3E2DA39F6186D5A908_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentsInChildren_TisCollider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF_mA42E7442538CDBEC48DB8C54190ABB4C6920000A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentsInChildren_TisRenderer_t0556D67DD582620D1F495627EDE30D03284151F4_m4DE45B0EE85325E8C64FDFB5DEDA8EBC70A892F0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentsInChildren_TisWireframeBehaviour_t2D40F2BC6BB4E6A6FB8A02A7339960FAB0B68971_m88A60682A7FEF0387103BC5198203CEDF5C21A44_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_m01C2AF0FFA5776F427BA0FDC957E9B9F3C513972_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_m9FCCC90AD328074EB4D4E3C4689CAED3115A5A2C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponentsInChildren_TisCamera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34_m124464CC8EC121898C98E8FA7538AD4714D3B494_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WireframeTrackableEventHandler_OnTrackableStateChanged_mBE7A0A3EF07F422847FBBB0662421246B04FE6A0_RuntimeMethod_var;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec_U3C_ctorU3Eb__6_0_m5288A9A3A5BB345AC2BE22FEAA121F61F571C0F8_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec__cctor_m8C5126DCFFE442DD850EA64EC0864FC07E3956E1_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WebCamProfile_GetProfile_mAFA671DEF4EFE7A94F6318AEAB184EBEAA33AED5_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WebCamProfile_ProfileAvailable_mAE7EB4BABAA53171DFCFFE8EDBC286A3A1C497B5_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WebCamProfile__ctor_m2A46DD651FFB9F5B9B4FA0B263CC32C418C92EAF_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WebCamTexAdaptor_CheckPermissions_m7100A3C263BF6E33069FD1D08B6AB4C1FA2E6BD0_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WebCamTexAdaptor__ctor_m1AE0C6DB1306DC7C40A3ACD6FC35EF7141D9D725_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WireframeBehaviour_OnDrawGizmos_m3B70365DDC39B805C8F572D73F63026BDC918DAA_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WireframeBehaviour_OnRenderObject_mB1D0E97FDD9B5FB6BF7EB108899408F103D180DE_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WireframeBehaviour_Start_mE57E0913E877DACD05BA985FEB68FDE96F50FFEE_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WireframeTrackableEventHandler_OnTrackingFound_m9EDCAB66EDCE9280D07D94DB60355AA7EC0FF172_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WireframeTrackableEventHandler_OnTrackingLost_mEDA94593DDDDCE9DBB846A69EE8EC55F85809C04_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WireframeTrackableEventHandler_Start_m629637C45F5F9836DD77E3078163B355C5DB0538_MetadataUsageId;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct TrackableResultData_tA964110473BFD006708B67E537F021944C1D923D ;
struct VirtualButtonData_t6F69C8EDFB6AE8B0DFD0E896664278FDA6869367 ;
struct VuMarkTargetData_t0C9EDF23529C30E5299C0D3D383F75D7ADA1EF5D ;
struct VuMarkTargetResultData_t541A47433FA53BEDB4182F6C545472E511F296CA ;

struct Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83;
struct CameraU5BU5D_t2A1957E88FB79357C12B87941970D776D30E90F9;
struct ColliderU5BU5D_t70D1FDAE17E4359298B2BAA828048D1B7CFFE252;
struct RendererU5BU5D_t711BACBBBFC0E06179ADB8932DBA208665108C93;
struct Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28;
struct WireframeBehaviourU5BU5D_tDEDB3E75E88EF7885B300EA39B1C524378CB450B;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

struct Il2CppArrayBounds;

// System.Array


// System.Collections.Generic.Dictionary`2<System.String,Vuforia.WebCamProfile/ProfileData>
struct  Dictionary_2_t3039270ADBC232731ABE07616CAC5DE79149ABE2  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t40CAC9E88675AB5C85F438966487F0BA07B5B243* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_t63B4436D6F691E27AAAE477AB59BAD6DF2879A12 * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_tB3624341B82294FADCFFFEB88D30DE8FFD302C51 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t3039270ADBC232731ABE07616CAC5DE79149ABE2, ___buckets_0)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t3039270ADBC232731ABE07616CAC5DE79149ABE2, ___entries_1)); }
	inline EntryU5BU5D_t40CAC9E88675AB5C85F438966487F0BA07B5B243* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t40CAC9E88675AB5C85F438966487F0BA07B5B243** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t40CAC9E88675AB5C85F438966487F0BA07B5B243* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t3039270ADBC232731ABE07616CAC5DE79149ABE2, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t3039270ADBC232731ABE07616CAC5DE79149ABE2, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t3039270ADBC232731ABE07616CAC5DE79149ABE2, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t3039270ADBC232731ABE07616CAC5DE79149ABE2, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t3039270ADBC232731ABE07616CAC5DE79149ABE2, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t3039270ADBC232731ABE07616CAC5DE79149ABE2, ___keys_7)); }
	inline KeyCollection_t63B4436D6F691E27AAAE477AB59BAD6DF2879A12 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t63B4436D6F691E27AAAE477AB59BAD6DF2879A12 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t63B4436D6F691E27AAAE477AB59BAD6DF2879A12 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t3039270ADBC232731ABE07616CAC5DE79149ABE2, ___values_8)); }
	inline ValueCollection_tB3624341B82294FADCFFFEB88D30DE8FFD302C51 * get_values_8() const { return ___values_8; }
	inline ValueCollection_tB3624341B82294FADCFFFEB88D30DE8FFD302C51 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_tB3624341B82294FADCFFFEB88D30DE8FFD302C51 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t3039270ADBC232731ABE07616CAC5DE79149ABE2, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.String
struct  String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


// System.ValueType
struct  ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_com
{
};

// UnityEngine.YieldInstruction
struct  YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshaled_com
{
};

// Vuforia.WebCamARController/<>c
struct  U3CU3Ec_tEEB2B24B40B9A5CB6D7DA0C0CFCDF54DFA0ED399  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_tEEB2B24B40B9A5CB6D7DA0C0CFCDF54DFA0ED399_StaticFields
{
public:
	// Vuforia.WebCamARController/<>c Vuforia.WebCamARController/<>c::<>9
	U3CU3Ec_tEEB2B24B40B9A5CB6D7DA0C0CFCDF54DFA0ED399 * ___U3CU3E9_0;
	// System.Func`3<System.String,Vuforia.WebCamProfile/ProfileData,Vuforia.IWebCamTexAdaptor> Vuforia.WebCamARController/<>c::<>9__6_0
	Func_3_t87BC373F33E919F51562B16AA76D49243BEAED30 * ___U3CU3E9__6_0_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_tEEB2B24B40B9A5CB6D7DA0C0CFCDF54DFA0ED399_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_tEEB2B24B40B9A5CB6D7DA0C0CFCDF54DFA0ED399 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_tEEB2B24B40B9A5CB6D7DA0C0CFCDF54DFA0ED399 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_tEEB2B24B40B9A5CB6D7DA0C0CFCDF54DFA0ED399 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__6_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_tEEB2B24B40B9A5CB6D7DA0C0CFCDF54DFA0ED399_StaticFields, ___U3CU3E9__6_0_1)); }
	inline Func_3_t87BC373F33E919F51562B16AA76D49243BEAED30 * get_U3CU3E9__6_0_1() const { return ___U3CU3E9__6_0_1; }
	inline Func_3_t87BC373F33E919F51562B16AA76D49243BEAED30 ** get_address_of_U3CU3E9__6_0_1() { return &___U3CU3E9__6_0_1; }
	inline void set_U3CU3E9__6_0_1(Func_3_t87BC373F33E919F51562B16AA76D49243BEAED30 * value)
	{
		___U3CU3E9__6_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__6_0_1), (void*)value);
	}
};


// Vuforia.WebCamTexAdaptor
struct  WebCamTexAdaptor_t5D6B63102D1CE806620EC1D2CD6C98FB5739AF13  : public RuntimeObject
{
public:
	// UnityEngine.WebCamTexture Vuforia.WebCamTexAdaptor::mWebCamTexture
	WebCamTexture_tEC97A7A0A101B159FEC9A3E95B14E41DD84EFD73 * ___mWebCamTexture_0;
	// UnityEngine.AsyncOperation Vuforia.WebCamTexAdaptor::mCheckCameraPermissions
	AsyncOperation_t304C51ABED8AE734CC8DDDFE13013D8D5A44641D * ___mCheckCameraPermissions_1;

public:
	inline static int32_t get_offset_of_mWebCamTexture_0() { return static_cast<int32_t>(offsetof(WebCamTexAdaptor_t5D6B63102D1CE806620EC1D2CD6C98FB5739AF13, ___mWebCamTexture_0)); }
	inline WebCamTexture_tEC97A7A0A101B159FEC9A3E95B14E41DD84EFD73 * get_mWebCamTexture_0() const { return ___mWebCamTexture_0; }
	inline WebCamTexture_tEC97A7A0A101B159FEC9A3E95B14E41DD84EFD73 ** get_address_of_mWebCamTexture_0() { return &___mWebCamTexture_0; }
	inline void set_mWebCamTexture_0(WebCamTexture_tEC97A7A0A101B159FEC9A3E95B14E41DD84EFD73 * value)
	{
		___mWebCamTexture_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mWebCamTexture_0), (void*)value);
	}

	inline static int32_t get_offset_of_mCheckCameraPermissions_1() { return static_cast<int32_t>(offsetof(WebCamTexAdaptor_t5D6B63102D1CE806620EC1D2CD6C98FB5739AF13, ___mCheckCameraPermissions_1)); }
	inline AsyncOperation_t304C51ABED8AE734CC8DDDFE13013D8D5A44641D * get_mCheckCameraPermissions_1() const { return ___mCheckCameraPermissions_1; }
	inline AsyncOperation_t304C51ABED8AE734CC8DDDFE13013D8D5A44641D ** get_address_of_mCheckCameraPermissions_1() { return &___mCheckCameraPermissions_1; }
	inline void set_mCheckCameraPermissions_1(AsyncOperation_t304C51ABED8AE734CC8DDDFE13013D8D5A44641D * value)
	{
		___mCheckCameraPermissions_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mCheckCameraPermissions_1), (void*)value);
	}
};


// System.Boolean
struct  Boolean_tB53F6830F670160873277339AA58F15CAED4399C 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// System.Enum
struct  Enum_t2AF27C02B8653AE29442467390005ABC74D8F521  : public ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF
{
public:

public:
};

struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_com
{
};

// System.Int32
struct  Int32_t585191389E07734F19F3156FF88FB3EF4800D102 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_t585191389E07734F19F3156FF88FB3EF4800D102, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


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


// System.Single
struct  Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};


// System.Void
struct  Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017__padding[1];
	};

public:
};


// UnityEngine.Color
struct  Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 
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
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};


// UnityEngine.Matrix4x4
struct  Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA 
{
public:
	// System.Single UnityEngine.Matrix4x4::m00
	float ___m00_0;
	// System.Single UnityEngine.Matrix4x4::m10
	float ___m10_1;
	// System.Single UnityEngine.Matrix4x4::m20
	float ___m20_2;
	// System.Single UnityEngine.Matrix4x4::m30
	float ___m30_3;
	// System.Single UnityEngine.Matrix4x4::m01
	float ___m01_4;
	// System.Single UnityEngine.Matrix4x4::m11
	float ___m11_5;
	// System.Single UnityEngine.Matrix4x4::m21
	float ___m21_6;
	// System.Single UnityEngine.Matrix4x4::m31
	float ___m31_7;
	// System.Single UnityEngine.Matrix4x4::m02
	float ___m02_8;
	// System.Single UnityEngine.Matrix4x4::m12
	float ___m12_9;
	// System.Single UnityEngine.Matrix4x4::m22
	float ___m22_10;
	// System.Single UnityEngine.Matrix4x4::m32
	float ___m32_11;
	// System.Single UnityEngine.Matrix4x4::m03
	float ___m03_12;
	// System.Single UnityEngine.Matrix4x4::m13
	float ___m13_13;
	// System.Single UnityEngine.Matrix4x4::m23
	float ___m23_14;
	// System.Single UnityEngine.Matrix4x4::m33
	float ___m33_15;

public:
	inline static int32_t get_offset_of_m00_0() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m00_0)); }
	inline float get_m00_0() const { return ___m00_0; }
	inline float* get_address_of_m00_0() { return &___m00_0; }
	inline void set_m00_0(float value)
	{
		___m00_0 = value;
	}

	inline static int32_t get_offset_of_m10_1() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m10_1)); }
	inline float get_m10_1() const { return ___m10_1; }
	inline float* get_address_of_m10_1() { return &___m10_1; }
	inline void set_m10_1(float value)
	{
		___m10_1 = value;
	}

	inline static int32_t get_offset_of_m20_2() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m20_2)); }
	inline float get_m20_2() const { return ___m20_2; }
	inline float* get_address_of_m20_2() { return &___m20_2; }
	inline void set_m20_2(float value)
	{
		___m20_2 = value;
	}

	inline static int32_t get_offset_of_m30_3() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m30_3)); }
	inline float get_m30_3() const { return ___m30_3; }
	inline float* get_address_of_m30_3() { return &___m30_3; }
	inline void set_m30_3(float value)
	{
		___m30_3 = value;
	}

	inline static int32_t get_offset_of_m01_4() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m01_4)); }
	inline float get_m01_4() const { return ___m01_4; }
	inline float* get_address_of_m01_4() { return &___m01_4; }
	inline void set_m01_4(float value)
	{
		___m01_4 = value;
	}

	inline static int32_t get_offset_of_m11_5() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m11_5)); }
	inline float get_m11_5() const { return ___m11_5; }
	inline float* get_address_of_m11_5() { return &___m11_5; }
	inline void set_m11_5(float value)
	{
		___m11_5 = value;
	}

	inline static int32_t get_offset_of_m21_6() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m21_6)); }
	inline float get_m21_6() const { return ___m21_6; }
	inline float* get_address_of_m21_6() { return &___m21_6; }
	inline void set_m21_6(float value)
	{
		___m21_6 = value;
	}

	inline static int32_t get_offset_of_m31_7() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m31_7)); }
	inline float get_m31_7() const { return ___m31_7; }
	inline float* get_address_of_m31_7() { return &___m31_7; }
	inline void set_m31_7(float value)
	{
		___m31_7 = value;
	}

	inline static int32_t get_offset_of_m02_8() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m02_8)); }
	inline float get_m02_8() const { return ___m02_8; }
	inline float* get_address_of_m02_8() { return &___m02_8; }
	inline void set_m02_8(float value)
	{
		___m02_8 = value;
	}

	inline static int32_t get_offset_of_m12_9() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m12_9)); }
	inline float get_m12_9() const { return ___m12_9; }
	inline float* get_address_of_m12_9() { return &___m12_9; }
	inline void set_m12_9(float value)
	{
		___m12_9 = value;
	}

	inline static int32_t get_offset_of_m22_10() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m22_10)); }
	inline float get_m22_10() const { return ___m22_10; }
	inline float* get_address_of_m22_10() { return &___m22_10; }
	inline void set_m22_10(float value)
	{
		___m22_10 = value;
	}

	inline static int32_t get_offset_of_m32_11() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m32_11)); }
	inline float get_m32_11() const { return ___m32_11; }
	inline float* get_address_of_m32_11() { return &___m32_11; }
	inline void set_m32_11(float value)
	{
		___m32_11 = value;
	}

	inline static int32_t get_offset_of_m03_12() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m03_12)); }
	inline float get_m03_12() const { return ___m03_12; }
	inline float* get_address_of_m03_12() { return &___m03_12; }
	inline void set_m03_12(float value)
	{
		___m03_12 = value;
	}

	inline static int32_t get_offset_of_m13_13() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m13_13)); }
	inline float get_m13_13() const { return ___m13_13; }
	inline float* get_address_of_m13_13() { return &___m13_13; }
	inline void set_m13_13(float value)
	{
		___m13_13 = value;
	}

	inline static int32_t get_offset_of_m23_14() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m23_14)); }
	inline float get_m23_14() const { return ___m23_14; }
	inline float* get_address_of_m23_14() { return &___m23_14; }
	inline void set_m23_14(float value)
	{
		___m23_14 = value;
	}

	inline static int32_t get_offset_of_m33_15() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m33_15)); }
	inline float get_m33_15() const { return ___m33_15; }
	inline float* get_address_of_m33_15() { return &___m33_15; }
	inline void set_m33_15(float value)
	{
		___m33_15 = value;
	}
};

struct Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA_StaticFields
{
public:
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::zeroMatrix
	Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  ___zeroMatrix_16;
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::identityMatrix
	Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  ___identityMatrix_17;

public:
	inline static int32_t get_offset_of_zeroMatrix_16() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA_StaticFields, ___zeroMatrix_16)); }
	inline Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  get_zeroMatrix_16() const { return ___zeroMatrix_16; }
	inline Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA * get_address_of_zeroMatrix_16() { return &___zeroMatrix_16; }
	inline void set_zeroMatrix_16(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  value)
	{
		___zeroMatrix_16 = value;
	}

	inline static int32_t get_offset_of_identityMatrix_17() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA_StaticFields, ___identityMatrix_17)); }
	inline Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  get_identityMatrix_17() const { return ___identityMatrix_17; }
	inline Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA * get_address_of_identityMatrix_17() { return &___identityMatrix_17; }
	inline void set_identityMatrix_17(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  value)
	{
		___identityMatrix_17 = value;
	}
};


// UnityEngine.Quaternion
struct  Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 
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
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  value)
	{
		___identityQuaternion_4 = value;
	}
};


// UnityEngine.Vector3
struct  Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___zeroVector_5)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___oneVector_6)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___upVector_7)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___downVector_8)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___leftVector_9)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___rightVector_10)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___forwardVector_11)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___backVector_12)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___negativeInfinityVector_14 = value;
	}
};


// UnityEngine.Vector4
struct  Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E 
{
public:
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}

	inline static int32_t get_offset_of_w_4() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E, ___w_4)); }
	inline float get_w_4() const { return ___w_4; }
	inline float* get_address_of_w_4() { return &___w_4; }
	inline void set_w_4(float value)
	{
		___w_4 = value;
	}
};

struct Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E_StaticFields
{
public:
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___negativeInfinityVector_8;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E_StaticFields, ___zeroVector_5)); }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E_StaticFields, ___oneVector_6)); }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_7() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E_StaticFields, ___positiveInfinityVector_7)); }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  get_positiveInfinityVector_7() const { return ___positiveInfinityVector_7; }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * get_address_of_positiveInfinityVector_7() { return &___positiveInfinityVector_7; }
	inline void set_positiveInfinityVector_7(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  value)
	{
		___positiveInfinityVector_7 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E_StaticFields, ___negativeInfinityVector_8)); }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  get_negativeInfinityVector_8() const { return ___negativeInfinityVector_8; }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * get_address_of_negativeInfinityVector_8() { return &___negativeInfinityVector_8; }
	inline void set_negativeInfinityVector_8(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  value)
	{
		___negativeInfinityVector_8 = value;
	}
};


// Vuforia.VuforiaManager/AutoRotationState
struct  AutoRotationState_tBA414656198ED259D653210D2C8840238234E33B 
{
public:
	// System.Boolean Vuforia.VuforiaManager/AutoRotationState::setOnPause
	bool ___setOnPause_0;
	// System.Boolean Vuforia.VuforiaManager/AutoRotationState::autorotateToPortrait
	bool ___autorotateToPortrait_1;
	// System.Boolean Vuforia.VuforiaManager/AutoRotationState::autorotateToPortraitUpsideDown
	bool ___autorotateToPortraitUpsideDown_2;
	// System.Boolean Vuforia.VuforiaManager/AutoRotationState::autorotateToLandscapeLeft
	bool ___autorotateToLandscapeLeft_3;
	// System.Boolean Vuforia.VuforiaManager/AutoRotationState::autorotateToLandscapeRight
	bool ___autorotateToLandscapeRight_4;

public:
	inline static int32_t get_offset_of_setOnPause_0() { return static_cast<int32_t>(offsetof(AutoRotationState_tBA414656198ED259D653210D2C8840238234E33B, ___setOnPause_0)); }
	inline bool get_setOnPause_0() const { return ___setOnPause_0; }
	inline bool* get_address_of_setOnPause_0() { return &___setOnPause_0; }
	inline void set_setOnPause_0(bool value)
	{
		___setOnPause_0 = value;
	}

	inline static int32_t get_offset_of_autorotateToPortrait_1() { return static_cast<int32_t>(offsetof(AutoRotationState_tBA414656198ED259D653210D2C8840238234E33B, ___autorotateToPortrait_1)); }
	inline bool get_autorotateToPortrait_1() const { return ___autorotateToPortrait_1; }
	inline bool* get_address_of_autorotateToPortrait_1() { return &___autorotateToPortrait_1; }
	inline void set_autorotateToPortrait_1(bool value)
	{
		___autorotateToPortrait_1 = value;
	}

	inline static int32_t get_offset_of_autorotateToPortraitUpsideDown_2() { return static_cast<int32_t>(offsetof(AutoRotationState_tBA414656198ED259D653210D2C8840238234E33B, ___autorotateToPortraitUpsideDown_2)); }
	inline bool get_autorotateToPortraitUpsideDown_2() const { return ___autorotateToPortraitUpsideDown_2; }
	inline bool* get_address_of_autorotateToPortraitUpsideDown_2() { return &___autorotateToPortraitUpsideDown_2; }
	inline void set_autorotateToPortraitUpsideDown_2(bool value)
	{
		___autorotateToPortraitUpsideDown_2 = value;
	}

	inline static int32_t get_offset_of_autorotateToLandscapeLeft_3() { return static_cast<int32_t>(offsetof(AutoRotationState_tBA414656198ED259D653210D2C8840238234E33B, ___autorotateToLandscapeLeft_3)); }
	inline bool get_autorotateToLandscapeLeft_3() const { return ___autorotateToLandscapeLeft_3; }
	inline bool* get_address_of_autorotateToLandscapeLeft_3() { return &___autorotateToLandscapeLeft_3; }
	inline void set_autorotateToLandscapeLeft_3(bool value)
	{
		___autorotateToLandscapeLeft_3 = value;
	}

	inline static int32_t get_offset_of_autorotateToLandscapeRight_4() { return static_cast<int32_t>(offsetof(AutoRotationState_tBA414656198ED259D653210D2C8840238234E33B, ___autorotateToLandscapeRight_4)); }
	inline bool get_autorotateToLandscapeRight_4() const { return ___autorotateToLandscapeRight_4; }
	inline bool* get_address_of_autorotateToLandscapeRight_4() { return &___autorotateToLandscapeRight_4; }
	inline void set_autorotateToLandscapeRight_4(bool value)
	{
		___autorotateToLandscapeRight_4 = value;
	}
};

// Native definition for P/Invoke marshalling of Vuforia.VuforiaManager/AutoRotationState
struct AutoRotationState_tBA414656198ED259D653210D2C8840238234E33B_marshaled_pinvoke
{
	int32_t ___setOnPause_0;
	int32_t ___autorotateToPortrait_1;
	int32_t ___autorotateToPortraitUpsideDown_2;
	int32_t ___autorotateToLandscapeLeft_3;
	int32_t ___autorotateToLandscapeRight_4;
};
// Native definition for COM marshalling of Vuforia.VuforiaManager/AutoRotationState
struct AutoRotationState_tBA414656198ED259D653210D2C8840238234E33B_marshaled_com
{
	int32_t ___setOnPause_0;
	int32_t ___autorotateToPortrait_1;
	int32_t ___autorotateToPortraitUpsideDown_2;
	int32_t ___autorotateToLandscapeLeft_3;
	int32_t ___autorotateToLandscapeRight_4;
};

// Vuforia.VuforiaRenderer/Vec2I
#pragma pack(push, tp, 1)
struct  Vec2I_t83686054D6B780BA6C82D6AABFC5F5F1F435CD24 
{
public:
	// System.Int32 Vuforia.VuforiaRenderer/Vec2I::x
	int32_t ___x_0;
	// System.Int32 Vuforia.VuforiaRenderer/Vec2I::y
	int32_t ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vec2I_t83686054D6B780BA6C82D6AABFC5F5F1F435CD24, ___x_0)); }
	inline int32_t get_x_0() const { return ___x_0; }
	inline int32_t* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(int32_t value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vec2I_t83686054D6B780BA6C82D6AABFC5F5F1F435CD24, ___y_1)); }
	inline int32_t get_y_1() const { return ___y_1; }
	inline int32_t* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(int32_t value)
	{
		___y_1 = value;
	}
};
#pragma pack(pop, tp)


// System.Delegate
struct  Delegate_t  : public RuntimeObject
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
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_7;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_8;
	// System.DelegateData System.Delegate::data
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_target_2), (void*)value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t, ___extra_arg_5)); }
	inline intptr_t get_extra_arg_5() const { return ___extra_arg_5; }
	inline intptr_t* get_address_of_extra_arg_5() { return &___extra_arg_5; }
	inline void set_extra_arg_5(intptr_t value)
	{
		___extra_arg_5 = value;
	}

	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_code_6)); }
	inline intptr_t get_method_code_6() const { return ___method_code_6; }
	inline intptr_t* get_address_of_method_code_6() { return &___method_code_6; }
	inline void set_method_code_6(intptr_t value)
	{
		___method_code_6 = value;
	}

	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_info_7)); }
	inline MethodInfo_t * get_method_info_7() const { return ___method_info_7; }
	inline MethodInfo_t ** get_address_of_method_info_7() { return &___method_info_7; }
	inline void set_method_info_7(MethodInfo_t * value)
	{
		___method_info_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___method_info_7), (void*)value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___original_method_info_8), (void*)value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t, ___data_9)); }
	inline DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * get_data_9() const { return ___data_9; }
	inline DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_9), (void*)value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	int32_t ___method_is_virtual_10;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	int32_t ___method_is_virtual_10;
};

// UnityEngine.AsyncOperation
struct  AsyncOperation_t304C51ABED8AE734CC8DDDFE13013D8D5A44641D  : public YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44
{
public:
	// System.IntPtr UnityEngine.AsyncOperation::m_Ptr
	intptr_t ___m_Ptr_0;
	// System.Action`1<UnityEngine.AsyncOperation> UnityEngine.AsyncOperation::m_completeCallback
	Action_1_tCBF754C290FAE894631BED8FD56E9E22C4C187F9 * ___m_completeCallback_1;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(AsyncOperation_t304C51ABED8AE734CC8DDDFE13013D8D5A44641D, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_m_completeCallback_1() { return static_cast<int32_t>(offsetof(AsyncOperation_t304C51ABED8AE734CC8DDDFE13013D8D5A44641D, ___m_completeCallback_1)); }
	inline Action_1_tCBF754C290FAE894631BED8FD56E9E22C4C187F9 * get_m_completeCallback_1() const { return ___m_completeCallback_1; }
	inline Action_1_tCBF754C290FAE894631BED8FD56E9E22C4C187F9 ** get_address_of_m_completeCallback_1() { return &___m_completeCallback_1; }
	inline void set_m_completeCallback_1(Action_1_tCBF754C290FAE894631BED8FD56E9E22C4C187F9 * value)
	{
		___m_completeCallback_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_completeCallback_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.AsyncOperation
struct AsyncOperation_t304C51ABED8AE734CC8DDDFE13013D8D5A44641D_marshaled_pinvoke : public YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___m_completeCallback_1;
};
// Native definition for COM marshalling of UnityEngine.AsyncOperation
struct AsyncOperation_t304C51ABED8AE734CC8DDDFE13013D8D5A44641D_marshaled_com : public YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshaled_com
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___m_completeCallback_1;
};

// UnityEngine.Object
struct  Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.UserAuthorization
struct  UserAuthorization_t16292E40CEEAB48F45B89275E9FCB15F5DF0FADD 
{
public:
	// System.Int32 UnityEngine.UserAuthorization::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(UserAuthorization_t16292E40CEEAB48F45B89275E9FCB15F5DF0FADD, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Vuforia.TrackableBehaviour/Status
struct  Status_t0FAE561347BC0DCE2E6F4217138ECD017254C5D6 
{
public:
	// System.Int32 Vuforia.TrackableBehaviour/Status::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Status_t0FAE561347BC0DCE2E6F4217138ECD017254C5D6, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Vuforia.TrackableBehaviour/StatusInfo
struct  StatusInfo_t0A4AC2AFE1F5149420F302A187EF008CDF17D7D4 
{
public:
	// System.Int32 Vuforia.TrackableBehaviour/StatusInfo::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(StatusInfo_t0A4AC2AFE1F5149420F302A187EF008CDF17D7D4, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Vuforia.TrackerData/FrameState
#pragma pack(push, tp, 1)
struct  FrameState_t27F63EB51160CC986EEA30D16A1ECD13870CD1C7 
{
public:
	// System.IntPtr Vuforia.TrackerData/FrameState::trackableDataArray
	intptr_t ___trackableDataArray_0;
	// System.IntPtr Vuforia.TrackerData/FrameState::vbDataArray
	intptr_t ___vbDataArray_1;
	// System.IntPtr Vuforia.TrackerData/FrameState::vuMarkResultArray
	intptr_t ___vuMarkResultArray_2;
	// System.IntPtr Vuforia.TrackerData/FrameState::newVuMarkDataArray
	intptr_t ___newVuMarkDataArray_3;
	// System.IntPtr Vuforia.TrackerData/FrameState::illuminationData
	intptr_t ___illuminationData_4;
	// System.Int32 Vuforia.TrackerData/FrameState::numTrackableResults
	int32_t ___numTrackableResults_5;
	// System.Int32 Vuforia.TrackerData/FrameState::numVirtualButtonResults
	int32_t ___numVirtualButtonResults_6;
	// System.Int32 Vuforia.TrackerData/FrameState::frameIndex
	int32_t ___frameIndex_7;
	// System.Int32 Vuforia.TrackerData/FrameState::numVuMarkResults
	int32_t ___numVuMarkResults_8;
	// System.Int32 Vuforia.TrackerData/FrameState::numNewVuMarks
	int32_t ___numNewVuMarks_9;
	// System.Int32 Vuforia.TrackerData/FrameState::deviceTrackableId
	int32_t ___deviceTrackableId_10;
	// System.Int32 Vuforia.TrackerData/FrameState::deviceTrackableStatusInfo
	int32_t ___deviceTrackableStatusInfo_11;
	// UnityEngine.Vector4 Vuforia.TrackerData/FrameState::minCameraCalibration
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___minCameraCalibration_12;

public:
	inline static int32_t get_offset_of_trackableDataArray_0() { return static_cast<int32_t>(offsetof(FrameState_t27F63EB51160CC986EEA30D16A1ECD13870CD1C7, ___trackableDataArray_0)); }
	inline intptr_t get_trackableDataArray_0() const { return ___trackableDataArray_0; }
	inline intptr_t* get_address_of_trackableDataArray_0() { return &___trackableDataArray_0; }
	inline void set_trackableDataArray_0(intptr_t value)
	{
		___trackableDataArray_0 = value;
	}

	inline static int32_t get_offset_of_vbDataArray_1() { return static_cast<int32_t>(offsetof(FrameState_t27F63EB51160CC986EEA30D16A1ECD13870CD1C7, ___vbDataArray_1)); }
	inline intptr_t get_vbDataArray_1() const { return ___vbDataArray_1; }
	inline intptr_t* get_address_of_vbDataArray_1() { return &___vbDataArray_1; }
	inline void set_vbDataArray_1(intptr_t value)
	{
		___vbDataArray_1 = value;
	}

	inline static int32_t get_offset_of_vuMarkResultArray_2() { return static_cast<int32_t>(offsetof(FrameState_t27F63EB51160CC986EEA30D16A1ECD13870CD1C7, ___vuMarkResultArray_2)); }
	inline intptr_t get_vuMarkResultArray_2() const { return ___vuMarkResultArray_2; }
	inline intptr_t* get_address_of_vuMarkResultArray_2() { return &___vuMarkResultArray_2; }
	inline void set_vuMarkResultArray_2(intptr_t value)
	{
		___vuMarkResultArray_2 = value;
	}

	inline static int32_t get_offset_of_newVuMarkDataArray_3() { return static_cast<int32_t>(offsetof(FrameState_t27F63EB51160CC986EEA30D16A1ECD13870CD1C7, ___newVuMarkDataArray_3)); }
	inline intptr_t get_newVuMarkDataArray_3() const { return ___newVuMarkDataArray_3; }
	inline intptr_t* get_address_of_newVuMarkDataArray_3() { return &___newVuMarkDataArray_3; }
	inline void set_newVuMarkDataArray_3(intptr_t value)
	{
		___newVuMarkDataArray_3 = value;
	}

	inline static int32_t get_offset_of_illuminationData_4() { return static_cast<int32_t>(offsetof(FrameState_t27F63EB51160CC986EEA30D16A1ECD13870CD1C7, ___illuminationData_4)); }
	inline intptr_t get_illuminationData_4() const { return ___illuminationData_4; }
	inline intptr_t* get_address_of_illuminationData_4() { return &___illuminationData_4; }
	inline void set_illuminationData_4(intptr_t value)
	{
		___illuminationData_4 = value;
	}

	inline static int32_t get_offset_of_numTrackableResults_5() { return static_cast<int32_t>(offsetof(FrameState_t27F63EB51160CC986EEA30D16A1ECD13870CD1C7, ___numTrackableResults_5)); }
	inline int32_t get_numTrackableResults_5() const { return ___numTrackableResults_5; }
	inline int32_t* get_address_of_numTrackableResults_5() { return &___numTrackableResults_5; }
	inline void set_numTrackableResults_5(int32_t value)
	{
		___numTrackableResults_5 = value;
	}

	inline static int32_t get_offset_of_numVirtualButtonResults_6() { return static_cast<int32_t>(offsetof(FrameState_t27F63EB51160CC986EEA30D16A1ECD13870CD1C7, ___numVirtualButtonResults_6)); }
	inline int32_t get_numVirtualButtonResults_6() const { return ___numVirtualButtonResults_6; }
	inline int32_t* get_address_of_numVirtualButtonResults_6() { return &___numVirtualButtonResults_6; }
	inline void set_numVirtualButtonResults_6(int32_t value)
	{
		___numVirtualButtonResults_6 = value;
	}

	inline static int32_t get_offset_of_frameIndex_7() { return static_cast<int32_t>(offsetof(FrameState_t27F63EB51160CC986EEA30D16A1ECD13870CD1C7, ___frameIndex_7)); }
	inline int32_t get_frameIndex_7() const { return ___frameIndex_7; }
	inline int32_t* get_address_of_frameIndex_7() { return &___frameIndex_7; }
	inline void set_frameIndex_7(int32_t value)
	{
		___frameIndex_7 = value;
	}

	inline static int32_t get_offset_of_numVuMarkResults_8() { return static_cast<int32_t>(offsetof(FrameState_t27F63EB51160CC986EEA30D16A1ECD13870CD1C7, ___numVuMarkResults_8)); }
	inline int32_t get_numVuMarkResults_8() const { return ___numVuMarkResults_8; }
	inline int32_t* get_address_of_numVuMarkResults_8() { return &___numVuMarkResults_8; }
	inline void set_numVuMarkResults_8(int32_t value)
	{
		___numVuMarkResults_8 = value;
	}

	inline static int32_t get_offset_of_numNewVuMarks_9() { return static_cast<int32_t>(offsetof(FrameState_t27F63EB51160CC986EEA30D16A1ECD13870CD1C7, ___numNewVuMarks_9)); }
	inline int32_t get_numNewVuMarks_9() const { return ___numNewVuMarks_9; }
	inline int32_t* get_address_of_numNewVuMarks_9() { return &___numNewVuMarks_9; }
	inline void set_numNewVuMarks_9(int32_t value)
	{
		___numNewVuMarks_9 = value;
	}

	inline static int32_t get_offset_of_deviceTrackableId_10() { return static_cast<int32_t>(offsetof(FrameState_t27F63EB51160CC986EEA30D16A1ECD13870CD1C7, ___deviceTrackableId_10)); }
	inline int32_t get_deviceTrackableId_10() const { return ___deviceTrackableId_10; }
	inline int32_t* get_address_of_deviceTrackableId_10() { return &___deviceTrackableId_10; }
	inline void set_deviceTrackableId_10(int32_t value)
	{
		___deviceTrackableId_10 = value;
	}

	inline static int32_t get_offset_of_deviceTrackableStatusInfo_11() { return static_cast<int32_t>(offsetof(FrameState_t27F63EB51160CC986EEA30D16A1ECD13870CD1C7, ___deviceTrackableStatusInfo_11)); }
	inline int32_t get_deviceTrackableStatusInfo_11() const { return ___deviceTrackableStatusInfo_11; }
	inline int32_t* get_address_of_deviceTrackableStatusInfo_11() { return &___deviceTrackableStatusInfo_11; }
	inline void set_deviceTrackableStatusInfo_11(int32_t value)
	{
		___deviceTrackableStatusInfo_11 = value;
	}

	inline static int32_t get_offset_of_minCameraCalibration_12() { return static_cast<int32_t>(offsetof(FrameState_t27F63EB51160CC986EEA30D16A1ECD13870CD1C7, ___minCameraCalibration_12)); }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  get_minCameraCalibration_12() const { return ___minCameraCalibration_12; }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * get_address_of_minCameraCalibration_12() { return &___minCameraCalibration_12; }
	inline void set_minCameraCalibration_12(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  value)
	{
		___minCameraCalibration_12 = value;
	}
};
#pragma pack(pop, tp)


// Vuforia.TrackerData/IlluminationData
#pragma pack(push, tp, 1)
struct  IlluminationData_tAC38EBA74B5FB5733069336801A71B1C0D097A93 
{
public:
	// System.Single Vuforia.TrackerData/IlluminationData::ambientIntensity
	float ___ambientIntensity_0;
	// System.Single Vuforia.TrackerData/IlluminationData::ambientColorTemperature
	float ___ambientColorTemperature_1;
	// System.Single Vuforia.TrackerData/IlluminationData::intensityCorrection
	float ___intensityCorrection_2;
	// UnityEngine.Vector4 Vuforia.TrackerData/IlluminationData::colorCorrection
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___colorCorrection_3;

public:
	inline static int32_t get_offset_of_ambientIntensity_0() { return static_cast<int32_t>(offsetof(IlluminationData_tAC38EBA74B5FB5733069336801A71B1C0D097A93, ___ambientIntensity_0)); }
	inline float get_ambientIntensity_0() const { return ___ambientIntensity_0; }
	inline float* get_address_of_ambientIntensity_0() { return &___ambientIntensity_0; }
	inline void set_ambientIntensity_0(float value)
	{
		___ambientIntensity_0 = value;
	}

	inline static int32_t get_offset_of_ambientColorTemperature_1() { return static_cast<int32_t>(offsetof(IlluminationData_tAC38EBA74B5FB5733069336801A71B1C0D097A93, ___ambientColorTemperature_1)); }
	inline float get_ambientColorTemperature_1() const { return ___ambientColorTemperature_1; }
	inline float* get_address_of_ambientColorTemperature_1() { return &___ambientColorTemperature_1; }
	inline void set_ambientColorTemperature_1(float value)
	{
		___ambientColorTemperature_1 = value;
	}

	inline static int32_t get_offset_of_intensityCorrection_2() { return static_cast<int32_t>(offsetof(IlluminationData_tAC38EBA74B5FB5733069336801A71B1C0D097A93, ___intensityCorrection_2)); }
	inline float get_intensityCorrection_2() const { return ___intensityCorrection_2; }
	inline float* get_address_of_intensityCorrection_2() { return &___intensityCorrection_2; }
	inline void set_intensityCorrection_2(float value)
	{
		___intensityCorrection_2 = value;
	}

	inline static int32_t get_offset_of_colorCorrection_3() { return static_cast<int32_t>(offsetof(IlluminationData_tAC38EBA74B5FB5733069336801A71B1C0D097A93, ___colorCorrection_3)); }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  get_colorCorrection_3() const { return ___colorCorrection_3; }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * get_address_of_colorCorrection_3() { return &___colorCorrection_3; }
	inline void set_colorCorrection_3(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  value)
	{
		___colorCorrection_3 = value;
	}
};
#pragma pack(pop, tp)


// Vuforia.VuforiaARController/WorldCenterMode
struct  WorldCenterMode_t0C87FD43E314BE60559928FD44C25400B862C0E5 
{
public:
	// System.Int32 Vuforia.VuforiaARController/WorldCenterMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(WorldCenterMode_t0C87FD43E314BE60559928FD44C25400B862C0E5, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Vuforia.WebCamProfile/ProfileData
struct  ProfileData_tDD58D66EB33579FEA6AE2378DAB61BBF53265F67 
{
public:
	// Vuforia.VuforiaRenderer/Vec2I Vuforia.WebCamProfile/ProfileData::RequestedTextureSize
	Vec2I_t83686054D6B780BA6C82D6AABFC5F5F1F435CD24  ___RequestedTextureSize_0;
	// Vuforia.VuforiaRenderer/Vec2I Vuforia.WebCamProfile/ProfileData::ResampledTextureSize
	Vec2I_t83686054D6B780BA6C82D6AABFC5F5F1F435CD24  ___ResampledTextureSize_1;
	// System.Int32 Vuforia.WebCamProfile/ProfileData::RequestedFPS
	int32_t ___RequestedFPS_2;

public:
	inline static int32_t get_offset_of_RequestedTextureSize_0() { return static_cast<int32_t>(offsetof(ProfileData_tDD58D66EB33579FEA6AE2378DAB61BBF53265F67, ___RequestedTextureSize_0)); }
	inline Vec2I_t83686054D6B780BA6C82D6AABFC5F5F1F435CD24  get_RequestedTextureSize_0() const { return ___RequestedTextureSize_0; }
	inline Vec2I_t83686054D6B780BA6C82D6AABFC5F5F1F435CD24 * get_address_of_RequestedTextureSize_0() { return &___RequestedTextureSize_0; }
	inline void set_RequestedTextureSize_0(Vec2I_t83686054D6B780BA6C82D6AABFC5F5F1F435CD24  value)
	{
		___RequestedTextureSize_0 = value;
	}

	inline static int32_t get_offset_of_ResampledTextureSize_1() { return static_cast<int32_t>(offsetof(ProfileData_tDD58D66EB33579FEA6AE2378DAB61BBF53265F67, ___ResampledTextureSize_1)); }
	inline Vec2I_t83686054D6B780BA6C82D6AABFC5F5F1F435CD24  get_ResampledTextureSize_1() const { return ___ResampledTextureSize_1; }
	inline Vec2I_t83686054D6B780BA6C82D6AABFC5F5F1F435CD24 * get_address_of_ResampledTextureSize_1() { return &___ResampledTextureSize_1; }
	inline void set_ResampledTextureSize_1(Vec2I_t83686054D6B780BA6C82D6AABFC5F5F1F435CD24  value)
	{
		___ResampledTextureSize_1 = value;
	}

	inline static int32_t get_offset_of_RequestedFPS_2() { return static_cast<int32_t>(offsetof(ProfileData_tDD58D66EB33579FEA6AE2378DAB61BBF53265F67, ___RequestedFPS_2)); }
	inline int32_t get_RequestedFPS_2() const { return ___RequestedFPS_2; }
	inline int32_t* get_address_of_RequestedFPS_2() { return &___RequestedFPS_2; }
	inline void set_RequestedFPS_2(int32_t value)
	{
		___RequestedFPS_2 = value;
	}
};


// Vuforia.layerErrorMessage
struct  layerErrorMessage_t45D2F724EED60EDE58F165C441506A2D4F7381E9 
{
public:
	// System.Int32 Vuforia.layerErrorMessage::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(layerErrorMessage_t45D2F724EED60EDE58F165C441506A2D4F7381E9, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.MulticastDelegate
struct  MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___delegates_11), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_11;
};

// UnityEngine.Component
struct  Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};


// UnityEngine.GameObject
struct  GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};


// UnityEngine.Material
struct  Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};


// UnityEngine.Mesh
struct  Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};


// UnityEngine.Texture
struct  Texture_t387FE83BB848001FD06B14707AEA6D5A0F6A95F4  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};

struct Texture_t387FE83BB848001FD06B14707AEA6D5A0F6A95F4_StaticFields
{
public:
	// System.Int32 UnityEngine.Texture::GenerateAllMips
	int32_t ___GenerateAllMips_4;

public:
	inline static int32_t get_offset_of_GenerateAllMips_4() { return static_cast<int32_t>(offsetof(Texture_t387FE83BB848001FD06B14707AEA6D5A0F6A95F4_StaticFields, ___GenerateAllMips_4)); }
	inline int32_t get_GenerateAllMips_4() const { return ___GenerateAllMips_4; }
	inline int32_t* get_address_of_GenerateAllMips_4() { return &___GenerateAllMips_4; }
	inline void set_GenerateAllMips_4(int32_t value)
	{
		___GenerateAllMips_4 = value;
	}
};


// Vuforia.TrackableBehaviour/StatusChangeResult
struct  StatusChangeResult_tB1B76CB1852C966E93FE1E652E5304971E0981CE 
{
public:
	// Vuforia.TrackableBehaviour/Status Vuforia.TrackableBehaviour/StatusChangeResult::PreviousStatus
	int32_t ___PreviousStatus_0;
	// Vuforia.TrackableBehaviour/Status Vuforia.TrackableBehaviour/StatusChangeResult::NewStatus
	int32_t ___NewStatus_1;

public:
	inline static int32_t get_offset_of_PreviousStatus_0() { return static_cast<int32_t>(offsetof(StatusChangeResult_tB1B76CB1852C966E93FE1E652E5304971E0981CE, ___PreviousStatus_0)); }
	inline int32_t get_PreviousStatus_0() const { return ___PreviousStatus_0; }
	inline int32_t* get_address_of_PreviousStatus_0() { return &___PreviousStatus_0; }
	inline void set_PreviousStatus_0(int32_t value)
	{
		___PreviousStatus_0 = value;
	}

	inline static int32_t get_offset_of_NewStatus_1() { return static_cast<int32_t>(offsetof(StatusChangeResult_tB1B76CB1852C966E93FE1E652E5304971E0981CE, ___NewStatus_1)); }
	inline int32_t get_NewStatus_1() const { return ___NewStatus_1; }
	inline int32_t* get_address_of_NewStatus_1() { return &___NewStatus_1; }
	inline void set_NewStatus_1(int32_t value)
	{
		___NewStatus_1 = value;
	}
};


// Vuforia.TrackerData/ManagedFrameState
struct  ManagedFrameState_t0094F8A942A5CE98E0F853C43647C56B9E2B2131 
{
public:
	// Vuforia.TrackerData/TrackableResultData[] Vuforia.TrackerData/ManagedFrameState::TrackableResultDataArray
	TrackableResultDataU5BU5D_t02EFEEC5DF5FE385935CEADA8A722AF05776FAC7* ___TrackableResultDataArray_0;
	// Vuforia.TrackerData/VuMarkTargetData[] Vuforia.TrackerData/ManagedFrameState::VuMarkDataArray
	VuMarkTargetDataU5BU5D_tD6A0E6BC08B2980FBAE15CE1EB321240421D9CB6* ___VuMarkDataArray_1;
	// Vuforia.TrackerData/VuMarkTargetResultData[] Vuforia.TrackerData/ManagedFrameState::VuMarkResultDataArray
	VuMarkTargetResultDataU5BU5D_t365DEE5FF4733F805056DBE46FAC98EF3F7024A5* ___VuMarkResultDataArray_2;
	// Vuforia.TrackerData/VirtualButtonData[] Vuforia.TrackerData/ManagedFrameState::VirtualButtonData
	VirtualButtonDataU5BU5D_tF8F3BB1AA5532D83349ED228E208321907DBAF24* ___VirtualButtonData_3;
	// System.Boolean Vuforia.TrackerData/ManagedFrameState::IsIlluminationDataValid
	bool ___IsIlluminationDataValid_4;
	// Vuforia.TrackerData/IlluminationData Vuforia.TrackerData/ManagedFrameState::IlluminationData
	IlluminationData_tAC38EBA74B5FB5733069336801A71B1C0D097A93  ___IlluminationData_5;
	// System.Int32 Vuforia.TrackerData/ManagedFrameState::frameIndex
	int32_t ___frameIndex_6;
	// System.Int32 Vuforia.TrackerData/ManagedFrameState::deviceTrackableId
	int32_t ___deviceTrackableId_7;
	// System.Int32 Vuforia.TrackerData/ManagedFrameState::deviceTrackableStatusInfo
	int32_t ___deviceTrackableStatusInfo_8;
	// UnityEngine.Vector4 Vuforia.TrackerData/ManagedFrameState::minCameraCalibration
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___minCameraCalibration_9;

public:
	inline static int32_t get_offset_of_TrackableResultDataArray_0() { return static_cast<int32_t>(offsetof(ManagedFrameState_t0094F8A942A5CE98E0F853C43647C56B9E2B2131, ___TrackableResultDataArray_0)); }
	inline TrackableResultDataU5BU5D_t02EFEEC5DF5FE385935CEADA8A722AF05776FAC7* get_TrackableResultDataArray_0() const { return ___TrackableResultDataArray_0; }
	inline TrackableResultDataU5BU5D_t02EFEEC5DF5FE385935CEADA8A722AF05776FAC7** get_address_of_TrackableResultDataArray_0() { return &___TrackableResultDataArray_0; }
	inline void set_TrackableResultDataArray_0(TrackableResultDataU5BU5D_t02EFEEC5DF5FE385935CEADA8A722AF05776FAC7* value)
	{
		___TrackableResultDataArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrackableResultDataArray_0), (void*)value);
	}

	inline static int32_t get_offset_of_VuMarkDataArray_1() { return static_cast<int32_t>(offsetof(ManagedFrameState_t0094F8A942A5CE98E0F853C43647C56B9E2B2131, ___VuMarkDataArray_1)); }
	inline VuMarkTargetDataU5BU5D_tD6A0E6BC08B2980FBAE15CE1EB321240421D9CB6* get_VuMarkDataArray_1() const { return ___VuMarkDataArray_1; }
	inline VuMarkTargetDataU5BU5D_tD6A0E6BC08B2980FBAE15CE1EB321240421D9CB6** get_address_of_VuMarkDataArray_1() { return &___VuMarkDataArray_1; }
	inline void set_VuMarkDataArray_1(VuMarkTargetDataU5BU5D_tD6A0E6BC08B2980FBAE15CE1EB321240421D9CB6* value)
	{
		___VuMarkDataArray_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___VuMarkDataArray_1), (void*)value);
	}

	inline static int32_t get_offset_of_VuMarkResultDataArray_2() { return static_cast<int32_t>(offsetof(ManagedFrameState_t0094F8A942A5CE98E0F853C43647C56B9E2B2131, ___VuMarkResultDataArray_2)); }
	inline VuMarkTargetResultDataU5BU5D_t365DEE5FF4733F805056DBE46FAC98EF3F7024A5* get_VuMarkResultDataArray_2() const { return ___VuMarkResultDataArray_2; }
	inline VuMarkTargetResultDataU5BU5D_t365DEE5FF4733F805056DBE46FAC98EF3F7024A5** get_address_of_VuMarkResultDataArray_2() { return &___VuMarkResultDataArray_2; }
	inline void set_VuMarkResultDataArray_2(VuMarkTargetResultDataU5BU5D_t365DEE5FF4733F805056DBE46FAC98EF3F7024A5* value)
	{
		___VuMarkResultDataArray_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___VuMarkResultDataArray_2), (void*)value);
	}

	inline static int32_t get_offset_of_VirtualButtonData_3() { return static_cast<int32_t>(offsetof(ManagedFrameState_t0094F8A942A5CE98E0F853C43647C56B9E2B2131, ___VirtualButtonData_3)); }
	inline VirtualButtonDataU5BU5D_tF8F3BB1AA5532D83349ED228E208321907DBAF24* get_VirtualButtonData_3() const { return ___VirtualButtonData_3; }
	inline VirtualButtonDataU5BU5D_tF8F3BB1AA5532D83349ED228E208321907DBAF24** get_address_of_VirtualButtonData_3() { return &___VirtualButtonData_3; }
	inline void set_VirtualButtonData_3(VirtualButtonDataU5BU5D_tF8F3BB1AA5532D83349ED228E208321907DBAF24* value)
	{
		___VirtualButtonData_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___VirtualButtonData_3), (void*)value);
	}

	inline static int32_t get_offset_of_IsIlluminationDataValid_4() { return static_cast<int32_t>(offsetof(ManagedFrameState_t0094F8A942A5CE98E0F853C43647C56B9E2B2131, ___IsIlluminationDataValid_4)); }
	inline bool get_IsIlluminationDataValid_4() const { return ___IsIlluminationDataValid_4; }
	inline bool* get_address_of_IsIlluminationDataValid_4() { return &___IsIlluminationDataValid_4; }
	inline void set_IsIlluminationDataValid_4(bool value)
	{
		___IsIlluminationDataValid_4 = value;
	}

	inline static int32_t get_offset_of_IlluminationData_5() { return static_cast<int32_t>(offsetof(ManagedFrameState_t0094F8A942A5CE98E0F853C43647C56B9E2B2131, ___IlluminationData_5)); }
	inline IlluminationData_tAC38EBA74B5FB5733069336801A71B1C0D097A93  get_IlluminationData_5() const { return ___IlluminationData_5; }
	inline IlluminationData_tAC38EBA74B5FB5733069336801A71B1C0D097A93 * get_address_of_IlluminationData_5() { return &___IlluminationData_5; }
	inline void set_IlluminationData_5(IlluminationData_tAC38EBA74B5FB5733069336801A71B1C0D097A93  value)
	{
		___IlluminationData_5 = value;
	}

	inline static int32_t get_offset_of_frameIndex_6() { return static_cast<int32_t>(offsetof(ManagedFrameState_t0094F8A942A5CE98E0F853C43647C56B9E2B2131, ___frameIndex_6)); }
	inline int32_t get_frameIndex_6() const { return ___frameIndex_6; }
	inline int32_t* get_address_of_frameIndex_6() { return &___frameIndex_6; }
	inline void set_frameIndex_6(int32_t value)
	{
		___frameIndex_6 = value;
	}

	inline static int32_t get_offset_of_deviceTrackableId_7() { return static_cast<int32_t>(offsetof(ManagedFrameState_t0094F8A942A5CE98E0F853C43647C56B9E2B2131, ___deviceTrackableId_7)); }
	inline int32_t get_deviceTrackableId_7() const { return ___deviceTrackableId_7; }
	inline int32_t* get_address_of_deviceTrackableId_7() { return &___deviceTrackableId_7; }
	inline void set_deviceTrackableId_7(int32_t value)
	{
		___deviceTrackableId_7 = value;
	}

	inline static int32_t get_offset_of_deviceTrackableStatusInfo_8() { return static_cast<int32_t>(offsetof(ManagedFrameState_t0094F8A942A5CE98E0F853C43647C56B9E2B2131, ___deviceTrackableStatusInfo_8)); }
	inline int32_t get_deviceTrackableStatusInfo_8() const { return ___deviceTrackableStatusInfo_8; }
	inline int32_t* get_address_of_deviceTrackableStatusInfo_8() { return &___deviceTrackableStatusInfo_8; }
	inline void set_deviceTrackableStatusInfo_8(int32_t value)
	{
		___deviceTrackableStatusInfo_8 = value;
	}

	inline static int32_t get_offset_of_minCameraCalibration_9() { return static_cast<int32_t>(offsetof(ManagedFrameState_t0094F8A942A5CE98E0F853C43647C56B9E2B2131, ___minCameraCalibration_9)); }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  get_minCameraCalibration_9() const { return ___minCameraCalibration_9; }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * get_address_of_minCameraCalibration_9() { return &___minCameraCalibration_9; }
	inline void set_minCameraCalibration_9(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  value)
	{
		___minCameraCalibration_9 = value;
	}
};

// Native definition for P/Invoke marshalling of Vuforia.TrackerData/ManagedFrameState
struct ManagedFrameState_t0094F8A942A5CE98E0F853C43647C56B9E2B2131_marshaled_pinvoke
{
	TrackableResultData_tA964110473BFD006708B67E537F021944C1D923D * ___TrackableResultDataArray_0;
	VuMarkTargetData_t0C9EDF23529C30E5299C0D3D383F75D7ADA1EF5D * ___VuMarkDataArray_1;
	VuMarkTargetResultData_t541A47433FA53BEDB4182F6C545472E511F296CA * ___VuMarkResultDataArray_2;
	VirtualButtonData_t6F69C8EDFB6AE8B0DFD0E896664278FDA6869367 * ___VirtualButtonData_3;
	int32_t ___IsIlluminationDataValid_4;
	IlluminationData_tAC38EBA74B5FB5733069336801A71B1C0D097A93  ___IlluminationData_5;
	int32_t ___frameIndex_6;
	int32_t ___deviceTrackableId_7;
	int32_t ___deviceTrackableStatusInfo_8;
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___minCameraCalibration_9;
};
// Native definition for COM marshalling of Vuforia.TrackerData/ManagedFrameState
struct ManagedFrameState_t0094F8A942A5CE98E0F853C43647C56B9E2B2131_marshaled_com
{
	TrackableResultData_tA964110473BFD006708B67E537F021944C1D923D * ___TrackableResultDataArray_0;
	VuMarkTargetData_t0C9EDF23529C30E5299C0D3D383F75D7ADA1EF5D * ___VuMarkDataArray_1;
	VuMarkTargetResultData_t541A47433FA53BEDB4182F6C545472E511F296CA * ___VuMarkResultDataArray_2;
	VirtualButtonData_t6F69C8EDFB6AE8B0DFD0E896664278FDA6869367 * ___VirtualButtonData_3;
	int32_t ___IsIlluminationDataValid_4;
	IlluminationData_tAC38EBA74B5FB5733069336801A71B1C0D097A93  ___IlluminationData_5;
	int32_t ___frameIndex_6;
	int32_t ___deviceTrackableId_7;
	int32_t ___deviceTrackableStatusInfo_8;
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___minCameraCalibration_9;
};

// Vuforia.WebCamProfile/ProfileCollection
struct  ProfileCollection_t265A716EFBF9BE67BA63AFFD090C3FB51E8D535F 
{
public:
	// Vuforia.WebCamProfile/ProfileData Vuforia.WebCamProfile/ProfileCollection::DefaultProfile
	ProfileData_tDD58D66EB33579FEA6AE2378DAB61BBF53265F67  ___DefaultProfile_0;
	// System.Collections.Generic.Dictionary`2<System.String,Vuforia.WebCamProfile/ProfileData> Vuforia.WebCamProfile/ProfileCollection::Profiles
	Dictionary_2_t3039270ADBC232731ABE07616CAC5DE79149ABE2 * ___Profiles_1;

public:
	inline static int32_t get_offset_of_DefaultProfile_0() { return static_cast<int32_t>(offsetof(ProfileCollection_t265A716EFBF9BE67BA63AFFD090C3FB51E8D535F, ___DefaultProfile_0)); }
	inline ProfileData_tDD58D66EB33579FEA6AE2378DAB61BBF53265F67  get_DefaultProfile_0() const { return ___DefaultProfile_0; }
	inline ProfileData_tDD58D66EB33579FEA6AE2378DAB61BBF53265F67 * get_address_of_DefaultProfile_0() { return &___DefaultProfile_0; }
	inline void set_DefaultProfile_0(ProfileData_tDD58D66EB33579FEA6AE2378DAB61BBF53265F67  value)
	{
		___DefaultProfile_0 = value;
	}

	inline static int32_t get_offset_of_Profiles_1() { return static_cast<int32_t>(offsetof(ProfileCollection_t265A716EFBF9BE67BA63AFFD090C3FB51E8D535F, ___Profiles_1)); }
	inline Dictionary_2_t3039270ADBC232731ABE07616CAC5DE79149ABE2 * get_Profiles_1() const { return ___Profiles_1; }
	inline Dictionary_2_t3039270ADBC232731ABE07616CAC5DE79149ABE2 ** get_address_of_Profiles_1() { return &___Profiles_1; }
	inline void set_Profiles_1(Dictionary_2_t3039270ADBC232731ABE07616CAC5DE79149ABE2 * value)
	{
		___Profiles_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Profiles_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of Vuforia.WebCamProfile/ProfileCollection
struct ProfileCollection_t265A716EFBF9BE67BA63AFFD090C3FB51E8D535F_marshaled_pinvoke
{
	ProfileData_tDD58D66EB33579FEA6AE2378DAB61BBF53265F67  ___DefaultProfile_0;
	Dictionary_2_t3039270ADBC232731ABE07616CAC5DE79149ABE2 * ___Profiles_1;
};
// Native definition for COM marshalling of Vuforia.WebCamProfile/ProfileCollection
struct ProfileCollection_t265A716EFBF9BE67BA63AFFD090C3FB51E8D535F_marshaled_com
{
	ProfileData_tDD58D66EB33579FEA6AE2378DAB61BBF53265F67  ___DefaultProfile_0;
	Dictionary_2_t3039270ADBC232731ABE07616CAC5DE79149ABE2 * ___Profiles_1;
};

// System.Action`1<Vuforia.TrackableBehaviour/StatusChangeResult>
struct  Action_1_t6AC22AF716ED9149BAB0EF67822C504F3206A72E  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Behaviour
struct  Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};


// UnityEngine.Collider
struct  Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};


// UnityEngine.MeshFilter
struct  MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};


// UnityEngine.Renderer
struct  Renderer_t0556D67DD582620D1F495627EDE30D03284151F4  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};


// UnityEngine.Transform
struct  Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};


// UnityEngine.WebCamTexture
struct  WebCamTexture_tEC97A7A0A101B159FEC9A3E95B14E41DD84EFD73  : public Texture_t387FE83BB848001FD06B14707AEA6D5A0F6A95F4
{
public:

public:
};


// Vuforia.VuforiaManager
struct  VuforiaManager_tC5EAD9B005741ED776A8B4C47B5B583BA79EF0D4  : public RuntimeObject
{
public:
	// Vuforia.VuforiaARController/WorldCenterMode Vuforia.VuforiaManager::mWorldCenterMode
	int32_t ___mWorldCenterMode_1;
	// Vuforia.WorldCenterTrackableBehaviour Vuforia.VuforiaManager::mWorldCenter
	RuntimeObject* ___mWorldCenter_2;
	// Vuforia.VuMarkBehaviour Vuforia.VuforiaManager::mVuMarkWorldCenter
	VuMarkBehaviour_t3313B0FDC425C763B9FF22F5249204E90C08125D * ___mVuMarkWorldCenter_3;
	// UnityEngine.Transform Vuforia.VuforiaManager::mARCameraTransform
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___mARCameraTransform_4;
	// UnityEngine.Transform Vuforia.VuforiaManager::mCentralAnchorPoint
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___mCentralAnchorPoint_5;
	// System.Collections.Generic.LinkedList`1<Vuforia.VuforiaManager/TrackableIdPair> Vuforia.VuforiaManager::mWCTrackableFoundQueue
	LinkedList_1_t12E84E629C56E3A7185D46C82C901945FF66CA0B * ___mWCTrackableFoundQueue_6;
	// System.Collections.Generic.Dictionary`2<Vuforia.PIXEL_FORMAT,Vuforia.UnmanagedImage> Vuforia.VuforiaManager::mCameraImages
	Dictionary_2_tEFA9BA4A93DC841D9D0D123D03831FE455C9DFA3 * ___mCameraImages_7;
	// System.IntPtr Vuforia.VuforiaManager::mImageData
	intptr_t ___mImageData_8;
	// System.Int32 Vuforia.VuforiaManager::mInjectedFrameIdx
	int32_t ___mInjectedFrameIdx_9;
	// System.IntPtr Vuforia.VuforiaManager::mLastProcessedFrameStatePtr
	intptr_t ___mLastProcessedFrameStatePtr_10;
	// System.Boolean Vuforia.VuforiaManager::mInitialized
	bool ___mInitialized_11;
	// System.Boolean Vuforia.VuforiaManager::mPaused
	bool ___mPaused_12;
	// Vuforia.TrackerData/FrameState Vuforia.VuforiaManager::mFrameState
	FrameState_t27F63EB51160CC986EEA30D16A1ECD13870CD1C7  ___mFrameState_13;
	// Vuforia.TrackerData/ManagedFrameState Vuforia.VuforiaManager::mManagedFrameState
	ManagedFrameState_t0094F8A942A5CE98E0F853C43647C56B9E2B2131  ___mManagedFrameState_14;
	// Vuforia.VuforiaManager/AutoRotationState Vuforia.VuforiaManager::mAutoRotationState
	AutoRotationState_tBA414656198ED259D653210D2C8840238234E33B  ___mAutoRotationState_15;
	// System.Int32 Vuforia.VuforiaManager::mLastFrameIdx
	int32_t ___mLastFrameIdx_16;
	// System.Boolean Vuforia.VuforiaManager::mIsSeeThroughDevice
	bool ___mIsSeeThroughDevice_17;
	// Vuforia.LateLatchingManager Vuforia.VuforiaManager::mLateLatchingManager
	LateLatchingManager_t7DB89BD7142F693327D85C14042D8DE9F3576707 * ___mLateLatchingManager_18;
	// Vuforia.CameraCalibrationComparer Vuforia.VuforiaManager::mCameraCalibrationComparer
	CameraCalibrationComparer_t72B785E0B7FDD0F2768912072A927135BD99E0D5 * ___mCameraCalibrationComparer_19;
	// UnityEngine.Vector3 Vuforia.VuforiaManager::mPosePositionalOffset
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___mPosePositionalOffset_20;
	// UnityEngine.Quaternion Vuforia.VuforiaManager::mPoseRotationalOffset
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___mPoseRotationalOffset_21;

public:
	inline static int32_t get_offset_of_mWorldCenterMode_1() { return static_cast<int32_t>(offsetof(VuforiaManager_tC5EAD9B005741ED776A8B4C47B5B583BA79EF0D4, ___mWorldCenterMode_1)); }
	inline int32_t get_mWorldCenterMode_1() const { return ___mWorldCenterMode_1; }
	inline int32_t* get_address_of_mWorldCenterMode_1() { return &___mWorldCenterMode_1; }
	inline void set_mWorldCenterMode_1(int32_t value)
	{
		___mWorldCenterMode_1 = value;
	}

	inline static int32_t get_offset_of_mWorldCenter_2() { return static_cast<int32_t>(offsetof(VuforiaManager_tC5EAD9B005741ED776A8B4C47B5B583BA79EF0D4, ___mWorldCenter_2)); }
	inline RuntimeObject* get_mWorldCenter_2() const { return ___mWorldCenter_2; }
	inline RuntimeObject** get_address_of_mWorldCenter_2() { return &___mWorldCenter_2; }
	inline void set_mWorldCenter_2(RuntimeObject* value)
	{
		___mWorldCenter_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mWorldCenter_2), (void*)value);
	}

	inline static int32_t get_offset_of_mVuMarkWorldCenter_3() { return static_cast<int32_t>(offsetof(VuforiaManager_tC5EAD9B005741ED776A8B4C47B5B583BA79EF0D4, ___mVuMarkWorldCenter_3)); }
	inline VuMarkBehaviour_t3313B0FDC425C763B9FF22F5249204E90C08125D * get_mVuMarkWorldCenter_3() const { return ___mVuMarkWorldCenter_3; }
	inline VuMarkBehaviour_t3313B0FDC425C763B9FF22F5249204E90C08125D ** get_address_of_mVuMarkWorldCenter_3() { return &___mVuMarkWorldCenter_3; }
	inline void set_mVuMarkWorldCenter_3(VuMarkBehaviour_t3313B0FDC425C763B9FF22F5249204E90C08125D * value)
	{
		___mVuMarkWorldCenter_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mVuMarkWorldCenter_3), (void*)value);
	}

	inline static int32_t get_offset_of_mARCameraTransform_4() { return static_cast<int32_t>(offsetof(VuforiaManager_tC5EAD9B005741ED776A8B4C47B5B583BA79EF0D4, ___mARCameraTransform_4)); }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * get_mARCameraTransform_4() const { return ___mARCameraTransform_4; }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA ** get_address_of_mARCameraTransform_4() { return &___mARCameraTransform_4; }
	inline void set_mARCameraTransform_4(Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * value)
	{
		___mARCameraTransform_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mARCameraTransform_4), (void*)value);
	}

	inline static int32_t get_offset_of_mCentralAnchorPoint_5() { return static_cast<int32_t>(offsetof(VuforiaManager_tC5EAD9B005741ED776A8B4C47B5B583BA79EF0D4, ___mCentralAnchorPoint_5)); }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * get_mCentralAnchorPoint_5() const { return ___mCentralAnchorPoint_5; }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA ** get_address_of_mCentralAnchorPoint_5() { return &___mCentralAnchorPoint_5; }
	inline void set_mCentralAnchorPoint_5(Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * value)
	{
		___mCentralAnchorPoint_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mCentralAnchorPoint_5), (void*)value);
	}

	inline static int32_t get_offset_of_mWCTrackableFoundQueue_6() { return static_cast<int32_t>(offsetof(VuforiaManager_tC5EAD9B005741ED776A8B4C47B5B583BA79EF0D4, ___mWCTrackableFoundQueue_6)); }
	inline LinkedList_1_t12E84E629C56E3A7185D46C82C901945FF66CA0B * get_mWCTrackableFoundQueue_6() const { return ___mWCTrackableFoundQueue_6; }
	inline LinkedList_1_t12E84E629C56E3A7185D46C82C901945FF66CA0B ** get_address_of_mWCTrackableFoundQueue_6() { return &___mWCTrackableFoundQueue_6; }
	inline void set_mWCTrackableFoundQueue_6(LinkedList_1_t12E84E629C56E3A7185D46C82C901945FF66CA0B * value)
	{
		___mWCTrackableFoundQueue_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mWCTrackableFoundQueue_6), (void*)value);
	}

	inline static int32_t get_offset_of_mCameraImages_7() { return static_cast<int32_t>(offsetof(VuforiaManager_tC5EAD9B005741ED776A8B4C47B5B583BA79EF0D4, ___mCameraImages_7)); }
	inline Dictionary_2_tEFA9BA4A93DC841D9D0D123D03831FE455C9DFA3 * get_mCameraImages_7() const { return ___mCameraImages_7; }
	inline Dictionary_2_tEFA9BA4A93DC841D9D0D123D03831FE455C9DFA3 ** get_address_of_mCameraImages_7() { return &___mCameraImages_7; }
	inline void set_mCameraImages_7(Dictionary_2_tEFA9BA4A93DC841D9D0D123D03831FE455C9DFA3 * value)
	{
		___mCameraImages_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mCameraImages_7), (void*)value);
	}

	inline static int32_t get_offset_of_mImageData_8() { return static_cast<int32_t>(offsetof(VuforiaManager_tC5EAD9B005741ED776A8B4C47B5B583BA79EF0D4, ___mImageData_8)); }
	inline intptr_t get_mImageData_8() const { return ___mImageData_8; }
	inline intptr_t* get_address_of_mImageData_8() { return &___mImageData_8; }
	inline void set_mImageData_8(intptr_t value)
	{
		___mImageData_8 = value;
	}

	inline static int32_t get_offset_of_mInjectedFrameIdx_9() { return static_cast<int32_t>(offsetof(VuforiaManager_tC5EAD9B005741ED776A8B4C47B5B583BA79EF0D4, ___mInjectedFrameIdx_9)); }
	inline int32_t get_mInjectedFrameIdx_9() const { return ___mInjectedFrameIdx_9; }
	inline int32_t* get_address_of_mInjectedFrameIdx_9() { return &___mInjectedFrameIdx_9; }
	inline void set_mInjectedFrameIdx_9(int32_t value)
	{
		___mInjectedFrameIdx_9 = value;
	}

	inline static int32_t get_offset_of_mLastProcessedFrameStatePtr_10() { return static_cast<int32_t>(offsetof(VuforiaManager_tC5EAD9B005741ED776A8B4C47B5B583BA79EF0D4, ___mLastProcessedFrameStatePtr_10)); }
	inline intptr_t get_mLastProcessedFrameStatePtr_10() const { return ___mLastProcessedFrameStatePtr_10; }
	inline intptr_t* get_address_of_mLastProcessedFrameStatePtr_10() { return &___mLastProcessedFrameStatePtr_10; }
	inline void set_mLastProcessedFrameStatePtr_10(intptr_t value)
	{
		___mLastProcessedFrameStatePtr_10 = value;
	}

	inline static int32_t get_offset_of_mInitialized_11() { return static_cast<int32_t>(offsetof(VuforiaManager_tC5EAD9B005741ED776A8B4C47B5B583BA79EF0D4, ___mInitialized_11)); }
	inline bool get_mInitialized_11() const { return ___mInitialized_11; }
	inline bool* get_address_of_mInitialized_11() { return &___mInitialized_11; }
	inline void set_mInitialized_11(bool value)
	{
		___mInitialized_11 = value;
	}

	inline static int32_t get_offset_of_mPaused_12() { return static_cast<int32_t>(offsetof(VuforiaManager_tC5EAD9B005741ED776A8B4C47B5B583BA79EF0D4, ___mPaused_12)); }
	inline bool get_mPaused_12() const { return ___mPaused_12; }
	inline bool* get_address_of_mPaused_12() { return &___mPaused_12; }
	inline void set_mPaused_12(bool value)
	{
		___mPaused_12 = value;
	}

	inline static int32_t get_offset_of_mFrameState_13() { return static_cast<int32_t>(offsetof(VuforiaManager_tC5EAD9B005741ED776A8B4C47B5B583BA79EF0D4, ___mFrameState_13)); }
	inline FrameState_t27F63EB51160CC986EEA30D16A1ECD13870CD1C7  get_mFrameState_13() const { return ___mFrameState_13; }
	inline FrameState_t27F63EB51160CC986EEA30D16A1ECD13870CD1C7 * get_address_of_mFrameState_13() { return &___mFrameState_13; }
	inline void set_mFrameState_13(FrameState_t27F63EB51160CC986EEA30D16A1ECD13870CD1C7  value)
	{
		___mFrameState_13 = value;
	}

	inline static int32_t get_offset_of_mManagedFrameState_14() { return static_cast<int32_t>(offsetof(VuforiaManager_tC5EAD9B005741ED776A8B4C47B5B583BA79EF0D4, ___mManagedFrameState_14)); }
	inline ManagedFrameState_t0094F8A942A5CE98E0F853C43647C56B9E2B2131  get_mManagedFrameState_14() const { return ___mManagedFrameState_14; }
	inline ManagedFrameState_t0094F8A942A5CE98E0F853C43647C56B9E2B2131 * get_address_of_mManagedFrameState_14() { return &___mManagedFrameState_14; }
	inline void set_mManagedFrameState_14(ManagedFrameState_t0094F8A942A5CE98E0F853C43647C56B9E2B2131  value)
	{
		___mManagedFrameState_14 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___mManagedFrameState_14))->___TrackableResultDataArray_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___mManagedFrameState_14))->___VuMarkDataArray_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___mManagedFrameState_14))->___VuMarkResultDataArray_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___mManagedFrameState_14))->___VirtualButtonData_3), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_mAutoRotationState_15() { return static_cast<int32_t>(offsetof(VuforiaManager_tC5EAD9B005741ED776A8B4C47B5B583BA79EF0D4, ___mAutoRotationState_15)); }
	inline AutoRotationState_tBA414656198ED259D653210D2C8840238234E33B  get_mAutoRotationState_15() const { return ___mAutoRotationState_15; }
	inline AutoRotationState_tBA414656198ED259D653210D2C8840238234E33B * get_address_of_mAutoRotationState_15() { return &___mAutoRotationState_15; }
	inline void set_mAutoRotationState_15(AutoRotationState_tBA414656198ED259D653210D2C8840238234E33B  value)
	{
		___mAutoRotationState_15 = value;
	}

	inline static int32_t get_offset_of_mLastFrameIdx_16() { return static_cast<int32_t>(offsetof(VuforiaManager_tC5EAD9B005741ED776A8B4C47B5B583BA79EF0D4, ___mLastFrameIdx_16)); }
	inline int32_t get_mLastFrameIdx_16() const { return ___mLastFrameIdx_16; }
	inline int32_t* get_address_of_mLastFrameIdx_16() { return &___mLastFrameIdx_16; }
	inline void set_mLastFrameIdx_16(int32_t value)
	{
		___mLastFrameIdx_16 = value;
	}

	inline static int32_t get_offset_of_mIsSeeThroughDevice_17() { return static_cast<int32_t>(offsetof(VuforiaManager_tC5EAD9B005741ED776A8B4C47B5B583BA79EF0D4, ___mIsSeeThroughDevice_17)); }
	inline bool get_mIsSeeThroughDevice_17() const { return ___mIsSeeThroughDevice_17; }
	inline bool* get_address_of_mIsSeeThroughDevice_17() { return &___mIsSeeThroughDevice_17; }
	inline void set_mIsSeeThroughDevice_17(bool value)
	{
		___mIsSeeThroughDevice_17 = value;
	}

	inline static int32_t get_offset_of_mLateLatchingManager_18() { return static_cast<int32_t>(offsetof(VuforiaManager_tC5EAD9B005741ED776A8B4C47B5B583BA79EF0D4, ___mLateLatchingManager_18)); }
	inline LateLatchingManager_t7DB89BD7142F693327D85C14042D8DE9F3576707 * get_mLateLatchingManager_18() const { return ___mLateLatchingManager_18; }
	inline LateLatchingManager_t7DB89BD7142F693327D85C14042D8DE9F3576707 ** get_address_of_mLateLatchingManager_18() { return &___mLateLatchingManager_18; }
	inline void set_mLateLatchingManager_18(LateLatchingManager_t7DB89BD7142F693327D85C14042D8DE9F3576707 * value)
	{
		___mLateLatchingManager_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mLateLatchingManager_18), (void*)value);
	}

	inline static int32_t get_offset_of_mCameraCalibrationComparer_19() { return static_cast<int32_t>(offsetof(VuforiaManager_tC5EAD9B005741ED776A8B4C47B5B583BA79EF0D4, ___mCameraCalibrationComparer_19)); }
	inline CameraCalibrationComparer_t72B785E0B7FDD0F2768912072A927135BD99E0D5 * get_mCameraCalibrationComparer_19() const { return ___mCameraCalibrationComparer_19; }
	inline CameraCalibrationComparer_t72B785E0B7FDD0F2768912072A927135BD99E0D5 ** get_address_of_mCameraCalibrationComparer_19() { return &___mCameraCalibrationComparer_19; }
	inline void set_mCameraCalibrationComparer_19(CameraCalibrationComparer_t72B785E0B7FDD0F2768912072A927135BD99E0D5 * value)
	{
		___mCameraCalibrationComparer_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mCameraCalibrationComparer_19), (void*)value);
	}

	inline static int32_t get_offset_of_mPosePositionalOffset_20() { return static_cast<int32_t>(offsetof(VuforiaManager_tC5EAD9B005741ED776A8B4C47B5B583BA79EF0D4, ___mPosePositionalOffset_20)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_mPosePositionalOffset_20() const { return ___mPosePositionalOffset_20; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_mPosePositionalOffset_20() { return &___mPosePositionalOffset_20; }
	inline void set_mPosePositionalOffset_20(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___mPosePositionalOffset_20 = value;
	}

	inline static int32_t get_offset_of_mPoseRotationalOffset_21() { return static_cast<int32_t>(offsetof(VuforiaManager_tC5EAD9B005741ED776A8B4C47B5B583BA79EF0D4, ___mPoseRotationalOffset_21)); }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  get_mPoseRotationalOffset_21() const { return ___mPoseRotationalOffset_21; }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * get_address_of_mPoseRotationalOffset_21() { return &___mPoseRotationalOffset_21; }
	inline void set_mPoseRotationalOffset_21(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  value)
	{
		___mPoseRotationalOffset_21 = value;
	}
};

struct VuforiaManager_tC5EAD9B005741ED776A8B4C47B5B583BA79EF0D4_StaticFields
{
public:
	// Vuforia.VuforiaManager Vuforia.VuforiaManager::sInstance
	VuforiaManager_tC5EAD9B005741ED776A8B4C47B5B583BA79EF0D4 * ___sInstance_0;

public:
	inline static int32_t get_offset_of_sInstance_0() { return static_cast<int32_t>(offsetof(VuforiaManager_tC5EAD9B005741ED776A8B4C47B5B583BA79EF0D4_StaticFields, ___sInstance_0)); }
	inline VuforiaManager_tC5EAD9B005741ED776A8B4C47B5B583BA79EF0D4 * get_sInstance_0() const { return ___sInstance_0; }
	inline VuforiaManager_tC5EAD9B005741ED776A8B4C47B5B583BA79EF0D4 ** get_address_of_sInstance_0() { return &___sInstance_0; }
	inline void set_sInstance_0(VuforiaManager_tC5EAD9B005741ED776A8B4C47B5B583BA79EF0D4 * value)
	{
		___sInstance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sInstance_0), (void*)value);
	}
};


// Vuforia.WebCamProfile
struct  WebCamProfile_t412A1646A88AF83CE44EE036E0E513F2E867373B  : public RuntimeObject
{
public:
	// Vuforia.WebCamProfile/ProfileCollection Vuforia.WebCamProfile::mProfileCollection
	ProfileCollection_t265A716EFBF9BE67BA63AFFD090C3FB51E8D535F  ___mProfileCollection_0;

public:
	inline static int32_t get_offset_of_mProfileCollection_0() { return static_cast<int32_t>(offsetof(WebCamProfile_t412A1646A88AF83CE44EE036E0E513F2E867373B, ___mProfileCollection_0)); }
	inline ProfileCollection_t265A716EFBF9BE67BA63AFFD090C3FB51E8D535F  get_mProfileCollection_0() const { return ___mProfileCollection_0; }
	inline ProfileCollection_t265A716EFBF9BE67BA63AFFD090C3FB51E8D535F * get_address_of_mProfileCollection_0() { return &___mProfileCollection_0; }
	inline void set_mProfileCollection_0(ProfileCollection_t265A716EFBF9BE67BA63AFFD090C3FB51E8D535F  value)
	{
		___mProfileCollection_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___mProfileCollection_0))->___Profiles_1), (void*)NULL);
	}
};


// UnityEngine.Camera
struct  Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34  : public Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8
{
public:

public:
};

struct Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34_StaticFields
{
public:
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * ___onPreCull_4;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * ___onPreRender_5;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * ___onPostRender_6;

public:
	inline static int32_t get_offset_of_onPreCull_4() { return static_cast<int32_t>(offsetof(Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34_StaticFields, ___onPreCull_4)); }
	inline CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * get_onPreCull_4() const { return ___onPreCull_4; }
	inline CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 ** get_address_of_onPreCull_4() { return &___onPreCull_4; }
	inline void set_onPreCull_4(CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * value)
	{
		___onPreCull_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPreCull_4), (void*)value);
	}

	inline static int32_t get_offset_of_onPreRender_5() { return static_cast<int32_t>(offsetof(Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34_StaticFields, ___onPreRender_5)); }
	inline CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * get_onPreRender_5() const { return ___onPreRender_5; }
	inline CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 ** get_address_of_onPreRender_5() { return &___onPreRender_5; }
	inline void set_onPreRender_5(CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * value)
	{
		___onPreRender_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPreRender_5), (void*)value);
	}

	inline static int32_t get_offset_of_onPostRender_6() { return static_cast<int32_t>(offsetof(Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34_StaticFields, ___onPostRender_6)); }
	inline CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * get_onPostRender_6() const { return ___onPostRender_6; }
	inline CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 ** get_address_of_onPostRender_6() { return &___onPostRender_6; }
	inline void set_onPostRender_6(CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * value)
	{
		___onPostRender_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPostRender_6), (void*)value);
	}
};


// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429  : public Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8
{
public:

public:
};


// Vuforia.VuforiaMonoBehaviour
struct  VuforiaMonoBehaviour_t77BA0F1340884D0EDFE4A2D81BEACC760157309F  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:

public:
};


// Vuforia.TrackableBehaviour
struct  TrackableBehaviour_tEB5841E37069E05AACF43C4F6E75EE1B6B49D445  : public VuforiaMonoBehaviour_t77BA0F1340884D0EDFE4A2D81BEACC760157309F
{
public:
	// System.Double Vuforia.TrackableBehaviour::<TimeStamp>k__BackingField
	double ___U3CTimeStampU3Ek__BackingField_4;
	// System.String Vuforia.TrackableBehaviour::mTrackableName
	String_t* ___mTrackableName_5;
	// System.Boolean Vuforia.TrackableBehaviour::mInitializedInEditor
	bool ___mInitializedInEditor_6;
	// Vuforia.TrackableBehaviour/Status Vuforia.TrackableBehaviour::mStatus
	int32_t ___mStatus_7;
	// Vuforia.TrackableBehaviour/StatusInfo Vuforia.TrackableBehaviour::mStatusInfo
	int32_t ___mStatusInfo_8;
	// Vuforia.Trackable Vuforia.TrackableBehaviour::mTrackable
	RuntimeObject* ___mTrackable_9;
	// System.Collections.Generic.ICollection`1<System.Action`1<Vuforia.TrackableBehaviour/StatusChangeResult>> Vuforia.TrackableBehaviour::mStatusChangedEventHandlers
	RuntimeObject* ___mStatusChangedEventHandlers_10;
	// System.Collections.Generic.ICollection`1<System.Action`1<Vuforia.TrackableBehaviour/StatusInfoChangeResult>> Vuforia.TrackableBehaviour::mStatusInfoChangedEventHandlers
	RuntimeObject* ___mStatusInfoChangedEventHandlers_11;

public:
	inline static int32_t get_offset_of_U3CTimeStampU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(TrackableBehaviour_tEB5841E37069E05AACF43C4F6E75EE1B6B49D445, ___U3CTimeStampU3Ek__BackingField_4)); }
	inline double get_U3CTimeStampU3Ek__BackingField_4() const { return ___U3CTimeStampU3Ek__BackingField_4; }
	inline double* get_address_of_U3CTimeStampU3Ek__BackingField_4() { return &___U3CTimeStampU3Ek__BackingField_4; }
	inline void set_U3CTimeStampU3Ek__BackingField_4(double value)
	{
		___U3CTimeStampU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_mTrackableName_5() { return static_cast<int32_t>(offsetof(TrackableBehaviour_tEB5841E37069E05AACF43C4F6E75EE1B6B49D445, ___mTrackableName_5)); }
	inline String_t* get_mTrackableName_5() const { return ___mTrackableName_5; }
	inline String_t** get_address_of_mTrackableName_5() { return &___mTrackableName_5; }
	inline void set_mTrackableName_5(String_t* value)
	{
		___mTrackableName_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mTrackableName_5), (void*)value);
	}

	inline static int32_t get_offset_of_mInitializedInEditor_6() { return static_cast<int32_t>(offsetof(TrackableBehaviour_tEB5841E37069E05AACF43C4F6E75EE1B6B49D445, ___mInitializedInEditor_6)); }
	inline bool get_mInitializedInEditor_6() const { return ___mInitializedInEditor_6; }
	inline bool* get_address_of_mInitializedInEditor_6() { return &___mInitializedInEditor_6; }
	inline void set_mInitializedInEditor_6(bool value)
	{
		___mInitializedInEditor_6 = value;
	}

	inline static int32_t get_offset_of_mStatus_7() { return static_cast<int32_t>(offsetof(TrackableBehaviour_tEB5841E37069E05AACF43C4F6E75EE1B6B49D445, ___mStatus_7)); }
	inline int32_t get_mStatus_7() const { return ___mStatus_7; }
	inline int32_t* get_address_of_mStatus_7() { return &___mStatus_7; }
	inline void set_mStatus_7(int32_t value)
	{
		___mStatus_7 = value;
	}

	inline static int32_t get_offset_of_mStatusInfo_8() { return static_cast<int32_t>(offsetof(TrackableBehaviour_tEB5841E37069E05AACF43C4F6E75EE1B6B49D445, ___mStatusInfo_8)); }
	inline int32_t get_mStatusInfo_8() const { return ___mStatusInfo_8; }
	inline int32_t* get_address_of_mStatusInfo_8() { return &___mStatusInfo_8; }
	inline void set_mStatusInfo_8(int32_t value)
	{
		___mStatusInfo_8 = value;
	}

	inline static int32_t get_offset_of_mTrackable_9() { return static_cast<int32_t>(offsetof(TrackableBehaviour_tEB5841E37069E05AACF43C4F6E75EE1B6B49D445, ___mTrackable_9)); }
	inline RuntimeObject* get_mTrackable_9() const { return ___mTrackable_9; }
	inline RuntimeObject** get_address_of_mTrackable_9() { return &___mTrackable_9; }
	inline void set_mTrackable_9(RuntimeObject* value)
	{
		___mTrackable_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mTrackable_9), (void*)value);
	}

	inline static int32_t get_offset_of_mStatusChangedEventHandlers_10() { return static_cast<int32_t>(offsetof(TrackableBehaviour_tEB5841E37069E05AACF43C4F6E75EE1B6B49D445, ___mStatusChangedEventHandlers_10)); }
	inline RuntimeObject* get_mStatusChangedEventHandlers_10() const { return ___mStatusChangedEventHandlers_10; }
	inline RuntimeObject** get_address_of_mStatusChangedEventHandlers_10() { return &___mStatusChangedEventHandlers_10; }
	inline void set_mStatusChangedEventHandlers_10(RuntimeObject* value)
	{
		___mStatusChangedEventHandlers_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mStatusChangedEventHandlers_10), (void*)value);
	}

	inline static int32_t get_offset_of_mStatusInfoChangedEventHandlers_11() { return static_cast<int32_t>(offsetof(TrackableBehaviour_tEB5841E37069E05AACF43C4F6E75EE1B6B49D445, ___mStatusInfoChangedEventHandlers_11)); }
	inline RuntimeObject* get_mStatusInfoChangedEventHandlers_11() const { return ___mStatusInfoChangedEventHandlers_11; }
	inline RuntimeObject** get_address_of_mStatusInfoChangedEventHandlers_11() { return &___mStatusInfoChangedEventHandlers_11; }
	inline void set_mStatusInfoChangedEventHandlers_11(RuntimeObject* value)
	{
		___mStatusInfoChangedEventHandlers_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mStatusInfoChangedEventHandlers_11), (void*)value);
	}
};


// Vuforia.WireframeBehaviour
struct  WireframeBehaviour_t2D40F2BC6BB4E6A6FB8A02A7339960FAB0B68971  : public VuforiaMonoBehaviour_t77BA0F1340884D0EDFE4A2D81BEACC760157309F
{
public:
	// UnityEngine.Material Vuforia.WireframeBehaviour::lineMaterial
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___lineMaterial_4;
	// System.Boolean Vuforia.WireframeBehaviour::ShowLines
	bool ___ShowLines_5;
	// UnityEngine.Color Vuforia.WireframeBehaviour::LineColor
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___LineColor_6;
	// UnityEngine.Material Vuforia.WireframeBehaviour::mLineMaterial
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___mLineMaterial_7;

public:
	inline static int32_t get_offset_of_lineMaterial_4() { return static_cast<int32_t>(offsetof(WireframeBehaviour_t2D40F2BC6BB4E6A6FB8A02A7339960FAB0B68971, ___lineMaterial_4)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_lineMaterial_4() const { return ___lineMaterial_4; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_lineMaterial_4() { return &___lineMaterial_4; }
	inline void set_lineMaterial_4(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___lineMaterial_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___lineMaterial_4), (void*)value);
	}

	inline static int32_t get_offset_of_ShowLines_5() { return static_cast<int32_t>(offsetof(WireframeBehaviour_t2D40F2BC6BB4E6A6FB8A02A7339960FAB0B68971, ___ShowLines_5)); }
	inline bool get_ShowLines_5() const { return ___ShowLines_5; }
	inline bool* get_address_of_ShowLines_5() { return &___ShowLines_5; }
	inline void set_ShowLines_5(bool value)
	{
		___ShowLines_5 = value;
	}

	inline static int32_t get_offset_of_LineColor_6() { return static_cast<int32_t>(offsetof(WireframeBehaviour_t2D40F2BC6BB4E6A6FB8A02A7339960FAB0B68971, ___LineColor_6)); }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  get_LineColor_6() const { return ___LineColor_6; }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * get_address_of_LineColor_6() { return &___LineColor_6; }
	inline void set_LineColor_6(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  value)
	{
		___LineColor_6 = value;
	}

	inline static int32_t get_offset_of_mLineMaterial_7() { return static_cast<int32_t>(offsetof(WireframeBehaviour_t2D40F2BC6BB4E6A6FB8A02A7339960FAB0B68971, ___mLineMaterial_7)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_mLineMaterial_7() const { return ___mLineMaterial_7; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_mLineMaterial_7() { return &___mLineMaterial_7; }
	inline void set_mLineMaterial_7(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___mLineMaterial_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mLineMaterial_7), (void*)value);
	}
};


// Vuforia.WireframeTrackableEventHandler
struct  WireframeTrackableEventHandler_tF7638FBCA1F66A9A53BE2D4715F9869AEA286B81  : public VuforiaMonoBehaviour_t77BA0F1340884D0EDFE4A2D81BEACC760157309F
{
public:
	// Vuforia.TrackableBehaviour Vuforia.WireframeTrackableEventHandler::mTrackableBehaviour
	TrackableBehaviour_tEB5841E37069E05AACF43C4F6E75EE1B6B49D445 * ___mTrackableBehaviour_4;

public:
	inline static int32_t get_offset_of_mTrackableBehaviour_4() { return static_cast<int32_t>(offsetof(WireframeTrackableEventHandler_tF7638FBCA1F66A9A53BE2D4715F9869AEA286B81, ___mTrackableBehaviour_4)); }
	inline TrackableBehaviour_tEB5841E37069E05AACF43C4F6E75EE1B6B49D445 * get_mTrackableBehaviour_4() const { return ___mTrackableBehaviour_4; }
	inline TrackableBehaviour_tEB5841E37069E05AACF43C4F6E75EE1B6B49D445 ** get_address_of_mTrackableBehaviour_4() { return &___mTrackableBehaviour_4; }
	inline void set_mTrackableBehaviour_4(TrackableBehaviour_tEB5841E37069E05AACF43C4F6E75EE1B6B49D445 * value)
	{
		___mTrackableBehaviour_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mTrackableBehaviour_4), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  m_Items[1];

public:
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		m_Items[index] = value;
	}
};
// System.Int32[]
struct Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) int32_t m_Items[1];

public:
	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Camera[]
struct CameraU5BU5D_t2A1957E88FB79357C12B87941970D776D30E90F9  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * m_Items[1];

public:
	inline Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Collider[]
struct ColliderU5BU5D_t70D1FDAE17E4359298B2BAA828048D1B7CFFE252  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF * m_Items[1];

public:
	inline Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// Vuforia.WireframeBehaviour[]
struct WireframeBehaviourU5BU5D_tDEDB3E75E88EF7885B300EA39B1C524378CB450B  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) WireframeBehaviour_t2D40F2BC6BB4E6A6FB8A02A7339960FAB0B68971 * m_Items[1];

public:
	inline WireframeBehaviour_t2D40F2BC6BB4E6A6FB8A02A7339960FAB0B68971 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline WireframeBehaviour_t2D40F2BC6BB4E6A6FB8A02A7339960FAB0B68971 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, WireframeBehaviour_t2D40F2BC6BB4E6A6FB8A02A7339960FAB0B68971 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline WireframeBehaviour_t2D40F2BC6BB4E6A6FB8A02A7339960FAB0B68971 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline WireframeBehaviour_t2D40F2BC6BB4E6A6FB8A02A7339960FAB0B68971 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, WireframeBehaviour_t2D40F2BC6BB4E6A6FB8A02A7339960FAB0B68971 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Renderer[]
struct RendererU5BU5D_t711BACBBBFC0E06179ADB8932DBA208665108C93  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * m_Items[1];

public:
	inline Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,Vuforia.WebCamProfile/ProfileData>::TryGetValue(!0,!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m43433BF926CA33674F0E21F27646CD720767E147_gshared (Dictionary_2_tA5AF8276D11870C8297C218E08DBEF84C31A1B28 * __this, RuntimeObject * ___key0, ProfileData_tDD58D66EB33579FEA6AE2378DAB61BBF53265F67 * ___value1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,Vuforia.WebCamProfile/ProfileData>::ContainsKey(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m29E567EDA4871C6CC6B8BFD2C2E441289E824EAF_gshared (Dictionary_2_tA5AF8276D11870C8297C218E08DBEF84C31A1B28 * __this, RuntimeObject * ___key0, const RuntimeMethod* method);
// !!0[] UnityEngine.GameObject::GetComponentsInChildren<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* GameObject_GetComponentsInChildren_TisRuntimeObject_m800C0157D5841A8D4C6A741E6C4F9FFFC0E0E33F_gshared (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponent_TisRuntimeObject_m15E3130603CE5400743CCCDEE7600FB9EEFAE5C0_gshared (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method);
// System.Void System.Action`1<Vuforia.TrackableBehaviour/StatusChangeResult>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_m53259879184872E10895C4F37D375FC10EC3BE35_gshared (Action_1_t6AC22AF716ED9149BAB0EF67822C504F3206A72E * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// !!0[] UnityEngine.Component::GetComponentsInChildren<System.Object>(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* Component_GetComponentsInChildren_TisRuntimeObject_m37863ECCB395B23FD2A694C9A67E2332D1CE97D0_gshared (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, bool ___includeInactive0, const RuntimeMethod* method);

// System.Void Vuforia.WebCamARController/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m4A4C748E59C5F122B8A6D2A768185D73C6DC4B80 (U3CU3Ec_tEEB2B24B40B9A5CB6D7DA0C0CFCDF54DFA0ED399 * __this, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void Vuforia.WebCamTexAdaptor::.ctor(System.String,Vuforia.WebCamProfile/ProfileData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebCamTexAdaptor__ctor_m1AE0C6DB1306DC7C40A3ACD6FC35EF7141D9D725 (WebCamTexAdaptor_t5D6B63102D1CE806620EC1D2CD6C98FB5739AF13 * __this, String_t* ___deviceName0, ProfileData_tDD58D66EB33579FEA6AE2378DAB61BBF53265F67  ___profile1, const RuntimeMethod* method);
// Vuforia.IPlayModeEditorUtility Vuforia.PlayModeEditorUtility::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PlayModeEditorUtility_get_Instance_m6004D47C3658A3E34E2D489868410E0F3636386B (const RuntimeMethod* method);
// System.String System.String::ToLower()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_ToLower_m5287204D93C9DDC4DF84581ADD756D0FDE2BA5A8 (String_t* __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,Vuforia.WebCamProfile/ProfileData>::TryGetValue(!0,!1&)
inline bool Dictionary_2_TryGetValue_m9FCCC90AD328074EB4D4E3C4689CAED3115A5A2C (Dictionary_2_t3039270ADBC232731ABE07616CAC5DE79149ABE2 * __this, String_t* ___key0, ProfileData_tDD58D66EB33579FEA6AE2378DAB61BBF53265F67 * ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t3039270ADBC232731ABE07616CAC5DE79149ABE2 *, String_t*, ProfileData_tDD58D66EB33579FEA6AE2378DAB61BBF53265F67 *, const RuntimeMethod*))Dictionary_2_TryGetValue_m43433BF926CA33674F0E21F27646CD720767E147_gshared)(__this, ___key0, ___value1, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,Vuforia.WebCamProfile/ProfileData>::ContainsKey(!0)
inline bool Dictionary_2_ContainsKey_m01C2AF0FFA5776F427BA0FDC957E9B9F3C513972 (Dictionary_2_t3039270ADBC232731ABE07616CAC5DE79149ABE2 * __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t3039270ADBC232731ABE07616CAC5DE79149ABE2 *, String_t*, const RuntimeMethod*))Dictionary_2_ContainsKey_m29E567EDA4871C6CC6B8BFD2C2E441289E824EAF_gshared)(__this, ___key0, method);
}
// System.Void Vuforia.WebCamProfile/ProfileCollection::.ctor(Vuforia.WebCamProfile/ProfileData,System.Collections.Generic.Dictionary`2<System.String,Vuforia.WebCamProfile/ProfileData>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProfileCollection__ctor_mD6558D3CA2EAB89005D6B7B20A6DDAA3E23DCD49 (ProfileCollection_t265A716EFBF9BE67BA63AFFD090C3FB51E8D535F * __this, ProfileData_tDD58D66EB33579FEA6AE2378DAB61BBF53265F67  ___defaultProfile0, Dictionary_2_t3039270ADBC232731ABE07616CAC5DE79149ABE2 * ___profiles1, const RuntimeMethod* method);
// System.Boolean UnityEngine.WebCamTexture::get_didUpdateThisFrame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WebCamTexture_get_didUpdateThisFrame_mFB0307CCD0634E6CCD89BC9368C7B0361762B3C4 (WebCamTexture_tEC97A7A0A101B159FEC9A3E95B14E41DD84EFD73 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.WebCamTexture::get_isPlaying()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WebCamTexture_get_isPlaying_m0BF473554164B2C30475CCD8C6BC1B93E9B52E67 (WebCamTexture_tEC97A7A0A101B159FEC9A3E95B14E41DD84EFD73 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.WebCamTexture::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebCamTexture__ctor_mA132E1976B248264D5AD01A1D45254FCF070D241 (WebCamTexture_tEC97A7A0A101B159FEC9A3E95B14E41DD84EFD73 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.WebCamTexture::set_deviceName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebCamTexture_set_deviceName_m334B4B3FC3BCDBBDB669073C9456FE8C351BF157 (WebCamTexture_tEC97A7A0A101B159FEC9A3E95B14E41DD84EFD73 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.WebCamTexture::set_requestedFPS(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebCamTexture_set_requestedFPS_mEEA829DEFFB545A53D3DB35B319EAB13E758E2F5 (WebCamTexture_tEC97A7A0A101B159FEC9A3E95B14E41DD84EFD73 * __this, float ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.WebCamTexture::set_requestedWidth(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebCamTexture_set_requestedWidth_m277433251237DE574646355B010DA9856FD072D9 (WebCamTexture_tEC97A7A0A101B159FEC9A3E95B14E41DD84EFD73 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.WebCamTexture::set_requestedHeight(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebCamTexture_set_requestedHeight_m4056DBF4457C4487B1DB1E371BC886DE7CFBB918 (WebCamTexture_tEC97A7A0A101B159FEC9A3E95B14E41DD84EFD73 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Application::HasUserAuthorization(UnityEngine.UserAuthorization)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Application_HasUserAuthorization_m0FA56DDE2B2F64D6A0861367C23200BAD35080E3 (int32_t ___mode0, const RuntimeMethod* method);
// UnityEngine.AsyncOperation UnityEngine.Application::RequestUserAuthorization(UnityEngine.UserAuthorization)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncOperation_t304C51ABED8AE734CC8DDDFE13013D8D5A44641D * Application_RequestUserAuthorization_m157EBC059CA85EAE058A0E31AE17056B56A889DD (int32_t ___mode0, const RuntimeMethod* method);
// System.Void UnityEngine.WebCamTexture::Play()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebCamTexture_Play_mCF10A9B5EE587A066396B6378A972B31C9134436 (WebCamTexture_tEC97A7A0A101B159FEC9A3E95B14E41DD84EFD73 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.WebCamTexture::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebCamTexture_Stop_m4E3BD56B6481E2A0D53707119CFCB6074941B447 (WebCamTexture_tEC97A7A0A101B159FEC9A3E95B14E41DD84EFD73 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.AsyncOperation::get_isDone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AsyncOperation_get_isDone_m2A08EE3D38FD9FE81F2D619FA66255B6F61DAB54 (AsyncOperation_t304C51ABED8AE734CC8DDDFE13013D8D5A44641D * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1 (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___x0, Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___y1, const RuntimeMethod* method);
// System.Void UnityEngine.Material::.ctor(UnityEngine.Material)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material__ctor_m0171C6D4D3FD04D58C70808F255DBA67D0ED2BDE (Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * __this, Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___source0, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogWarning(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_m37338644DC81F640CCDFEAE35A223F0E965F0568 (RuntimeObject * ___message0, const RuntimeMethod* method);
// Vuforia.VuforiaManager Vuforia.VuforiaManager::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VuforiaManager_tC5EAD9B005741ED776A8B4C47B5B583BA79EF0D4 * VuforiaManager_get_Instance_m2B25B684318BF4EC46E825BD3F4E69336D9FC38E (const RuntimeMethod* method);
// UnityEngine.Transform Vuforia.VuforiaManager::get_ARCameraTransform()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * VuforiaManager_get_ARCameraTransform_m2C85F2B01C96224B933C8FDC84EB343FE6707102_inline (VuforiaManager_tC5EAD9B005741ED776A8B4C47B5B583BA79EF0D4 * __this, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method);
// !!0[] UnityEngine.GameObject::GetComponentsInChildren<UnityEngine.Camera>()
inline CameraU5BU5D_t2A1957E88FB79357C12B87941970D776D30E90F9* GameObject_GetComponentsInChildren_TisCamera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34_m124464CC8EC121898C98E8FA7538AD4714D3B494 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method)
{
	return ((  CameraU5BU5D_t2A1957E88FB79357C12B87941970D776D30E90F9* (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, const RuntimeMethod*))GameObject_GetComponentsInChildren_TisRuntimeObject_m800C0157D5841A8D4C6A741E6C4F9FFFC0E0E33F_gshared)(__this, method);
}
// UnityEngine.Camera UnityEngine.Camera::get_current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * Camera_get_current_m6D8446E8359399CD9108A8E524671E0CC6E20350 (const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___x0, Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___y1, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.MeshFilter>()
inline MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * Component_GetComponent_TisMeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0_mF3F89565A9CEFF85AA1FB27C6EC64BE590DC386B (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method)
{
	return ((  MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * (*) (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m15E3130603CE5400743CCCDEE7600FB9EEFAE5C0_gshared)(__this, method);
}
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_m8B2A44B4B1406ED346D1AE6D962294FD58D0D534 (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___exists0, const RuntimeMethod* method);
// UnityEngine.Mesh UnityEngine.MeshFilter::get_sharedMesh()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * MeshFilter_get_sharedMesh_mC076FD5461BFBBAD3BE49D25263CF140700D9902 (MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3[] UnityEngine.Mesh::get_vertices()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* Mesh_get_vertices_m7D07DC0F071C142B87F675B148FC0F7A243238B9 (Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * __this, const RuntimeMethod* method);
// System.Int32[] UnityEngine.Mesh::get_triangles()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* Mesh_get_triangles_mAAAFC770B8EE3F56992D5764EF8C2EC06EF743AC (Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * __this, const RuntimeMethod* method);
// System.Void UnityEngine.GL::PushMatrix()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GL_PushMatrix_mE47A23F3A906899E88AC525FFE2C3C2BD834DFF9 (const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9 (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method);
// UnityEngine.Matrix4x4 UnityEngine.Transform::get_localToWorldMatrix()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  Transform_get_localToWorldMatrix_mBC86B8C7BA6F53DAB8E0120D77729166399A0EED (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, const RuntimeMethod* method);
// System.Void UnityEngine.GL::MultMatrix(UnityEngine.Matrix4x4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GL_MultMatrix_m1DFDF696AC702066E319BD72252B7D97E74F3753 (Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  ___m0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Material::SetPass(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Material_SetPass_m4BE0A8FCBF158C83522AA2F69118A2FE33683918 (Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * __this, int32_t ___pass0, const RuntimeMethod* method);
// System.Void UnityEngine.Material::SetColor(System.String,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_SetColor_mB91EF8CAC3AB3B39D2535BF9F7FECECF3EC2161C (Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * __this, String_t* ___name0, Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___value1, const RuntimeMethod* method);
// System.Void UnityEngine.GL::Begin(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GL_Begin_m9A48BD6A2DA850D54250EF638DF5EC61F83E293C (int32_t ___mode0, const RuntimeMethod* method);
// System.Void UnityEngine.GL::Vertex(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GL_Vertex_mCDF99057939B414F44F9ECF9E8C592E123EAC41A (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___v0, const RuntimeMethod* method);
// System.Void UnityEngine.GL::End()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GL_End_m7EDEB843BD9F7E00BD838FDE074B4688C55C0755 (const RuntimeMethod* method);
// System.Void UnityEngine.GL::PopMatrix()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GL_PopMatrix_mCAA6BC17D97358A4BC329E789AF2CA26C1204112 (const RuntimeMethod* method);
// System.Boolean UnityEngine.Behaviour::get_enabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Behaviour_get_enabled_mAA0C9ED5A3D1589C1C8AA22636543528DB353CFB (Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8 * __this, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  Transform_get_rotation_m3AB90A67403249AECCA5E02BC70FCE8C90FE9FB9 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_lossyScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Transform_get_lossyScale_m9C2597B28BE066FC061B7D7508750E5D5EA9850F (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, const RuntimeMethod* method);
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::TRS(UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  Matrix4x4_TRS_m5BB2EBA1152301BAC92FDC7F33ECA732BAE57990 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___pos0, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___q1, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___s2, const RuntimeMethod* method);
// System.Void UnityEngine.Gizmos::set_matrix(UnityEngine.Matrix4x4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Gizmos_set_matrix_mA3B65EC8681EDF68BDD2A657F4B67C00C1C34565 (Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Gizmos::set_color(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Gizmos_set_color_mFA6C199DF05FF557AEF662222CA60EC25DF54F28 (Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Gizmos::DrawLine(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Gizmos_DrawLine_m9515D59D2536571F4906A3C54E613A3986DFD892 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___from0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___to1, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_green()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  Color_get_green_mD53D8F980E92A0755759FBB2981E3DDEFCD084C0 (const RuntimeMethod* method);
// System.Void Vuforia.VuforiaMonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VuforiaMonoBehaviour__ctor_mB68C22C56C327910F539E02435D9D67C546F159C (VuforiaMonoBehaviour_t77BA0F1340884D0EDFE4A2D81BEACC760157309F * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<Vuforia.TrackableBehaviour>()
inline TrackableBehaviour_tEB5841E37069E05AACF43C4F6E75EE1B6B49D445 * Component_GetComponent_TisTrackableBehaviour_tEB5841E37069E05AACF43C4F6E75EE1B6B49D445_mF3E7AB6B516D899DA0F49B3E2DA39F6186D5A908 (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method)
{
	return ((  TrackableBehaviour_tEB5841E37069E05AACF43C4F6E75EE1B6B49D445 * (*) (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m15E3130603CE5400743CCCDEE7600FB9EEFAE5C0_gshared)(__this, method);
}
// System.Void System.Action`1<Vuforia.TrackableBehaviour/StatusChangeResult>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m53259879184872E10895C4F37D375FC10EC3BE35 (Action_1_t6AC22AF716ED9149BAB0EF67822C504F3206A72E * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t6AC22AF716ED9149BAB0EF67822C504F3206A72E *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_1__ctor_m53259879184872E10895C4F37D375FC10EC3BE35_gshared)(__this, ___object0, ___method1, method);
}
// System.Void Vuforia.TrackableBehaviour::RegisterOnTrackableStatusChanged(System.Action`1<Vuforia.TrackableBehaviour/StatusChangeResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackableBehaviour_RegisterOnTrackableStatusChanged_m8F724F7B8D07E4D65FCC114C48DAC956C6F6AB07 (TrackableBehaviour_tEB5841E37069E05AACF43C4F6E75EE1B6B49D445 * __this, Action_1_t6AC22AF716ED9149BAB0EF67822C504F3206A72E * ___onTrackableStatusChangedAction0, const RuntimeMethod* method);
// System.Void Vuforia.WireframeTrackableEventHandler::OnTrackingFound()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WireframeTrackableEventHandler_OnTrackingFound_m9EDCAB66EDCE9280D07D94DB60355AA7EC0FF172 (WireframeTrackableEventHandler_tF7638FBCA1F66A9A53BE2D4715F9869AEA286B81 * __this, const RuntimeMethod* method);
// System.Void Vuforia.WireframeTrackableEventHandler::OnTrackingLost()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WireframeTrackableEventHandler_OnTrackingLost_mEDA94593DDDDCE9DBB846A69EE8EC55F85809C04 (WireframeTrackableEventHandler_tF7638FBCA1F66A9A53BE2D4715F9869AEA286B81 * __this, const RuntimeMethod* method);
// !!0[] UnityEngine.Component::GetComponentsInChildren<UnityEngine.Renderer>(System.Boolean)
inline RendererU5BU5D_t711BACBBBFC0E06179ADB8932DBA208665108C93* Component_GetComponentsInChildren_TisRenderer_t0556D67DD582620D1F495627EDE30D03284151F4_m4DE45B0EE85325E8C64FDFB5DEDA8EBC70A892F0 (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, bool ___includeInactive0, const RuntimeMethod* method)
{
	return ((  RendererU5BU5D_t711BACBBBFC0E06179ADB8932DBA208665108C93* (*) (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *, bool, const RuntimeMethod*))Component_GetComponentsInChildren_TisRuntimeObject_m37863ECCB395B23FD2A694C9A67E2332D1CE97D0_gshared)(__this, ___includeInactive0, method);
}
// !!0[] UnityEngine.Component::GetComponentsInChildren<UnityEngine.Collider>(System.Boolean)
inline ColliderU5BU5D_t70D1FDAE17E4359298B2BAA828048D1B7CFFE252* Component_GetComponentsInChildren_TisCollider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF_mA42E7442538CDBEC48DB8C54190ABB4C6920000A (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, bool ___includeInactive0, const RuntimeMethod* method)
{
	return ((  ColliderU5BU5D_t70D1FDAE17E4359298B2BAA828048D1B7CFFE252* (*) (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *, bool, const RuntimeMethod*))Component_GetComponentsInChildren_TisRuntimeObject_m37863ECCB395B23FD2A694C9A67E2332D1CE97D0_gshared)(__this, ___includeInactive0, method);
}
// !!0[] UnityEngine.Component::GetComponentsInChildren<Vuforia.WireframeBehaviour>(System.Boolean)
inline WireframeBehaviourU5BU5D_tDEDB3E75E88EF7885B300EA39B1C524378CB450B* Component_GetComponentsInChildren_TisWireframeBehaviour_t2D40F2BC6BB4E6A6FB8A02A7339960FAB0B68971_m88A60682A7FEF0387103BC5198203CEDF5C21A44 (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, bool ___includeInactive0, const RuntimeMethod* method)
{
	return ((  WireframeBehaviourU5BU5D_tDEDB3E75E88EF7885B300EA39B1C524378CB450B* (*) (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *, bool, const RuntimeMethod*))Component_GetComponentsInChildren_TisRuntimeObject_m37863ECCB395B23FD2A694C9A67E2332D1CE97D0_gshared)(__this, ___includeInactive0, method);
}
// System.Void UnityEngine.Renderer::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_set_enabled_m0933766657F2685BAAE3340B0A984C0E63925303 (Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Collider::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Collider_set_enabled_mF84DE8B0C8CAF33ACDB7F29BC055D9C8CFACB57B (Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Behaviour::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Behaviour_set_enabled_m9755D3B17D7022D23D1E4C618BD9A6B66A5ADC6B (Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8 * __this, bool ___value0, const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Vuforia.WebCamARController/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m8C5126DCFFE442DD850EA64EC0864FC07E3956E1 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec__cctor_m8C5126DCFFE442DD850EA64EC0864FC07E3956E1_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tEEB2B24B40B9A5CB6D7DA0C0CFCDF54DFA0ED399 * L_0 = (U3CU3Ec_tEEB2B24B40B9A5CB6D7DA0C0CFCDF54DFA0ED399 *)il2cpp_codegen_object_new(U3CU3Ec_tEEB2B24B40B9A5CB6D7DA0C0CFCDF54DFA0ED399_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m4A4C748E59C5F122B8A6D2A768185D73C6DC4B80(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_tEEB2B24B40B9A5CB6D7DA0C0CFCDF54DFA0ED399_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tEEB2B24B40B9A5CB6D7DA0C0CFCDF54DFA0ED399_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void Vuforia.WebCamARController/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m4A4C748E59C5F122B8A6D2A768185D73C6DC4B80 (U3CU3Ec_tEEB2B24B40B9A5CB6D7DA0C0CFCDF54DFA0ED399 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// Vuforia.IWebCamTexAdaptor Vuforia.WebCamARController/<>c::<.ctor>b__6_0(System.String,Vuforia.WebCamProfile/ProfileData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CU3Ec_U3C_ctorU3Eb__6_0_m5288A9A3A5BB345AC2BE22FEAA121F61F571C0F8 (U3CU3Ec_tEEB2B24B40B9A5CB6D7DA0C0CFCDF54DFA0ED399 * __this, String_t* ___name0, ProfileData_tDD58D66EB33579FEA6AE2378DAB61BBF53265F67  ___profileData1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec_U3C_ctorU3Eb__6_0_m5288A9A3A5BB345AC2BE22FEAA121F61F571C0F8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___name0;
		ProfileData_tDD58D66EB33579FEA6AE2378DAB61BBF53265F67  L_1 = ___profileData1;
		WebCamTexAdaptor_t5D6B63102D1CE806620EC1D2CD6C98FB5739AF13 * L_2 = (WebCamTexAdaptor_t5D6B63102D1CE806620EC1D2CD6C98FB5739AF13 *)il2cpp_codegen_object_new(WebCamTexAdaptor_t5D6B63102D1CE806620EC1D2CD6C98FB5739AF13_il2cpp_TypeInfo_var);
		WebCamTexAdaptor__ctor_m1AE0C6DB1306DC7C40A3ACD6FC35EF7141D9D725(L_2, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
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
// Vuforia.WebCamProfile/ProfileData Vuforia.WebCamProfile::get_Default()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ProfileData_tDD58D66EB33579FEA6AE2378DAB61BBF53265F67  WebCamProfile_get_Default_m30CEF90937BC7BBC59B38630D29BE9D701E7D841 (WebCamProfile_t412A1646A88AF83CE44EE036E0E513F2E867373B * __this, const RuntimeMethod* method)
{
	{
		ProfileCollection_t265A716EFBF9BE67BA63AFFD090C3FB51E8D535F * L_0 = __this->get_address_of_mProfileCollection_0();
		ProfileData_tDD58D66EB33579FEA6AE2378DAB61BBF53265F67  L_1 = L_0->get_DefaultProfile_0();
		return L_1;
	}
}
// System.Void Vuforia.WebCamProfile::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebCamProfile__ctor_m2A46DD651FFB9F5B9B4FA0B263CC32C418C92EAF (WebCamProfile_t412A1646A88AF83CE44EE036E0E513F2E867373B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebCamProfile__ctor_m2A46DD651FFB9F5B9B4FA0B263CC32C418C92EAF_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		RuntimeObject* L_0 = PlayModeEditorUtility_get_Instance_m6004D47C3658A3E34E2D489868410E0F3636386B(/*hidden argument*/NULL);
		NullCheck(L_0);
		ProfileCollection_t265A716EFBF9BE67BA63AFFD090C3FB51E8D535F  L_1 = InterfaceFuncInvoker0< ProfileCollection_t265A716EFBF9BE67BA63AFFD090C3FB51E8D535F  >::Invoke(1 /* Vuforia.WebCamProfile/ProfileCollection Vuforia.IPlayModeEditorUtility::LoadAndParseWebcamProfiles() */, IPlayModeEditorUtility_t455513D381F5848C883EBF7AC34494311660BF3A_il2cpp_TypeInfo_var, L_0);
		__this->set_mProfileCollection_0(L_1);
		return;
	}
}
// Vuforia.WebCamProfile/ProfileData Vuforia.WebCamProfile::GetProfile(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ProfileData_tDD58D66EB33579FEA6AE2378DAB61BBF53265F67  WebCamProfile_GetProfile_mAFA671DEF4EFE7A94F6318AEAB184EBEAA33AED5 (WebCamProfile_t412A1646A88AF83CE44EE036E0E513F2E867373B * __this, String_t* ___webcamName0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebCamProfile_GetProfile_mAFA671DEF4EFE7A94F6318AEAB184EBEAA33AED5_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ProfileData_tDD58D66EB33579FEA6AE2378DAB61BBF53265F67  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		ProfileCollection_t265A716EFBF9BE67BA63AFFD090C3FB51E8D535F * L_0 = __this->get_address_of_mProfileCollection_0();
		Dictionary_2_t3039270ADBC232731ABE07616CAC5DE79149ABE2 * L_1 = L_0->get_Profiles_1();
		String_t* L_2 = ___webcamName0;
		NullCheck(L_2);
		String_t* L_3 = String_ToLower_m5287204D93C9DDC4DF84581ADD756D0FDE2BA5A8(L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		bool L_4 = Dictionary_2_TryGetValue_m9FCCC90AD328074EB4D4E3C4689CAED3115A5A2C(L_1, L_3, (ProfileData_tDD58D66EB33579FEA6AE2378DAB61BBF53265F67 *)(&V_0), /*hidden argument*/Dictionary_2_TryGetValue_m9FCCC90AD328074EB4D4E3C4689CAED3115A5A2C_RuntimeMethod_var);
		if (!L_4)
		{
			goto IL_001c;
		}
	}
	{
		ProfileData_tDD58D66EB33579FEA6AE2378DAB61BBF53265F67  L_5 = V_0;
		return L_5;
	}

IL_001c:
	{
		ProfileCollection_t265A716EFBF9BE67BA63AFFD090C3FB51E8D535F * L_6 = __this->get_address_of_mProfileCollection_0();
		ProfileData_tDD58D66EB33579FEA6AE2378DAB61BBF53265F67  L_7 = L_6->get_DefaultProfile_0();
		return L_7;
	}
}
// System.Boolean Vuforia.WebCamProfile::ProfileAvailable(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WebCamProfile_ProfileAvailable_mAE7EB4BABAA53171DFCFFE8EDBC286A3A1C497B5 (WebCamProfile_t412A1646A88AF83CE44EE036E0E513F2E867373B * __this, String_t* ___webcamName0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebCamProfile_ProfileAvailable_mAE7EB4BABAA53171DFCFFE8EDBC286A3A1C497B5_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ProfileCollection_t265A716EFBF9BE67BA63AFFD090C3FB51E8D535F * L_0 = __this->get_address_of_mProfileCollection_0();
		Dictionary_2_t3039270ADBC232731ABE07616CAC5DE79149ABE2 * L_1 = L_0->get_Profiles_1();
		String_t* L_2 = ___webcamName0;
		NullCheck(L_2);
		String_t* L_3 = String_ToLower_m5287204D93C9DDC4DF84581ADD756D0FDE2BA5A8(L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		bool L_4 = Dictionary_2_ContainsKey_m01C2AF0FFA5776F427BA0FDC957E9B9F3C513972(L_1, L_3, /*hidden argument*/Dictionary_2_ContainsKey_m01C2AF0FFA5776F427BA0FDC957E9B9F3C513972_RuntimeMethod_var);
		return L_4;
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
// Conversion methods for marshalling of: Vuforia.WebCamProfile/ProfileCollection
IL2CPP_EXTERN_C void ProfileCollection_t265A716EFBF9BE67BA63AFFD090C3FB51E8D535F_marshal_pinvoke(const ProfileCollection_t265A716EFBF9BE67BA63AFFD090C3FB51E8D535F& unmarshaled, ProfileCollection_t265A716EFBF9BE67BA63AFFD090C3FB51E8D535F_marshaled_pinvoke& marshaled)
{
	Exception_t* ___Profiles_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'Profiles' of type 'ProfileCollection'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___Profiles_1Exception, NULL);
}
IL2CPP_EXTERN_C void ProfileCollection_t265A716EFBF9BE67BA63AFFD090C3FB51E8D535F_marshal_pinvoke_back(const ProfileCollection_t265A716EFBF9BE67BA63AFFD090C3FB51E8D535F_marshaled_pinvoke& marshaled, ProfileCollection_t265A716EFBF9BE67BA63AFFD090C3FB51E8D535F& unmarshaled)
{
	Exception_t* ___Profiles_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'Profiles' of type 'ProfileCollection'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___Profiles_1Exception, NULL);
}
// Conversion method for clean up from marshalling of: Vuforia.WebCamProfile/ProfileCollection
IL2CPP_EXTERN_C void ProfileCollection_t265A716EFBF9BE67BA63AFFD090C3FB51E8D535F_marshal_pinvoke_cleanup(ProfileCollection_t265A716EFBF9BE67BA63AFFD090C3FB51E8D535F_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: Vuforia.WebCamProfile/ProfileCollection
IL2CPP_EXTERN_C void ProfileCollection_t265A716EFBF9BE67BA63AFFD090C3FB51E8D535F_marshal_com(const ProfileCollection_t265A716EFBF9BE67BA63AFFD090C3FB51E8D535F& unmarshaled, ProfileCollection_t265A716EFBF9BE67BA63AFFD090C3FB51E8D535F_marshaled_com& marshaled)
{
	Exception_t* ___Profiles_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'Profiles' of type 'ProfileCollection'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___Profiles_1Exception, NULL);
}
IL2CPP_EXTERN_C void ProfileCollection_t265A716EFBF9BE67BA63AFFD090C3FB51E8D535F_marshal_com_back(const ProfileCollection_t265A716EFBF9BE67BA63AFFD090C3FB51E8D535F_marshaled_com& marshaled, ProfileCollection_t265A716EFBF9BE67BA63AFFD090C3FB51E8D535F& unmarshaled)
{
	Exception_t* ___Profiles_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'Profiles' of type 'ProfileCollection'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___Profiles_1Exception, NULL);
}
// Conversion method for clean up from marshalling of: Vuforia.WebCamProfile/ProfileCollection
IL2CPP_EXTERN_C void ProfileCollection_t265A716EFBF9BE67BA63AFFD090C3FB51E8D535F_marshal_com_cleanup(ProfileCollection_t265A716EFBF9BE67BA63AFFD090C3FB51E8D535F_marshaled_com& marshaled)
{
}
// System.Void Vuforia.WebCamProfile/ProfileCollection::.ctor(Vuforia.WebCamProfile/ProfileData,System.Collections.Generic.Dictionary`2<System.String,Vuforia.WebCamProfile/ProfileData>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProfileCollection__ctor_mD6558D3CA2EAB89005D6B7B20A6DDAA3E23DCD49 (ProfileCollection_t265A716EFBF9BE67BA63AFFD090C3FB51E8D535F * __this, ProfileData_tDD58D66EB33579FEA6AE2378DAB61BBF53265F67  ___defaultProfile0, Dictionary_2_t3039270ADBC232731ABE07616CAC5DE79149ABE2 * ___profiles1, const RuntimeMethod* method)
{
	{
		ProfileData_tDD58D66EB33579FEA6AE2378DAB61BBF53265F67  L_0 = ___defaultProfile0;
		__this->set_DefaultProfile_0(L_0);
		Dictionary_2_t3039270ADBC232731ABE07616CAC5DE79149ABE2 * L_1 = ___profiles1;
		__this->set_Profiles_1(L_1);
		return;
	}
}
IL2CPP_EXTERN_C  void ProfileCollection__ctor_mD6558D3CA2EAB89005D6B7B20A6DDAA3E23DCD49_AdjustorThunk (RuntimeObject * __this, ProfileData_tDD58D66EB33579FEA6AE2378DAB61BBF53265F67  ___defaultProfile0, Dictionary_2_t3039270ADBC232731ABE07616CAC5DE79149ABE2 * ___profiles1, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ProfileCollection_t265A716EFBF9BE67BA63AFFD090C3FB51E8D535F * _thisAdjusted = reinterpret_cast<ProfileCollection_t265A716EFBF9BE67BA63AFFD090C3FB51E8D535F *>(__this + _offset);
	ProfileCollection__ctor_mD6558D3CA2EAB89005D6B7B20A6DDAA3E23DCD49(_thisAdjusted, ___defaultProfile0, ___profiles1, method);
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
// System.Boolean Vuforia.WebCamTexAdaptor::get_DidUpdateThisFrame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WebCamTexAdaptor_get_DidUpdateThisFrame_m63C502A68FFFA6D9845214E11FAFC1150A4845F7 (WebCamTexAdaptor_t5D6B63102D1CE806620EC1D2CD6C98FB5739AF13 * __this, const RuntimeMethod* method)
{
	{
		WebCamTexture_tEC97A7A0A101B159FEC9A3E95B14E41DD84EFD73 * L_0 = __this->get_mWebCamTexture_0();
		NullCheck(L_0);
		bool L_1 = WebCamTexture_get_didUpdateThisFrame_mFB0307CCD0634E6CCD89BC9368C7B0361762B3C4(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Boolean Vuforia.WebCamTexAdaptor::get_IsPlaying()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WebCamTexAdaptor_get_IsPlaying_mE2B4A9BE0A28218456E4AF908E1EA9E1214EE1DB (WebCamTexAdaptor_t5D6B63102D1CE806620EC1D2CD6C98FB5739AF13 * __this, const RuntimeMethod* method)
{
	{
		WebCamTexture_tEC97A7A0A101B159FEC9A3E95B14E41DD84EFD73 * L_0 = __this->get_mWebCamTexture_0();
		NullCheck(L_0);
		bool L_1 = WebCamTexture_get_isPlaying_m0BF473554164B2C30475CCD8C6BC1B93E9B52E67(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// UnityEngine.Texture Vuforia.WebCamTexAdaptor::get_Texture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture_t387FE83BB848001FD06B14707AEA6D5A0F6A95F4 * WebCamTexAdaptor_get_Texture_m8B7C49A761DD2C091FBF76E895588EF99B218B7D (WebCamTexAdaptor_t5D6B63102D1CE806620EC1D2CD6C98FB5739AF13 * __this, const RuntimeMethod* method)
{
	{
		WebCamTexture_tEC97A7A0A101B159FEC9A3E95B14E41DD84EFD73 * L_0 = __this->get_mWebCamTexture_0();
		return L_0;
	}
}
// System.Void Vuforia.WebCamTexAdaptor::.ctor(System.String,Vuforia.WebCamProfile/ProfileData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebCamTexAdaptor__ctor_m1AE0C6DB1306DC7C40A3ACD6FC35EF7141D9D725 (WebCamTexAdaptor_t5D6B63102D1CE806620EC1D2CD6C98FB5739AF13 * __this, String_t* ___deviceName0, ProfileData_tDD58D66EB33579FEA6AE2378DAB61BBF53265F67  ___profile1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebCamTexAdaptor__ctor_m1AE0C6DB1306DC7C40A3ACD6FC35EF7141D9D725_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		WebCamTexture_tEC97A7A0A101B159FEC9A3E95B14E41DD84EFD73 * L_0 = (WebCamTexture_tEC97A7A0A101B159FEC9A3E95B14E41DD84EFD73 *)il2cpp_codegen_object_new(WebCamTexture_tEC97A7A0A101B159FEC9A3E95B14E41DD84EFD73_il2cpp_TypeInfo_var);
		WebCamTexture__ctor_mA132E1976B248264D5AD01A1D45254FCF070D241(L_0, /*hidden argument*/NULL);
		__this->set_mWebCamTexture_0(L_0);
		WebCamTexture_tEC97A7A0A101B159FEC9A3E95B14E41DD84EFD73 * L_1 = __this->get_mWebCamTexture_0();
		String_t* L_2 = ___deviceName0;
		NullCheck(L_1);
		WebCamTexture_set_deviceName_m334B4B3FC3BCDBBDB669073C9456FE8C351BF157(L_1, L_2, /*hidden argument*/NULL);
		WebCamTexture_tEC97A7A0A101B159FEC9A3E95B14E41DD84EFD73 * L_3 = __this->get_mWebCamTexture_0();
		ProfileData_tDD58D66EB33579FEA6AE2378DAB61BBF53265F67  L_4 = ___profile1;
		int32_t L_5 = L_4.get_RequestedFPS_2();
		NullCheck(L_3);
		WebCamTexture_set_requestedFPS_mEEA829DEFFB545A53D3DB35B319EAB13E758E2F5(L_3, (((float)((float)L_5))), /*hidden argument*/NULL);
		WebCamTexture_tEC97A7A0A101B159FEC9A3E95B14E41DD84EFD73 * L_6 = __this->get_mWebCamTexture_0();
		ProfileData_tDD58D66EB33579FEA6AE2378DAB61BBF53265F67  L_7 = ___profile1;
		Vec2I_t83686054D6B780BA6C82D6AABFC5F5F1F435CD24  L_8 = L_7.get_RequestedTextureSize_0();
		int32_t L_9 = L_8.get_x_0();
		NullCheck(L_6);
		WebCamTexture_set_requestedWidth_m277433251237DE574646355B010DA9856FD072D9(L_6, L_9, /*hidden argument*/NULL);
		WebCamTexture_tEC97A7A0A101B159FEC9A3E95B14E41DD84EFD73 * L_10 = __this->get_mWebCamTexture_0();
		ProfileData_tDD58D66EB33579FEA6AE2378DAB61BBF53265F67  L_11 = ___profile1;
		Vec2I_t83686054D6B780BA6C82D6AABFC5F5F1F435CD24  L_12 = L_11.get_RequestedTextureSize_0();
		int32_t L_13 = L_12.get_y_1();
		NullCheck(L_10);
		WebCamTexture_set_requestedHeight_m4056DBF4457C4487B1DB1E371BC886DE7CFBB918(L_10, L_13, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Vuforia.WebCamTexAdaptor::Play()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebCamTexAdaptor_Play_m7FB2CDBD3DAE7110B0CBC82810841C4D4E5FC54B (WebCamTexAdaptor_t5D6B63102D1CE806620EC1D2CD6C98FB5739AF13 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = Application_HasUserAuthorization_m0FA56DDE2B2F64D6A0861367C23200BAD35080E3(1, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0015;
		}
	}
	{
		AsyncOperation_t304C51ABED8AE734CC8DDDFE13013D8D5A44641D * L_1 = Application_RequestUserAuthorization_m157EBC059CA85EAE058A0E31AE17056B56A889DD(1, /*hidden argument*/NULL);
		__this->set_mCheckCameraPermissions_1(L_1);
		return;
	}

IL_0015:
	{
		WebCamTexture_tEC97A7A0A101B159FEC9A3E95B14E41DD84EFD73 * L_2 = __this->get_mWebCamTexture_0();
		NullCheck(L_2);
		WebCamTexture_Play_mCF10A9B5EE587A066396B6378A972B31C9134436(L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Vuforia.WebCamTexAdaptor::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebCamTexAdaptor_Stop_mD0D143B31AE2A52BFF3F879B43AF5B2C19B45F18 (WebCamTexAdaptor_t5D6B63102D1CE806620EC1D2CD6C98FB5739AF13 * __this, const RuntimeMethod* method)
{
	{
		WebCamTexture_tEC97A7A0A101B159FEC9A3E95B14E41DD84EFD73 * L_0 = __this->get_mWebCamTexture_0();
		NullCheck(L_0);
		WebCamTexture_Stop_m4E3BD56B6481E2A0D53707119CFCB6074941B447(L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Vuforia.WebCamTexAdaptor::CheckPermissions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebCamTexAdaptor_CheckPermissions_m7100A3C263BF6E33069FD1D08B6AB4C1FA2E6BD0 (WebCamTexAdaptor_t5D6B63102D1CE806620EC1D2CD6C98FB5739AF13 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebCamTexAdaptor_CheckPermissions_m7100A3C263BF6E33069FD1D08B6AB4C1FA2E6BD0_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		AsyncOperation_t304C51ABED8AE734CC8DDDFE13013D8D5A44641D * L_0 = __this->get_mCheckCameraPermissions_1();
		if (!L_0)
		{
			goto IL_0040;
		}
	}
	{
		AsyncOperation_t304C51ABED8AE734CC8DDDFE13013D8D5A44641D * L_1 = __this->get_mCheckCameraPermissions_1();
		NullCheck(L_1);
		bool L_2 = AsyncOperation_get_isDone_m2A08EE3D38FD9FE81F2D619FA66255B6F61DAB54(L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0040;
		}
	}
	{
		bool L_3 = Application_HasUserAuthorization_m0FA56DDE2B2F64D6A0861367C23200BAD35080E3(1, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_002a;
		}
	}
	{
		WebCamTexture_tEC97A7A0A101B159FEC9A3E95B14E41DD84EFD73 * L_4 = __this->get_mWebCamTexture_0();
		NullCheck(L_4);
		WebCamTexture_Play_mCF10A9B5EE587A066396B6378A972B31C9134436(L_4, /*hidden argument*/NULL);
		goto IL_0039;
	}

IL_002a:
	{
		RuntimeObject* L_5 = PlayModeEditorUtility_get_Instance_m6004D47C3658A3E34E2D489868410E0F3636386B(/*hidden argument*/NULL);
		NullCheck(L_5);
		InterfaceActionInvoker1< String_t* >::Invoke(3 /* System.Void Vuforia.IPlayModeEditorUtility::ShowMessageInFocusedEditorWindow(System.String) */, IPlayModeEditorUtility_t455513D381F5848C883EBF7AC34494311660BF3A_il2cpp_TypeInfo_var, L_5, _stringLiteralA4F567B120FD121F5453D7FBBE92A3F258EAC0F2);
	}

IL_0039:
	{
		__this->set_mCheckCameraPermissions_1((AsyncOperation_t304C51ABED8AE734CC8DDDFE13013D8D5A44641D *)NULL);
	}

IL_0040:
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
// System.Void Vuforia.WireframeBehaviour::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WireframeBehaviour_Start_mE57E0913E877DACD05BA985FEB68FDE96F50FFEE (WireframeBehaviour_t2D40F2BC6BB4E6A6FB8A02A7339960FAB0B68971 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WireframeBehaviour_Start_mE57E0913E877DACD05BA985FEB68FDE96F50FFEE_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_0 = __this->get_lineMaterial_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_0, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0020;
		}
	}
	{
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_2 = __this->get_lineMaterial_4();
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_3 = (Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 *)il2cpp_codegen_object_new(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598_il2cpp_TypeInfo_var);
		Material__ctor_m0171C6D4D3FD04D58C70808F255DBA67D0ED2BDE(L_3, L_2, /*hidden argument*/NULL);
		__this->set_mLineMaterial_7(L_3);
		return;
	}

IL_0020:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogWarning_m37338644DC81F640CCDFEAE35A223F0E965F0568(_stringLiteral2E7A3758EF7FA247816915839E5EC2FDF0333645, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Vuforia.WireframeBehaviour::OnRenderObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WireframeBehaviour_OnRenderObject_mB1D0E97FDD9B5FB6BF7EB108899408F103D180DE (WireframeBehaviour_t2D40F2BC6BB4E6A6FB8A02A7339960FAB0B68971 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WireframeBehaviour_OnRenderObject_mB1D0E97FDD9B5FB6BF7EB108899408F103D180DE_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * V_1 = NULL;
	Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* V_2 = NULL;
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* V_3 = NULL;
	CameraU5BU5D_t2A1957E88FB79357C12B87941970D776D30E90F9* V_4 = NULL;
	int32_t V_5 = 0;
	Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * V_6 = NULL;
	int32_t V_7 = 0;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_8;
	memset((&V_8), 0, sizeof(V_8));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_9;
	memset((&V_9), 0, sizeof(V_9));
	{
		IL2CPP_RUNTIME_CLASS_INIT(VuforiaManager_tC5EAD9B005741ED776A8B4C47B5B583BA79EF0D4_il2cpp_TypeInfo_var);
		VuforiaManager_tC5EAD9B005741ED776A8B4C47B5B583BA79EF0D4 * L_0 = VuforiaManager_get_Instance_m2B25B684318BF4EC46E825BD3F4E69336D9FC38E(/*hidden argument*/NULL);
		NullCheck(L_0);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_1 = VuforiaManager_get_ARCameraTransform_m2C85F2B01C96224B933C8FDC84EB343FE6707102_inline(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_2 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		CameraU5BU5D_t2A1957E88FB79357C12B87941970D776D30E90F9* L_3 = GameObject_GetComponentsInChildren_TisCamera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34_m124464CC8EC121898C98E8FA7538AD4714D3B494(L_2, /*hidden argument*/GameObject_GetComponentsInChildren_TisCamera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34_m124464CC8EC121898C98E8FA7538AD4714D3B494_RuntimeMethod_var);
		V_0 = (bool)0;
		V_4 = L_3;
		V_5 = 0;
		goto IL_003a;
	}

IL_001d:
	{
		CameraU5BU5D_t2A1957E88FB79357C12B87941970D776D30E90F9* L_4 = V_4;
		int32_t L_5 = V_5;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_6 = L_7;
		Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_8 = Camera_get_current_m6D8446E8359399CD9108A8E524671E0CC6E20350(/*hidden argument*/NULL);
		Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_9 = V_6;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_10 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_8, L_9, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_0034;
		}
	}
	{
		V_0 = (bool)1;
	}

IL_0034:
	{
		int32_t L_11 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_11, (int32_t)1));
	}

IL_003a:
	{
		int32_t L_12 = V_5;
		CameraU5BU5D_t2A1957E88FB79357C12B87941970D776D30E90F9* L_13 = V_4;
		NullCheck(L_13);
		if ((((int32_t)L_12) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_13)->max_length)))))))
		{
			goto IL_001d;
		}
	}
	{
		bool L_14 = V_0;
		if (L_14)
		{
			goto IL_0046;
		}
	}
	{
		return;
	}

IL_0046:
	{
		bool L_15 = __this->get_ShowLines_5();
		if (L_15)
		{
			goto IL_004f;
		}
	}
	{
		return;
	}

IL_004f:
	{
		MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * L_16 = Component_GetComponent_TisMeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0_mF3F89565A9CEFF85AA1FB27C6EC64BE590DC386B(__this, /*hidden argument*/Component_GetComponent_TisMeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0_mF3F89565A9CEFF85AA1FB27C6EC64BE590DC386B_RuntimeMethod_var);
		V_1 = L_16;
		MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * L_17 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_18 = Object_op_Implicit_m8B2A44B4B1406ED346D1AE6D962294FD58D0D534(L_17, /*hidden argument*/NULL);
		if (L_18)
		{
			goto IL_005f;
		}
	}
	{
		return;
	}

IL_005f:
	{
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_19 = __this->get_mLineMaterial_7();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_20 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_19, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_20)
		{
			goto IL_0078;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogWarning_m37338644DC81F640CCDFEAE35A223F0E965F0568(_stringLiteral2E7A3758EF7FA247816915839E5EC2FDF0333645, /*hidden argument*/NULL);
		return;
	}

IL_0078:
	{
		MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * L_21 = V_1;
		NullCheck(L_21);
		Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * L_22 = MeshFilter_get_sharedMesh_mC076FD5461BFBBAD3BE49D25263CF140700D9902(L_21, /*hidden argument*/NULL);
		Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * L_23 = L_22;
		NullCheck(L_23);
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_24 = Mesh_get_vertices_m7D07DC0F071C142B87F675B148FC0F7A243238B9(L_23, /*hidden argument*/NULL);
		V_2 = L_24;
		NullCheck(L_23);
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_25 = Mesh_get_triangles_mAAAFC770B8EE3F56992D5764EF8C2EC06EF743AC(L_23, /*hidden argument*/NULL);
		V_3 = L_25;
		GL_PushMatrix_mE47A23F3A906899E88AC525FFE2C3C2BD834DFF9(/*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_26 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_26);
		Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  L_27 = Transform_get_localToWorldMatrix_mBC86B8C7BA6F53DAB8E0120D77729166399A0EED(L_26, /*hidden argument*/NULL);
		GL_MultMatrix_m1DFDF696AC702066E319BD72252B7D97E74F3753(L_27, /*hidden argument*/NULL);
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_28 = __this->get_mLineMaterial_7();
		NullCheck(L_28);
		Material_SetPass_m4BE0A8FCBF158C83522AA2F69118A2FE33683918(L_28, 0, /*hidden argument*/NULL);
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_29 = __this->get_mLineMaterial_7();
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_30 = __this->get_LineColor_6();
		NullCheck(L_29);
		Material_SetColor_mB91EF8CAC3AB3B39D2535BF9F7FECECF3EC2161C(L_29, _stringLiteral36BDCAB142B91EE6C030073C24B3B2A5605ED74A, L_30, /*hidden argument*/NULL);
		GL_Begin_m9A48BD6A2DA850D54250EF638DF5EC61F83E293C(1, /*hidden argument*/NULL);
		V_7 = 0;
		goto IL_0121;
	}

IL_00ce:
	{
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_31 = V_2;
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_32 = V_3;
		int32_t L_33 = V_7;
		NullCheck(L_32);
		int32_t L_34 = L_33;
		int32_t L_35 = (L_32)->GetAt(static_cast<il2cpp_array_size_t>(L_34));
		NullCheck(L_31);
		int32_t L_36 = L_35;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_37 = (L_31)->GetAt(static_cast<il2cpp_array_size_t>(L_36));
		V_8 = L_37;
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_38 = V_2;
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_39 = V_3;
		int32_t L_40 = V_7;
		NullCheck(L_39);
		int32_t L_41 = ((int32_t)il2cpp_codegen_add((int32_t)L_40, (int32_t)1));
		int32_t L_42 = (L_39)->GetAt(static_cast<il2cpp_array_size_t>(L_41));
		NullCheck(L_38);
		int32_t L_43 = L_42;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_44 = (L_38)->GetAt(static_cast<il2cpp_array_size_t>(L_43));
		V_9 = L_44;
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_45 = V_2;
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_46 = V_3;
		int32_t L_47 = V_7;
		NullCheck(L_46);
		int32_t L_48 = ((int32_t)il2cpp_codegen_add((int32_t)L_47, (int32_t)2));
		int32_t L_49 = (L_46)->GetAt(static_cast<il2cpp_array_size_t>(L_48));
		NullCheck(L_45);
		int32_t L_50 = L_49;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_51 = (L_45)->GetAt(static_cast<il2cpp_array_size_t>(L_50));
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_52 = V_8;
		GL_Vertex_mCDF99057939B414F44F9ECF9E8C592E123EAC41A(L_52, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_53 = V_9;
		GL_Vertex_mCDF99057939B414F44F9ECF9E8C592E123EAC41A(L_53, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_54 = V_9;
		GL_Vertex_mCDF99057939B414F44F9ECF9E8C592E123EAC41A(L_54, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_55 = L_51;
		GL_Vertex_mCDF99057939B414F44F9ECF9E8C592E123EAC41A(L_55, /*hidden argument*/NULL);
		GL_Vertex_mCDF99057939B414F44F9ECF9E8C592E123EAC41A(L_55, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_56 = V_8;
		GL_Vertex_mCDF99057939B414F44F9ECF9E8C592E123EAC41A(L_56, /*hidden argument*/NULL);
		int32_t L_57 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add((int32_t)L_57, (int32_t)3));
	}

IL_0121:
	{
		int32_t L_58 = V_7;
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_59 = V_3;
		NullCheck(L_59);
		if ((((int32_t)L_58) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_59)->max_length)))))))
		{
			goto IL_00ce;
		}
	}
	{
		GL_End_m7EDEB843BD9F7E00BD838FDE074B4688C55C0755(/*hidden argument*/NULL);
		GL_PopMatrix_mCAA6BC17D97358A4BC329E789AF2CA26C1204112(/*hidden argument*/NULL);
		return;
	}
}
// System.Void Vuforia.WireframeBehaviour::OnDrawGizmos()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WireframeBehaviour_OnDrawGizmos_m3B70365DDC39B805C8F572D73F63026BDC918DAA (WireframeBehaviour_t2D40F2BC6BB4E6A6FB8A02A7339960FAB0B68971 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WireframeBehaviour_OnDrawGizmos_m3B70365DDC39B805C8F572D73F63026BDC918DAA_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * V_0 = NULL;
	Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * V_1 = NULL;
	Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* V_2 = NULL;
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* V_3 = NULL;
	int32_t V_4 = 0;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_5;
	memset((&V_5), 0, sizeof(V_5));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_6;
	memset((&V_6), 0, sizeof(V_6));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_7;
	memset((&V_7), 0, sizeof(V_7));
	{
		bool L_0 = __this->get_ShowLines_5();
		if (!L_0)
		{
			goto IL_00de;
		}
	}
	{
		bool L_1 = Behaviour_get_enabled_mAA0C9ED5A3D1589C1C8AA22636543528DB353CFB(__this, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_00de;
		}
	}
	{
		MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * L_2 = Component_GetComponent_TisMeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0_mF3F89565A9CEFF85AA1FB27C6EC64BE590DC386B(__this, /*hidden argument*/Component_GetComponent_TisMeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0_mF3F89565A9CEFF85AA1FB27C6EC64BE590DC386B_RuntimeMethod_var);
		V_0 = L_2;
		MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * L_3 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_4 = Object_op_Implicit_m8B2A44B4B1406ED346D1AE6D962294FD58D0D534(L_3, /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_0026;
		}
	}
	{
		return;
	}

IL_0026:
	{
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_5 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(__this, /*hidden argument*/NULL);
		NullCheck(L_5);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_6 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_5, /*hidden argument*/NULL);
		NullCheck(L_6);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_7 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_6, /*hidden argument*/NULL);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_8 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(__this, /*hidden argument*/NULL);
		NullCheck(L_8);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_9 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_8, /*hidden argument*/NULL);
		NullCheck(L_9);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_10 = Transform_get_rotation_m3AB90A67403249AECCA5E02BC70FCE8C90FE9FB9(L_9, /*hidden argument*/NULL);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_11 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(__this, /*hidden argument*/NULL);
		NullCheck(L_11);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_12 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_11, /*hidden argument*/NULL);
		NullCheck(L_12);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_13 = Transform_get_lossyScale_m9C2597B28BE066FC061B7D7508750E5D5EA9850F(L_12, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA_il2cpp_TypeInfo_var);
		Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  L_14 = Matrix4x4_TRS_m5BB2EBA1152301BAC92FDC7F33ECA732BAE57990(L_7, L_10, L_13, /*hidden argument*/NULL);
		Gizmos_set_matrix_mA3B65EC8681EDF68BDD2A657F4B67C00C1C34565(L_14, /*hidden argument*/NULL);
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_15 = __this->get_LineColor_6();
		Gizmos_set_color_mFA6C199DF05FF557AEF662222CA60EC25DF54F28(L_15, /*hidden argument*/NULL);
		MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * L_16 = V_0;
		NullCheck(L_16);
		Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * L_17 = MeshFilter_get_sharedMesh_mC076FD5461BFBBAD3BE49D25263CF140700D9902(L_16, /*hidden argument*/NULL);
		V_1 = L_17;
		Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * L_18 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_19 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_18, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_19)
		{
			goto IL_00de;
		}
	}
	{
		Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * L_20 = V_1;
		NullCheck(L_20);
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_21 = Mesh_get_vertices_m7D07DC0F071C142B87F675B148FC0F7A243238B9(L_20, /*hidden argument*/NULL);
		V_2 = L_21;
		Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * L_22 = V_1;
		NullCheck(L_22);
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_23 = Mesh_get_triangles_mAAAFC770B8EE3F56992D5764EF8C2EC06EF743AC(L_22, /*hidden argument*/NULL);
		V_3 = L_23;
		V_4 = 0;
		goto IL_00d7;
	}

IL_008e:
	{
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_24 = V_2;
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_25 = V_3;
		int32_t L_26 = V_4;
		NullCheck(L_25);
		int32_t L_27 = L_26;
		int32_t L_28 = (L_25)->GetAt(static_cast<il2cpp_array_size_t>(L_27));
		NullCheck(L_24);
		int32_t L_29 = L_28;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_30 = (L_24)->GetAt(static_cast<il2cpp_array_size_t>(L_29));
		V_5 = L_30;
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_31 = V_2;
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_32 = V_3;
		int32_t L_33 = V_4;
		NullCheck(L_32);
		int32_t L_34 = ((int32_t)il2cpp_codegen_add((int32_t)L_33, (int32_t)1));
		int32_t L_35 = (L_32)->GetAt(static_cast<il2cpp_array_size_t>(L_34));
		NullCheck(L_31);
		int32_t L_36 = L_35;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_37 = (L_31)->GetAt(static_cast<il2cpp_array_size_t>(L_36));
		V_6 = L_37;
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_38 = V_2;
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_39 = V_3;
		int32_t L_40 = V_4;
		NullCheck(L_39);
		int32_t L_41 = ((int32_t)il2cpp_codegen_add((int32_t)L_40, (int32_t)2));
		int32_t L_42 = (L_39)->GetAt(static_cast<il2cpp_array_size_t>(L_41));
		NullCheck(L_38);
		int32_t L_43 = L_42;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_44 = (L_38)->GetAt(static_cast<il2cpp_array_size_t>(L_43));
		V_7 = L_44;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_45 = V_5;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_46 = V_6;
		Gizmos_DrawLine_m9515D59D2536571F4906A3C54E613A3986DFD892(L_45, L_46, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_47 = V_6;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_48 = V_7;
		Gizmos_DrawLine_m9515D59D2536571F4906A3C54E613A3986DFD892(L_47, L_48, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_49 = V_7;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_50 = V_5;
		Gizmos_DrawLine_m9515D59D2536571F4906A3C54E613A3986DFD892(L_49, L_50, /*hidden argument*/NULL);
		int32_t L_51 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_51, (int32_t)3));
	}

IL_00d7:
	{
		int32_t L_52 = V_4;
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_53 = V_3;
		NullCheck(L_53);
		if ((((int32_t)L_52) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_53)->max_length)))))))
		{
			goto IL_008e;
		}
	}

IL_00de:
	{
		return;
	}
}
// System.Void Vuforia.WireframeBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WireframeBehaviour__ctor_mC0859AD1B1839F669BB0DAA8FAB5BA5B0DE65F57 (WireframeBehaviour_t2D40F2BC6BB4E6A6FB8A02A7339960FAB0B68971 * __this, const RuntimeMethod* method)
{
	{
		__this->set_ShowLines_5((bool)1);
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_0 = Color_get_green_mD53D8F980E92A0755759FBB2981E3DDEFCD084C0(/*hidden argument*/NULL);
		__this->set_LineColor_6(L_0);
		VuforiaMonoBehaviour__ctor_mB68C22C56C327910F539E02435D9D67C546F159C(__this, /*hidden argument*/NULL);
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
// System.Void Vuforia.WireframeTrackableEventHandler::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WireframeTrackableEventHandler_Start_m629637C45F5F9836DD77E3078163B355C5DB0538 (WireframeTrackableEventHandler_tF7638FBCA1F66A9A53BE2D4715F9869AEA286B81 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WireframeTrackableEventHandler_Start_m629637C45F5F9836DD77E3078163B355C5DB0538_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		TrackableBehaviour_tEB5841E37069E05AACF43C4F6E75EE1B6B49D445 * L_0 = Component_GetComponent_TisTrackableBehaviour_tEB5841E37069E05AACF43C4F6E75EE1B6B49D445_mF3E7AB6B516D899DA0F49B3E2DA39F6186D5A908(__this, /*hidden argument*/Component_GetComponent_TisTrackableBehaviour_tEB5841E37069E05AACF43C4F6E75EE1B6B49D445_mF3E7AB6B516D899DA0F49B3E2DA39F6186D5A908_RuntimeMethod_var);
		__this->set_mTrackableBehaviour_4(L_0);
		TrackableBehaviour_tEB5841E37069E05AACF43C4F6E75EE1B6B49D445 * L_1 = __this->get_mTrackableBehaviour_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_2 = Object_op_Implicit_m8B2A44B4B1406ED346D1AE6D962294FD58D0D534(L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0030;
		}
	}
	{
		TrackableBehaviour_tEB5841E37069E05AACF43C4F6E75EE1B6B49D445 * L_3 = __this->get_mTrackableBehaviour_4();
		Action_1_t6AC22AF716ED9149BAB0EF67822C504F3206A72E * L_4 = (Action_1_t6AC22AF716ED9149BAB0EF67822C504F3206A72E *)il2cpp_codegen_object_new(Action_1_t6AC22AF716ED9149BAB0EF67822C504F3206A72E_il2cpp_TypeInfo_var);
		Action_1__ctor_m53259879184872E10895C4F37D375FC10EC3BE35(L_4, __this, (intptr_t)((intptr_t)WireframeTrackableEventHandler_OnTrackableStateChanged_mBE7A0A3EF07F422847FBBB0662421246B04FE6A0_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_m53259879184872E10895C4F37D375FC10EC3BE35_RuntimeMethod_var);
		NullCheck(L_3);
		TrackableBehaviour_RegisterOnTrackableStatusChanged_m8F724F7B8D07E4D65FCC114C48DAC956C6F6AB07(L_3, L_4, /*hidden argument*/NULL);
	}

IL_0030:
	{
		return;
	}
}
// System.Void Vuforia.WireframeTrackableEventHandler::OnTrackableStateChanged(Vuforia.TrackableBehaviour/StatusChangeResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WireframeTrackableEventHandler_OnTrackableStateChanged_mBE7A0A3EF07F422847FBBB0662421246B04FE6A0 (WireframeTrackableEventHandler_tF7638FBCA1F66A9A53BE2D4715F9869AEA286B81 * __this, StatusChangeResult_tB1B76CB1852C966E93FE1E652E5304971E0981CE  ___statusChangeResult0, const RuntimeMethod* method)
{
	{
		StatusChangeResult_tB1B76CB1852C966E93FE1E652E5304971E0981CE  L_0 = ___statusChangeResult0;
		int32_t L_1 = L_0.get_NewStatus_1();
		if ((((int32_t)L_1) == ((int32_t)2)))
		{
			goto IL_0012;
		}
	}
	{
		StatusChangeResult_tB1B76CB1852C966E93FE1E652E5304971E0981CE  L_2 = ___statusChangeResult0;
		int32_t L_3 = L_2.get_NewStatus_1();
		if ((!(((uint32_t)L_3) == ((uint32_t)3))))
		{
			goto IL_0019;
		}
	}

IL_0012:
	{
		WireframeTrackableEventHandler_OnTrackingFound_m9EDCAB66EDCE9280D07D94DB60355AA7EC0FF172(__this, /*hidden argument*/NULL);
		return;
	}

IL_0019:
	{
		WireframeTrackableEventHandler_OnTrackingLost_mEDA94593DDDDCE9DBB846A69EE8EC55F85809C04(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Vuforia.WireframeTrackableEventHandler::OnTrackingFound()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WireframeTrackableEventHandler_OnTrackingFound_m9EDCAB66EDCE9280D07D94DB60355AA7EC0FF172 (WireframeTrackableEventHandler_tF7638FBCA1F66A9A53BE2D4715F9869AEA286B81 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WireframeTrackableEventHandler_OnTrackingFound_m9EDCAB66EDCE9280D07D94DB60355AA7EC0FF172_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ColliderU5BU5D_t70D1FDAE17E4359298B2BAA828048D1B7CFFE252* V_0 = NULL;
	WireframeBehaviourU5BU5D_tDEDB3E75E88EF7885B300EA39B1C524378CB450B* V_1 = NULL;
	RendererU5BU5D_t711BACBBBFC0E06179ADB8932DBA208665108C93* V_2 = NULL;
	int32_t V_3 = 0;
	ColliderU5BU5D_t70D1FDAE17E4359298B2BAA828048D1B7CFFE252* V_4 = NULL;
	WireframeBehaviourU5BU5D_tDEDB3E75E88EF7885B300EA39B1C524378CB450B* V_5 = NULL;
	{
		RendererU5BU5D_t711BACBBBFC0E06179ADB8932DBA208665108C93* L_0 = Component_GetComponentsInChildren_TisRenderer_t0556D67DD582620D1F495627EDE30D03284151F4_m4DE45B0EE85325E8C64FDFB5DEDA8EBC70A892F0(__this, (bool)1, /*hidden argument*/Component_GetComponentsInChildren_TisRenderer_t0556D67DD582620D1F495627EDE30D03284151F4_m4DE45B0EE85325E8C64FDFB5DEDA8EBC70A892F0_RuntimeMethod_var);
		ColliderU5BU5D_t70D1FDAE17E4359298B2BAA828048D1B7CFFE252* L_1 = Component_GetComponentsInChildren_TisCollider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF_mA42E7442538CDBEC48DB8C54190ABB4C6920000A(__this, (bool)1, /*hidden argument*/Component_GetComponentsInChildren_TisCollider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF_mA42E7442538CDBEC48DB8C54190ABB4C6920000A_RuntimeMethod_var);
		V_0 = L_1;
		WireframeBehaviourU5BU5D_tDEDB3E75E88EF7885B300EA39B1C524378CB450B* L_2 = Component_GetComponentsInChildren_TisWireframeBehaviour_t2D40F2BC6BB4E6A6FB8A02A7339960FAB0B68971_m88A60682A7FEF0387103BC5198203CEDF5C21A44(__this, (bool)1, /*hidden argument*/Component_GetComponentsInChildren_TisWireframeBehaviour_t2D40F2BC6BB4E6A6FB8A02A7339960FAB0B68971_m88A60682A7FEF0387103BC5198203CEDF5C21A44_RuntimeMethod_var);
		V_1 = L_2;
		V_2 = L_0;
		V_3 = 0;
		goto IL_0029;
	}

IL_001c:
	{
		RendererU5BU5D_t711BACBBBFC0E06179ADB8932DBA208665108C93* L_3 = V_2;
		int32_t L_4 = V_3;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		NullCheck(L_6);
		Renderer_set_enabled_m0933766657F2685BAAE3340B0A984C0E63925303(L_6, (bool)1, /*hidden argument*/NULL);
		int32_t L_7 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1));
	}

IL_0029:
	{
		int32_t L_8 = V_3;
		RendererU5BU5D_t711BACBBBFC0E06179ADB8932DBA208665108C93* L_9 = V_2;
		NullCheck(L_9);
		if ((((int32_t)L_8) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_9)->max_length)))))))
		{
			goto IL_001c;
		}
	}
	{
		ColliderU5BU5D_t70D1FDAE17E4359298B2BAA828048D1B7CFFE252* L_10 = V_0;
		V_4 = L_10;
		V_3 = 0;
		goto IL_0044;
	}

IL_0036:
	{
		ColliderU5BU5D_t70D1FDAE17E4359298B2BAA828048D1B7CFFE252* L_11 = V_4;
		int32_t L_12 = V_3;
		NullCheck(L_11);
		int32_t L_13 = L_12;
		Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF * L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		NullCheck(L_14);
		Collider_set_enabled_mF84DE8B0C8CAF33ACDB7F29BC055D9C8CFACB57B(L_14, (bool)1, /*hidden argument*/NULL);
		int32_t L_15 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)1));
	}

IL_0044:
	{
		int32_t L_16 = V_3;
		ColliderU5BU5D_t70D1FDAE17E4359298B2BAA828048D1B7CFFE252* L_17 = V_4;
		NullCheck(L_17);
		if ((((int32_t)L_16) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_17)->max_length)))))))
		{
			goto IL_0036;
		}
	}
	{
		WireframeBehaviourU5BU5D_tDEDB3E75E88EF7885B300EA39B1C524378CB450B* L_18 = V_1;
		V_5 = L_18;
		V_3 = 0;
		goto IL_0060;
	}

IL_0052:
	{
		WireframeBehaviourU5BU5D_tDEDB3E75E88EF7885B300EA39B1C524378CB450B* L_19 = V_5;
		int32_t L_20 = V_3;
		NullCheck(L_19);
		int32_t L_21 = L_20;
		WireframeBehaviour_t2D40F2BC6BB4E6A6FB8A02A7339960FAB0B68971 * L_22 = (L_19)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		NullCheck(L_22);
		Behaviour_set_enabled_m9755D3B17D7022D23D1E4C618BD9A6B66A5ADC6B(L_22, (bool)1, /*hidden argument*/NULL);
		int32_t L_23 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_23, (int32_t)1));
	}

IL_0060:
	{
		int32_t L_24 = V_3;
		WireframeBehaviourU5BU5D_tDEDB3E75E88EF7885B300EA39B1C524378CB450B* L_25 = V_5;
		NullCheck(L_25);
		if ((((int32_t)L_24) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_25)->max_length)))))))
		{
			goto IL_0052;
		}
	}
	{
		return;
	}
}
// System.Void Vuforia.WireframeTrackableEventHandler::OnTrackingLost()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WireframeTrackableEventHandler_OnTrackingLost_mEDA94593DDDDCE9DBB846A69EE8EC55F85809C04 (WireframeTrackableEventHandler_tF7638FBCA1F66A9A53BE2D4715F9869AEA286B81 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WireframeTrackableEventHandler_OnTrackingLost_mEDA94593DDDDCE9DBB846A69EE8EC55F85809C04_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ColliderU5BU5D_t70D1FDAE17E4359298B2BAA828048D1B7CFFE252* V_0 = NULL;
	WireframeBehaviourU5BU5D_tDEDB3E75E88EF7885B300EA39B1C524378CB450B* V_1 = NULL;
	RendererU5BU5D_t711BACBBBFC0E06179ADB8932DBA208665108C93* V_2 = NULL;
	int32_t V_3 = 0;
	ColliderU5BU5D_t70D1FDAE17E4359298B2BAA828048D1B7CFFE252* V_4 = NULL;
	WireframeBehaviourU5BU5D_tDEDB3E75E88EF7885B300EA39B1C524378CB450B* V_5 = NULL;
	{
		RendererU5BU5D_t711BACBBBFC0E06179ADB8932DBA208665108C93* L_0 = Component_GetComponentsInChildren_TisRenderer_t0556D67DD582620D1F495627EDE30D03284151F4_m4DE45B0EE85325E8C64FDFB5DEDA8EBC70A892F0(__this, (bool)1, /*hidden argument*/Component_GetComponentsInChildren_TisRenderer_t0556D67DD582620D1F495627EDE30D03284151F4_m4DE45B0EE85325E8C64FDFB5DEDA8EBC70A892F0_RuntimeMethod_var);
		ColliderU5BU5D_t70D1FDAE17E4359298B2BAA828048D1B7CFFE252* L_1 = Component_GetComponentsInChildren_TisCollider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF_mA42E7442538CDBEC48DB8C54190ABB4C6920000A(__this, (bool)1, /*hidden argument*/Component_GetComponentsInChildren_TisCollider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF_mA42E7442538CDBEC48DB8C54190ABB4C6920000A_RuntimeMethod_var);
		V_0 = L_1;
		WireframeBehaviourU5BU5D_tDEDB3E75E88EF7885B300EA39B1C524378CB450B* L_2 = Component_GetComponentsInChildren_TisWireframeBehaviour_t2D40F2BC6BB4E6A6FB8A02A7339960FAB0B68971_m88A60682A7FEF0387103BC5198203CEDF5C21A44(__this, (bool)1, /*hidden argument*/Component_GetComponentsInChildren_TisWireframeBehaviour_t2D40F2BC6BB4E6A6FB8A02A7339960FAB0B68971_m88A60682A7FEF0387103BC5198203CEDF5C21A44_RuntimeMethod_var);
		V_1 = L_2;
		V_2 = L_0;
		V_3 = 0;
		goto IL_0029;
	}

IL_001c:
	{
		RendererU5BU5D_t711BACBBBFC0E06179ADB8932DBA208665108C93* L_3 = V_2;
		int32_t L_4 = V_3;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		NullCheck(L_6);
		Renderer_set_enabled_m0933766657F2685BAAE3340B0A984C0E63925303(L_6, (bool)0, /*hidden argument*/NULL);
		int32_t L_7 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1));
	}

IL_0029:
	{
		int32_t L_8 = V_3;
		RendererU5BU5D_t711BACBBBFC0E06179ADB8932DBA208665108C93* L_9 = V_2;
		NullCheck(L_9);
		if ((((int32_t)L_8) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_9)->max_length)))))))
		{
			goto IL_001c;
		}
	}
	{
		ColliderU5BU5D_t70D1FDAE17E4359298B2BAA828048D1B7CFFE252* L_10 = V_0;
		V_4 = L_10;
		V_3 = 0;
		goto IL_0044;
	}

IL_0036:
	{
		ColliderU5BU5D_t70D1FDAE17E4359298B2BAA828048D1B7CFFE252* L_11 = V_4;
		int32_t L_12 = V_3;
		NullCheck(L_11);
		int32_t L_13 = L_12;
		Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF * L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		NullCheck(L_14);
		Collider_set_enabled_mF84DE8B0C8CAF33ACDB7F29BC055D9C8CFACB57B(L_14, (bool)0, /*hidden argument*/NULL);
		int32_t L_15 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)1));
	}

IL_0044:
	{
		int32_t L_16 = V_3;
		ColliderU5BU5D_t70D1FDAE17E4359298B2BAA828048D1B7CFFE252* L_17 = V_4;
		NullCheck(L_17);
		if ((((int32_t)L_16) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_17)->max_length)))))))
		{
			goto IL_0036;
		}
	}
	{
		WireframeBehaviourU5BU5D_tDEDB3E75E88EF7885B300EA39B1C524378CB450B* L_18 = V_1;
		V_5 = L_18;
		V_3 = 0;
		goto IL_0060;
	}

IL_0052:
	{
		WireframeBehaviourU5BU5D_tDEDB3E75E88EF7885B300EA39B1C524378CB450B* L_19 = V_5;
		int32_t L_20 = V_3;
		NullCheck(L_19);
		int32_t L_21 = L_20;
		WireframeBehaviour_t2D40F2BC6BB4E6A6FB8A02A7339960FAB0B68971 * L_22 = (L_19)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		NullCheck(L_22);
		Behaviour_set_enabled_m9755D3B17D7022D23D1E4C618BD9A6B66A5ADC6B(L_22, (bool)0, /*hidden argument*/NULL);
		int32_t L_23 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_23, (int32_t)1));
	}

IL_0060:
	{
		int32_t L_24 = V_3;
		WireframeBehaviourU5BU5D_tDEDB3E75E88EF7885B300EA39B1C524378CB450B* L_25 = V_5;
		NullCheck(L_25);
		if ((((int32_t)L_24) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_25)->max_length)))))))
		{
			goto IL_0052;
		}
	}
	{
		return;
	}
}
// System.Void Vuforia.WireframeTrackableEventHandler::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WireframeTrackableEventHandler__ctor_m72AACEE7DB7650BC89F602078B5D2E5C892BDF72 (WireframeTrackableEventHandler_tF7638FBCA1F66A9A53BE2D4715F9869AEA286B81 * __this, const RuntimeMethod* method)
{
	{
		VuforiaMonoBehaviour__ctor_mB68C22C56C327910F539E02435D9D67C546F159C(__this, /*hidden argument*/NULL);
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
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * VuforiaManager_get_ARCameraTransform_m2C85F2B01C96224B933C8FDC84EB343FE6707102_inline (VuforiaManager_tC5EAD9B005741ED776A8B4C47B5B583BA79EF0D4 * __this, const RuntimeMethod* method)
{
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_0 = __this->get_mARCameraTransform_4();
		return L_0;
	}
}
