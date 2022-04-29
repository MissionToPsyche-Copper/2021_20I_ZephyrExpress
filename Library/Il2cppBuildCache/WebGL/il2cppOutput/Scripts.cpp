#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


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

// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// UnityEngine.ContactPoint[]
struct ContactPointU5BU5D_t1ACD262B1EA44CD48E2039381DE96847F203E62B;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4;
// System.Single[0...,0...]
struct SingleU5BU2CU5D_tC8145CABE3D285E5B2969DB657D4DE43A135BB43;
// UnityEngine.BoxCollider
struct BoxCollider_tA530691AC1A3C9FE6428F68F98588FCB1BF9AAA5;
// UnityEngine.Camera
struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C;
// UnityEngine.Canvas
struct Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E;
// UnityEngine.Collider
struct Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02;
// UnityEngine.Collision
struct Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0;
// CollisionEnterTest
struct CollisionEnterTest_t8D0E8ED0999BAA6E80A3DE21416EEA6CE77A1D79;
// ColorChange
struct ColorChange_tD8CD0345947B45087C90794FEBC0F51C9DD64749;
// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684;
// DestinationHit
struct DestinationHit_t7B158206CA4EACCF07DEA9D5DF3A36436ED91B53;
// Destroy
struct Destroy_tD445EFB5525F85CA112790F40D54033D2FD39230;
// UnityEngine.UI.FontData
struct FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738;
// FowardMove
struct FowardMove_t356115A06C54F82A6359E447749E2A5A7BBFB106;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// Health
struct Health_t24F89E064FE2032E5252765DE51675276EF64AD9;
// ItemGet
struct ItemGet_t4BA2919C42A7B3AEEB061ECD7046AC747086D6DD;
// LevelScroll
struct LevelScroll_tAECE64C2EDA23B3790CFA7F8D4C43E0641255C9D;
// UnityEngine.Material
struct Material_t8927C00353A72755313F046D0CE85178AE8218EE;
// UnityEngine.Mesh
struct Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6;
// UnityEngine.MeshFilter
struct MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// PauseMenu
struct PauseMenu_t7195E78DC17C81907F58B853AA818812DA9227BB;
// PlayButton
struct PlayButton_tD6F2701BC115FBF928E81BFEFCEE62CA72D7B785;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15;
// UnityEngine.RectTransform
struct RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072;
// UnityEngine.Renderer
struct Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C;
// RotateShip
struct RotateShip_t2501D7C101818D85DD14EAF6B45CB26305ECB02B;
// System.String
struct String_t;
// UnityEngine.Terrain
struct Terrain_t2C0E3B3A2895E81446EFF4F5AFD601CF977D1836;
// UnityEngine.TerrainData
struct TerrainData_tAD3780D3C4DE5B9BE122BECE6D08C4AE169ED2A4;
// Testing
struct Testing_t05D00BFB0B26081E82B4C2927E842D3540B7F49F;
// UnityEngine.UI.Text
struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1;
// UnityEngine.TextGenerator
struct TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70;
// UnityEngine.Texture2D
struct Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF;
// Timer
struct Timer_tC013AFF28E5916E4AFDBEB57A18D8335A47835E9;
// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1;
// UnityEngine.Events.UnityAction
struct UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// meshGenerate
struct meshGenerate_tF62DE27B52710D5AC9B5DE65A62AF81950870B31;
// noise
struct noise_tCFD9C46E8E052983BB1A66D213CF8398D2B402CD;
// planetRoate
struct planetRoate_tF8A3D3ED0EDD7647D7642A79E9B7055F3D859462;
// screenBoundries
struct screenBoundries_tE43C772D917DFDEFCBD481A9D6CA53A411597BE6;
// shipMovement
struct shipMovement_t24B9B843A8577B9D82BD0CCA80ED77E74CF079EE;
// shipRotate
struct shipRotate_t30F0FE189C6C4D84397C28D9DDDB2AF19E998A9C;
// shipSelect
struct shipSelect_tE473A575803FB0F6473622D6E3B8F13644990636;
// shipSelect2
struct shipSelect2_tEC8001FED10583E51B3216B19E6DBC3C819DA161;
// spawnDisable
struct spawnDisable_tEADC77FDE054C074D5D90F06992FCD2BC57694F1;
// spawnerV2
struct spawnerV2_tAC21446FC6665E9AD98E52AEDDE1CA8B8D29012C;
// terrainGenerator
struct terrainGenerator_tF54F9D96BC928A01556D8E58062DCF87544B186B;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4;

IL2CPP_EXTERN_C RuntimeClass* Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Mathf_t4D4AC358D24F6DDC32EC291DDE1DF2C3B752A194_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PauseMenu_t7195E78DC17C81907F58B853AA818812DA9227BB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SingleU5BU2CU5D_tC8145CABE3D285E5B2969DB657D4DE43A135BB43_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral05A45C4FFFDF086B62311E3FD1494AEFF649E98E;
IL2CPP_EXTERN_C String_t* _stringLiteral1459B2730F2F0FAF449992273D0EDB32904F0E87;
IL2CPP_EXTERN_C String_t* _stringLiteral1D890F40E3B49A0DCA3DDF93056485F83D4C2115;
IL2CPP_EXTERN_C String_t* _stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A;
IL2CPP_EXTERN_C String_t* _stringLiteral4B8146FB95E4F51B29DA41EB5F6D60F8FD0ECF21;
IL2CPP_EXTERN_C String_t* _stringLiteral56271342E90F5731D167A8FCDF05F7FCB466BE3B;
IL2CPP_EXTERN_C String_t* _stringLiteral675142B2C610BAA674B0ACFCA8B158E0512E27CF;
IL2CPP_EXTERN_C String_t* _stringLiteral6D0066FC9B8664BF1C6543EFBB3BF0580A6D253B;
IL2CPP_EXTERN_C String_t* _stringLiteral78DD5F3DCA6D42EDBE00E79FFE9B7CF421260DF6;
IL2CPP_EXTERN_C String_t* _stringLiteral7A86C3CFBD3A4B757E7D4CA88264519C45C14CA8;
IL2CPP_EXTERN_C String_t* _stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E;
IL2CPP_EXTERN_C String_t* _stringLiteral86B02B47B04CB284EE80BAD91A6C009CF408644D;
IL2CPP_EXTERN_C String_t* _stringLiteralA3F67A38D5E1E837AAC3FEEC25D4305168580758;
IL2CPP_EXTERN_C String_t* _stringLiteralBC1CD8511D0AC0E22BF05E4DB687C4B7BF6ADCD5;
IL2CPP_EXTERN_C String_t* _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70;
IL2CPP_EXTERN_C String_t* _stringLiteralEB1C8F3A06D279DE40B291FFC8AD51F001A7504D;
IL2CPP_EXTERN_C String_t* _stringLiteralFC075BC3DFE942623230E78DC9D41126E9C003CA;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisBoxCollider_tA530691AC1A3C9FE6428F68F98588FCB1BF9AAA5_m0D682A42739E30A25411905C0A712C2BEE81F861_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisMeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A_m4E31C5D3D0490AEE405B54BE9F61802EA425B9DC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisTerrain_t2C0E3B3A2895E81446EFF4F5AFD601CF977D1836_m8C21051F55A99A250F235F34CBA3502A35885D00_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_m2D99AC2081683F963C56EC738451EC0B59B5D137_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisFowardMove_t356115A06C54F82A6359E447749E2A5A7BBFB106_m57B06F1D0158A122F36B9A6FEF8B0D2019E25245_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisHealth_t24F89E064FE2032E5252765DE51675276EF64AD9_m95A54FDFA2D7D7E1D93612F0B559306ED91F0E8A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisTimer_tC013AFF28E5916E4AFDBEB57A18D8335A47835E9_m55E959E05BFE6EAD979F0FC7A845DDD211F3B451_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var;
struct ContactPoint_tC179732A8E0014F5EFF5977ED1ADF12CF14A9017 ;

struct GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642;
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4;
struct SingleU5BU2CU5D_tC8145CABE3D285E5B2969DB657D4DE43A135BB43;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tE868A023BBD09CF7B00C07AF4219511F84B4DAE2 
{
public:

public:
};


// System.Object

struct Il2CppArrayBounds;

// System.Array


// System.String
struct String_t  : public RuntimeObject
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
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_com
{
};

// System.Boolean
struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// UnityEngine.Color
struct Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 
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
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};


// System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
{
public:

public:
};

struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_com
{
};

// System.Int32
struct Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// System.IntPtr
struct IntPtr_t 
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


// UnityEngine.Mathf
struct Mathf_t4D4AC358D24F6DDC32EC291DDE1DF2C3B752A194 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Mathf_t4D4AC358D24F6DDC32EC291DDE1DF2C3B752A194__padding[1];
	};

public:
};

struct Mathf_t4D4AC358D24F6DDC32EC291DDE1DF2C3B752A194_StaticFields
{
public:
	// System.Single UnityEngine.Mathf::Epsilon
	float ___Epsilon_0;

public:
	inline static int32_t get_offset_of_Epsilon_0() { return static_cast<int32_t>(offsetof(Mathf_t4D4AC358D24F6DDC32EC291DDE1DF2C3B752A194_StaticFields, ___Epsilon_0)); }
	inline float get_Epsilon_0() const { return ___Epsilon_0; }
	inline float* get_address_of_Epsilon_0() { return &___Epsilon_0; }
	inline void set_Epsilon_0(float value)
	{
		___Epsilon_0 = value;
	}
};


// UnityEngine.Quaternion
struct Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 
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
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___identityQuaternion_4 = value;
	}
};


// System.Single
struct Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};


// UnityEngine.Vector2
struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___zeroVector_2)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___oneVector_3)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___upVector_4)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___downVector_5)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___leftVector_6)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___rightVector_7)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___negativeInfinityVector_9 = value;
	}
};


// UnityEngine.Vector3
struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___zeroVector_5)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___oneVector_6)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___upVector_7)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___downVector_8)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___leftVector_9)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___rightVector_10)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___forwardVector_11)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___backVector_12)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___negativeInfinityVector_14 = value;
	}
};


// UnityEngine.Vector4
struct Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 
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
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}

	inline static int32_t get_offset_of_w_4() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___w_4)); }
	inline float get_w_4() const { return ___w_4; }
	inline float* get_address_of_w_4() { return &___w_4; }
	inline void set_w_4(float value)
	{
		___w_4 = value;
	}
};

struct Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields
{
public:
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___negativeInfinityVector_8;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___zeroVector_5)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___oneVector_6)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_7() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___positiveInfinityVector_7)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_positiveInfinityVector_7() const { return ___positiveInfinityVector_7; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_positiveInfinityVector_7() { return &___positiveInfinityVector_7; }
	inline void set_positiveInfinityVector_7(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___positiveInfinityVector_7 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___negativeInfinityVector_8)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_negativeInfinityVector_8() const { return ___negativeInfinityVector_8; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_negativeInfinityVector_8() { return &___negativeInfinityVector_8; }
	inline void set_negativeInfinityVector_8(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___negativeInfinityVector_8 = value;
	}
};


// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5__padding[1];
	};

public:
};


// UnityEngine.Collision
struct Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0  : public RuntimeObject
{
public:
	// UnityEngine.Vector3 UnityEngine.Collision::m_Impulse
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Impulse_0;
	// UnityEngine.Vector3 UnityEngine.Collision::m_RelativeVelocity
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_RelativeVelocity_1;
	// UnityEngine.Component UnityEngine.Collision::m_Body
	Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * ___m_Body_2;
	// UnityEngine.Collider UnityEngine.Collision::m_Collider
	Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * ___m_Collider_3;
	// System.Int32 UnityEngine.Collision::m_ContactCount
	int32_t ___m_ContactCount_4;
	// UnityEngine.ContactPoint[] UnityEngine.Collision::m_ReusedContacts
	ContactPointU5BU5D_t1ACD262B1EA44CD48E2039381DE96847F203E62B* ___m_ReusedContacts_5;
	// UnityEngine.ContactPoint[] UnityEngine.Collision::m_LegacyContacts
	ContactPointU5BU5D_t1ACD262B1EA44CD48E2039381DE96847F203E62B* ___m_LegacyContacts_6;

public:
	inline static int32_t get_offset_of_m_Impulse_0() { return static_cast<int32_t>(offsetof(Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0, ___m_Impulse_0)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Impulse_0() const { return ___m_Impulse_0; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Impulse_0() { return &___m_Impulse_0; }
	inline void set_m_Impulse_0(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Impulse_0 = value;
	}

	inline static int32_t get_offset_of_m_RelativeVelocity_1() { return static_cast<int32_t>(offsetof(Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0, ___m_RelativeVelocity_1)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_RelativeVelocity_1() const { return ___m_RelativeVelocity_1; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_RelativeVelocity_1() { return &___m_RelativeVelocity_1; }
	inline void set_m_RelativeVelocity_1(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_RelativeVelocity_1 = value;
	}

	inline static int32_t get_offset_of_m_Body_2() { return static_cast<int32_t>(offsetof(Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0, ___m_Body_2)); }
	inline Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * get_m_Body_2() const { return ___m_Body_2; }
	inline Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 ** get_address_of_m_Body_2() { return &___m_Body_2; }
	inline void set_m_Body_2(Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * value)
	{
		___m_Body_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Body_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_Collider_3() { return static_cast<int32_t>(offsetof(Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0, ___m_Collider_3)); }
	inline Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * get_m_Collider_3() const { return ___m_Collider_3; }
	inline Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 ** get_address_of_m_Collider_3() { return &___m_Collider_3; }
	inline void set_m_Collider_3(Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * value)
	{
		___m_Collider_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Collider_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_ContactCount_4() { return static_cast<int32_t>(offsetof(Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0, ___m_ContactCount_4)); }
	inline int32_t get_m_ContactCount_4() const { return ___m_ContactCount_4; }
	inline int32_t* get_address_of_m_ContactCount_4() { return &___m_ContactCount_4; }
	inline void set_m_ContactCount_4(int32_t value)
	{
		___m_ContactCount_4 = value;
	}

	inline static int32_t get_offset_of_m_ReusedContacts_5() { return static_cast<int32_t>(offsetof(Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0, ___m_ReusedContacts_5)); }
	inline ContactPointU5BU5D_t1ACD262B1EA44CD48E2039381DE96847F203E62B* get_m_ReusedContacts_5() const { return ___m_ReusedContacts_5; }
	inline ContactPointU5BU5D_t1ACD262B1EA44CD48E2039381DE96847F203E62B** get_address_of_m_ReusedContacts_5() { return &___m_ReusedContacts_5; }
	inline void set_m_ReusedContacts_5(ContactPointU5BU5D_t1ACD262B1EA44CD48E2039381DE96847F203E62B* value)
	{
		___m_ReusedContacts_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ReusedContacts_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_LegacyContacts_6() { return static_cast<int32_t>(offsetof(Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0, ___m_LegacyContacts_6)); }
	inline ContactPointU5BU5D_t1ACD262B1EA44CD48E2039381DE96847F203E62B* get_m_LegacyContacts_6() const { return ___m_LegacyContacts_6; }
	inline ContactPointU5BU5D_t1ACD262B1EA44CD48E2039381DE96847F203E62B** get_address_of_m_LegacyContacts_6() { return &___m_LegacyContacts_6; }
	inline void set_m_LegacyContacts_6(ContactPointU5BU5D_t1ACD262B1EA44CD48E2039381DE96847F203E62B* value)
	{
		___m_LegacyContacts_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_LegacyContacts_6), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Collision
struct Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0_marshaled_pinvoke
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Impulse_0;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_RelativeVelocity_1;
	Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * ___m_Body_2;
	Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * ___m_Collider_3;
	int32_t ___m_ContactCount_4;
	ContactPoint_tC179732A8E0014F5EFF5977ED1ADF12CF14A9017 * ___m_ReusedContacts_5;
	ContactPoint_tC179732A8E0014F5EFF5977ED1ADF12CF14A9017 * ___m_LegacyContacts_6;
};
// Native definition for COM marshalling of UnityEngine.Collision
struct Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0_marshaled_com
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Impulse_0;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_RelativeVelocity_1;
	Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * ___m_Body_2;
	Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * ___m_Collider_3;
	int32_t ___m_ContactCount_4;
	ContactPoint_tC179732A8E0014F5EFF5977ED1ADF12CF14A9017 * ___m_ReusedContacts_5;
	ContactPoint_tC179732A8E0014F5EFF5977ED1ADF12CF14A9017 * ___m_LegacyContacts_6;
};

// UnityEngine.KeyCode
struct KeyCode_t1D303F7D061BF4429872E9F109ADDBCB431671F4 
{
public:
	// System.Int32 UnityEngine.KeyCode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(KeyCode_t1D303F7D061BF4429872E9F109ADDBCB431671F4, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// shipMovement/speedModes
struct speedModes_tBC5577F0A1CE61438397F70D84F7FB3255211669 
{
public:
	// System.Int32 shipMovement/speedModes::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(speedModes_tBC5577F0A1CE61438397F70D84F7FB3255211669, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.Material
struct Material_t8927C00353A72755313F046D0CE85178AE8218EE  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.Mesh
struct Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.TerrainData
struct TerrainData_tAD3780D3C4DE5B9BE122BECE6D08C4AE169ED2A4  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};

struct TerrainData_tAD3780D3C4DE5B9BE122BECE6D08C4AE169ED2A4_StaticFields
{
public:
	// System.Int32 UnityEngine.TerrainData::k_MaximumResolution
	int32_t ___k_MaximumResolution_4;
	// System.Int32 UnityEngine.TerrainData::k_MinimumDetailResolutionPerPatch
	int32_t ___k_MinimumDetailResolutionPerPatch_5;
	// System.Int32 UnityEngine.TerrainData::k_MaximumDetailResolutionPerPatch
	int32_t ___k_MaximumDetailResolutionPerPatch_6;
	// System.Int32 UnityEngine.TerrainData::k_MaximumDetailPatchCount
	int32_t ___k_MaximumDetailPatchCount_7;
	// System.Int32 UnityEngine.TerrainData::k_MaximumDetailsPerRes
	int32_t ___k_MaximumDetailsPerRes_8;
	// System.Int32 UnityEngine.TerrainData::k_MinimumAlphamapResolution
	int32_t ___k_MinimumAlphamapResolution_9;
	// System.Int32 UnityEngine.TerrainData::k_MaximumAlphamapResolution
	int32_t ___k_MaximumAlphamapResolution_10;
	// System.Int32 UnityEngine.TerrainData::k_MinimumBaseMapResolution
	int32_t ___k_MinimumBaseMapResolution_11;
	// System.Int32 UnityEngine.TerrainData::k_MaximumBaseMapResolution
	int32_t ___k_MaximumBaseMapResolution_12;

public:
	inline static int32_t get_offset_of_k_MaximumResolution_4() { return static_cast<int32_t>(offsetof(TerrainData_tAD3780D3C4DE5B9BE122BECE6D08C4AE169ED2A4_StaticFields, ___k_MaximumResolution_4)); }
	inline int32_t get_k_MaximumResolution_4() const { return ___k_MaximumResolution_4; }
	inline int32_t* get_address_of_k_MaximumResolution_4() { return &___k_MaximumResolution_4; }
	inline void set_k_MaximumResolution_4(int32_t value)
	{
		___k_MaximumResolution_4 = value;
	}

	inline static int32_t get_offset_of_k_MinimumDetailResolutionPerPatch_5() { return static_cast<int32_t>(offsetof(TerrainData_tAD3780D3C4DE5B9BE122BECE6D08C4AE169ED2A4_StaticFields, ___k_MinimumDetailResolutionPerPatch_5)); }
	inline int32_t get_k_MinimumDetailResolutionPerPatch_5() const { return ___k_MinimumDetailResolutionPerPatch_5; }
	inline int32_t* get_address_of_k_MinimumDetailResolutionPerPatch_5() { return &___k_MinimumDetailResolutionPerPatch_5; }
	inline void set_k_MinimumDetailResolutionPerPatch_5(int32_t value)
	{
		___k_MinimumDetailResolutionPerPatch_5 = value;
	}

	inline static int32_t get_offset_of_k_MaximumDetailResolutionPerPatch_6() { return static_cast<int32_t>(offsetof(TerrainData_tAD3780D3C4DE5B9BE122BECE6D08C4AE169ED2A4_StaticFields, ___k_MaximumDetailResolutionPerPatch_6)); }
	inline int32_t get_k_MaximumDetailResolutionPerPatch_6() const { return ___k_MaximumDetailResolutionPerPatch_6; }
	inline int32_t* get_address_of_k_MaximumDetailResolutionPerPatch_6() { return &___k_MaximumDetailResolutionPerPatch_6; }
	inline void set_k_MaximumDetailResolutionPerPatch_6(int32_t value)
	{
		___k_MaximumDetailResolutionPerPatch_6 = value;
	}

	inline static int32_t get_offset_of_k_MaximumDetailPatchCount_7() { return static_cast<int32_t>(offsetof(TerrainData_tAD3780D3C4DE5B9BE122BECE6D08C4AE169ED2A4_StaticFields, ___k_MaximumDetailPatchCount_7)); }
	inline int32_t get_k_MaximumDetailPatchCount_7() const { return ___k_MaximumDetailPatchCount_7; }
	inline int32_t* get_address_of_k_MaximumDetailPatchCount_7() { return &___k_MaximumDetailPatchCount_7; }
	inline void set_k_MaximumDetailPatchCount_7(int32_t value)
	{
		___k_MaximumDetailPatchCount_7 = value;
	}

	inline static int32_t get_offset_of_k_MaximumDetailsPerRes_8() { return static_cast<int32_t>(offsetof(TerrainData_tAD3780D3C4DE5B9BE122BECE6D08C4AE169ED2A4_StaticFields, ___k_MaximumDetailsPerRes_8)); }
	inline int32_t get_k_MaximumDetailsPerRes_8() const { return ___k_MaximumDetailsPerRes_8; }
	inline int32_t* get_address_of_k_MaximumDetailsPerRes_8() { return &___k_MaximumDetailsPerRes_8; }
	inline void set_k_MaximumDetailsPerRes_8(int32_t value)
	{
		___k_MaximumDetailsPerRes_8 = value;
	}

	inline static int32_t get_offset_of_k_MinimumAlphamapResolution_9() { return static_cast<int32_t>(offsetof(TerrainData_tAD3780D3C4DE5B9BE122BECE6D08C4AE169ED2A4_StaticFields, ___k_MinimumAlphamapResolution_9)); }
	inline int32_t get_k_MinimumAlphamapResolution_9() const { return ___k_MinimumAlphamapResolution_9; }
	inline int32_t* get_address_of_k_MinimumAlphamapResolution_9() { return &___k_MinimumAlphamapResolution_9; }
	inline void set_k_MinimumAlphamapResolution_9(int32_t value)
	{
		___k_MinimumAlphamapResolution_9 = value;
	}

	inline static int32_t get_offset_of_k_MaximumAlphamapResolution_10() { return static_cast<int32_t>(offsetof(TerrainData_tAD3780D3C4DE5B9BE122BECE6D08C4AE169ED2A4_StaticFields, ___k_MaximumAlphamapResolution_10)); }
	inline int32_t get_k_MaximumAlphamapResolution_10() const { return ___k_MaximumAlphamapResolution_10; }
	inline int32_t* get_address_of_k_MaximumAlphamapResolution_10() { return &___k_MaximumAlphamapResolution_10; }
	inline void set_k_MaximumAlphamapResolution_10(int32_t value)
	{
		___k_MaximumAlphamapResolution_10 = value;
	}

	inline static int32_t get_offset_of_k_MinimumBaseMapResolution_11() { return static_cast<int32_t>(offsetof(TerrainData_tAD3780D3C4DE5B9BE122BECE6D08C4AE169ED2A4_StaticFields, ___k_MinimumBaseMapResolution_11)); }
	inline int32_t get_k_MinimumBaseMapResolution_11() const { return ___k_MinimumBaseMapResolution_11; }
	inline int32_t* get_address_of_k_MinimumBaseMapResolution_11() { return &___k_MinimumBaseMapResolution_11; }
	inline void set_k_MinimumBaseMapResolution_11(int32_t value)
	{
		___k_MinimumBaseMapResolution_11 = value;
	}

	inline static int32_t get_offset_of_k_MaximumBaseMapResolution_12() { return static_cast<int32_t>(offsetof(TerrainData_tAD3780D3C4DE5B9BE122BECE6D08C4AE169ED2A4_StaticFields, ___k_MaximumBaseMapResolution_12)); }
	inline int32_t get_k_MaximumBaseMapResolution_12() const { return ___k_MaximumBaseMapResolution_12; }
	inline int32_t* get_address_of_k_MaximumBaseMapResolution_12() { return &___k_MaximumBaseMapResolution_12; }
	inline void set_k_MaximumBaseMapResolution_12(int32_t value)
	{
		___k_MaximumBaseMapResolution_12 = value;
	}
};


// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Collider
struct Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.MeshFilter
struct MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Renderer
struct Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.BoxCollider
struct BoxCollider_tA530691AC1A3C9FE6428F68F98588FCB1BF9AAA5  : public Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02
{
public:

public:
};


// UnityEngine.Camera
struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};

struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields
{
public:
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPreCull_4;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPreRender_5;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPostRender_6;

public:
	inline static int32_t get_offset_of_onPreCull_4() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPreCull_4)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPreCull_4() const { return ___onPreCull_4; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPreCull_4() { return &___onPreCull_4; }
	inline void set_onPreCull_4(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPreCull_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPreCull_4), (void*)value);
	}

	inline static int32_t get_offset_of_onPreRender_5() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPreRender_5)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPreRender_5() const { return ___onPreRender_5; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPreRender_5() { return &___onPreRender_5; }
	inline void set_onPreRender_5(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPreRender_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPreRender_5), (void*)value);
	}

	inline static int32_t get_offset_of_onPostRender_6() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPostRender_6)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPostRender_6() const { return ___onPostRender_6; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPostRender_6() { return &___onPostRender_6; }
	inline void set_onPostRender_6(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPostRender_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPostRender_6), (void*)value);
	}
};


// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.Terrain
struct Terrain_t2C0E3B3A2895E81446EFF4F5AFD601CF977D1836  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// CollisionEnterTest
struct CollisionEnterTest_t8D0E8ED0999BAA6E80A3DE21416EEA6CE77A1D79  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.GameObject CollisionEnterTest::canvas
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___canvas_4;
	// UnityEngine.GameObject CollisionEnterTest::test
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___test_5;
	// System.Single CollisionEnterTest::timerChange
	float ___timerChange_6;
	// System.Int32 CollisionEnterTest::numberOfcollisions
	int32_t ___numberOfcollisions_7;

public:
	inline static int32_t get_offset_of_canvas_4() { return static_cast<int32_t>(offsetof(CollisionEnterTest_t8D0E8ED0999BAA6E80A3DE21416EEA6CE77A1D79, ___canvas_4)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_canvas_4() const { return ___canvas_4; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_canvas_4() { return &___canvas_4; }
	inline void set_canvas_4(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___canvas_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___canvas_4), (void*)value);
	}

	inline static int32_t get_offset_of_test_5() { return static_cast<int32_t>(offsetof(CollisionEnterTest_t8D0E8ED0999BAA6E80A3DE21416EEA6CE77A1D79, ___test_5)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_test_5() const { return ___test_5; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_test_5() { return &___test_5; }
	inline void set_test_5(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___test_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___test_5), (void*)value);
	}

	inline static int32_t get_offset_of_timerChange_6() { return static_cast<int32_t>(offsetof(CollisionEnterTest_t8D0E8ED0999BAA6E80A3DE21416EEA6CE77A1D79, ___timerChange_6)); }
	inline float get_timerChange_6() const { return ___timerChange_6; }
	inline float* get_address_of_timerChange_6() { return &___timerChange_6; }
	inline void set_timerChange_6(float value)
	{
		___timerChange_6 = value;
	}

	inline static int32_t get_offset_of_numberOfcollisions_7() { return static_cast<int32_t>(offsetof(CollisionEnterTest_t8D0E8ED0999BAA6E80A3DE21416EEA6CE77A1D79, ___numberOfcollisions_7)); }
	inline int32_t get_numberOfcollisions_7() const { return ___numberOfcollisions_7; }
	inline int32_t* get_address_of_numberOfcollisions_7() { return &___numberOfcollisions_7; }
	inline void set_numberOfcollisions_7(int32_t value)
	{
		___numberOfcollisions_7 = value;
	}
};


// ColorChange
struct ColorChange_tD8CD0345947B45087C90794FEBC0F51C9DD64749  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Single ColorChange::timeInterval
	float ___timeInterval_4;
	// UnityEngine.Material ColorChange::mat
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___mat_5;

public:
	inline static int32_t get_offset_of_timeInterval_4() { return static_cast<int32_t>(offsetof(ColorChange_tD8CD0345947B45087C90794FEBC0F51C9DD64749, ___timeInterval_4)); }
	inline float get_timeInterval_4() const { return ___timeInterval_4; }
	inline float* get_address_of_timeInterval_4() { return &___timeInterval_4; }
	inline void set_timeInterval_4(float value)
	{
		___timeInterval_4 = value;
	}

	inline static int32_t get_offset_of_mat_5() { return static_cast<int32_t>(offsetof(ColorChange_tD8CD0345947B45087C90794FEBC0F51C9DD64749, ___mat_5)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_mat_5() const { return ___mat_5; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_mat_5() { return &___mat_5; }
	inline void set_mat_5(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___mat_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mat_5), (void*)value);
	}
};


// DestinationHit
struct DestinationHit_t7B158206CA4EACCF07DEA9D5DF3A36436ED91B53  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// Destroy
struct Destroy_tD445EFB5525F85CA112790F40D54033D2FD39230  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// FowardMove
struct FowardMove_t356115A06C54F82A6359E447749E2A5A7BBFB106  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Single FowardMove::shipSpeed
	float ___shipSpeed_4;
	// System.Single FowardMove::shipSpeedHolder
	float ___shipSpeedHolder_5;
	// System.Single FowardMove::shipSpeedHolderSpeedUp
	float ___shipSpeedHolderSpeedUp_6;

public:
	inline static int32_t get_offset_of_shipSpeed_4() { return static_cast<int32_t>(offsetof(FowardMove_t356115A06C54F82A6359E447749E2A5A7BBFB106, ___shipSpeed_4)); }
	inline float get_shipSpeed_4() const { return ___shipSpeed_4; }
	inline float* get_address_of_shipSpeed_4() { return &___shipSpeed_4; }
	inline void set_shipSpeed_4(float value)
	{
		___shipSpeed_4 = value;
	}

	inline static int32_t get_offset_of_shipSpeedHolder_5() { return static_cast<int32_t>(offsetof(FowardMove_t356115A06C54F82A6359E447749E2A5A7BBFB106, ___shipSpeedHolder_5)); }
	inline float get_shipSpeedHolder_5() const { return ___shipSpeedHolder_5; }
	inline float* get_address_of_shipSpeedHolder_5() { return &___shipSpeedHolder_5; }
	inline void set_shipSpeedHolder_5(float value)
	{
		___shipSpeedHolder_5 = value;
	}

	inline static int32_t get_offset_of_shipSpeedHolderSpeedUp_6() { return static_cast<int32_t>(offsetof(FowardMove_t356115A06C54F82A6359E447749E2A5A7BBFB106, ___shipSpeedHolderSpeedUp_6)); }
	inline float get_shipSpeedHolderSpeedUp_6() const { return ___shipSpeedHolderSpeedUp_6; }
	inline float* get_address_of_shipSpeedHolderSpeedUp_6() { return &___shipSpeedHolderSpeedUp_6; }
	inline void set_shipSpeedHolderSpeedUp_6(float value)
	{
		___shipSpeedHolderSpeedUp_6 = value;
	}
};


// Health
struct Health_t24F89E064FE2032E5252765DE51675276EF64AD9  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Int32 Health::shield
	int32_t ___shield_4;
	// System.Int32 Health::health
	int32_t ___health_5;
	// UnityEngine.GameObject Health::player
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___player_6;
	// UnityEngine.GameObject Health::healthNShields
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___healthNShields_7;
	// UnityEngine.UI.Text Health::shieldText
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___shieldText_8;
	// UnityEngine.UI.Text Health::healthText
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___healthText_9;

public:
	inline static int32_t get_offset_of_shield_4() { return static_cast<int32_t>(offsetof(Health_t24F89E064FE2032E5252765DE51675276EF64AD9, ___shield_4)); }
	inline int32_t get_shield_4() const { return ___shield_4; }
	inline int32_t* get_address_of_shield_4() { return &___shield_4; }
	inline void set_shield_4(int32_t value)
	{
		___shield_4 = value;
	}

	inline static int32_t get_offset_of_health_5() { return static_cast<int32_t>(offsetof(Health_t24F89E064FE2032E5252765DE51675276EF64AD9, ___health_5)); }
	inline int32_t get_health_5() const { return ___health_5; }
	inline int32_t* get_address_of_health_5() { return &___health_5; }
	inline void set_health_5(int32_t value)
	{
		___health_5 = value;
	}

	inline static int32_t get_offset_of_player_6() { return static_cast<int32_t>(offsetof(Health_t24F89E064FE2032E5252765DE51675276EF64AD9, ___player_6)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_player_6() const { return ___player_6; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_player_6() { return &___player_6; }
	inline void set_player_6(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___player_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___player_6), (void*)value);
	}

	inline static int32_t get_offset_of_healthNShields_7() { return static_cast<int32_t>(offsetof(Health_t24F89E064FE2032E5252765DE51675276EF64AD9, ___healthNShields_7)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_healthNShields_7() const { return ___healthNShields_7; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_healthNShields_7() { return &___healthNShields_7; }
	inline void set_healthNShields_7(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___healthNShields_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___healthNShields_7), (void*)value);
	}

	inline static int32_t get_offset_of_shieldText_8() { return static_cast<int32_t>(offsetof(Health_t24F89E064FE2032E5252765DE51675276EF64AD9, ___shieldText_8)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_shieldText_8() const { return ___shieldText_8; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_shieldText_8() { return &___shieldText_8; }
	inline void set_shieldText_8(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___shieldText_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___shieldText_8), (void*)value);
	}

	inline static int32_t get_offset_of_healthText_9() { return static_cast<int32_t>(offsetof(Health_t24F89E064FE2032E5252765DE51675276EF64AD9, ___healthText_9)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_healthText_9() const { return ___healthText_9; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_healthText_9() { return &___healthText_9; }
	inline void set_healthText_9(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___healthText_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___healthText_9), (void*)value);
	}
};


// ItemGet
struct ItemGet_t4BA2919C42A7B3AEEB061ECD7046AC747086D6DD  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.GameObject ItemGet::objWithScript
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___objWithScript_4;
	// System.Single ItemGet::speedIncrease
	float ___speedIncrease_5;

public:
	inline static int32_t get_offset_of_objWithScript_4() { return static_cast<int32_t>(offsetof(ItemGet_t4BA2919C42A7B3AEEB061ECD7046AC747086D6DD, ___objWithScript_4)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_objWithScript_4() const { return ___objWithScript_4; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_objWithScript_4() { return &___objWithScript_4; }
	inline void set_objWithScript_4(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___objWithScript_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___objWithScript_4), (void*)value);
	}

	inline static int32_t get_offset_of_speedIncrease_5() { return static_cast<int32_t>(offsetof(ItemGet_t4BA2919C42A7B3AEEB061ECD7046AC747086D6DD, ___speedIncrease_5)); }
	inline float get_speedIncrease_5() const { return ___speedIncrease_5; }
	inline float* get_address_of_speedIncrease_5() { return &___speedIncrease_5; }
	inline void set_speedIncrease_5(float value)
	{
		___speedIncrease_5 = value;
	}
};


// LevelScroll
struct LevelScroll_tAECE64C2EDA23B3790CFA7F8D4C43E0641255C9D  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Single LevelScroll::scrollSpeed
	float ___scrollSpeed_4;
	// UnityEngine.Renderer LevelScroll::rend
	Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * ___rend_5;

public:
	inline static int32_t get_offset_of_scrollSpeed_4() { return static_cast<int32_t>(offsetof(LevelScroll_tAECE64C2EDA23B3790CFA7F8D4C43E0641255C9D, ___scrollSpeed_4)); }
	inline float get_scrollSpeed_4() const { return ___scrollSpeed_4; }
	inline float* get_address_of_scrollSpeed_4() { return &___scrollSpeed_4; }
	inline void set_scrollSpeed_4(float value)
	{
		___scrollSpeed_4 = value;
	}

	inline static int32_t get_offset_of_rend_5() { return static_cast<int32_t>(offsetof(LevelScroll_tAECE64C2EDA23B3790CFA7F8D4C43E0641255C9D, ___rend_5)); }
	inline Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * get_rend_5() const { return ___rend_5; }
	inline Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C ** get_address_of_rend_5() { return &___rend_5; }
	inline void set_rend_5(Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * value)
	{
		___rend_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rend_5), (void*)value);
	}
};


// PauseMenu
struct PauseMenu_t7195E78DC17C81907F58B853AA818812DA9227BB  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.GameObject PauseMenu::pauseMenuUI
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___pauseMenuUI_5;

public:
	inline static int32_t get_offset_of_pauseMenuUI_5() { return static_cast<int32_t>(offsetof(PauseMenu_t7195E78DC17C81907F58B853AA818812DA9227BB, ___pauseMenuUI_5)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_pauseMenuUI_5() const { return ___pauseMenuUI_5; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_pauseMenuUI_5() { return &___pauseMenuUI_5; }
	inline void set_pauseMenuUI_5(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___pauseMenuUI_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pauseMenuUI_5), (void*)value);
	}
};

struct PauseMenu_t7195E78DC17C81907F58B853AA818812DA9227BB_StaticFields
{
public:
	// System.Boolean PauseMenu::GameIsPaused
	bool ___GameIsPaused_4;

public:
	inline static int32_t get_offset_of_GameIsPaused_4() { return static_cast<int32_t>(offsetof(PauseMenu_t7195E78DC17C81907F58B853AA818812DA9227BB_StaticFields, ___GameIsPaused_4)); }
	inline bool get_GameIsPaused_4() const { return ___GameIsPaused_4; }
	inline bool* get_address_of_GameIsPaused_4() { return &___GameIsPaused_4; }
	inline void set_GameIsPaused_4(bool value)
	{
		___GameIsPaused_4 = value;
	}
};


// PlayButton
struct PlayButton_tD6F2701BC115FBF928E81BFEFCEE62CA72D7B785  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// RotateShip
struct RotateShip_t2501D7C101818D85DD14EAF6B45CB26305ECB02B  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Single RotateShip::rotateSpeed
	float ___rotateSpeed_4;
	// UnityEngine.GameObject RotateShip::rotateObject
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___rotateObject_5;
	// System.Boolean RotateShip::doRotate
	bool ___doRotate_6;

public:
	inline static int32_t get_offset_of_rotateSpeed_4() { return static_cast<int32_t>(offsetof(RotateShip_t2501D7C101818D85DD14EAF6B45CB26305ECB02B, ___rotateSpeed_4)); }
	inline float get_rotateSpeed_4() const { return ___rotateSpeed_4; }
	inline float* get_address_of_rotateSpeed_4() { return &___rotateSpeed_4; }
	inline void set_rotateSpeed_4(float value)
	{
		___rotateSpeed_4 = value;
	}

	inline static int32_t get_offset_of_rotateObject_5() { return static_cast<int32_t>(offsetof(RotateShip_t2501D7C101818D85DD14EAF6B45CB26305ECB02B, ___rotateObject_5)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_rotateObject_5() const { return ___rotateObject_5; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_rotateObject_5() { return &___rotateObject_5; }
	inline void set_rotateObject_5(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___rotateObject_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rotateObject_5), (void*)value);
	}

	inline static int32_t get_offset_of_doRotate_6() { return static_cast<int32_t>(offsetof(RotateShip_t2501D7C101818D85DD14EAF6B45CB26305ECB02B, ___doRotate_6)); }
	inline bool get_doRotate_6() const { return ___doRotate_6; }
	inline bool* get_address_of_doRotate_6() { return &___doRotate_6; }
	inline void set_doRotate_6(bool value)
	{
		___doRotate_6 = value;
	}
};


// Testing
struct Testing_t05D00BFB0B26081E82B4C2927E842D3540B7F49F  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Single Testing::currentSpeed
	float ___currentSpeed_4;
	// UnityEngine.GameObject Testing::player
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___player_5;
	// System.Boolean Testing::speedDec
	bool ___speedDec_6;
	// System.Boolean Testing::speedInc
	bool ___speedInc_7;

public:
	inline static int32_t get_offset_of_currentSpeed_4() { return static_cast<int32_t>(offsetof(Testing_t05D00BFB0B26081E82B4C2927E842D3540B7F49F, ___currentSpeed_4)); }
	inline float get_currentSpeed_4() const { return ___currentSpeed_4; }
	inline float* get_address_of_currentSpeed_4() { return &___currentSpeed_4; }
	inline void set_currentSpeed_4(float value)
	{
		___currentSpeed_4 = value;
	}

	inline static int32_t get_offset_of_player_5() { return static_cast<int32_t>(offsetof(Testing_t05D00BFB0B26081E82B4C2927E842D3540B7F49F, ___player_5)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_player_5() const { return ___player_5; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_player_5() { return &___player_5; }
	inline void set_player_5(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___player_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___player_5), (void*)value);
	}

	inline static int32_t get_offset_of_speedDec_6() { return static_cast<int32_t>(offsetof(Testing_t05D00BFB0B26081E82B4C2927E842D3540B7F49F, ___speedDec_6)); }
	inline bool get_speedDec_6() const { return ___speedDec_6; }
	inline bool* get_address_of_speedDec_6() { return &___speedDec_6; }
	inline void set_speedDec_6(bool value)
	{
		___speedDec_6 = value;
	}

	inline static int32_t get_offset_of_speedInc_7() { return static_cast<int32_t>(offsetof(Testing_t05D00BFB0B26081E82B4C2927E842D3540B7F49F, ___speedInc_7)); }
	inline bool get_speedInc_7() const { return ___speedInc_7; }
	inline bool* get_address_of_speedInc_7() { return &___speedInc_7; }
	inline void set_speedInc_7(bool value)
	{
		___speedInc_7 = value;
	}
};


// Timer
struct Timer_tC013AFF28E5916E4AFDBEB57A18D8335A47835E9  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Single Timer::currentTime
	float ___currentTime_4;
	// UnityEngine.GameObject Timer::canvas
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___canvas_5;
	// UnityEngine.UI.Text Timer::timerText
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___timerText_6;

public:
	inline static int32_t get_offset_of_currentTime_4() { return static_cast<int32_t>(offsetof(Timer_tC013AFF28E5916E4AFDBEB57A18D8335A47835E9, ___currentTime_4)); }
	inline float get_currentTime_4() const { return ___currentTime_4; }
	inline float* get_address_of_currentTime_4() { return &___currentTime_4; }
	inline void set_currentTime_4(float value)
	{
		___currentTime_4 = value;
	}

	inline static int32_t get_offset_of_canvas_5() { return static_cast<int32_t>(offsetof(Timer_tC013AFF28E5916E4AFDBEB57A18D8335A47835E9, ___canvas_5)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_canvas_5() const { return ___canvas_5; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_canvas_5() { return &___canvas_5; }
	inline void set_canvas_5(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___canvas_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___canvas_5), (void*)value);
	}

	inline static int32_t get_offset_of_timerText_6() { return static_cast<int32_t>(offsetof(Timer_tC013AFF28E5916E4AFDBEB57A18D8335A47835E9, ___timerText_6)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_timerText_6() const { return ___timerText_6; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_timerText_6() { return &___timerText_6; }
	inline void set_timerText_6(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___timerText_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___timerText_6), (void*)value);
	}
};


// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// meshGenerate
struct meshGenerate_tF62DE27B52710D5AC9B5DE65A62AF81950870B31  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.Mesh meshGenerate::mesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___mesh_4;
	// UnityEngine.Vector3[] meshGenerate::vertices
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___vertices_5;
	// System.Int32[] meshGenerate::triangles
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___triangles_6;
	// System.Int32 meshGenerate::xSize
	int32_t ___xSize_7;
	// System.Int32 meshGenerate::zSize
	int32_t ___zSize_8;

public:
	inline static int32_t get_offset_of_mesh_4() { return static_cast<int32_t>(offsetof(meshGenerate_tF62DE27B52710D5AC9B5DE65A62AF81950870B31, ___mesh_4)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_mesh_4() const { return ___mesh_4; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_mesh_4() { return &___mesh_4; }
	inline void set_mesh_4(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___mesh_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mesh_4), (void*)value);
	}

	inline static int32_t get_offset_of_vertices_5() { return static_cast<int32_t>(offsetof(meshGenerate_tF62DE27B52710D5AC9B5DE65A62AF81950870B31, ___vertices_5)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_vertices_5() const { return ___vertices_5; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_vertices_5() { return &___vertices_5; }
	inline void set_vertices_5(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___vertices_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___vertices_5), (void*)value);
	}

	inline static int32_t get_offset_of_triangles_6() { return static_cast<int32_t>(offsetof(meshGenerate_tF62DE27B52710D5AC9B5DE65A62AF81950870B31, ___triangles_6)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_triangles_6() const { return ___triangles_6; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_triangles_6() { return &___triangles_6; }
	inline void set_triangles_6(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___triangles_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___triangles_6), (void*)value);
	}

	inline static int32_t get_offset_of_xSize_7() { return static_cast<int32_t>(offsetof(meshGenerate_tF62DE27B52710D5AC9B5DE65A62AF81950870B31, ___xSize_7)); }
	inline int32_t get_xSize_7() const { return ___xSize_7; }
	inline int32_t* get_address_of_xSize_7() { return &___xSize_7; }
	inline void set_xSize_7(int32_t value)
	{
		___xSize_7 = value;
	}

	inline static int32_t get_offset_of_zSize_8() { return static_cast<int32_t>(offsetof(meshGenerate_tF62DE27B52710D5AC9B5DE65A62AF81950870B31, ___zSize_8)); }
	inline int32_t get_zSize_8() const { return ___zSize_8; }
	inline int32_t* get_address_of_zSize_8() { return &___zSize_8; }
	inline void set_zSize_8(int32_t value)
	{
		___zSize_8 = value;
	}
};


// noise
struct noise_tCFD9C46E8E052983BB1A66D213CF8398D2B402CD  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// planetRoate
struct planetRoate_tF8A3D3ED0EDD7647D7642A79E9B7055F3D859462  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Single planetRoate::rotateSpeed
	float ___rotateSpeed_4;

public:
	inline static int32_t get_offset_of_rotateSpeed_4() { return static_cast<int32_t>(offsetof(planetRoate_tF8A3D3ED0EDD7647D7642A79E9B7055F3D859462, ___rotateSpeed_4)); }
	inline float get_rotateSpeed_4() const { return ___rotateSpeed_4; }
	inline float* get_address_of_rotateSpeed_4() { return &___rotateSpeed_4; }
	inline void set_rotateSpeed_4(float value)
	{
		___rotateSpeed_4 = value;
	}
};


// screenBoundries
struct screenBoundries_tE43C772D917DFDEFCBD481A9D6CA53A411597BE6  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.Vector2 screenBoundries::screenBound
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___screenBound_4;
	// System.Single screenBoundries::objWidth
	float ___objWidth_5;
	// System.Single screenBoundries::objHeight
	float ___objHeight_6;

public:
	inline static int32_t get_offset_of_screenBound_4() { return static_cast<int32_t>(offsetof(screenBoundries_tE43C772D917DFDEFCBD481A9D6CA53A411597BE6, ___screenBound_4)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_screenBound_4() const { return ___screenBound_4; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_screenBound_4() { return &___screenBound_4; }
	inline void set_screenBound_4(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___screenBound_4 = value;
	}

	inline static int32_t get_offset_of_objWidth_5() { return static_cast<int32_t>(offsetof(screenBoundries_tE43C772D917DFDEFCBD481A9D6CA53A411597BE6, ___objWidth_5)); }
	inline float get_objWidth_5() const { return ___objWidth_5; }
	inline float* get_address_of_objWidth_5() { return &___objWidth_5; }
	inline void set_objWidth_5(float value)
	{
		___objWidth_5 = value;
	}

	inline static int32_t get_offset_of_objHeight_6() { return static_cast<int32_t>(offsetof(screenBoundries_tE43C772D917DFDEFCBD481A9D6CA53A411597BE6, ___objHeight_6)); }
	inline float get_objHeight_6() const { return ___objHeight_6; }
	inline float* get_address_of_objHeight_6() { return &___objHeight_6; }
	inline void set_objHeight_6(float value)
	{
		___objHeight_6 = value;
	}
};


// shipMovement
struct shipMovement_t24B9B843A8577B9D82BD0CCA80ED77E74CF079EE  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// shipMovement/speedModes shipMovement::currentSpeedMode
	int32_t ___currentSpeedMode_4;
	// System.Single shipMovement::currentSpeed
	float ___currentSpeed_6;
	// System.Single shipMovement::accelerationRate
	float ___accelerationRate_7;

public:
	inline static int32_t get_offset_of_currentSpeedMode_4() { return static_cast<int32_t>(offsetof(shipMovement_t24B9B843A8577B9D82BD0CCA80ED77E74CF079EE, ___currentSpeedMode_4)); }
	inline int32_t get_currentSpeedMode_4() const { return ___currentSpeedMode_4; }
	inline int32_t* get_address_of_currentSpeedMode_4() { return &___currentSpeedMode_4; }
	inline void set_currentSpeedMode_4(int32_t value)
	{
		___currentSpeedMode_4 = value;
	}

	inline static int32_t get_offset_of_currentSpeed_6() { return static_cast<int32_t>(offsetof(shipMovement_t24B9B843A8577B9D82BD0CCA80ED77E74CF079EE, ___currentSpeed_6)); }
	inline float get_currentSpeed_6() const { return ___currentSpeed_6; }
	inline float* get_address_of_currentSpeed_6() { return &___currentSpeed_6; }
	inline void set_currentSpeed_6(float value)
	{
		___currentSpeed_6 = value;
	}

	inline static int32_t get_offset_of_accelerationRate_7() { return static_cast<int32_t>(offsetof(shipMovement_t24B9B843A8577B9D82BD0CCA80ED77E74CF079EE, ___accelerationRate_7)); }
	inline float get_accelerationRate_7() const { return ___accelerationRate_7; }
	inline float* get_address_of_accelerationRate_7() { return &___accelerationRate_7; }
	inline void set_accelerationRate_7(float value)
	{
		___accelerationRate_7 = value;
	}
};


// shipRotate
struct shipRotate_t30F0FE189C6C4D84397C28D9DDDB2AF19E998A9C  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Single shipRotate::rotateSpeed
	float ___rotateSpeed_4;
	// UnityEngine.GameObject shipRotate::rotateObject
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___rotateObject_5;

public:
	inline static int32_t get_offset_of_rotateSpeed_4() { return static_cast<int32_t>(offsetof(shipRotate_t30F0FE189C6C4D84397C28D9DDDB2AF19E998A9C, ___rotateSpeed_4)); }
	inline float get_rotateSpeed_4() const { return ___rotateSpeed_4; }
	inline float* get_address_of_rotateSpeed_4() { return &___rotateSpeed_4; }
	inline void set_rotateSpeed_4(float value)
	{
		___rotateSpeed_4 = value;
	}

	inline static int32_t get_offset_of_rotateObject_5() { return static_cast<int32_t>(offsetof(shipRotate_t30F0FE189C6C4D84397C28D9DDDB2AF19E998A9C, ___rotateObject_5)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_rotateObject_5() const { return ___rotateObject_5; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_rotateObject_5() { return &___rotateObject_5; }
	inline void set_rotateObject_5(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___rotateObject_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rotateObject_5), (void*)value);
	}
};


// shipSelect
struct shipSelect_tE473A575803FB0F6473622D6E3B8F13644990636  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Int32 shipSelect::index
	int32_t ___index_4;
	// UnityEngine.GameObject[] shipSelect::shipList
	GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* ___shipList_5;

public:
	inline static int32_t get_offset_of_index_4() { return static_cast<int32_t>(offsetof(shipSelect_tE473A575803FB0F6473622D6E3B8F13644990636, ___index_4)); }
	inline int32_t get_index_4() const { return ___index_4; }
	inline int32_t* get_address_of_index_4() { return &___index_4; }
	inline void set_index_4(int32_t value)
	{
		___index_4 = value;
	}

	inline static int32_t get_offset_of_shipList_5() { return static_cast<int32_t>(offsetof(shipSelect_tE473A575803FB0F6473622D6E3B8F13644990636, ___shipList_5)); }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* get_shipList_5() const { return ___shipList_5; }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642** get_address_of_shipList_5() { return &___shipList_5; }
	inline void set_shipList_5(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* value)
	{
		___shipList_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___shipList_5), (void*)value);
	}
};


// shipSelect2
struct shipSelect2_tEC8001FED10583E51B3216B19E6DBC3C819DA161  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Int32 shipSelect2::index
	int32_t ___index_4;
	// UnityEngine.GameObject[] shipSelect2::shipList
	GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* ___shipList_5;

public:
	inline static int32_t get_offset_of_index_4() { return static_cast<int32_t>(offsetof(shipSelect2_tEC8001FED10583E51B3216B19E6DBC3C819DA161, ___index_4)); }
	inline int32_t get_index_4() const { return ___index_4; }
	inline int32_t* get_address_of_index_4() { return &___index_4; }
	inline void set_index_4(int32_t value)
	{
		___index_4 = value;
	}

	inline static int32_t get_offset_of_shipList_5() { return static_cast<int32_t>(offsetof(shipSelect2_tEC8001FED10583E51B3216B19E6DBC3C819DA161, ___shipList_5)); }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* get_shipList_5() const { return ___shipList_5; }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642** get_address_of_shipList_5() { return &___shipList_5; }
	inline void set_shipList_5(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* value)
	{
		___shipList_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___shipList_5), (void*)value);
	}
};


// spawnDisable
struct spawnDisable_tEADC77FDE054C074D5D90F06992FCD2BC57694F1  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.GameObject spawnDisable::spawner
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___spawner_4;
	// UnityEngine.GameObject spawnDisable::target
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___target_5;
	// System.Single spawnDisable::dist
	float ___dist_6;

public:
	inline static int32_t get_offset_of_spawner_4() { return static_cast<int32_t>(offsetof(spawnDisable_tEADC77FDE054C074D5D90F06992FCD2BC57694F1, ___spawner_4)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_spawner_4() const { return ___spawner_4; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_spawner_4() { return &___spawner_4; }
	inline void set_spawner_4(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___spawner_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___spawner_4), (void*)value);
	}

	inline static int32_t get_offset_of_target_5() { return static_cast<int32_t>(offsetof(spawnDisable_tEADC77FDE054C074D5D90F06992FCD2BC57694F1, ___target_5)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_target_5() const { return ___target_5; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_target_5() { return &___target_5; }
	inline void set_target_5(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___target_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___target_5), (void*)value);
	}

	inline static int32_t get_offset_of_dist_6() { return static_cast<int32_t>(offsetof(spawnDisable_tEADC77FDE054C074D5D90F06992FCD2BC57694F1, ___dist_6)); }
	inline float get_dist_6() const { return ___dist_6; }
	inline float* get_address_of_dist_6() { return &___dist_6; }
	inline void set_dist_6(float value)
	{
		___dist_6 = value;
	}
};


// spawnerV2
struct spawnerV2_tAC21446FC6665E9AD98E52AEDDE1CA8B8D29012C  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.GameObject[] spawnerV2::spaceHazards
	GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* ___spaceHazards_4;
	// System.Single spawnerV2::x_Range
	float ___x_Range_5;
	// System.Single spawnerV2::y_Range
	float ___y_Range_6;
	// System.Single spawnerV2::minspawnTime
	float ___minspawnTime_7;
	// System.Single spawnerV2::maxspawnTime
	float ___maxspawnTime_8;
	// System.Int32 spawnerV2::disable
	int32_t ___disable_9;

public:
	inline static int32_t get_offset_of_spaceHazards_4() { return static_cast<int32_t>(offsetof(spawnerV2_tAC21446FC6665E9AD98E52AEDDE1CA8B8D29012C, ___spaceHazards_4)); }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* get_spaceHazards_4() const { return ___spaceHazards_4; }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642** get_address_of_spaceHazards_4() { return &___spaceHazards_4; }
	inline void set_spaceHazards_4(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* value)
	{
		___spaceHazards_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___spaceHazards_4), (void*)value);
	}

	inline static int32_t get_offset_of_x_Range_5() { return static_cast<int32_t>(offsetof(spawnerV2_tAC21446FC6665E9AD98E52AEDDE1CA8B8D29012C, ___x_Range_5)); }
	inline float get_x_Range_5() const { return ___x_Range_5; }
	inline float* get_address_of_x_Range_5() { return &___x_Range_5; }
	inline void set_x_Range_5(float value)
	{
		___x_Range_5 = value;
	}

	inline static int32_t get_offset_of_y_Range_6() { return static_cast<int32_t>(offsetof(spawnerV2_tAC21446FC6665E9AD98E52AEDDE1CA8B8D29012C, ___y_Range_6)); }
	inline float get_y_Range_6() const { return ___y_Range_6; }
	inline float* get_address_of_y_Range_6() { return &___y_Range_6; }
	inline void set_y_Range_6(float value)
	{
		___y_Range_6 = value;
	}

	inline static int32_t get_offset_of_minspawnTime_7() { return static_cast<int32_t>(offsetof(spawnerV2_tAC21446FC6665E9AD98E52AEDDE1CA8B8D29012C, ___minspawnTime_7)); }
	inline float get_minspawnTime_7() const { return ___minspawnTime_7; }
	inline float* get_address_of_minspawnTime_7() { return &___minspawnTime_7; }
	inline void set_minspawnTime_7(float value)
	{
		___minspawnTime_7 = value;
	}

	inline static int32_t get_offset_of_maxspawnTime_8() { return static_cast<int32_t>(offsetof(spawnerV2_tAC21446FC6665E9AD98E52AEDDE1CA8B8D29012C, ___maxspawnTime_8)); }
	inline float get_maxspawnTime_8() const { return ___maxspawnTime_8; }
	inline float* get_address_of_maxspawnTime_8() { return &___maxspawnTime_8; }
	inline void set_maxspawnTime_8(float value)
	{
		___maxspawnTime_8 = value;
	}

	inline static int32_t get_offset_of_disable_9() { return static_cast<int32_t>(offsetof(spawnerV2_tAC21446FC6665E9AD98E52AEDDE1CA8B8D29012C, ___disable_9)); }
	inline int32_t get_disable_9() const { return ___disable_9; }
	inline int32_t* get_address_of_disable_9() { return &___disable_9; }
	inline void set_disable_9(int32_t value)
	{
		___disable_9 = value;
	}
};


// terrainGenerator
struct terrainGenerator_tF54F9D96BC928A01556D8E58062DCF87544B186B  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Int32 terrainGenerator::width
	int32_t ___width_4;
	// System.Int32 terrainGenerator::height
	int32_t ___height_5;
	// System.Int32 terrainGenerator::depth
	int32_t ___depth_6;
	// System.Single terrainGenerator::scale
	float ___scale_7;
	// System.Single terrainGenerator::offsetX
	float ___offsetX_8;
	// System.Single terrainGenerator::offsetY
	float ___offsetY_9;

public:
	inline static int32_t get_offset_of_width_4() { return static_cast<int32_t>(offsetof(terrainGenerator_tF54F9D96BC928A01556D8E58062DCF87544B186B, ___width_4)); }
	inline int32_t get_width_4() const { return ___width_4; }
	inline int32_t* get_address_of_width_4() { return &___width_4; }
	inline void set_width_4(int32_t value)
	{
		___width_4 = value;
	}

	inline static int32_t get_offset_of_height_5() { return static_cast<int32_t>(offsetof(terrainGenerator_tF54F9D96BC928A01556D8E58062DCF87544B186B, ___height_5)); }
	inline int32_t get_height_5() const { return ___height_5; }
	inline int32_t* get_address_of_height_5() { return &___height_5; }
	inline void set_height_5(int32_t value)
	{
		___height_5 = value;
	}

	inline static int32_t get_offset_of_depth_6() { return static_cast<int32_t>(offsetof(terrainGenerator_tF54F9D96BC928A01556D8E58062DCF87544B186B, ___depth_6)); }
	inline int32_t get_depth_6() const { return ___depth_6; }
	inline int32_t* get_address_of_depth_6() { return &___depth_6; }
	inline void set_depth_6(int32_t value)
	{
		___depth_6 = value;
	}

	inline static int32_t get_offset_of_scale_7() { return static_cast<int32_t>(offsetof(terrainGenerator_tF54F9D96BC928A01556D8E58062DCF87544B186B, ___scale_7)); }
	inline float get_scale_7() const { return ___scale_7; }
	inline float* get_address_of_scale_7() { return &___scale_7; }
	inline void set_scale_7(float value)
	{
		___scale_7 = value;
	}

	inline static int32_t get_offset_of_offsetX_8() { return static_cast<int32_t>(offsetof(terrainGenerator_tF54F9D96BC928A01556D8E58062DCF87544B186B, ___offsetX_8)); }
	inline float get_offsetX_8() const { return ___offsetX_8; }
	inline float* get_address_of_offsetX_8() { return &___offsetX_8; }
	inline void set_offsetX_8(float value)
	{
		___offsetX_8 = value;
	}

	inline static int32_t get_offset_of_offsetY_9() { return static_cast<int32_t>(offsetof(terrainGenerator_tF54F9D96BC928A01556D8E58062DCF87544B186B, ___offsetY_9)); }
	inline float get_offsetY_9() const { return ___offsetY_9; }
	inline float* get_address_of_offsetY_9() { return &___offsetY_9; }
	inline void set_offsetY_9(float value)
	{
		___offsetY_9 = value;
	}
};


// UnityEngine.UI.Graphic
struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24  : public UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___m_RaycastPadding_11;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_RectTransform_12;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * ___m_CanvasRenderer_13;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * ___m_Canvas_14;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_15;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_16;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyLayoutCallback_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyVertsCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyMaterialCallback_19;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___m_CachedMesh_22;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___m_CachedUvs_23;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * ___m_ColorTweenRunner_24;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25;

public:
	inline static int32_t get_offset_of_m_Material_6() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Material_6)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_Material_6() const { return ___m_Material_6; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_Material_6() { return &___m_Material_6; }
	inline void set_m_Material_6(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_Material_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Material_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_Color_7() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Color_7)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_Color_7() const { return ___m_Color_7; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_Color_7() { return &___m_Color_7; }
	inline void set_m_Color_7(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_Color_7 = value;
	}

	inline static int32_t get_offset_of_m_SkipLayoutUpdate_8() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_SkipLayoutUpdate_8)); }
	inline bool get_m_SkipLayoutUpdate_8() const { return ___m_SkipLayoutUpdate_8; }
	inline bool* get_address_of_m_SkipLayoutUpdate_8() { return &___m_SkipLayoutUpdate_8; }
	inline void set_m_SkipLayoutUpdate_8(bool value)
	{
		___m_SkipLayoutUpdate_8 = value;
	}

	inline static int32_t get_offset_of_m_SkipMaterialUpdate_9() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_SkipMaterialUpdate_9)); }
	inline bool get_m_SkipMaterialUpdate_9() const { return ___m_SkipMaterialUpdate_9; }
	inline bool* get_address_of_m_SkipMaterialUpdate_9() { return &___m_SkipMaterialUpdate_9; }
	inline void set_m_SkipMaterialUpdate_9(bool value)
	{
		___m_SkipMaterialUpdate_9 = value;
	}

	inline static int32_t get_offset_of_m_RaycastTarget_10() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RaycastTarget_10)); }
	inline bool get_m_RaycastTarget_10() const { return ___m_RaycastTarget_10; }
	inline bool* get_address_of_m_RaycastTarget_10() { return &___m_RaycastTarget_10; }
	inline void set_m_RaycastTarget_10(bool value)
	{
		___m_RaycastTarget_10 = value;
	}

	inline static int32_t get_offset_of_m_RaycastPadding_11() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RaycastPadding_11)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_m_RaycastPadding_11() const { return ___m_RaycastPadding_11; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_m_RaycastPadding_11() { return &___m_RaycastPadding_11; }
	inline void set_m_RaycastPadding_11(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___m_RaycastPadding_11 = value;
	}

	inline static int32_t get_offset_of_m_RectTransform_12() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RectTransform_12)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_RectTransform_12() const { return ___m_RectTransform_12; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_RectTransform_12() { return &___m_RectTransform_12; }
	inline void set_m_RectTransform_12(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_RectTransform_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RectTransform_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_CanvasRenderer_13() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CanvasRenderer_13)); }
	inline CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * get_m_CanvasRenderer_13() const { return ___m_CanvasRenderer_13; }
	inline CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E ** get_address_of_m_CanvasRenderer_13() { return &___m_CanvasRenderer_13; }
	inline void set_m_CanvasRenderer_13(CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * value)
	{
		___m_CanvasRenderer_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CanvasRenderer_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_Canvas_14() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Canvas_14)); }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * get_m_Canvas_14() const { return ___m_Canvas_14; }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA ** get_address_of_m_Canvas_14() { return &___m_Canvas_14; }
	inline void set_m_Canvas_14(Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * value)
	{
		___m_Canvas_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Canvas_14), (void*)value);
	}

	inline static int32_t get_offset_of_m_VertsDirty_15() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_VertsDirty_15)); }
	inline bool get_m_VertsDirty_15() const { return ___m_VertsDirty_15; }
	inline bool* get_address_of_m_VertsDirty_15() { return &___m_VertsDirty_15; }
	inline void set_m_VertsDirty_15(bool value)
	{
		___m_VertsDirty_15 = value;
	}

	inline static int32_t get_offset_of_m_MaterialDirty_16() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_MaterialDirty_16)); }
	inline bool get_m_MaterialDirty_16() const { return ___m_MaterialDirty_16; }
	inline bool* get_address_of_m_MaterialDirty_16() { return &___m_MaterialDirty_16; }
	inline void set_m_MaterialDirty_16(bool value)
	{
		___m_MaterialDirty_16 = value;
	}

	inline static int32_t get_offset_of_m_OnDirtyLayoutCallback_17() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyLayoutCallback_17)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyLayoutCallback_17() const { return ___m_OnDirtyLayoutCallback_17; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyLayoutCallback_17() { return &___m_OnDirtyLayoutCallback_17; }
	inline void set_m_OnDirtyLayoutCallback_17(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyLayoutCallback_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyLayoutCallback_17), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyVertsCallback_18() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyVertsCallback_18)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyVertsCallback_18() const { return ___m_OnDirtyVertsCallback_18; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyVertsCallback_18() { return &___m_OnDirtyVertsCallback_18; }
	inline void set_m_OnDirtyVertsCallback_18(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyVertsCallback_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyVertsCallback_18), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyMaterialCallback_19() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyMaterialCallback_19)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyMaterialCallback_19() const { return ___m_OnDirtyMaterialCallback_19; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyMaterialCallback_19() { return &___m_OnDirtyMaterialCallback_19; }
	inline void set_m_OnDirtyMaterialCallback_19(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyMaterialCallback_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyMaterialCallback_19), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedMesh_22() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CachedMesh_22)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_m_CachedMesh_22() const { return ___m_CachedMesh_22; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_m_CachedMesh_22() { return &___m_CachedMesh_22; }
	inline void set_m_CachedMesh_22(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___m_CachedMesh_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedMesh_22), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedUvs_23() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CachedUvs_23)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_m_CachedUvs_23() const { return ___m_CachedUvs_23; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_m_CachedUvs_23() { return &___m_CachedUvs_23; }
	inline void set_m_CachedUvs_23(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___m_CachedUvs_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedUvs_23), (void*)value);
	}

	inline static int32_t get_offset_of_m_ColorTweenRunner_24() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_ColorTweenRunner_24)); }
	inline TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * get_m_ColorTweenRunner_24() const { return ___m_ColorTweenRunner_24; }
	inline TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 ** get_address_of_m_ColorTweenRunner_24() { return &___m_ColorTweenRunner_24; }
	inline void set_m_ColorTweenRunner_24(TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * value)
	{
		___m_ColorTweenRunner_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ColorTweenRunner_24), (void*)value);
	}

	inline static int32_t get_offset_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25)); }
	inline bool get_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() const { return ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25; }
	inline bool* get_address_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() { return &___U3CuseLegacyMeshGenerationU3Ek__BackingField_25; }
	inline void set_U3CuseLegacyMeshGenerationU3Ek__BackingField_25(bool value)
	{
		___U3CuseLegacyMeshGenerationU3Ek__BackingField_25 = value;
	}
};

struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___s_Mesh_20;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * ___s_VertexHelper_21;

public:
	inline static int32_t get_offset_of_s_DefaultUI_4() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_DefaultUI_4)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_DefaultUI_4() const { return ___s_DefaultUI_4; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_DefaultUI_4() { return &___s_DefaultUI_4; }
	inline void set_s_DefaultUI_4(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_DefaultUI_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultUI_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_WhiteTexture_5() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_WhiteTexture_5)); }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * get_s_WhiteTexture_5() const { return ___s_WhiteTexture_5; }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF ** get_address_of_s_WhiteTexture_5() { return &___s_WhiteTexture_5; }
	inline void set_s_WhiteTexture_5(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * value)
	{
		___s_WhiteTexture_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_WhiteTexture_5), (void*)value);
	}

	inline static int32_t get_offset_of_s_Mesh_20() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_Mesh_20)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_s_Mesh_20() const { return ___s_Mesh_20; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_s_Mesh_20() { return &___s_Mesh_20; }
	inline void set_s_Mesh_20(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___s_Mesh_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Mesh_20), (void*)value);
	}

	inline static int32_t get_offset_of_s_VertexHelper_21() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_VertexHelper_21)); }
	inline VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * get_s_VertexHelper_21() const { return ___s_VertexHelper_21; }
	inline VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 ** get_address_of_s_VertexHelper_21() { return &___s_VertexHelper_21; }
	inline void set_s_VertexHelper_21(VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * value)
	{
		___s_VertexHelper_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_VertexHelper_21), (void*)value);
	}
};


// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE  : public Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24
{
public:
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_26;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_MaskMaterial_27;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * ___m_ParentMask_28;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_31;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * ___m_OnCullStateChanged_32;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_33;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_34;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___m_Corners_35;

public:
	inline static int32_t get_offset_of_m_ShouldRecalculateStencil_26() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ShouldRecalculateStencil_26)); }
	inline bool get_m_ShouldRecalculateStencil_26() const { return ___m_ShouldRecalculateStencil_26; }
	inline bool* get_address_of_m_ShouldRecalculateStencil_26() { return &___m_ShouldRecalculateStencil_26; }
	inline void set_m_ShouldRecalculateStencil_26(bool value)
	{
		___m_ShouldRecalculateStencil_26 = value;
	}

	inline static int32_t get_offset_of_m_MaskMaterial_27() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_MaskMaterial_27)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_MaskMaterial_27() const { return ___m_MaskMaterial_27; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_MaskMaterial_27() { return &___m_MaskMaterial_27; }
	inline void set_m_MaskMaterial_27(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_MaskMaterial_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_MaskMaterial_27), (void*)value);
	}

	inline static int32_t get_offset_of_m_ParentMask_28() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ParentMask_28)); }
	inline RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * get_m_ParentMask_28() const { return ___m_ParentMask_28; }
	inline RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 ** get_address_of_m_ParentMask_28() { return &___m_ParentMask_28; }
	inline void set_m_ParentMask_28(RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * value)
	{
		___m_ParentMask_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ParentMask_28), (void*)value);
	}

	inline static int32_t get_offset_of_m_Maskable_29() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_Maskable_29)); }
	inline bool get_m_Maskable_29() const { return ___m_Maskable_29; }
	inline bool* get_address_of_m_Maskable_29() { return &___m_Maskable_29; }
	inline void set_m_Maskable_29(bool value)
	{
		___m_Maskable_29 = value;
	}

	inline static int32_t get_offset_of_m_IsMaskingGraphic_30() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_IsMaskingGraphic_30)); }
	inline bool get_m_IsMaskingGraphic_30() const { return ___m_IsMaskingGraphic_30; }
	inline bool* get_address_of_m_IsMaskingGraphic_30() { return &___m_IsMaskingGraphic_30; }
	inline void set_m_IsMaskingGraphic_30(bool value)
	{
		___m_IsMaskingGraphic_30 = value;
	}

	inline static int32_t get_offset_of_m_IncludeForMasking_31() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_IncludeForMasking_31)); }
	inline bool get_m_IncludeForMasking_31() const { return ___m_IncludeForMasking_31; }
	inline bool* get_address_of_m_IncludeForMasking_31() { return &___m_IncludeForMasking_31; }
	inline void set_m_IncludeForMasking_31(bool value)
	{
		___m_IncludeForMasking_31 = value;
	}

	inline static int32_t get_offset_of_m_OnCullStateChanged_32() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_OnCullStateChanged_32)); }
	inline CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * get_m_OnCullStateChanged_32() const { return ___m_OnCullStateChanged_32; }
	inline CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 ** get_address_of_m_OnCullStateChanged_32() { return &___m_OnCullStateChanged_32; }
	inline void set_m_OnCullStateChanged_32(CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * value)
	{
		___m_OnCullStateChanged_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnCullStateChanged_32), (void*)value);
	}

	inline static int32_t get_offset_of_m_ShouldRecalculate_33() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ShouldRecalculate_33)); }
	inline bool get_m_ShouldRecalculate_33() const { return ___m_ShouldRecalculate_33; }
	inline bool* get_address_of_m_ShouldRecalculate_33() { return &___m_ShouldRecalculate_33; }
	inline void set_m_ShouldRecalculate_33(bool value)
	{
		___m_ShouldRecalculate_33 = value;
	}

	inline static int32_t get_offset_of_m_StencilValue_34() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_StencilValue_34)); }
	inline int32_t get_m_StencilValue_34() const { return ___m_StencilValue_34; }
	inline int32_t* get_address_of_m_StencilValue_34() { return &___m_StencilValue_34; }
	inline void set_m_StencilValue_34(int32_t value)
	{
		___m_StencilValue_34 = value;
	}

	inline static int32_t get_offset_of_m_Corners_35() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_Corners_35)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_m_Corners_35() const { return ___m_Corners_35; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_m_Corners_35() { return &___m_Corners_35; }
	inline void set_m_Corners_35(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___m_Corners_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Corners_35), (void*)value);
	}
};


// UnityEngine.UI.Text
struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1  : public MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE
{
public:
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * ___m_FontData_36;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_37;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * ___m_TextCache_38;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * ___m_TextCacheForLayout_39;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_41;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* ___m_TempVerts_42;

public:
	inline static int32_t get_offset_of_m_FontData_36() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_FontData_36)); }
	inline FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * get_m_FontData_36() const { return ___m_FontData_36; }
	inline FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 ** get_address_of_m_FontData_36() { return &___m_FontData_36; }
	inline void set_m_FontData_36(FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * value)
	{
		___m_FontData_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FontData_36), (void*)value);
	}

	inline static int32_t get_offset_of_m_Text_37() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_Text_37)); }
	inline String_t* get_m_Text_37() const { return ___m_Text_37; }
	inline String_t** get_address_of_m_Text_37() { return &___m_Text_37; }
	inline void set_m_Text_37(String_t* value)
	{
		___m_Text_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Text_37), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextCache_38() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TextCache_38)); }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * get_m_TextCache_38() const { return ___m_TextCache_38; }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 ** get_address_of_m_TextCache_38() { return &___m_TextCache_38; }
	inline void set_m_TextCache_38(TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * value)
	{
		___m_TextCache_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextCache_38), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextCacheForLayout_39() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TextCacheForLayout_39)); }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * get_m_TextCacheForLayout_39() const { return ___m_TextCacheForLayout_39; }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 ** get_address_of_m_TextCacheForLayout_39() { return &___m_TextCacheForLayout_39; }
	inline void set_m_TextCacheForLayout_39(TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * value)
	{
		___m_TextCacheForLayout_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextCacheForLayout_39), (void*)value);
	}

	inline static int32_t get_offset_of_m_DisableFontTextureRebuiltCallback_41() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_DisableFontTextureRebuiltCallback_41)); }
	inline bool get_m_DisableFontTextureRebuiltCallback_41() const { return ___m_DisableFontTextureRebuiltCallback_41; }
	inline bool* get_address_of_m_DisableFontTextureRebuiltCallback_41() { return &___m_DisableFontTextureRebuiltCallback_41; }
	inline void set_m_DisableFontTextureRebuiltCallback_41(bool value)
	{
		___m_DisableFontTextureRebuiltCallback_41 = value;
	}

	inline static int32_t get_offset_of_m_TempVerts_42() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TempVerts_42)); }
	inline UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* get_m_TempVerts_42() const { return ___m_TempVerts_42; }
	inline UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A** get_address_of_m_TempVerts_42() { return &___m_TempVerts_42; }
	inline void set_m_TempVerts_42(UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* value)
	{
		___m_TempVerts_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TempVerts_42), (void*)value);
	}
};

struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_DefaultText_40;

public:
	inline static int32_t get_offset_of_s_DefaultText_40() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_StaticFields, ___s_DefaultText_40)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_DefaultText_40() const { return ___s_DefaultText_40; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_DefaultText_40() { return &___s_DefaultText_40; }
	inline void set_s_DefaultText_40(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_DefaultText_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultText_40), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  m_Items[1];

public:
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		m_Items[index] = value;
	}
};
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32  : public RuntimeArray
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
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * m_Items[1];

public:
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Single[0...,0...]
struct SingleU5BU2CU5D_tC8145CABE3D285E5B2969DB657D4DE43A135BB43  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) float m_Items[1];

public:
	inline float GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline float* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, float value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline float GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline float* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, float value)
	{
		m_Items[index] = value;
	}
	inline float GetAt(il2cpp_array_size_t i, il2cpp_array_size_t j) const
	{
		il2cpp_array_size_t iBound = bounds[0].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(i, iBound);
		il2cpp_array_size_t jBound = bounds[1].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(j, jBound);

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items[index];
	}
	inline float* GetAddressAt(il2cpp_array_size_t i, il2cpp_array_size_t j)
	{
		il2cpp_array_size_t iBound = bounds[0].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(i, iBound);
		il2cpp_array_size_t jBound = bounds[1].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(j, jBound);

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t i, il2cpp_array_size_t j, float value)
	{
		il2cpp_array_size_t iBound = bounds[0].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(i, iBound);
		il2cpp_array_size_t jBound = bounds[1].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(j, jBound);

		il2cpp_array_size_t index = i * jBound + j;
		m_Items[index] = value;
	}
	inline float GetAtUnchecked(il2cpp_array_size_t i, il2cpp_array_size_t j) const
	{
		il2cpp_array_size_t jBound = bounds[1].length;

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items[index];
	}
	inline float* GetAddressAtUnchecked(il2cpp_array_size_t i, il2cpp_array_size_t j)
	{
		il2cpp_array_size_t jBound = bounds[1].length;

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t i, il2cpp_array_size_t j, float value)
	{
		il2cpp_array_size_t jBound = bounds[1].length;

		il2cpp_array_size_t index = i * jBound + j;
		m_Items[index] = value;
	}
};


// !!0 UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<System.Object>(!!0,UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Object_Instantiate_TisRuntimeObject_mB05DEC51C29EF5BB8BD17D055E80217F11E571AA_gshared (RuntimeObject * ___original0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position1, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation2, const RuntimeMethod* method);

// UnityEngine.GameObject UnityEngine.GameObject::Find(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B (String_t* ___name0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.BoxCollider>()
inline BoxCollider_tA530691AC1A3C9FE6428F68F98588FCB1BF9AAA5 * Component_GetComponent_TisBoxCollider_tA530691AC1A3C9FE6428F68F98588FCB1BF9AAA5_m0D682A42739E30A25411905C0A712C2BEE81F861 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  BoxCollider_tA530691AC1A3C9FE6428F68F98588FCB1BF9AAA5 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.Void UnityEngine.Collider::set_isTrigger(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Collider_set_isTrigger_mEDFE3DFA29D42E9DEB9D91A3D25BACC4470305ED (Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void CollisionEnterTest::updateValuesOnCollision()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CollisionEnterTest_updateValuesOnCollision_m0008F40D6FC61644097C7E1B7A6ECA477E051793 (CollisionEnterTest_t8D0E8ED0999BAA6E80A3DE21416EEA6CE77A1D79 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<Timer>()
inline Timer_tC013AFF28E5916E4AFDBEB57A18D8335A47835E9 * GameObject_GetComponent_TisTimer_tC013AFF28E5916E4AFDBEB57A18D8335A47835E9_m55E959E05BFE6EAD979F0FC7A845DDD211F3B451 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  Timer_tC013AFF28E5916E4AFDBEB57A18D8335A47835E9 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// !!0 UnityEngine.GameObject::GetComponent<Health>()
inline Health_t24F89E064FE2032E5252765DE51675276EF64AD9 * GameObject_GetComponent_TisHealth_t24F89E064FE2032E5252765DE51675276EF64AD9_m95A54FDFA2D7D7E1D93612F0B559306ED91F0E8A (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  Health_t24F89E064FE2032E5252765DE51675276EF64AD9 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Renderer>()
inline Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// UnityEngine.Material UnityEngine.Renderer::get_material()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t8927C00353A72755313F046D0CE85178AE8218EE * Renderer_get_material_mE6B01125502D08EE0D6DFE2EAEC064AD9BB31804 (Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * __this, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_red()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Color_get_red_m9BD55EBF7A74A515330FA5F7AC7A67C8A8913DD8 (const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_yellow()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Color_get_yellow_m9FD4BDABA7E40E136BE57EE7872CEA6B1B2FA1D1 (const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_time()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844 (const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::PingPong(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_PingPong_m60A376FCA7185AA90B41A22379058923565193D1 (float ___t0, float ___length1, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::Lerp(UnityEngine.Color,UnityEngine.Color,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Color_Lerp_mC986D7F29103536908D76BD8FC59AA11DC33C197 (Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___a0, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___b1, float ___t2, const RuntimeMethod* method);
// System.Void UnityEngine.Material::set_color(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_set_color_mC3C88E2389B7132EBF3EB0D1F040545176B795C0 (Material_t8927C00353A72755313F046D0CE85178AE8218EE * __this, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_LoadScene_m7DAF30213E99396ECBDB1BD40CC34CCF36902092 (String_t* ___sceneName0, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___obj0, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Transform::GetChild(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, int32_t ___index0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.UI.Text>()
inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * Component_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_m2D99AC2081683F963C56EC738451EC0B59B5D137 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411 (int32_t* __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<FowardMove>()
inline FowardMove_t356115A06C54F82A6359E447749E2A5A7BBFB106 * GameObject_GetComponent_TisFowardMove_t356115A06C54F82A6359E447749E2A5A7BBFB106_m57B06F1D0158A122F36B9A6FEF8B0D2019E25245 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  FowardMove_t356115A06C54F82A6359E447749E2A5A7BBFB106 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, float ___x0, float ___y1, const RuntimeMethod* method);
// System.Void UnityEngine.Material::SetTextureOffset(System.String,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_SetTextureOffset_m8917660179EA847BFFCC28D4DED115237388DAA5 (Material_t8927C00353A72755313F046D0CE85178AE8218EE * __this, String_t* ___name0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___value1, const RuntimeMethod* method);
// System.Boolean UnityEngine.Input::GetKeyDown(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKeyDown_m476116696E71771641BBECBAB1A4C55E69018220 (int32_t ___key0, const RuntimeMethod* method);
// System.Void PauseMenu::Resume()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PauseMenu_Resume_m80D016F5E8ACC3ED584938EF4CDA230DC60386E0 (PauseMenu_t7195E78DC17C81907F58B853AA818812DA9227BB * __this, const RuntimeMethod* method);
// System.Void PauseMenu::Pause()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PauseMenu_Pause_mF2670F62B7DC1843F4D7181B7FC573496F7C0BF2 (PauseMenu_t7195E78DC17C81907F58B853AA818812DA9227BB * __this, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Time::set_timeScale(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Time_set_timeScale_m1987DE9E74FC6C0126CE4F59A6293E3B85BD01EA (float ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_LoadScene_m5550E6368A6D0E37DACEDA3C5E4BA331836BC3C5 (int32_t ___sceneBuildIndex0, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Void UnityEngine.Application::Quit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Application_Quit_m8D720E5092786C2EE32310D85FE61C253D3B1F2A (const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290 (const RuntimeMethod* method);
// System.Void UnityEngine.Transform::RotateAround(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_RotateAround_m1F93A7A1807BE407BD23EC1BA49F03AD22FCE4BE (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___point0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___axis1, float ___angle2, const RuntimeMethod* method);
// System.Boolean UnityEngine.Input::GetKey(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKey_mFDD450A4C61F2930928B12287FFBD1ACCB71E429 (int32_t ___key0, const RuntimeMethod* method);
// System.Single UnityEngine.Input::GetAxis(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Input_GetAxis_m939297DEB2ECF8D8D09AD66EB69979AAD2B62326 (String_t* ___axisName0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, float ___d1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::LookRotation(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Quaternion_LookRotation_m1B0BEBEBCC384324A6771B9EAC89761F73E1D6BF (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___forward0, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::RotateTowards(UnityEngine.Quaternion,UnityEngine.Quaternion,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Quaternion_RotateTowards_mE536473CFE4F8C16245C57C467B95882BE8CF5DC (Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___from0, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___to1, float ___maxDegreesDelta2, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_rotation_m1B5F3D4CE984AB31254615C9C71B0E54978583B4 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___value0, const RuntimeMethod* method);
// System.String System.Single::ToString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Single_ToString_m15F10F2AFF80750906CEFCFB456EBA84F9D2E8D7 (float* __this, String_t* ___format0, const RuntimeMethod* method);
// System.Void UnityEngine.Mesh::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh__ctor_mA3D8570373462201AD7B8C9586A7F9412E49C2F6 (Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.MeshFilter>()
inline MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A * Component_GetComponent_TisMeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A_m4E31C5D3D0490AEE405B54BE9F61802EA425B9DC (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.Void UnityEngine.MeshFilter::set_mesh(UnityEngine.Mesh)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshFilter_set_mesh_m13177C1A6C29D76DDCD858CEF2B28C2AA7CC46FC (MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A * __this, Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___value0, const RuntimeMethod* method);
// System.Void meshGenerate::createShape()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void meshGenerate_createShape_mA5FDC2D6802CFC438BC90B3C9B3F7A87B23BCEAE (meshGenerate_tF62DE27B52710D5AC9B5DE65A62AF81950870B31 * __this, const RuntimeMethod* method);
// System.Void meshGenerate::updateMesh()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void meshGenerate_updateMesh_m6339149F2B7FEF8B6710221DEF0F41C55CD7503A (meshGenerate_tF62DE27B52710D5AC9B5DE65A62AF81950870B31 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::PerlinNoise(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_PerlinNoise_mBCF172821FEB8FAD7E7CF7F7982018846E702519 (float ___x0, float ___y1, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Clamp(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87 (float ___value0, float ___min1, float ___max2, const RuntimeMethod* method);
// System.Void UnityEngine.Mesh::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_Clear_m7500ECE6209E14CC750CB16B48301B8D2A57ACCE (Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Mesh::set_vertices(UnityEngine.Vector3[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_set_vertices_m38F0908D0FDFE484BE19E94BE9D6176667469AAD (Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * __this, Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Mesh::set_triangles(System.Int32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_set_triangles_mF1D92E67523CD5FDC66A4378FC4AD8D4AD0D5FEC (Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * __this, Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Mesh::RecalculateNormals()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_RecalculateNormals_mEBF9ED932D0B463E4EF3947D232CC8BEECAE1A4A (Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::Rotate(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_Rotate_m027A155054DDC4206F679EFB86BE0960D45C33A7 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___eulers0, const RuntimeMethod* method);
// UnityEngine.Camera UnityEngine.Camera::get_main()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * Camera_get_main_mC337C621B91591CEF89504C97EF64D717C12871C (const RuntimeMethod* method);
// System.Int32 UnityEngine.Screen::get_width()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Screen_get_width_m52188F76E8AAF57BE373018CB14083BB74C43C1C (const RuntimeMethod* method);
// System.Int32 UnityEngine.Screen::get_height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Screen_get_height_m110C90A573EE67895DC4F59E9165235EA22039EE (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Camera::ScreenToWorldPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Camera_ScreenToWorldPoint_m7EE1C8665F9BB089581FA225BB4BFF411B5301B6 (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position0, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___v0, const RuntimeMethod* method);
// System.Void shipMovement::UpdateSpeedMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void shipMovement_UpdateSpeedMode_m23DF2BCED276F582CA517655F3BE5B2742CBAB70 (shipMovement_t24B9B843A8577B9D82BD0CCA80ED77E74CF079EE * __this, const RuntimeMethod* method);
// System.Void shipMovement::UpdateCurrentSpeed(shipMovement/speedModes)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void shipMovement_UpdateCurrentSpeed_mDE699363A20EC7C4032EC0266D3145A4EB8625A6 (shipMovement_t24B9B843A8577B9D82BD0CCA80ED77E74CF079EE * __this, int32_t ___speedMode0, const RuntimeMethod* method);
// System.Void shipMovement::Move()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void shipMovement_Move_m4F4E6B1B4EE4668A43AA49AAD940EB653481665B (shipMovement_t24B9B843A8577B9D82BD0CCA80ED77E74CF079EE * __this, const RuntimeMethod* method);
// System.Void shipMovement::MoveSpeedTowards(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void shipMovement_MoveSpeedTowards_mA2F72D7B0C638BA97EE5179B5D2D7160DABD48E1 (shipMovement_t24B9B843A8577B9D82BD0CCA80ED77E74CF079EE * __this, float ___value0, const RuntimeMethod* method);
// System.Single shipMovement::get_CurrentSpeed()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float shipMovement_get_CurrentSpeed_m12AA7AF5FDED51A8AEE3480F336931B51B72CD43_inline (shipMovement_t24B9B843A8577B9D82BD0CCA80ED77E74CF079EE * __this, const RuntimeMethod* method);
// System.Single shipMovement::get_AccelerationRate()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float shipMovement_get_AccelerationRate_m22022440F13D75AC5415CA83D2AC8A6FC0373BA9_inline (shipMovement_t24B9B843A8577B9D82BD0CCA80ED77E74CF079EE * __this, const RuntimeMethod* method);
// System.Void shipMovement::set_CurrentSpeed(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void shipMovement_set_CurrentSpeed_mE4E5D2F8A647B4B239C8CDB8A25562922B00A93D_inline (shipMovement_t24B9B843A8577B9D82BD0CCA80ED77E74CF079EE * __this, float ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// System.Int32 UnityEngine.Transform::get_childCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Transform_get_childCount_mCBED4F6D3F6A7386C4D97C2C3FD25C383A0BCD05 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___exists0, const RuntimeMethod* method);
// System.Single UnityEngine.Random::Range(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Random_Range_mC15372D42A9ABDCAC3DE82E114D60A40C9C311D2 (float ___minInclusive0, float ___maxInclusive1, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::Invoke(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour_Invoke_m4AAB759653B1C6FB0653527F4DDC72D1E9162CC4 (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, String_t* ___methodName0, float ___time1, const RuntimeMethod* method);
// System.Int32 UnityEngine.Random::Range(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A (int32_t ___minInclusive0, int32_t ___maxExclusive1, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<UnityEngine.GameObject>(!!0,UnityEngine.Vector3,UnityEngine.Quaternion)
inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___original0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position1, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation2, const RuntimeMethod* method)
{
	return ((  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 , const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_mB05DEC51C29EF5BB8BD17D055E80217F11E571AA_gshared)(___original0, ___position1, ___rotation2, method);
}
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Terrain>()
inline Terrain_t2C0E3B3A2895E81446EFF4F5AFD601CF977D1836 * Component_GetComponent_TisTerrain_t2C0E3B3A2895E81446EFF4F5AFD601CF977D1836_m8C21051F55A99A250F235F34CBA3502A35885D00 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  Terrain_t2C0E3B3A2895E81446EFF4F5AFD601CF977D1836 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// UnityEngine.TerrainData UnityEngine.Terrain::get_terrainData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TerrainData_tAD3780D3C4DE5B9BE122BECE6D08C4AE169ED2A4 * Terrain_get_terrainData_mDB60C324B3424339C3C9FA6CDF6DC1C9B47D6E41 (Terrain_t2C0E3B3A2895E81446EFF4F5AFD601CF977D1836 * __this, const RuntimeMethod* method);
// UnityEngine.TerrainData terrainGenerator::GenerateTerrain(UnityEngine.TerrainData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TerrainData_tAD3780D3C4DE5B9BE122BECE6D08C4AE169ED2A4 * terrainGenerator_GenerateTerrain_m39A4B391AE441CB4952C4297F2ABCE843A37F459 (terrainGenerator_tF54F9D96BC928A01556D8E58062DCF87544B186B * __this, TerrainData_tAD3780D3C4DE5B9BE122BECE6D08C4AE169ED2A4 * ___terrain0, const RuntimeMethod* method);
// System.Void UnityEngine.Terrain::set_terrainData(UnityEngine.TerrainData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Terrain_set_terrainData_mEDD9205514CD21D3518EC11C03EBBF1BF8B9E81B (Terrain_t2C0E3B3A2895E81446EFF4F5AFD601CF977D1836 * __this, TerrainData_tAD3780D3C4DE5B9BE122BECE6D08C4AE169ED2A4 * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.TerrainData::set_heightmapResolution(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TerrainData_set_heightmapResolution_m85A19331108A0A25E28BB7D65533DA2B746BD4F3 (TerrainData_tAD3780D3C4DE5B9BE122BECE6D08C4AE169ED2A4 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.TerrainData::set_size(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TerrainData_set_size_m67596DE2C49F97BA157235CF4BB46E56B36C31D1 (TerrainData_tAD3780D3C4DE5B9BE122BECE6D08C4AE169ED2A4 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// System.Single[0...,0...] terrainGenerator::generateHeights()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SingleU5BU2CU5D_tC8145CABE3D285E5B2969DB657D4DE43A135BB43* terrainGenerator_generateHeights_m2F9308972A1C8CCD05C55DDF90C306ED0A92C7C7 (terrainGenerator_tF54F9D96BC928A01556D8E58062DCF87544B186B * __this, const RuntimeMethod* method);
// System.Void UnityEngine.TerrainData::SetHeights(System.Int32,System.Int32,System.Single[0...,0...])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TerrainData_SetHeights_mB008164720CC8519F56BDA5B860FA358ED95B7AD (TerrainData_tAD3780D3C4DE5B9BE122BECE6D08C4AE169ED2A4 * __this, int32_t ___xBase0, int32_t ___yBase1, SingleU5BU2CU5D_tC8145CABE3D285E5B2969DB657D4DE43A135BB43* ___heights2, const RuntimeMethod* method);
// System.Single terrainGenerator::calcHeight(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float terrainGenerator_calcHeight_mE98CC55487C3BB39055B86E75EDB06F2C88B8AD6 (terrainGenerator_tF54F9D96BC928A01556D8E58062DCF87544B186B * __this, int32_t ___x0, int32_t ___y1, const RuntimeMethod* method);
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
// System.Void CollisionEnterTest::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CollisionEnterTest_Start_m02A7EA5462DDDA4C19951CA3CBC74FA4B3E3DB18 (CollisionEnterTest_t8D0E8ED0999BAA6E80A3DE21416EEA6CE77A1D79 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFC075BC3DFE942623230E78DC9D41126E9C003CA);
		s_Il2CppMethodInitialized = true;
	}
	{
		// canvas = GameObject.Find("Canvas");
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteralFC075BC3DFE942623230E78DC9D41126E9C003CA, /*hidden argument*/NULL);
		__this->set_canvas_4(L_0);
		// test = GameObject.Find("Canvas");
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteralFC075BC3DFE942623230E78DC9D41126E9C003CA, /*hidden argument*/NULL);
		__this->set_test_5(L_1);
		// }
		return;
	}
}
// System.Void CollisionEnterTest::OnCollisionEnter(UnityEngine.Collision)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CollisionEnterTest_OnCollisionEnter_mC1BCD6A1DC1F8E67AB96A1E266ACEB7FE6354563 (CollisionEnterTest_t8D0E8ED0999BAA6E80A3DE21416EEA6CE77A1D79 * __this, Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0 * ___collision0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisBoxCollider_tA530691AC1A3C9FE6428F68F98588FCB1BF9AAA5_m0D682A42739E30A25411905C0A712C2BEE81F861_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisHealth_t24F89E064FE2032E5252765DE51675276EF64AD9_m95A54FDFA2D7D7E1D93612F0B559306ED91F0E8A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisTimer_tC013AFF28E5916E4AFDBEB57A18D8335A47835E9_m55E959E05BFE6EAD979F0FC7A845DDD211F3B451_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GetComponent<BoxCollider>().isTrigger = true;
		BoxCollider_tA530691AC1A3C9FE6428F68F98588FCB1BF9AAA5 * L_0;
		L_0 = Component_GetComponent_TisBoxCollider_tA530691AC1A3C9FE6428F68F98588FCB1BF9AAA5_m0D682A42739E30A25411905C0A712C2BEE81F861(__this, /*hidden argument*/Component_GetComponent_TisBoxCollider_tA530691AC1A3C9FE6428F68F98588FCB1BF9AAA5_m0D682A42739E30A25411905C0A712C2BEE81F861_RuntimeMethod_var);
		Collider_set_isTrigger_mEDFE3DFA29D42E9DEB9D91A3D25BACC4470305ED(L_0, (bool)1, /*hidden argument*/NULL);
		// updateValuesOnCollision();
		CollisionEnterTest_updateValuesOnCollision_m0008F40D6FC61644097C7E1B7A6ECA477E051793(__this, /*hidden argument*/NULL);
		// canvas.GetComponent<Timer>().currentTime -= timerChange;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1 = __this->get_canvas_4();
		Timer_tC013AFF28E5916E4AFDBEB57A18D8335A47835E9 * L_2;
		L_2 = GameObject_GetComponent_TisTimer_tC013AFF28E5916E4AFDBEB57A18D8335A47835E9_m55E959E05BFE6EAD979F0FC7A845DDD211F3B451(L_1, /*hidden argument*/GameObject_GetComponent_TisTimer_tC013AFF28E5916E4AFDBEB57A18D8335A47835E9_m55E959E05BFE6EAD979F0FC7A845DDD211F3B451_RuntimeMethod_var);
		Timer_tC013AFF28E5916E4AFDBEB57A18D8335A47835E9 * L_3 = L_2;
		float L_4 = L_3->get_currentTime_4();
		float L_5 = __this->get_timerChange_6();
		L_3->set_currentTime_4(((float)il2cpp_codegen_subtract((float)L_4, (float)L_5)));
		// if (test.GetComponent<Health>().shield >= 1)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6 = __this->get_test_5();
		Health_t24F89E064FE2032E5252765DE51675276EF64AD9 * L_7;
		L_7 = GameObject_GetComponent_TisHealth_t24F89E064FE2032E5252765DE51675276EF64AD9_m95A54FDFA2D7D7E1D93612F0B559306ED91F0E8A(L_6, /*hidden argument*/GameObject_GetComponent_TisHealth_t24F89E064FE2032E5252765DE51675276EF64AD9_m95A54FDFA2D7D7E1D93612F0B559306ED91F0E8A_RuntimeMethod_var);
		int32_t L_8 = L_7->get_shield_4();
		if ((((int32_t)L_8) < ((int32_t)1)))
		{
			goto IL_005c;
		}
	}
	{
		// test.GetComponent<Health>().shield -= 1;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_9 = __this->get_test_5();
		Health_t24F89E064FE2032E5252765DE51675276EF64AD9 * L_10;
		L_10 = GameObject_GetComponent_TisHealth_t24F89E064FE2032E5252765DE51675276EF64AD9_m95A54FDFA2D7D7E1D93612F0B559306ED91F0E8A(L_9, /*hidden argument*/GameObject_GetComponent_TisHealth_t24F89E064FE2032E5252765DE51675276EF64AD9_m95A54FDFA2D7D7E1D93612F0B559306ED91F0E8A_RuntimeMethod_var);
		Health_t24F89E064FE2032E5252765DE51675276EF64AD9 * L_11 = L_10;
		int32_t L_12 = L_11->get_shield_4();
		L_11->set_shield_4(((int32_t)il2cpp_codegen_subtract((int32_t)L_12, (int32_t)1)));
		// }
		goto IL_0087;
	}

IL_005c:
	{
		// else if (test.GetComponent<Health>().health >= 1)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_13 = __this->get_test_5();
		Health_t24F89E064FE2032E5252765DE51675276EF64AD9 * L_14;
		L_14 = GameObject_GetComponent_TisHealth_t24F89E064FE2032E5252765DE51675276EF64AD9_m95A54FDFA2D7D7E1D93612F0B559306ED91F0E8A(L_13, /*hidden argument*/GameObject_GetComponent_TisHealth_t24F89E064FE2032E5252765DE51675276EF64AD9_m95A54FDFA2D7D7E1D93612F0B559306ED91F0E8A_RuntimeMethod_var);
		int32_t L_15 = L_14->get_health_5();
		if ((((int32_t)L_15) < ((int32_t)1)))
		{
			goto IL_0087;
		}
	}
	{
		// test.GetComponent<Health>().health -= 1;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_16 = __this->get_test_5();
		Health_t24F89E064FE2032E5252765DE51675276EF64AD9 * L_17;
		L_17 = GameObject_GetComponent_TisHealth_t24F89E064FE2032E5252765DE51675276EF64AD9_m95A54FDFA2D7D7E1D93612F0B559306ED91F0E8A(L_16, /*hidden argument*/GameObject_GetComponent_TisHealth_t24F89E064FE2032E5252765DE51675276EF64AD9_m95A54FDFA2D7D7E1D93612F0B559306ED91F0E8A_RuntimeMethod_var);
		Health_t24F89E064FE2032E5252765DE51675276EF64AD9 * L_18 = L_17;
		int32_t L_19 = L_18->get_health_5();
		L_18->set_health_5(((int32_t)il2cpp_codegen_subtract((int32_t)L_19, (int32_t)1)));
	}

IL_0087:
	{
		// GetComponent<BoxCollider>().isTrigger = false;
		BoxCollider_tA530691AC1A3C9FE6428F68F98588FCB1BF9AAA5 * L_20;
		L_20 = Component_GetComponent_TisBoxCollider_tA530691AC1A3C9FE6428F68F98588FCB1BF9AAA5_m0D682A42739E30A25411905C0A712C2BEE81F861(__this, /*hidden argument*/Component_GetComponent_TisBoxCollider_tA530691AC1A3C9FE6428F68F98588FCB1BF9AAA5_m0D682A42739E30A25411905C0A712C2BEE81F861_RuntimeMethod_var);
		Collider_set_isTrigger_mEDFE3DFA29D42E9DEB9D91A3D25BACC4470305ED(L_20, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void CollisionEnterTest::updateValuesOnCollision()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CollisionEnterTest_updateValuesOnCollision_m0008F40D6FC61644097C7E1B7A6ECA477E051793 (CollisionEnterTest_t8D0E8ED0999BAA6E80A3DE21416EEA6CE77A1D79 * __this, const RuntimeMethod* method)
{
	{
		// numberOfcollisions++;
		int32_t L_0 = __this->get_numberOfcollisions_7();
		__this->set_numberOfcollisions_7(((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)1)));
		// }
		return;
	}
}
// System.Void CollisionEnterTest::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CollisionEnterTest__ctor_m5C68492A1AF99CAA15F7DCE445C2D3A75A758169 (CollisionEnterTest_t8D0E8ED0999BAA6E80A3DE21416EEA6CE77A1D79 * __this, const RuntimeMethod* method)
{
	{
		// public float timerChange = 3f;
		__this->set_timerChange_6((3.0f));
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void ColorChange::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ColorChange_Start_m4053762DAAB9785A46BF1A34258BBEFBCE2251CA (ColorChange_tD8CD0345947B45087C90794FEBC0F51C9DD64749 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// mat = GetComponent<Renderer>().material;
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_0;
		L_0 = Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019(__this, /*hidden argument*/Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019_RuntimeMethod_var);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_1;
		L_1 = Renderer_get_material_mE6B01125502D08EE0D6DFE2EAEC064AD9BB31804(L_0, /*hidden argument*/NULL);
		__this->set_mat_5(L_1);
		// }
		return;
	}
}
// System.Void ColorChange::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ColorChange_Update_mE703E453917338A8E18AA9DE83747D62FE40C2DD (ColorChange_tD8CD0345947B45087C90794FEBC0F51C9DD64749 * __this, const RuntimeMethod* method)
{
	{
		// mat.color = Color.Lerp(Color.red, Color.yellow, Mathf.PingPong(Time.time, timeInterval));
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_0 = __this->get_mat_5();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_1;
		L_1 = Color_get_red_m9BD55EBF7A74A515330FA5F7AC7A67C8A8913DD8(/*hidden argument*/NULL);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_2;
		L_2 = Color_get_yellow_m9FD4BDABA7E40E136BE57EE7872CEA6B1B2FA1D1(/*hidden argument*/NULL);
		float L_3;
		L_3 = Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844(/*hidden argument*/NULL);
		float L_4 = __this->get_timeInterval_4();
		float L_5;
		L_5 = Mathf_PingPong_m60A376FCA7185AA90B41A22379058923565193D1(L_3, L_4, /*hidden argument*/NULL);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_6;
		L_6 = Color_Lerp_mC986D7F29103536908D76BD8FC59AA11DC33C197(L_1, L_2, L_5, /*hidden argument*/NULL);
		Material_set_color_mC3C88E2389B7132EBF3EB0D1F040545176B795C0(L_0, L_6, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ColorChange::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ColorChange__ctor_m709414B5BC10608C60F2142ABEFEA2A17B2A128C (ColorChange_tD8CD0345947B45087C90794FEBC0F51C9DD64749 * __this, const RuntimeMethod* method)
{
	{
		// [SerializeField] private float timeInterval = 1;
		__this->set_timeInterval_4((1.0f));
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void DestinationHit::OnCollisionEnter(UnityEngine.Collision)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DestinationHit_OnCollisionEnter_m4236A536663BBB68E9E33AFD0211B4C5A43E4DC4 (DestinationHit_t7B158206CA4EACCF07DEA9D5DF3A36436ED91B53 * __this, Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0 * ___collision0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral05A45C4FFFDF086B62311E3FD1494AEFF649E98E);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene("3_levelComplete");
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7DAF30213E99396ECBDB1BD40CC34CCF36902092(_stringLiteral05A45C4FFFDF086B62311E3FD1494AEFF649E98E, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void DestinationHit::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DestinationHit__ctor_m23F9A77B089C013DEF0919DB40F4738461F5F6D3 (DestinationHit_t7B158206CA4EACCF07DEA9D5DF3A36436ED91B53 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void Destroy::OnBecameInvisible()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Destroy_OnBecameInvisible_m141071CDDA8A70716218796C1CBAAF7C0FB98785 (Destroy_tD445EFB5525F85CA112790F40D54033D2FD39230 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Destroy(gameObject);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Destroy::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Destroy__ctor_mF843D3EF47C3647CBD4BD0A25177477527FD4410 (Destroy_tD445EFB5525F85CA112790F40D54033D2FD39230 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void FowardMove::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FowardMove_Update_mB0324ED5CA837EFB3847598A87A004B6E3D75A54 (FowardMove_t356115A06C54F82A6359E447749E2A5A7BBFB106 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void FowardMove::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FowardMove__ctor_mBEB669051EA19006A67F0F653D8029D0606FB5D1 (FowardMove_t356115A06C54F82A6359E447749E2A5A7BBFB106 * __this, const RuntimeMethod* method)
{
	{
		// public float shipSpeed = 10.0f;
		__this->set_shipSpeed_4((10.0f));
		// public float shipSpeedHolder = 10.0f;
		__this->set_shipSpeedHolder_5((10.0f));
		// public float shipSpeedHolderSpeedUp = 15.0f;
		__this->set_shipSpeedHolderSpeedUp_6((15.0f));
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void Health::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Health_Start_m6C32B86DED4758A5F9B9B0C7076C66AF951FF5A8 (Health_t24F89E064FE2032E5252765DE51675276EF64AD9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_m2D99AC2081683F963C56EC738451EC0B59B5D137_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral675142B2C610BAA674B0ACFCA8B158E0512E27CF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFC075BC3DFE942623230E78DC9D41126E9C003CA);
		s_Il2CppMethodInitialized = true;
	}
	{
		// player = GameObject.Find("arwing");
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteral675142B2C610BAA674B0ACFCA8B158E0512E27CF, /*hidden argument*/NULL);
		__this->set_player_6(L_0);
		// healthNShields = GameObject.Find("Canvas");
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteralFC075BC3DFE942623230E78DC9D41126E9C003CA, /*hidden argument*/NULL);
		__this->set_healthNShields_7(L_1);
		// shieldText = healthNShields.transform.GetChild(0).GetComponent<Text>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2 = __this->get_healthNShields_7();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3;
		L_3 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_2, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_4;
		L_4 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_3, 0, /*hidden argument*/NULL);
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_5;
		L_5 = Component_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_m2D99AC2081683F963C56EC738451EC0B59B5D137(L_4, /*hidden argument*/Component_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_m2D99AC2081683F963C56EC738451EC0B59B5D137_RuntimeMethod_var);
		__this->set_shieldText_8(L_5);
		// healthText = healthNShields.transform.GetChild(1).GetComponent<Text>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6 = __this->get_healthNShields_7();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_7;
		L_7 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_6, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_8;
		L_8 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_7, 1, /*hidden argument*/NULL);
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_9;
		L_9 = Component_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_m2D99AC2081683F963C56EC738451EC0B59B5D137(L_8, /*hidden argument*/Component_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_m2D99AC2081683F963C56EC738451EC0B59B5D137_RuntimeMethod_var);
		__this->set_healthText_9(L_9);
		// }
		return;
	}
}
// System.Void Health::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Health_Update_m79B962057A29DAE25EEFFE68755B07356E09583D (Health_t24F89E064FE2032E5252765DE51675276EF64AD9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6D0066FC9B8664BF1C6543EFBB3BF0580A6D253B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA3F67A38D5E1E837AAC3FEEC25D4305168580758);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEB1C8F3A06D279DE40B291FFC8AD51F001A7504D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (shield > 0)
		int32_t L_0 = __this->get_shield_4();
		if ((((int32_t)L_0) <= ((int32_t)0)))
		{
			goto IL_002b;
		}
	}
	{
		// shieldText.text = "SHIELD:" + shield.ToString();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_1 = __this->get_shieldText_8();
		int32_t* L_2 = __this->get_address_of_shield_4();
		String_t* L_3;
		L_3 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_2, /*hidden argument*/NULL);
		String_t* L_4;
		L_4 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteralEB1C8F3A06D279DE40B291FFC8AD51F001A7504D, L_3, /*hidden argument*/NULL);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_1, L_4);
		goto IL_003b;
	}

IL_002b:
	{
		// shieldText.text = "SHIELD DEPLETED";
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_5 = __this->get_shieldText_8();
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_5, _stringLiteralA3F67A38D5E1E837AAC3FEEC25D4305168580758);
	}

IL_003b:
	{
		// healthText.text = "HEALTH:" + health.ToString();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_6 = __this->get_healthText_9();
		int32_t* L_7 = __this->get_address_of_health_5();
		String_t* L_8;
		L_8 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_7, /*hidden argument*/NULL);
		String_t* L_9;
		L_9 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral6D0066FC9B8664BF1C6543EFBB3BF0580A6D253B, L_8, /*hidden argument*/NULL);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_6, L_9);
		// }
		return;
	}
}
// System.Void Health::OnCollisionEnter(UnityEngine.Collision)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Health_OnCollisionEnter_mA5F5AB0544C0293A46465D7DD89E88F98A194FCB (Health_t24F89E064FE2032E5252765DE51675276EF64AD9 * __this, Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0 * ___collision0, const RuntimeMethod* method)
{
	{
		// if (shield > 0)
		int32_t L_0 = __this->get_shield_4();
		if ((((int32_t)L_0) <= ((int32_t)0)))
		{
			goto IL_0018;
		}
	}
	{
		// shield--;
		int32_t L_1 = __this->get_shield_4();
		__this->set_shield_4(((int32_t)il2cpp_codegen_subtract((int32_t)L_1, (int32_t)1)));
		// }
		return;
	}

IL_0018:
	{
		// health--;
		int32_t L_2 = __this->get_health_5();
		__this->set_health_5(((int32_t)il2cpp_codegen_subtract((int32_t)L_2, (int32_t)1)));
		// }
		return;
	}
}
// System.Void Health::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Health__ctor_mCE0B72A9D47DD0BB4937BC15D9CB0BF09B42A947 (Health_t24F89E064FE2032E5252765DE51675276EF64AD9 * __this, const RuntimeMethod* method)
{
	{
		// public int shield = 2;
		__this->set_shield_4(2);
		// public int health = 3;
		__this->set_health_5(3);
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void ItemGet::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ItemGet_Start_mD786684A378EF8979FD4483220B92DA2A13A712D (ItemGet_t4BA2919C42A7B3AEEB061ECD7046AC747086D6DD * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		s_Il2CppMethodInitialized = true;
	}
	{
		// objWithScript = GameObject.Find("Player");
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, /*hidden argument*/NULL);
		__this->set_objWithScript_4(L_0);
		// }
		return;
	}
}
// System.Void ItemGet::OnTriggerEnter(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ItemGet_OnTriggerEnter_m8F31B873888FA2DB338096A3E222710B5EFA7571 (ItemGet_t4BA2919C42A7B3AEEB061ECD7046AC747086D6DD * __this, Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisFowardMove_t356115A06C54F82A6359E447749E2A5A7BBFB106_m57B06F1D0158A122F36B9A6FEF8B0D2019E25245_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Destroy(gameObject);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_0, /*hidden argument*/NULL);
		// objWithScript.GetComponent<FowardMove>().shipSpeed += speedIncrease;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1 = __this->get_objWithScript_4();
		FowardMove_t356115A06C54F82A6359E447749E2A5A7BBFB106 * L_2;
		L_2 = GameObject_GetComponent_TisFowardMove_t356115A06C54F82A6359E447749E2A5A7BBFB106_m57B06F1D0158A122F36B9A6FEF8B0D2019E25245(L_1, /*hidden argument*/GameObject_GetComponent_TisFowardMove_t356115A06C54F82A6359E447749E2A5A7BBFB106_m57B06F1D0158A122F36B9A6FEF8B0D2019E25245_RuntimeMethod_var);
		FowardMove_t356115A06C54F82A6359E447749E2A5A7BBFB106 * L_3 = L_2;
		float L_4 = L_3->get_shipSpeed_4();
		float L_5 = __this->get_speedIncrease_5();
		L_3->set_shipSpeed_4(((float)il2cpp_codegen_add((float)L_4, (float)L_5)));
		// objWithScript.GetComponent<FowardMove>().shipSpeedHolder += speedIncrease;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6 = __this->get_objWithScript_4();
		FowardMove_t356115A06C54F82A6359E447749E2A5A7BBFB106 * L_7;
		L_7 = GameObject_GetComponent_TisFowardMove_t356115A06C54F82A6359E447749E2A5A7BBFB106_m57B06F1D0158A122F36B9A6FEF8B0D2019E25245(L_6, /*hidden argument*/GameObject_GetComponent_TisFowardMove_t356115A06C54F82A6359E447749E2A5A7BBFB106_m57B06F1D0158A122F36B9A6FEF8B0D2019E25245_RuntimeMethod_var);
		FowardMove_t356115A06C54F82A6359E447749E2A5A7BBFB106 * L_8 = L_7;
		float L_9 = L_8->get_shipSpeedHolder_5();
		float L_10 = __this->get_speedIncrease_5();
		L_8->set_shipSpeedHolder_5(((float)il2cpp_codegen_add((float)L_9, (float)L_10)));
		// objWithScript.GetComponent<FowardMove>().shipSpeedHolderSpeedUp = objWithScript.GetComponent<FowardMove>().shipSpeedHolder + 5;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_11 = __this->get_objWithScript_4();
		FowardMove_t356115A06C54F82A6359E447749E2A5A7BBFB106 * L_12;
		L_12 = GameObject_GetComponent_TisFowardMove_t356115A06C54F82A6359E447749E2A5A7BBFB106_m57B06F1D0158A122F36B9A6FEF8B0D2019E25245(L_11, /*hidden argument*/GameObject_GetComponent_TisFowardMove_t356115A06C54F82A6359E447749E2A5A7BBFB106_m57B06F1D0158A122F36B9A6FEF8B0D2019E25245_RuntimeMethod_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_13 = __this->get_objWithScript_4();
		FowardMove_t356115A06C54F82A6359E447749E2A5A7BBFB106 * L_14;
		L_14 = GameObject_GetComponent_TisFowardMove_t356115A06C54F82A6359E447749E2A5A7BBFB106_m57B06F1D0158A122F36B9A6FEF8B0D2019E25245(L_13, /*hidden argument*/GameObject_GetComponent_TisFowardMove_t356115A06C54F82A6359E447749E2A5A7BBFB106_m57B06F1D0158A122F36B9A6FEF8B0D2019E25245_RuntimeMethod_var);
		float L_15 = L_14->get_shipSpeedHolder_5();
		L_12->set_shipSpeedHolderSpeedUp_6(((float)il2cpp_codegen_add((float)L_15, (float)(5.0f))));
		// }
		return;
	}
}
// System.Void ItemGet::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ItemGet__ctor_m5786D155D6DD07ACB14236D17538A73F485BB563 (ItemGet_t4BA2919C42A7B3AEEB061ECD7046AC747086D6DD * __this, const RuntimeMethod* method)
{
	{
		// [SerializeField] private float speedIncrease = 10.0f;
		__this->set_speedIncrease_5((10.0f));
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void LevelScroll::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LevelScroll_Start_mE995DCBB1CAEFCAA6093040C3A6819A6BF4FF28D (LevelScroll_tAECE64C2EDA23B3790CFA7F8D4C43E0641255C9D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// rend = GetComponent<Renderer>();
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_0;
		L_0 = Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019(__this, /*hidden argument*/Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019_RuntimeMethod_var);
		__this->set_rend_5(L_0);
		// }
		return;
	}
}
// System.Void LevelScroll::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LevelScroll_Update_m2DEF18388FEC725B128D10634EA5D3466FD09E91 (LevelScroll_tAECE64C2EDA23B3790CFA7F8D4C43E0641255C9D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4B8146FB95E4F51B29DA41EB5F6D60F8FD0ECF21);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		// float offset = Time.time * scrollSpeed;
		float L_0;
		L_0 = Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844(/*hidden argument*/NULL);
		float L_1 = __this->get_scrollSpeed_4();
		V_0 = ((float)il2cpp_codegen_multiply((float)L_0, (float)L_1));
		// rend.material.SetTextureOffset("_MainTex", new Vector2(offset, 1));
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_2 = __this->get_rend_5();
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_3;
		L_3 = Renderer_get_material_mE6B01125502D08EE0D6DFE2EAEC064AD9BB31804(L_2, /*hidden argument*/NULL);
		float L_4 = V_0;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_5;
		memset((&L_5), 0, sizeof(L_5));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_5), L_4, (1.0f), /*hidden argument*/NULL);
		Material_SetTextureOffset_m8917660179EA847BFFCC28D4DED115237388DAA5(L_3, _stringLiteral4B8146FB95E4F51B29DA41EB5F6D60F8FD0ECF21, L_5, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void LevelScroll::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LevelScroll__ctor_mFFD3EE20BB53C21AD23F73A17F75F042A9A0841F (LevelScroll_tAECE64C2EDA23B3790CFA7F8D4C43E0641255C9D * __this, const RuntimeMethod* method)
{
	{
		// [SerializeField] private float scrollSpeed = 0.5f;
		__this->set_scrollSpeed_4((0.5f));
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void PauseMenu::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PauseMenu_Update_m35372AD36592990F9CF5ABD728A6780126C2DC39 (PauseMenu_t7195E78DC17C81907F58B853AA818812DA9227BB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PauseMenu_t7195E78DC17C81907F58B853AA818812DA9227BB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(Input.GetKeyDown(KeyCode.Return))
		bool L_0;
		L_0 = Input_GetKeyDown_m476116696E71771641BBECBAB1A4C55E69018220(((int32_t)13), /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_001d;
		}
	}
	{
		// if (GameIsPaused)
		IL2CPP_RUNTIME_CLASS_INIT(PauseMenu_t7195E78DC17C81907F58B853AA818812DA9227BB_il2cpp_TypeInfo_var);
		bool L_1 = ((PauseMenu_t7195E78DC17C81907F58B853AA818812DA9227BB_StaticFields*)il2cpp_codegen_static_fields_for(PauseMenu_t7195E78DC17C81907F58B853AA818812DA9227BB_il2cpp_TypeInfo_var))->get_GameIsPaused_4();
		if (!L_1)
		{
			goto IL_0017;
		}
	}
	{
		// Resume();
		PauseMenu_Resume_m80D016F5E8ACC3ED584938EF4CDA230DC60386E0(__this, /*hidden argument*/NULL);
		// } else
		return;
	}

IL_0017:
	{
		// Pause();
		PauseMenu_Pause_mF2670F62B7DC1843F4D7181B7FC573496F7C0BF2(__this, /*hidden argument*/NULL);
	}

IL_001d:
	{
		// }
		return;
	}
}
// System.Void PauseMenu::Resume()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PauseMenu_Resume_m80D016F5E8ACC3ED584938EF4CDA230DC60386E0 (PauseMenu_t7195E78DC17C81907F58B853AA818812DA9227BB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PauseMenu_t7195E78DC17C81907F58B853AA818812DA9227BB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// pauseMenuUI.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_pauseMenuUI_5();
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_0, (bool)0, /*hidden argument*/NULL);
		// Time.timeScale = 1f;
		Time_set_timeScale_m1987DE9E74FC6C0126CE4F59A6293E3B85BD01EA((1.0f), /*hidden argument*/NULL);
		// GameIsPaused = false;
		IL2CPP_RUNTIME_CLASS_INIT(PauseMenu_t7195E78DC17C81907F58B853AA818812DA9227BB_il2cpp_TypeInfo_var);
		((PauseMenu_t7195E78DC17C81907F58B853AA818812DA9227BB_StaticFields*)il2cpp_codegen_static_fields_for(PauseMenu_t7195E78DC17C81907F58B853AA818812DA9227BB_il2cpp_TypeInfo_var))->set_GameIsPaused_4((bool)0);
		// }
		return;
	}
}
// System.Void PauseMenu::Pause()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PauseMenu_Pause_mF2670F62B7DC1843F4D7181B7FC573496F7C0BF2 (PauseMenu_t7195E78DC17C81907F58B853AA818812DA9227BB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PauseMenu_t7195E78DC17C81907F58B853AA818812DA9227BB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// pauseMenuUI.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_pauseMenuUI_5();
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_0, (bool)1, /*hidden argument*/NULL);
		// Time.timeScale = 0f;
		Time_set_timeScale_m1987DE9E74FC6C0126CE4F59A6293E3B85BD01EA((0.0f), /*hidden argument*/NULL);
		// GameIsPaused = true;
		IL2CPP_RUNTIME_CLASS_INIT(PauseMenu_t7195E78DC17C81907F58B853AA818812DA9227BB_il2cpp_TypeInfo_var);
		((PauseMenu_t7195E78DC17C81907F58B853AA818812DA9227BB_StaticFields*)il2cpp_codegen_static_fields_for(PauseMenu_t7195E78DC17C81907F58B853AA818812DA9227BB_il2cpp_TypeInfo_var))->set_GameIsPaused_4((bool)1);
		// }
		return;
	}
}
// System.Void PauseMenu::LoadMenu()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PauseMenu_LoadMenu_mF53B3A90E0AEE217968E792308830EA21B874F4C (PauseMenu_t7195E78DC17C81907F58B853AA818812DA9227BB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Time.timeScale = 1f;
		Time_set_timeScale_m1987DE9E74FC6C0126CE4F59A6293E3B85BD01EA((1.0f), /*hidden argument*/NULL);
		// SceneManager.LoadScene(0);
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m5550E6368A6D0E37DACEDA3C5E4BA331836BC3C5(0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void PauseMenu::QuitGame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PauseMenu_QuitGame_mFCB4801BBF277E7BB92EA0363321F46ABDA8D6EB (PauseMenu_t7195E78DC17C81907F58B853AA818812DA9227BB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1D890F40E3B49A0DCA3DDF93056485F83D4C2115);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("Quitting game...");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral1D890F40E3B49A0DCA3DDF93056485F83D4C2115, /*hidden argument*/NULL);
		// Application.Quit();
		Application_Quit_m8D720E5092786C2EE32310D85FE61C253D3B1F2A(/*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void PauseMenu::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PauseMenu__ctor_mE1FB731DBA189ADEA0A0612EB9F9431539B0CC0E (PauseMenu_t7195E78DC17C81907F58B853AA818812DA9227BB * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PauseMenu::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PauseMenu__cctor_m8A2F87CD03203282173BDEDC3A4D568A8815D71A (const RuntimeMethod* method)
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
// System.Void PlayButton::Play()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayButton_Play_m29C76DBD393EE63A55D9198A4066DE7074290C3A (PlayButton_tD6F2701BC115FBF928E81BFEFCEE62CA72D7B785 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7A86C3CFBD3A4B757E7D4CA88264519C45C14CA8);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene("2_testLevel");
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7DAF30213E99396ECBDB1BD40CC34CCF36902092(_stringLiteral7A86C3CFBD3A4B757E7D4CA88264519C45C14CA8, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void PlayButton::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayButton__ctor_m3791C24C8ABF25E8FE28C5AC399BE757D801345E (PlayButton_tD6F2701BC115FBF928E81BFEFCEE62CA72D7B785 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void RotateShip::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RotateShip_Update_mAED7CA384116B4BCC600A4971E168B016CDF90B2 (RotateShip_t2501D7C101818D85DD14EAF6B45CB26305ECB02B * __this, const RuntimeMethod* method)
{
	{
		// if (!doRotate) return;
		bool L_0 = __this->get_doRotate_6();
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// if (!doRotate) return;
		return;
	}

IL_0009:
	{
		// transform.RotateAround(rotateObject.transform.position, new Vector3(0, 1, 0), rotateSpeed * Time.deltaTime);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2 = __this->get_rotateObject_5();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3;
		L_3 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_2, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		L_4 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_3, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5;
		memset((&L_5), 0, sizeof(L_5));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_5), (0.0f), (1.0f), (0.0f), /*hidden argument*/NULL);
		float L_6 = __this->get_rotateSpeed_4();
		float L_7;
		L_7 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		Transform_RotateAround_m1F93A7A1807BE407BD23EC1BA49F03AD22FCE4BE(L_1, L_4, L_5, ((float)il2cpp_codegen_multiply((float)L_6, (float)L_7)), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void RotateShip::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RotateShip__ctor_mB82C3C93846B01A7570C60276040855117F2DC59 (RotateShip_t2501D7C101818D85DD14EAF6B45CB26305ECB02B * __this, const RuntimeMethod* method)
{
	{
		// private float rotateSpeed = -70.0f;
		__this->set_rotateSpeed_4((-70.0f));
		// public bool doRotate = true;
		__this->set_doRotate_6((bool)1);
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void Testing::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Testing_Start_m3D962812E1C2B10A9F814EE6CE8ED3E2BC2AA7C3 (Testing_t05D00BFB0B26081E82B4C2927E842D3540B7F49F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		s_Il2CppMethodInitialized = true;
	}
	{
		// player = GameObject.Find("Player");
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, /*hidden argument*/NULL);
		__this->set_player_5(L_0);
		// }
		return;
	}
}
// System.Void Testing::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Testing_Update_m75A4A18CD20F0914EADFDE77791FE2A3ED4733A0 (Testing_t05D00BFB0B26081E82B4C2927E842D3540B7F49F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisFowardMove_t356115A06C54F82A6359E447749E2A5A7BBFB106_m57B06F1D0158A122F36B9A6FEF8B0D2019E25245_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_2;
	memset((&V_2), 0, sizeof(V_2));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		// if (Input.GetKey(KeyCode.Space))
		bool L_0;
		L_0 = Input_GetKey_mFDD450A4C61F2930928B12287FFBD1ACCB71E429(((int32_t)32), /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0020;
		}
	}
	{
		// player.GetComponent<FowardMove>().shipSpeed = 5;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1 = __this->get_player_5();
		FowardMove_t356115A06C54F82A6359E447749E2A5A7BBFB106 * L_2;
		L_2 = GameObject_GetComponent_TisFowardMove_t356115A06C54F82A6359E447749E2A5A7BBFB106_m57B06F1D0158A122F36B9A6FEF8B0D2019E25245(L_1, /*hidden argument*/GameObject_GetComponent_TisFowardMove_t356115A06C54F82A6359E447749E2A5A7BBFB106_m57B06F1D0158A122F36B9A6FEF8B0D2019E25245_RuntimeMethod_var);
		L_2->set_shipSpeed_4((5.0f));
		// }
		goto IL_006b;
	}

IL_0020:
	{
		// else if (Input.GetKey(KeyCode.Q))
		bool L_3;
		L_3 = Input_GetKey_mFDD450A4C61F2930928B12287FFBD1ACCB71E429(((int32_t)113), /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_004b;
		}
	}
	{
		// player.GetComponent<FowardMove>().shipSpeed = player.GetComponent<FowardMove>().shipSpeedHolderSpeedUp;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4 = __this->get_player_5();
		FowardMove_t356115A06C54F82A6359E447749E2A5A7BBFB106 * L_5;
		L_5 = GameObject_GetComponent_TisFowardMove_t356115A06C54F82A6359E447749E2A5A7BBFB106_m57B06F1D0158A122F36B9A6FEF8B0D2019E25245(L_4, /*hidden argument*/GameObject_GetComponent_TisFowardMove_t356115A06C54F82A6359E447749E2A5A7BBFB106_m57B06F1D0158A122F36B9A6FEF8B0D2019E25245_RuntimeMethod_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6 = __this->get_player_5();
		FowardMove_t356115A06C54F82A6359E447749E2A5A7BBFB106 * L_7;
		L_7 = GameObject_GetComponent_TisFowardMove_t356115A06C54F82A6359E447749E2A5A7BBFB106_m57B06F1D0158A122F36B9A6FEF8B0D2019E25245(L_6, /*hidden argument*/GameObject_GetComponent_TisFowardMove_t356115A06C54F82A6359E447749E2A5A7BBFB106_m57B06F1D0158A122F36B9A6FEF8B0D2019E25245_RuntimeMethod_var);
		float L_8 = L_7->get_shipSpeedHolderSpeedUp_6();
		L_5->set_shipSpeed_4(L_8);
		// }
		goto IL_006b;
	}

IL_004b:
	{
		// player.GetComponent<FowardMove>().shipSpeed = player.GetComponent<FowardMove>().shipSpeedHolder;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_9 = __this->get_player_5();
		FowardMove_t356115A06C54F82A6359E447749E2A5A7BBFB106 * L_10;
		L_10 = GameObject_GetComponent_TisFowardMove_t356115A06C54F82A6359E447749E2A5A7BBFB106_m57B06F1D0158A122F36B9A6FEF8B0D2019E25245(L_9, /*hidden argument*/GameObject_GetComponent_TisFowardMove_t356115A06C54F82A6359E447749E2A5A7BBFB106_m57B06F1D0158A122F36B9A6FEF8B0D2019E25245_RuntimeMethod_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_11 = __this->get_player_5();
		FowardMove_t356115A06C54F82A6359E447749E2A5A7BBFB106 * L_12;
		L_12 = GameObject_GetComponent_TisFowardMove_t356115A06C54F82A6359E447749E2A5A7BBFB106_m57B06F1D0158A122F36B9A6FEF8B0D2019E25245(L_11, /*hidden argument*/GameObject_GetComponent_TisFowardMove_t356115A06C54F82A6359E447749E2A5A7BBFB106_m57B06F1D0158A122F36B9A6FEF8B0D2019E25245_RuntimeMethod_var);
		float L_13 = L_12->get_shipSpeedHolder_5();
		L_10->set_shipSpeed_4(L_13);
	}

IL_006b:
	{
		// float horizontal = Input.GetAxis("Horizontal");
		float L_14;
		L_14 = Input_GetAxis_m939297DEB2ECF8D8D09AD66EB69979AAD2B62326(_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E, /*hidden argument*/NULL);
		V_0 = L_14;
		// float vertical = Input.GetAxis("Vertical");
		float L_15;
		L_15 = Input_GetAxis_m939297DEB2ECF8D8D09AD66EB69979AAD2B62326(_stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A, /*hidden argument*/NULL);
		V_1 = L_15;
		// Vector3 direction = new Vector3(horizontal, vertical, 0);
		float L_16 = V_0;
		float L_17 = V_1;
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_2), L_16, L_17, (0.0f), /*hidden argument*/NULL);
		// Vector3 FinalDirection = new Vector3(horizontal, vertical, 1.0f);
		float L_18 = V_0;
		float L_19 = V_1;
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_3), L_18, L_19, (1.0f), /*hidden argument*/NULL);
		// transform.position += direction * currentSpeed * Time.deltaTime;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_20;
		L_20 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_21 = L_20;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_22;
		L_22 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_21, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_23 = V_2;
		float L_24 = __this->get_currentSpeed_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_25;
		L_25 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_23, L_24, /*hidden argument*/NULL);
		float L_26;
		L_26 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_27;
		L_27 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_25, L_26, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_28;
		L_28 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_22, L_27, /*hidden argument*/NULL);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_21, L_28, /*hidden argument*/NULL);
		// transform.rotation = Quaternion.RotateTowards(transform.rotation, Quaternion.LookRotation(FinalDirection), (Mathf.Deg2Rad * 50.0f));
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_29;
		L_29 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_30;
		L_30 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_31;
		L_31 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_30, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_32 = V_3;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_33;
		L_33 = Quaternion_LookRotation_m1B0BEBEBCC384324A6771B9EAC89761F73E1D6BF(L_32, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_34;
		L_34 = Quaternion_RotateTowards_mE536473CFE4F8C16245C57C467B95882BE8CF5DC(L_31, L_33, (0.87266463f), /*hidden argument*/NULL);
		Transform_set_rotation_m1B5F3D4CE984AB31254615C9C71B0E54978583B4(L_29, L_34, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Testing::decSpeed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Testing_decSpeed_m0B5096537AEE932A1BE198D20D49EB2AACC9E6C2 (Testing_t05D00BFB0B26081E82B4C2927E842D3540B7F49F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisFowardMove_t356115A06C54F82A6359E447749E2A5A7BBFB106_m57B06F1D0158A122F36B9A6FEF8B0D2019E25245_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (speedDec == true)
		bool L_0 = __this->get_speedDec_6();
		if (!L_0)
		{
			goto IL_0045;
		}
	}
	{
		// speedDec = false;
		__this->set_speedDec_6((bool)0);
		// player.GetComponent<FowardMove>().shipSpeed--;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1 = __this->get_player_5();
		FowardMove_t356115A06C54F82A6359E447749E2A5A7BBFB106 * L_2;
		L_2 = GameObject_GetComponent_TisFowardMove_t356115A06C54F82A6359E447749E2A5A7BBFB106_m57B06F1D0158A122F36B9A6FEF8B0D2019E25245(L_1, /*hidden argument*/GameObject_GetComponent_TisFowardMove_t356115A06C54F82A6359E447749E2A5A7BBFB106_m57B06F1D0158A122F36B9A6FEF8B0D2019E25245_RuntimeMethod_var);
		FowardMove_t356115A06C54F82A6359E447749E2A5A7BBFB106 * L_3 = L_2;
		float L_4 = L_3->get_shipSpeed_4();
		L_3->set_shipSpeed_4(((float)il2cpp_codegen_subtract((float)L_4, (float)(1.0f))));
		// Debug.Log(player.GetComponent<FowardMove>().shipSpeed);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5 = __this->get_player_5();
		FowardMove_t356115A06C54F82A6359E447749E2A5A7BBFB106 * L_6;
		L_6 = GameObject_GetComponent_TisFowardMove_t356115A06C54F82A6359E447749E2A5A7BBFB106_m57B06F1D0158A122F36B9A6FEF8B0D2019E25245(L_5, /*hidden argument*/GameObject_GetComponent_TisFowardMove_t356115A06C54F82A6359E447749E2A5A7BBFB106_m57B06F1D0158A122F36B9A6FEF8B0D2019E25245_RuntimeMethod_var);
		float L_7 = L_6->get_shipSpeed_4();
		float L_8 = L_7;
		RuntimeObject * L_9 = Box(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var, &L_8);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_9, /*hidden argument*/NULL);
	}

IL_0045:
	{
		// }
		return;
	}
}
// System.Void Testing::incSpeed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Testing_incSpeed_m266E1FD9983AB0601FEC3CBE6F0932CE25B808A3 (Testing_t05D00BFB0B26081E82B4C2927E842D3540B7F49F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisFowardMove_t356115A06C54F82A6359E447749E2A5A7BBFB106_m57B06F1D0158A122F36B9A6FEF8B0D2019E25245_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (speedInc == true)
		bool L_0 = __this->get_speedInc_7();
		if (!L_0)
		{
			goto IL_0045;
		}
	}
	{
		// speedInc = false;
		__this->set_speedInc_7((bool)0);
		// player.GetComponent<FowardMove>().shipSpeed++;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1 = __this->get_player_5();
		FowardMove_t356115A06C54F82A6359E447749E2A5A7BBFB106 * L_2;
		L_2 = GameObject_GetComponent_TisFowardMove_t356115A06C54F82A6359E447749E2A5A7BBFB106_m57B06F1D0158A122F36B9A6FEF8B0D2019E25245(L_1, /*hidden argument*/GameObject_GetComponent_TisFowardMove_t356115A06C54F82A6359E447749E2A5A7BBFB106_m57B06F1D0158A122F36B9A6FEF8B0D2019E25245_RuntimeMethod_var);
		FowardMove_t356115A06C54F82A6359E447749E2A5A7BBFB106 * L_3 = L_2;
		float L_4 = L_3->get_shipSpeed_4();
		L_3->set_shipSpeed_4(((float)il2cpp_codegen_add((float)L_4, (float)(1.0f))));
		// Debug.Log(player.GetComponent<FowardMove>().shipSpeed);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5 = __this->get_player_5();
		FowardMove_t356115A06C54F82A6359E447749E2A5A7BBFB106 * L_6;
		L_6 = GameObject_GetComponent_TisFowardMove_t356115A06C54F82A6359E447749E2A5A7BBFB106_m57B06F1D0158A122F36B9A6FEF8B0D2019E25245(L_5, /*hidden argument*/GameObject_GetComponent_TisFowardMove_t356115A06C54F82A6359E447749E2A5A7BBFB106_m57B06F1D0158A122F36B9A6FEF8B0D2019E25245_RuntimeMethod_var);
		float L_7 = L_6->get_shipSpeed_4();
		float L_8 = L_7;
		RuntimeObject * L_9 = Box(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var, &L_8);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_9, /*hidden argument*/NULL);
	}

IL_0045:
	{
		// }
		return;
	}
}
// System.Void Testing::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Testing__ctor_m80A98679B78CA9BBD195130B0CC1FD44E14CCFA4 (Testing_t05D00BFB0B26081E82B4C2927E842D3540B7F49F * __this, const RuntimeMethod* method)
{
	{
		// public float currentSpeed = 5;
		__this->set_currentSpeed_4((5.0f));
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void Timer::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Timer_Start_mEE6D3F57091E7D1C2FE83BA6638EEA39EAB4F585 (Timer_tC013AFF28E5916E4AFDBEB57A18D8335A47835E9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_m2D99AC2081683F963C56EC738451EC0B59B5D137_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFC075BC3DFE942623230E78DC9D41126E9C003CA);
		s_Il2CppMethodInitialized = true;
	}
	{
		// canvas = GameObject.Find("Canvas");
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteralFC075BC3DFE942623230E78DC9D41126E9C003CA, /*hidden argument*/NULL);
		__this->set_canvas_5(L_0);
		// timerText = canvas.transform.GetChild(3).GetComponent<Text>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1 = __this->get_canvas_5();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_2;
		L_2 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_1, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3;
		L_3 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_2, 3, /*hidden argument*/NULL);
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_4;
		L_4 = Component_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_m2D99AC2081683F963C56EC738451EC0B59B5D137(L_3, /*hidden argument*/Component_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_m2D99AC2081683F963C56EC738451EC0B59B5D137_RuntimeMethod_var);
		__this->set_timerText_6(L_4);
		// Debug.Log(canvas.transform.GetChild(3).GetComponent<Text>());
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5 = __this->get_canvas_5();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_6;
		L_6 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_5, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_7;
		L_7 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_6, 3, /*hidden argument*/NULL);
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_8;
		L_8 = Component_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_m2D99AC2081683F963C56EC738451EC0B59B5D137(L_7, /*hidden argument*/Component_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_m2D99AC2081683F963C56EC738451EC0B59B5D137_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_8, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Timer::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Timer_Update_mBDB72F8B4A14394FBA844E88987ED6C5331CC076 (Timer_tC013AFF28E5916E4AFDBEB57A18D8335A47835E9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral86B02B47B04CB284EE80BAD91A6C009CF408644D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// currentTime = currentTime - (1 * Time.deltaTime);
		float L_0 = __this->get_currentTime_4();
		float L_1;
		L_1 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		__this->set_currentTime_4(((float)il2cpp_codegen_subtract((float)L_0, (float)((float)il2cpp_codegen_multiply((float)(1.0f), (float)L_1)))));
		// timerText.text = currentTime.ToString("0.00");
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_2 = __this->get_timerText_6();
		float* L_3 = __this->get_address_of_currentTime_4();
		String_t* L_4;
		L_4 = Single_ToString_m15F10F2AFF80750906CEFCFB456EBA84F9D2E8D7((float*)L_3, _stringLiteral86B02B47B04CB284EE80BAD91A6C009CF408644D, /*hidden argument*/NULL);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_2, L_4);
		// }
		return;
	}
}
// System.Void Timer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Timer__ctor_m0CD9F56B5ACE5D2F0A5E6BAA20ED9593545F55F4 (Timer_tC013AFF28E5916E4AFDBEB57A18D8335A47835E9 * __this, const RuntimeMethod* method)
{
	{
		// public float currentTime = 60f;
		__this->set_currentTime_4((60.0f));
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void meshGenerate::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void meshGenerate_Start_mF886B1AD65005954DFC2C795674E79113AA82281 (meshGenerate_tF62DE27B52710D5AC9B5DE65A62AF81950870B31 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisMeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A_m4E31C5D3D0490AEE405B54BE9F61802EA425B9DC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// mesh = new Mesh();
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_0 = (Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 *)il2cpp_codegen_object_new(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6_il2cpp_TypeInfo_var);
		Mesh__ctor_mA3D8570373462201AD7B8C9586A7F9412E49C2F6(L_0, /*hidden argument*/NULL);
		__this->set_mesh_4(L_0);
		// GetComponent<MeshFilter>().mesh = mesh;
		MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A * L_1;
		L_1 = Component_GetComponent_TisMeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A_m4E31C5D3D0490AEE405B54BE9F61802EA425B9DC(__this, /*hidden argument*/Component_GetComponent_TisMeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A_m4E31C5D3D0490AEE405B54BE9F61802EA425B9DC_RuntimeMethod_var);
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_2 = __this->get_mesh_4();
		MeshFilter_set_mesh_m13177C1A6C29D76DDCD858CEF2B28C2AA7CC46FC(L_1, L_2, /*hidden argument*/NULL);
		// createShape();
		meshGenerate_createShape_mA5FDC2D6802CFC438BC90B3C9B3F7A87B23BCEAE(__this, /*hidden argument*/NULL);
		// updateMesh();
		meshGenerate_updateMesh_m6339149F2B7FEF8B6710221DEF0F41C55CD7503A(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void meshGenerate::createShape()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void meshGenerate_createShape_mA5FDC2D6802CFC438BC90B3C9B3F7A87B23BCEAE (meshGenerate_tF62DE27B52710D5AC9B5DE65A62AF81950870B31 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	float V_5 = 0.0f;
	float V_6 = 0.0f;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	{
		// vertices = new Vector3[(xSize + 1) * (zSize + 1)];
		int32_t L_0 = __this->get_xSize_7();
		int32_t L_1 = __this->get_zSize_8();
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_2 = (Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4*)(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4*)SZArrayNew(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)1)), (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_1, (int32_t)1)))));
		__this->set_vertices_5(L_2);
		// for (int i=0, z = 0; z <= zSize; z++) {
		V_2 = 0;
		// for (int i=0, z = 0; z <= zSize; z++) {
		V_3 = 0;
		goto IL_009f;
	}

IL_0022:
	{
		// for (int x = 0; x <= xSize; x++) {
		V_4 = 0;
		goto IL_0091;
	}

IL_0027:
	{
		// float y1 = Mathf.PerlinNoise(x * .3f, z * .3f) * 2f;
		int32_t L_3 = V_4;
		int32_t L_4 = V_3;
		float L_5;
		L_5 = Mathf_PerlinNoise_mBCF172821FEB8FAD7E7CF7F7982018846E702519(((float)il2cpp_codegen_multiply((float)((float)((float)L_3)), (float)(0.300000012f))), ((float)il2cpp_codegen_multiply((float)((float)((float)L_4)), (float)(0.300000012f))), /*hidden argument*/NULL);
		// float y2 = Mathf.PerlinNoise(x * .3f, z * .3f) * 8f;
		int32_t L_6 = V_4;
		int32_t L_7 = V_3;
		float L_8;
		L_8 = Mathf_PerlinNoise_mBCF172821FEB8FAD7E7CF7F7982018846E702519(((float)il2cpp_codegen_multiply((float)((float)((float)L_6)), (float)(0.300000012f))), ((float)il2cpp_codegen_multiply((float)((float)((float)L_7)), (float)(0.300000012f))), /*hidden argument*/NULL);
		V_5 = ((float)il2cpp_codegen_multiply((float)L_8, (float)(8.0f)));
		// float y = Mathf.Clamp(y1, y2, 10);
		float L_9 = V_5;
		float L_10;
		L_10 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_multiply((float)L_5, (float)(2.0f))), L_9, (10.0f), /*hidden argument*/NULL);
		V_6 = L_10;
		// vertices[i] = new Vector3(x, y, z);
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_11 = __this->get_vertices_5();
		int32_t L_12 = V_2;
		int32_t L_13 = V_4;
		float L_14 = V_6;
		int32_t L_15 = V_3;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_16;
		memset((&L_16), 0, sizeof(L_16));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_16), ((float)((float)L_13)), L_14, ((float)((float)L_15)), /*hidden argument*/NULL);
		(L_11)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_12), (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_16);
		// i++;
		int32_t L_17 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_17, (int32_t)1));
		// for (int x = 0; x <= xSize; x++) {
		int32_t L_18 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_18, (int32_t)1));
	}

IL_0091:
	{
		// for (int x = 0; x <= xSize; x++) {
		int32_t L_19 = V_4;
		int32_t L_20 = __this->get_xSize_7();
		if ((((int32_t)L_19) <= ((int32_t)L_20)))
		{
			goto IL_0027;
		}
	}
	{
		// for (int i=0, z = 0; z <= zSize; z++) {
		int32_t L_21 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_21, (int32_t)1));
	}

IL_009f:
	{
		// for (int i=0, z = 0; z <= zSize; z++) {
		int32_t L_22 = V_3;
		int32_t L_23 = __this->get_zSize_8();
		if ((((int32_t)L_22) <= ((int32_t)L_23)))
		{
			goto IL_0022;
		}
	}
	{
		// int vert = 0;
		V_0 = 0;
		// int tri = 0;
		V_1 = 0;
		// triangles = new int[xSize * zSize * 6];
		int32_t L_24 = __this->get_xSize_7();
		int32_t L_25 = __this->get_zSize_8();
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_26 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)SZArrayNew(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_24, (int32_t)L_25)), (int32_t)6)));
		__this->set_triangles_6(L_26);
		// for (int z = 0; z < zSize; z++) {
		V_7 = 0;
		goto IL_0157;
	}

IL_00d1:
	{
		// for (int x = 0; x < xSize; x++)
		V_8 = 0;
		goto IL_0143;
	}

IL_00d6:
	{
		// triangles[0 + tri] = vert + 0;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_27 = __this->get_triangles_6();
		int32_t L_28 = V_1;
		int32_t L_29 = V_0;
		(L_27)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_28), (int32_t)L_29);
		// triangles[1 + tri] = vert + xSize + 1;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_30 = __this->get_triangles_6();
		int32_t L_31 = V_1;
		int32_t L_32 = V_0;
		int32_t L_33 = __this->get_xSize_7();
		(L_30)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)1, (int32_t)L_31))), (int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_32, (int32_t)L_33)), (int32_t)1)));
		// triangles[2 + tri] = vert + 1;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_34 = __this->get_triangles_6();
		int32_t L_35 = V_1;
		int32_t L_36 = V_0;
		(L_34)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)2, (int32_t)L_35))), (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_36, (int32_t)1)));
		// triangles[3 + tri] = vert + 1;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_37 = __this->get_triangles_6();
		int32_t L_38 = V_1;
		int32_t L_39 = V_0;
		(L_37)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)3, (int32_t)L_38))), (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_39, (int32_t)1)));
		// triangles[4 + tri] = vert + xSize + 1;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_40 = __this->get_triangles_6();
		int32_t L_41 = V_1;
		int32_t L_42 = V_0;
		int32_t L_43 = __this->get_xSize_7();
		(L_40)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)4, (int32_t)L_41))), (int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_42, (int32_t)L_43)), (int32_t)1)));
		// triangles[5 + tri] = vert + xSize + 2;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_44 = __this->get_triangles_6();
		int32_t L_45 = V_1;
		int32_t L_46 = V_0;
		int32_t L_47 = __this->get_xSize_7();
		(L_44)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)5, (int32_t)L_45))), (int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_46, (int32_t)L_47)), (int32_t)2)));
		// vert++;
		int32_t L_48 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_48, (int32_t)1));
		// tri += 6;
		int32_t L_49 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_49, (int32_t)6));
		// for (int x = 0; x < xSize; x++)
		int32_t L_50 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add((int32_t)L_50, (int32_t)1));
	}

IL_0143:
	{
		// for (int x = 0; x < xSize; x++)
		int32_t L_51 = V_8;
		int32_t L_52 = __this->get_xSize_7();
		if ((((int32_t)L_51) < ((int32_t)L_52)))
		{
			goto IL_00d6;
		}
	}
	{
		// vert++;
		int32_t L_53 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_53, (int32_t)1));
		// for (int z = 0; z < zSize; z++) {
		int32_t L_54 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add((int32_t)L_54, (int32_t)1));
	}

IL_0157:
	{
		// for (int z = 0; z < zSize; z++) {
		int32_t L_55 = V_7;
		int32_t L_56 = __this->get_zSize_8();
		if ((((int32_t)L_55) < ((int32_t)L_56)))
		{
			goto IL_00d1;
		}
	}
	{
		// }
		return;
	}
}
// System.Void meshGenerate::updateMesh()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void meshGenerate_updateMesh_m6339149F2B7FEF8B6710221DEF0F41C55CD7503A (meshGenerate_tF62DE27B52710D5AC9B5DE65A62AF81950870B31 * __this, const RuntimeMethod* method)
{
	{
		// mesh.Clear();
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_0 = __this->get_mesh_4();
		Mesh_Clear_m7500ECE6209E14CC750CB16B48301B8D2A57ACCE(L_0, /*hidden argument*/NULL);
		// mesh.vertices = vertices;
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_1 = __this->get_mesh_4();
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_2 = __this->get_vertices_5();
		Mesh_set_vertices_m38F0908D0FDFE484BE19E94BE9D6176667469AAD(L_1, L_2, /*hidden argument*/NULL);
		// mesh.triangles = triangles;
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_3 = __this->get_mesh_4();
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_4 = __this->get_triangles_6();
		Mesh_set_triangles_mF1D92E67523CD5FDC66A4378FC4AD8D4AD0D5FEC(L_3, L_4, /*hidden argument*/NULL);
		// mesh.RecalculateNormals();
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_5 = __this->get_mesh_4();
		Mesh_RecalculateNormals_mEBF9ED932D0B463E4EF3947D232CC8BEECAE1A4A(L_5, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void meshGenerate::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void meshGenerate__ctor_m0E0447B198B46DE666CFF2A9411B14B394AE1F82 (meshGenerate_tF62DE27B52710D5AC9B5DE65A62AF81950870B31 * __this, const RuntimeMethod* method)
{
	{
		// public int xSize = 20;
		__this->set_xSize_7(((int32_t)20));
		// public int zSize = 20;
		__this->set_zSize_8(((int32_t)20));
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void noise::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void noise_Start_mE214DEBC2E9A65C9F7E636E71D8ABA6D60A6A201 (noise_tCFD9C46E8E052983BB1A66D213CF8398D2B402CD * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void noise::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void noise_Update_mBB24789C3E5A2A3995EB2D50186C3CCD24E24E15 (noise_tCFD9C46E8E052983BB1A66D213CF8398D2B402CD * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void noise::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void noise__ctor_m7B56CBC5FF00F15BF63755A1C56137F4CD5D3215 (noise_tCFD9C46E8E052983BB1A66D213CF8398D2B402CD * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void planetRoate::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void planetRoate_Update_m939225AD7734FE9CDD90AA6C7B8C776837B7B8DE (planetRoate_tF8A3D3ED0EDD7647D7642A79E9B7055F3D859462 * __this, const RuntimeMethod* method)
{
	{
		// transform.Rotate(new Vector3(0, 0, rotateSpeed) * Time.deltaTime);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0;
		L_0 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		float L_1 = __this->get_rotateSpeed_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		memset((&L_2), 0, sizeof(L_2));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_2), (0.0f), (0.0f), L_1, /*hidden argument*/NULL);
		float L_3;
		L_3 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		L_4 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_2, L_3, /*hidden argument*/NULL);
		Transform_Rotate_m027A155054DDC4206F679EFB86BE0960D45C33A7(L_0, L_4, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void planetRoate::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void planetRoate__ctor_m02DCCC1C623830A47A3B09E14D57341E653D8FE4 (planetRoate_tF8A3D3ED0EDD7647D7642A79E9B7055F3D859462 * __this, const RuntimeMethod* method)
{
	{
		// private float rotateSpeed = 5.0f;
		__this->set_rotateSpeed_4((5.0f));
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void screenBoundries::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void screenBoundries_Start_m47BDDBE10B19093791B45BF4024468A77442BA1D (screenBoundries_tE43C772D917DFDEFCBD481A9D6CA53A411597BE6 * __this, const RuntimeMethod* method)
{
	{
		// screenBound = Camera.main.ScreenToWorldPoint(new Vector3(Screen.width , Screen.height, Camera.main.transform.position.z));
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_0;
		L_0 = Camera_get_main_mC337C621B91591CEF89504C97EF64D717C12871C(/*hidden argument*/NULL);
		int32_t L_1;
		L_1 = Screen_get_width_m52188F76E8AAF57BE373018CB14083BB74C43C1C(/*hidden argument*/NULL);
		int32_t L_2;
		L_2 = Screen_get_height_m110C90A573EE67895DC4F59E9165235EA22039EE(/*hidden argument*/NULL);
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_3;
		L_3 = Camera_get_main_mC337C621B91591CEF89504C97EF64D717C12871C(/*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_4;
		L_4 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_3, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5;
		L_5 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_4, /*hidden argument*/NULL);
		float L_6 = L_5.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7;
		memset((&L_7), 0, sizeof(L_7));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_7), ((float)((float)L_1)), ((float)((float)L_2)), L_6, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8;
		L_8 = Camera_ScreenToWorldPoint_m7EE1C8665F9BB089581FA225BB4BFF411B5301B6(L_0, L_7, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_9;
		L_9 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_8, /*hidden argument*/NULL);
		__this->set_screenBound_4(L_9);
		// }
		return;
	}
}
// System.Void screenBoundries::LateUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void screenBoundries_LateUpdate_m9ABC4D392CDC38D86FDB07DD3EE886A0B935EDC0 (screenBoundries_tE43C772D917DFDEFCBD481A9D6CA53A411597BE6 * __this, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Vector3 viewPoint = transform.position;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0;
		L_0 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		L_1 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		// viewPoint.x = Mathf.Clamp(viewPoint.x, screenBound.x + objWidth, -(screenBound.x) - objWidth);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = V_0;
		float L_3 = L_2.get_x_2();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_4 = __this->get_address_of_screenBound_4();
		float L_5 = L_4->get_x_0();
		float L_6 = __this->get_objWidth_5();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_7 = __this->get_address_of_screenBound_4();
		float L_8 = L_7->get_x_0();
		float L_9 = __this->get_objWidth_5();
		float L_10;
		L_10 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(L_3, ((float)il2cpp_codegen_add((float)L_5, (float)L_6)), ((float)il2cpp_codegen_subtract((float)((-L_8)), (float)L_9)), /*hidden argument*/NULL);
		(&V_0)->set_x_2(L_10);
		// viewPoint.y = Mathf.Clamp(viewPoint.y, screenBound.y + objHeight, -(screenBound.y) - objHeight);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11 = V_0;
		float L_12 = L_11.get_y_3();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_13 = __this->get_address_of_screenBound_4();
		float L_14 = L_13->get_y_1();
		float L_15 = __this->get_objHeight_6();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_16 = __this->get_address_of_screenBound_4();
		float L_17 = L_16->get_y_1();
		float L_18 = __this->get_objHeight_6();
		float L_19;
		L_19 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(L_12, ((float)il2cpp_codegen_add((float)L_14, (float)L_15)), ((float)il2cpp_codegen_subtract((float)((-L_17)), (float)L_18)), /*hidden argument*/NULL);
		(&V_0)->set_y_3(L_19);
		// transform.position = viewPoint;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_20;
		L_20 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_21 = V_0;
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_20, L_21, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void screenBoundries::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void screenBoundries__ctor_m403804298954AA649B38AB684E11B62096E4C439 (screenBoundries_tE43C772D917DFDEFCBD481A9D6CA53A411597BE6 * __this, const RuntimeMethod* method)
{
	{
		// private float objWidth = 0.5f;
		__this->set_objWidth_5((0.5f));
		// private float objHeight = 0.5f;
		__this->set_objHeight_6((0.5f));
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void shipMovement::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void shipMovement_Update_m5118A132BA479EB5C3E2F418C9F124C0BD5C1F2D (shipMovement_t24B9B843A8577B9D82BD0CCA80ED77E74CF079EE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_2;
	memset((&V_2), 0, sizeof(V_2));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		// UpdateSpeedMode();
		shipMovement_UpdateSpeedMode_m23DF2BCED276F582CA517655F3BE5B2742CBAB70(__this, /*hidden argument*/NULL);
		// UpdateCurrentSpeed(currentSpeedMode);
		int32_t L_0 = __this->get_currentSpeedMode_4();
		shipMovement_UpdateCurrentSpeed_mDE699363A20EC7C4032EC0266D3145A4EB8625A6(__this, L_0, /*hidden argument*/NULL);
		// Move();
		shipMovement_Move_m4F4E6B1B4EE4668A43AA49AAD940EB653481665B(__this, /*hidden argument*/NULL);
		// float horizontal = Input.GetAxis("Horizontal");
		float L_1;
		L_1 = Input_GetAxis_m939297DEB2ECF8D8D09AD66EB69979AAD2B62326(_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E, /*hidden argument*/NULL);
		V_0 = L_1;
		// float vertical = Input.GetAxis("Vertical");
		float L_2;
		L_2 = Input_GetAxis_m939297DEB2ECF8D8D09AD66EB69979AAD2B62326(_stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A, /*hidden argument*/NULL);
		V_1 = L_2;
		// Vector3 direction = new Vector3(horizontal, vertical, 0);
		float L_3 = V_0;
		float L_4 = V_1;
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_2), L_3, L_4, (0.0f), /*hidden argument*/NULL);
		// Vector3 FinalDirection = new Vector3(horizontal, vertical, 1.0f);
		float L_5 = V_0;
		float L_6 = V_1;
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_3), L_5, L_6, (1.0f), /*hidden argument*/NULL);
		// transform.position += direction * currentSpeed * Time.deltaTime;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_7;
		L_7 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_8 = L_7;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		L_9 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_8, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = V_2;
		float L_11 = __this->get_currentSpeed_6();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		L_12 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_10, L_11, /*hidden argument*/NULL);
		float L_13;
		L_13 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_14;
		L_14 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_12, L_13, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_15;
		L_15 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_9, L_14, /*hidden argument*/NULL);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_8, L_15, /*hidden argument*/NULL);
		// transform.rotation = Quaternion.RotateTowards(transform.rotation, Quaternion.LookRotation(FinalDirection), (Mathf.Deg2Rad * 50.0f));
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_16;
		L_16 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_17;
		L_17 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_18;
		L_18 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_17, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_19 = V_3;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_20;
		L_20 = Quaternion_LookRotation_m1B0BEBEBCC384324A6771B9EAC89761F73E1D6BF(L_19, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_21;
		L_21 = Quaternion_RotateTowards_mE536473CFE4F8C16245C57C467B95882BE8CF5DC(L_18, L_20, (0.87266463f), /*hidden argument*/NULL);
		Transform_set_rotation_m1B5F3D4CE984AB31254615C9C71B0E54978583B4(L_16, L_21, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Single shipMovement::get_CurrentSpeed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float shipMovement_get_CurrentSpeed_m12AA7AF5FDED51A8AEE3480F336931B51B72CD43 (shipMovement_t24B9B843A8577B9D82BD0CCA80ED77E74CF079EE * __this, const RuntimeMethod* method)
{
	{
		// get { return currentSpeed; }
		float L_0 = __this->get_currentSpeed_6();
		return L_0;
	}
}
// System.Void shipMovement::set_CurrentSpeed(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void shipMovement_set_CurrentSpeed_mE4E5D2F8A647B4B239C8CDB8A25562922B00A93D (shipMovement_t24B9B843A8577B9D82BD0CCA80ED77E74CF079EE * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// set { currentSpeed = value; }
		float L_0 = ___value0;
		__this->set_currentSpeed_6(L_0);
		// set { currentSpeed = value; }
		return;
	}
}
// System.Single shipMovement::get_AccelerationRate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float shipMovement_get_AccelerationRate_m22022440F13D75AC5415CA83D2AC8A6FC0373BA9 (shipMovement_t24B9B843A8577B9D82BD0CCA80ED77E74CF079EE * __this, const RuntimeMethod* method)
{
	{
		// get { return accelerationRate; }
		float L_0 = __this->get_accelerationRate_7();
		return L_0;
	}
}
// System.Void shipMovement::set_AccelerationRate(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void shipMovement_set_AccelerationRate_mB58420ED71F930245D1D0195E8EF3EDE8E6988F4 (shipMovement_t24B9B843A8577B9D82BD0CCA80ED77E74CF079EE * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// set { accelerationRate = value; }
		float L_0 = ___value0;
		__this->set_accelerationRate_7(L_0);
		// set { accelerationRate = value; }
		return;
	}
}
// System.Void shipMovement::UpdateSpeedMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void shipMovement_UpdateSpeedMode_m23DF2BCED276F582CA517655F3BE5B2742CBAB70 (shipMovement_t24B9B843A8577B9D82BD0CCA80ED77E74CF079EE * __this, const RuntimeMethod* method)
{
	{
		// if (Input.GetKey(KeyCode.Space)) currentSpeedMode = speedModes.HalfSpeed;
		bool L_0;
		L_0 = Input_GetKey_mFDD450A4C61F2930928B12287FFBD1ACCB71E429(((int32_t)32), /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0010;
		}
	}
	{
		// if (Input.GetKey(KeyCode.Space)) currentSpeedMode = speedModes.HalfSpeed;
		__this->set_currentSpeedMode_4(2);
	}

IL_0010:
	{
		// if (Input.GetKey(KeyCode.W)) currentSpeedMode = speedModes.ThreeQuartersSpeed;
		bool L_1;
		L_1 = Input_GetKey_mFDD450A4C61F2930928B12287FFBD1ACCB71E429(((int32_t)119), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0020;
		}
	}
	{
		// if (Input.GetKey(KeyCode.W)) currentSpeedMode = speedModes.ThreeQuartersSpeed;
		__this->set_currentSpeedMode_4(3);
	}

IL_0020:
	{
		// if (Input.GetKey(KeyCode.A)) currentSpeedMode = speedModes.ThreeQuartersSpeed;
		bool L_2;
		L_2 = Input_GetKey_mFDD450A4C61F2930928B12287FFBD1ACCB71E429(((int32_t)97), /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0030;
		}
	}
	{
		// if (Input.GetKey(KeyCode.A)) currentSpeedMode = speedModes.ThreeQuartersSpeed;
		__this->set_currentSpeedMode_4(3);
	}

IL_0030:
	{
		// if (Input.GetKey(KeyCode.S)) currentSpeedMode = speedModes.ThreeQuartersSpeed;
		bool L_3;
		L_3 = Input_GetKey_mFDD450A4C61F2930928B12287FFBD1ACCB71E429(((int32_t)115), /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0040;
		}
	}
	{
		// if (Input.GetKey(KeyCode.S)) currentSpeedMode = speedModes.ThreeQuartersSpeed;
		__this->set_currentSpeedMode_4(3);
	}

IL_0040:
	{
		// if (Input.GetKey(KeyCode.D)) currentSpeedMode = speedModes.ThreeQuartersSpeed;
		bool L_4;
		L_4 = Input_GetKey_mFDD450A4C61F2930928B12287FFBD1ACCB71E429(((int32_t)100), /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0050;
		}
	}
	{
		// if (Input.GetKey(KeyCode.D)) currentSpeedMode = speedModes.ThreeQuartersSpeed;
		__this->set_currentSpeedMode_4(3);
	}

IL_0050:
	{
		// if (Input.GetKey(KeyCode.LeftShift)) currentSpeedMode = speedModes.FullSpeed;
		bool L_5;
		L_5 = Input_GetKey_mFDD450A4C61F2930928B12287FFBD1ACCB71E429(((int32_t)304), /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0063;
		}
	}
	{
		// if (Input.GetKey(KeyCode.LeftShift)) currentSpeedMode = speedModes.FullSpeed;
		__this->set_currentSpeedMode_4(4);
	}

IL_0063:
	{
		// }
		return;
	}
}
// System.Void shipMovement::UpdateCurrentSpeed(shipMovement/speedModes)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void shipMovement_UpdateCurrentSpeed_mDE699363A20EC7C4032EC0266D3145A4EB8625A6 (shipMovement_t24B9B843A8577B9D82BD0CCA80ED77E74CF079EE * __this, int32_t ___speedMode0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___speedMode0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)2)))
		{
			case 0:
			{
				goto IL_0015;
			}
			case 1:
			{
				goto IL_0021;
			}
			case 2:
			{
				goto IL_002d;
			}
		}
	}
	{
		return;
	}

IL_0015:
	{
		// MoveSpeedTowards(maximumSpeed * 0.5f);
		shipMovement_MoveSpeedTowards_mA2F72D7B0C638BA97EE5179B5D2D7160DABD48E1(__this, (4.0f), /*hidden argument*/NULL);
		// break;
		return;
	}

IL_0021:
	{
		// MoveSpeedTowards(maximumSpeed * 0.75f);
		shipMovement_MoveSpeedTowards_mA2F72D7B0C638BA97EE5179B5D2D7160DABD48E1(__this, (6.0f), /*hidden argument*/NULL);
		// break;
		return;
	}

IL_002d:
	{
		// MoveSpeedTowards(maximumSpeed);
		shipMovement_MoveSpeedTowards_mA2F72D7B0C638BA97EE5179B5D2D7160DABD48E1(__this, (8.0f), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void shipMovement::MoveSpeedTowards(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void shipMovement_MoveSpeedTowards_mA2F72D7B0C638BA97EE5179B5D2D7160DABD48E1 (shipMovement_t24B9B843A8577B9D82BD0CCA80ED77E74CF079EE * __this, float ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Mathf_t4D4AC358D24F6DDC32EC291DDE1DF2C3B752A194_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		goto IL_003f;
	}

IL_0002:
	{
		// if (CurrentSpeed < value) CurrentSpeed += AccelerationRate * Time.deltaTime;
		float L_0;
		L_0 = shipMovement_get_CurrentSpeed_m12AA7AF5FDED51A8AEE3480F336931B51B72CD43_inline(__this, /*hidden argument*/NULL);
		float L_1 = ___value0;
		if ((!(((float)L_0) < ((float)L_1))))
		{
			goto IL_0025;
		}
	}
	{
		// if (CurrentSpeed < value) CurrentSpeed += AccelerationRate * Time.deltaTime;
		float L_2;
		L_2 = shipMovement_get_CurrentSpeed_m12AA7AF5FDED51A8AEE3480F336931B51B72CD43_inline(__this, /*hidden argument*/NULL);
		float L_3;
		L_3 = shipMovement_get_AccelerationRate_m22022440F13D75AC5415CA83D2AC8A6FC0373BA9_inline(__this, /*hidden argument*/NULL);
		float L_4;
		L_4 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		shipMovement_set_CurrentSpeed_mE4E5D2F8A647B4B239C8CDB8A25562922B00A93D_inline(__this, ((float)il2cpp_codegen_add((float)L_2, (float)((float)il2cpp_codegen_multiply((float)L_3, (float)L_4)))), /*hidden argument*/NULL);
		return;
	}

IL_0025:
	{
		// else CurrentSpeed -= AccelerationRate * Time.deltaTime;
		float L_5;
		L_5 = shipMovement_get_CurrentSpeed_m12AA7AF5FDED51A8AEE3480F336931B51B72CD43_inline(__this, /*hidden argument*/NULL);
		float L_6;
		L_6 = shipMovement_get_AccelerationRate_m22022440F13D75AC5415CA83D2AC8A6FC0373BA9_inline(__this, /*hidden argument*/NULL);
		float L_7;
		L_7 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		shipMovement_set_CurrentSpeed_mE4E5D2F8A647B4B239C8CDB8A25562922B00A93D_inline(__this, ((float)il2cpp_codegen_subtract((float)L_5, (float)((float)il2cpp_codegen_multiply((float)L_6, (float)L_7)))), /*hidden argument*/NULL);
		// break;
		return;
	}

IL_003f:
	{
		// while (Mathf.Abs(CurrentSpeed - value) > Mathf.Epsilon)
		float L_8;
		L_8 = shipMovement_get_CurrentSpeed_m12AA7AF5FDED51A8AEE3480F336931B51B72CD43_inline(__this, /*hidden argument*/NULL);
		float L_9 = ___value0;
		float L_10;
		L_10 = fabsf(((float)il2cpp_codegen_subtract((float)L_8, (float)L_9)));
		float L_11 = ((Mathf_t4D4AC358D24F6DDC32EC291DDE1DF2C3B752A194_StaticFields*)il2cpp_codegen_static_fields_for(Mathf_t4D4AC358D24F6DDC32EC291DDE1DF2C3B752A194_il2cpp_TypeInfo_var))->get_Epsilon_0();
		if ((((float)L_10) > ((float)L_11)))
		{
			goto IL_0002;
		}
	}
	{
		// }
		return;
	}
}
// System.Void shipMovement::Move()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void shipMovement_Move_m4F4E6B1B4EE4668A43AA49AAD940EB653481665B (shipMovement_t24B9B843A8577B9D82BD0CCA80ED77E74CF079EE * __this, const RuntimeMethod* method)
{
	{
		// if (CurrentSpeed < 0)
		float L_0;
		L_0 = shipMovement_get_CurrentSpeed_m12AA7AF5FDED51A8AEE3480F336931B51B72CD43_inline(__this, /*hidden argument*/NULL);
		if ((!(((float)L_0) < ((float)(0.0f)))))
		{
			goto IL_0019;
		}
	}
	{
		// CurrentSpeed = 0;
		shipMovement_set_CurrentSpeed_mE4E5D2F8A647B4B239C8CDB8A25562922B00A93D_inline(__this, (0.0f), /*hidden argument*/NULL);
		// return;
		return;
	}

IL_0019:
	{
		// }
		return;
	}
}
// System.Void shipMovement::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void shipMovement__ctor_m914D7D723BF6F3D7E65844C21C6BD08CDFF8F8F5 (shipMovement_t24B9B843A8577B9D82BD0CCA80ED77E74CF079EE * __this, const RuntimeMethod* method)
{
	{
		// public float currentSpeed = 10f;
		__this->set_currentSpeed_6((10.0f));
		// private float accelerationRate = 1.5f;
		__this->set_accelerationRate_7((1.5f));
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void shipRotate::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void shipRotate_Update_mEBEA0D9FC9E5A57CC66D02682B5C4805EE6DA4DE (shipRotate_t30F0FE189C6C4D84397C28D9DDDB2AF19E998A9C * __this, const RuntimeMethod* method)
{
	{
		// transform.localScale = new Vector3(30, 30, 30);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0;
		L_0 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		memset((&L_1), 0, sizeof(L_1));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_1), (30.0f), (30.0f), (30.0f), /*hidden argument*/NULL);
		Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A(L_0, L_1, /*hidden argument*/NULL);
		// transform.RotateAround(rotateObject.transform.position, new Vector3(0, 1, 0), rotateSpeed * Time.deltaTime);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_2;
		L_2 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3 = __this->get_rotateObject_5();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_4;
		L_4 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_3, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5;
		L_5 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_4, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_6), (0.0f), (1.0f), (0.0f), /*hidden argument*/NULL);
		float L_7 = __this->get_rotateSpeed_4();
		float L_8;
		L_8 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		Transform_RotateAround_m1F93A7A1807BE407BD23EC1BA49F03AD22FCE4BE(L_2, L_5, L_6, ((float)il2cpp_codegen_multiply((float)L_7, (float)L_8)), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void shipRotate::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void shipRotate__ctor_m80FCDFC797674F862D8A27CA285BB8DF48CDCFE2 (shipRotate_t30F0FE189C6C4D84397C28D9DDDB2AF19E998A9C * __this, const RuntimeMethod* method)
{
	{
		// private float rotateSpeed = -10.0f;
		__this->set_rotateSpeed_4((-10.0f));
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void shipSelect::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void shipSelect_Start_mA5CD6B2472B0D8CE4A3FE225A8D6AB72B41BFA44 (shipSelect_tE473A575803FB0F6473622D6E3B8F13644990636 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* V_1 = NULL;
	int32_t V_2 = 0;
	{
		// shipList = new GameObject[transform.childCount];
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0;
		L_0 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		int32_t L_1;
		L_1 = Transform_get_childCount_mCBED4F6D3F6A7386C4D97C2C3FD25C383A0BCD05(L_0, /*hidden argument*/NULL);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_2 = (GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642*)(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642*)SZArrayNew(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642_il2cpp_TypeInfo_var, (uint32_t)L_1);
		__this->set_shipList_5(L_2);
		// for (int i = 0; i < transform.childCount; i++) {
		V_0 = 0;
		goto IL_0037;
	}

IL_001a:
	{
		// shipList[i] = transform.GetChild(i).gameObject;
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_3 = __this->get_shipList_5();
		int32_t L_4 = V_0;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_5;
		L_5 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		int32_t L_6 = V_0;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_7;
		L_7 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_5, L_6, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_8;
		L_8 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_7, /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_3, L_8);
		(L_3)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_4), (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)L_8);
		// for (int i = 0; i < transform.childCount; i++) {
		int32_t L_9 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)1));
	}

IL_0037:
	{
		// for (int i = 0; i < transform.childCount; i++) {
		int32_t L_10 = V_0;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_11;
		L_11 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		int32_t L_12;
		L_12 = Transform_get_childCount_mCBED4F6D3F6A7386C4D97C2C3FD25C383A0BCD05(L_11, /*hidden argument*/NULL);
		if ((((int32_t)L_10) < ((int32_t)L_12)))
		{
			goto IL_001a;
		}
	}
	{
		// foreach (GameObject ship in shipList) {
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_13 = __this->get_shipList_5();
		V_1 = L_13;
		V_2 = 0;
		goto IL_005d;
	}

IL_0050:
	{
		// foreach (GameObject ship in shipList) {
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_14 = V_1;
		int32_t L_15 = V_2;
		int32_t L_16 = L_15;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_17 = (L_14)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_16));
		// ship.SetActive(false);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_17, (bool)0, /*hidden argument*/NULL);
		int32_t L_18 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_18, (int32_t)1));
	}

IL_005d:
	{
		// foreach (GameObject ship in shipList) {
		int32_t L_19 = V_2;
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_20 = V_1;
		if ((((int32_t)L_19) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_20)->max_length))))))
		{
			goto IL_0050;
		}
	}
	{
		// if (shipList[0]) {
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_21 = __this->get_shipList_5();
		int32_t L_22 = 0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_23 = (L_21)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_22));
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_24;
		L_24 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_23, /*hidden argument*/NULL);
		if (!L_24)
		{
			goto IL_0080;
		}
	}
	{
		// shipList[0].SetActive(true);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_25 = __this->get_shipList_5();
		int32_t L_26 = 0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_27 = (L_25)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_26));
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_27, (bool)1, /*hidden argument*/NULL);
	}

IL_0080:
	{
		// }
		return;
	}
}
// System.Void shipSelect::previousShip()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void shipSelect_previousShip_m23D8550291BD6C89373E7006D315CE77266AA3E6 (shipSelect_tE473A575803FB0F6473622D6E3B8F13644990636 * __this, const RuntimeMethod* method)
{
	{
		// shipList[index].SetActive(false);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_0 = __this->get_shipList_5();
		int32_t L_1 = __this->get_index_4();
		int32_t L_2 = L_1;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3 = (L_0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_2));
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_3, (bool)0, /*hidden argument*/NULL);
		// index = index - 1;
		int32_t L_4 = __this->get_index_4();
		__this->set_index_4(((int32_t)il2cpp_codegen_subtract((int32_t)L_4, (int32_t)1)));
		// if (index < 0) {
		int32_t L_5 = __this->get_index_4();
		if ((((int32_t)L_5) >= ((int32_t)0)))
		{
			goto IL_003a;
		}
	}
	{
		// index = shipList.Length - 1;
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_6 = __this->get_shipList_5();
		__this->set_index_4(((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_6)->max_length))), (int32_t)1)));
	}

IL_003a:
	{
		// shipList[index].SetActive(true);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_7 = __this->get_shipList_5();
		int32_t L_8 = __this->get_index_4();
		int32_t L_9 = L_8;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_10 = (L_7)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_9));
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_10, (bool)1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void shipSelect::nextShip()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void shipSelect_nextShip_m597EAB49EDD5C7D824FCEBF828D361BAFEB01DD6 (shipSelect_tE473A575803FB0F6473622D6E3B8F13644990636 * __this, const RuntimeMethod* method)
{
	{
		// shipList[index].SetActive(false);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_0 = __this->get_shipList_5();
		int32_t L_1 = __this->get_index_4();
		int32_t L_2 = L_1;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3 = (L_0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_2));
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_3, (bool)0, /*hidden argument*/NULL);
		// index = index + 1;
		int32_t L_4 = __this->get_index_4();
		__this->set_index_4(((int32_t)il2cpp_codegen_add((int32_t)L_4, (int32_t)1)));
		// if (index == shipList.Length)
		int32_t L_5 = __this->get_index_4();
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_6 = __this->get_shipList_5();
		if ((!(((uint32_t)L_5) == ((uint32_t)((int32_t)((int32_t)(((RuntimeArray*)L_6)->max_length)))))))
		{
			goto IL_0038;
		}
	}
	{
		// index = 0;
		__this->set_index_4(0);
	}

IL_0038:
	{
		// shipList[index].SetActive(true);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_7 = __this->get_shipList_5();
		int32_t L_8 = __this->get_index_4();
		int32_t L_9 = L_8;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_10 = (L_7)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_9));
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_10, (bool)1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void shipSelect::selectShip()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void shipSelect_selectShip_m5AF65A457AD0C1589DF3AA56D6D7FBEDAA6723C3 (shipSelect_tE473A575803FB0F6473622D6E3B8F13644990636 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBC1CD8511D0AC0E22BF05E4DB687C4B7BF6ADCD5);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene("LevelOneIntroScene");
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7DAF30213E99396ECBDB1BD40CC34CCF36902092(_stringLiteralBC1CD8511D0AC0E22BF05E4DB687C4B7BF6ADCD5, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void shipSelect::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void shipSelect__ctor_mB152FB9362517AEAE04D8F5C8D3F41A1394EDD81 (shipSelect_tE473A575803FB0F6473622D6E3B8F13644990636 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void shipSelect2::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void shipSelect2_Start_m5703D03773681530AB92653FC82BFD2F898DB5F7 (shipSelect2_tEC8001FED10583E51B3216B19E6DBC3C819DA161 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* V_1 = NULL;
	int32_t V_2 = 0;
	{
		// shipList = new GameObject[transform.childCount];
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0;
		L_0 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		int32_t L_1;
		L_1 = Transform_get_childCount_mCBED4F6D3F6A7386C4D97C2C3FD25C383A0BCD05(L_0, /*hidden argument*/NULL);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_2 = (GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642*)(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642*)SZArrayNew(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642_il2cpp_TypeInfo_var, (uint32_t)L_1);
		__this->set_shipList_5(L_2);
		// for (int i = 0; i < transform.childCount; i++) {
		V_0 = 0;
		goto IL_0037;
	}

IL_001a:
	{
		// shipList[i] = transform.GetChild(i).gameObject;
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_3 = __this->get_shipList_5();
		int32_t L_4 = V_0;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_5;
		L_5 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		int32_t L_6 = V_0;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_7;
		L_7 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_5, L_6, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_8;
		L_8 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_7, /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_3, L_8);
		(L_3)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_4), (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)L_8);
		// for (int i = 0; i < transform.childCount; i++) {
		int32_t L_9 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)1));
	}

IL_0037:
	{
		// for (int i = 0; i < transform.childCount; i++) {
		int32_t L_10 = V_0;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_11;
		L_11 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		int32_t L_12;
		L_12 = Transform_get_childCount_mCBED4F6D3F6A7386C4D97C2C3FD25C383A0BCD05(L_11, /*hidden argument*/NULL);
		if ((((int32_t)L_10) < ((int32_t)L_12)))
		{
			goto IL_001a;
		}
	}
	{
		// foreach (GameObject ship in shipList) {
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_13 = __this->get_shipList_5();
		V_1 = L_13;
		V_2 = 0;
		goto IL_005d;
	}

IL_0050:
	{
		// foreach (GameObject ship in shipList) {
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_14 = V_1;
		int32_t L_15 = V_2;
		int32_t L_16 = L_15;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_17 = (L_14)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_16));
		// ship.SetActive(false);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_17, (bool)0, /*hidden argument*/NULL);
		int32_t L_18 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_18, (int32_t)1));
	}

IL_005d:
	{
		// foreach (GameObject ship in shipList) {
		int32_t L_19 = V_2;
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_20 = V_1;
		if ((((int32_t)L_19) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_20)->max_length))))))
		{
			goto IL_0050;
		}
	}
	{
		// if (shipList[0]) {
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_21 = __this->get_shipList_5();
		int32_t L_22 = 0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_23 = (L_21)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_22));
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_24;
		L_24 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_23, /*hidden argument*/NULL);
		if (!L_24)
		{
			goto IL_0080;
		}
	}
	{
		// shipList[0].SetActive(true);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_25 = __this->get_shipList_5();
		int32_t L_26 = 0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_27 = (L_25)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_26));
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_27, (bool)1, /*hidden argument*/NULL);
	}

IL_0080:
	{
		// }
		return;
	}
}
// System.Void shipSelect2::previousShip()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void shipSelect2_previousShip_m0CA2DFF0CB14A6D7DAAC682E08611195A0A7CB45 (shipSelect2_tEC8001FED10583E51B3216B19E6DBC3C819DA161 * __this, const RuntimeMethod* method)
{
	{
		// shipList[index].SetActive(false);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_0 = __this->get_shipList_5();
		int32_t L_1 = __this->get_index_4();
		int32_t L_2 = L_1;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3 = (L_0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_2));
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_3, (bool)0, /*hidden argument*/NULL);
		// index = index - 1;
		int32_t L_4 = __this->get_index_4();
		__this->set_index_4(((int32_t)il2cpp_codegen_subtract((int32_t)L_4, (int32_t)1)));
		// if (index < 0) {
		int32_t L_5 = __this->get_index_4();
		if ((((int32_t)L_5) >= ((int32_t)0)))
		{
			goto IL_003a;
		}
	}
	{
		// index = shipList.Length - 1;
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_6 = __this->get_shipList_5();
		__this->set_index_4(((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_6)->max_length))), (int32_t)1)));
	}

IL_003a:
	{
		// shipList[index].SetActive(true);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_7 = __this->get_shipList_5();
		int32_t L_8 = __this->get_index_4();
		int32_t L_9 = L_8;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_10 = (L_7)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_9));
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_10, (bool)1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void shipSelect2::nextShip()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void shipSelect2_nextShip_mB89F23A643411AA0566F52D0E8BE0B35D247CC4E (shipSelect2_tEC8001FED10583E51B3216B19E6DBC3C819DA161 * __this, const RuntimeMethod* method)
{
	{
		// shipList[index].SetActive(false);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_0 = __this->get_shipList_5();
		int32_t L_1 = __this->get_index_4();
		int32_t L_2 = L_1;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3 = (L_0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_2));
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_3, (bool)0, /*hidden argument*/NULL);
		// index = index + 1;
		int32_t L_4 = __this->get_index_4();
		__this->set_index_4(((int32_t)il2cpp_codegen_add((int32_t)L_4, (int32_t)1)));
		// if (index == shipList.Length)
		int32_t L_5 = __this->get_index_4();
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_6 = __this->get_shipList_5();
		if ((!(((uint32_t)L_5) == ((uint32_t)((int32_t)((int32_t)(((RuntimeArray*)L_6)->max_length)))))))
		{
			goto IL_0038;
		}
	}
	{
		// index = 0;
		__this->set_index_4(0);
	}

IL_0038:
	{
		// shipList[index].SetActive(true);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_7 = __this->get_shipList_5();
		int32_t L_8 = __this->get_index_4();
		int32_t L_9 = L_8;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_10 = (L_7)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_9));
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_10, (bool)1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void shipSelect2::selectShip()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void shipSelect2_selectShip_m32A3E39212168BBA68FE71FF8992EFD338945523 (shipSelect2_tEC8001FED10583E51B3216B19E6DBC3C819DA161 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBC1CD8511D0AC0E22BF05E4DB687C4B7BF6ADCD5);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene("LevelOneIntroScene");
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7DAF30213E99396ECBDB1BD40CC34CCF36902092(_stringLiteralBC1CD8511D0AC0E22BF05E4DB687C4B7BF6ADCD5, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void shipSelect2::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void shipSelect2__ctor_mD3B56825BC24C17F7EF094D5B7B6F48EE2498043 (shipSelect2_tEC8001FED10583E51B3216B19E6DBC3C819DA161 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void spawnDisable::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void spawnDisable_Start_m208C1DF53163E09050E506F643613DDB6D387452 (spawnDisable_tEADC77FDE054C074D5D90F06992FCD2BC57694F1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1459B2730F2F0FAF449992273D0EDB32904F0E87);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral78DD5F3DCA6D42EDBE00E79FFE9B7CF421260DF6);
		s_Il2CppMethodInitialized = true;
	}
	{
		// spawner = GameObject.Find("Spawner");
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteral1459B2730F2F0FAF449992273D0EDB32904F0E87, /*hidden argument*/NULL);
		__this->set_spawner_4(L_0);
		// target = GameObject.Find("Egipt");
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteral78DD5F3DCA6D42EDBE00E79FFE9B7CF421260DF6, /*hidden argument*/NULL);
		__this->set_target_5(L_1);
		// }
		return;
	}
}
// System.Void spawnDisable::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void spawnDisable_Update_m3E363D8AAEB26E4767A13180442173D003AABA6E (spawnDisable_tEADC77FDE054C074D5D90F06992FCD2BC57694F1 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void spawnDisable::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void spawnDisable__ctor_mD8A9F4A3702E1885F850DD80500831A634812CFE (spawnDisable_tEADC77FDE054C074D5D90F06992FCD2BC57694F1 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void spawnerV2::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void spawnerV2_Start_mF36519EBA5FB2A4CAF5C6D13C91525B2AA110386 (spawnerV2_tAC21446FC6665E9AD98E52AEDDE1CA8B8D29012C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral56271342E90F5731D167A8FCDF05F7FCB466BE3B);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Invoke("SpawnItem", Random.Range(minspawnTime, maxspawnTime));
		float L_0 = __this->get_minspawnTime_7();
		float L_1 = __this->get_maxspawnTime_8();
		float L_2;
		L_2 = Random_Range_mC15372D42A9ABDCAC3DE82E114D60A40C9C311D2(L_0, L_1, /*hidden argument*/NULL);
		MonoBehaviour_Invoke_m4AAB759653B1C6FB0653527F4DDC72D1E9162CC4(__this, _stringLiteral56271342E90F5731D167A8FCDF05F7FCB466BE3B, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void spawnerV2::SpawnItem()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void spawnerV2_SpawnItem_m760100072F1BEB3ED30DDD76337A1B635816A28C (spawnerV2_tAC21446FC6665E9AD98E52AEDDE1CA8B8D29012C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral56271342E90F5731D167A8FCDF05F7FCB466BE3B);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	int32_t V_2 = 0;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		// if (disable == 0)
		int32_t L_0 = __this->get_disable_9();
		if (L_0)
		{
			goto IL_00a8;
		}
	}
	{
		// float x_Offset = Random.Range(-x_Range, x_Range);
		float L_1 = __this->get_x_Range_5();
		float L_2 = __this->get_x_Range_5();
		float L_3;
		L_3 = Random_Range_mC15372D42A9ABDCAC3DE82E114D60A40C9C311D2(((-L_1)), L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		// float y_Offset = Random.Range(-y_Range, y_Range);
		float L_4 = __this->get_y_Range_6();
		float L_5 = __this->get_y_Range_6();
		float L_6;
		L_6 = Random_Range_mC15372D42A9ABDCAC3DE82E114D60A40C9C311D2(((-L_4)), L_5, /*hidden argument*/NULL);
		V_1 = L_6;
		// int Index = Random.Range(0, spaceHazards.Length);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_7 = __this->get_spaceHazards_4();
		int32_t L_8;
		L_8 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(0, ((int32_t)((int32_t)(((RuntimeArray*)L_7)->max_length))), /*hidden argument*/NULL);
		V_2 = L_8;
		// Vector3 hazardsOffset = new Vector3(x_Offset, y_Offset, 0.0f);
		float L_9 = V_0;
		float L_10 = V_1;
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_3), L_9, L_10, (0.0f), /*hidden argument*/NULL);
		// Instantiate(spaceHazards[Random.Range(0, spaceHazards.Length)], transform.position + hazardsOffset, spaceHazards[Index].transform.rotation);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_11 = __this->get_spaceHazards_4();
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_12 = __this->get_spaceHazards_4();
		int32_t L_13;
		L_13 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(0, ((int32_t)((int32_t)(((RuntimeArray*)L_12)->max_length))), /*hidden argument*/NULL);
		int32_t L_14 = L_13;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_15 = (L_11)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_14));
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_16;
		L_16 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_17;
		L_17 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_16, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_18 = V_3;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_19;
		L_19 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_17, L_18, /*hidden argument*/NULL);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_20 = __this->get_spaceHazards_4();
		int32_t L_21 = V_2;
		int32_t L_22 = L_21;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_23 = (L_20)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_22));
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_24;
		L_24 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_23, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_25;
		L_25 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_24, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_26;
		L_26 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B(L_15, L_19, L_25, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		// Invoke("SpawnItem", Random.Range(minspawnTime, maxspawnTime));
		float L_27 = __this->get_minspawnTime_7();
		float L_28 = __this->get_maxspawnTime_8();
		float L_29;
		L_29 = Random_Range_mC15372D42A9ABDCAC3DE82E114D60A40C9C311D2(L_27, L_28, /*hidden argument*/NULL);
		MonoBehaviour_Invoke_m4AAB759653B1C6FB0653527F4DDC72D1E9162CC4(__this, _stringLiteral56271342E90F5731D167A8FCDF05F7FCB466BE3B, L_29, /*hidden argument*/NULL);
	}

IL_00a8:
	{
		// }
		return;
	}
}
// System.Void spawnerV2::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void spawnerV2__ctor_m7CD32338DC846609D0FA43A88AD1674A069CCDBD (spawnerV2_tAC21446FC6665E9AD98E52AEDDE1CA8B8D29012C * __this, const RuntimeMethod* method)
{
	{
		// [SerializeField] private float x_Range = 1.0f;
		__this->set_x_Range_5((1.0f));
		// [SerializeField] private float y_Range = 1.0f;
		__this->set_y_Range_6((1.0f));
		// [SerializeField] private float minspawnTime = 1.0f;
		__this->set_minspawnTime_7((1.0f));
		// [SerializeField] private float maxspawnTime = 7.0f;
		__this->set_maxspawnTime_8((7.0f));
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void terrainGenerator::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void terrainGenerator_Start_mF49C54B20FB3E79F21D89AE7DB826072340828CB (terrainGenerator_tF54F9D96BC928A01556D8E58062DCF87544B186B * __this, const RuntimeMethod* method)
{
	{
		// offsetX = Random.Range(0f, 9999f);
		float L_0;
		L_0 = Random_Range_mC15372D42A9ABDCAC3DE82E114D60A40C9C311D2((0.0f), (9999.0f), /*hidden argument*/NULL);
		__this->set_offsetX_8(L_0);
		// offsetY = Random.Range(0f, 9999f);
		float L_1;
		L_1 = Random_Range_mC15372D42A9ABDCAC3DE82E114D60A40C9C311D2((0.0f), (9999.0f), /*hidden argument*/NULL);
		__this->set_offsetY_9(L_1);
		// }
		return;
	}
}
// System.Void terrainGenerator::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void terrainGenerator_Update_mF8A2CBF28F27FFDECCB8D39DE107E65259695CA9 (terrainGenerator_tF54F9D96BC928A01556D8E58062DCF87544B186B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisTerrain_t2C0E3B3A2895E81446EFF4F5AFD601CF977D1836_m8C21051F55A99A250F235F34CBA3502A35885D00_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Terrain_t2C0E3B3A2895E81446EFF4F5AFD601CF977D1836 * V_0 = NULL;
	{
		// Terrain terrain = GetComponent<Terrain>();
		Terrain_t2C0E3B3A2895E81446EFF4F5AFD601CF977D1836 * L_0;
		L_0 = Component_GetComponent_TisTerrain_t2C0E3B3A2895E81446EFF4F5AFD601CF977D1836_m8C21051F55A99A250F235F34CBA3502A35885D00(__this, /*hidden argument*/Component_GetComponent_TisTerrain_t2C0E3B3A2895E81446EFF4F5AFD601CF977D1836_m8C21051F55A99A250F235F34CBA3502A35885D00_RuntimeMethod_var);
		V_0 = L_0;
		// terrain.terrainData = GenerateTerrain(terrain.terrainData);
		Terrain_t2C0E3B3A2895E81446EFF4F5AFD601CF977D1836 * L_1 = V_0;
		Terrain_t2C0E3B3A2895E81446EFF4F5AFD601CF977D1836 * L_2 = V_0;
		TerrainData_tAD3780D3C4DE5B9BE122BECE6D08C4AE169ED2A4 * L_3;
		L_3 = Terrain_get_terrainData_mDB60C324B3424339C3C9FA6CDF6DC1C9B47D6E41(L_2, /*hidden argument*/NULL);
		TerrainData_tAD3780D3C4DE5B9BE122BECE6D08C4AE169ED2A4 * L_4;
		L_4 = terrainGenerator_GenerateTerrain_m39A4B391AE441CB4952C4297F2ABCE843A37F459(__this, L_3, /*hidden argument*/NULL);
		Terrain_set_terrainData_mEDD9205514CD21D3518EC11C03EBBF1BF8B9E81B(L_1, L_4, /*hidden argument*/NULL);
		// offsetX = offsetX + Time.deltaTime * 5f;
		float L_5 = __this->get_offsetX_8();
		float L_6;
		L_6 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		__this->set_offsetX_8(((float)il2cpp_codegen_add((float)L_5, (float)((float)il2cpp_codegen_multiply((float)L_6, (float)(5.0f))))));
		// }
		return;
	}
}
// UnityEngine.TerrainData terrainGenerator::GenerateTerrain(UnityEngine.TerrainData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TerrainData_tAD3780D3C4DE5B9BE122BECE6D08C4AE169ED2A4 * terrainGenerator_GenerateTerrain_m39A4B391AE441CB4952C4297F2ABCE843A37F459 (terrainGenerator_tF54F9D96BC928A01556D8E58062DCF87544B186B * __this, TerrainData_tAD3780D3C4DE5B9BE122BECE6D08C4AE169ED2A4 * ___terrain0, const RuntimeMethod* method)
{
	{
		// terrain.heightmapResolution = width + 1;
		TerrainData_tAD3780D3C4DE5B9BE122BECE6D08C4AE169ED2A4 * L_0 = ___terrain0;
		int32_t L_1 = __this->get_width_4();
		TerrainData_set_heightmapResolution_m85A19331108A0A25E28BB7D65533DA2B746BD4F3(L_0, ((int32_t)il2cpp_codegen_add((int32_t)L_1, (int32_t)1)), /*hidden argument*/NULL);
		// terrain.size = new Vector3(width, depth, height);
		TerrainData_tAD3780D3C4DE5B9BE122BECE6D08C4AE169ED2A4 * L_2 = ___terrain0;
		int32_t L_3 = __this->get_width_4();
		int32_t L_4 = __this->get_depth_6();
		int32_t L_5 = __this->get_height_5();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_6), ((float)((float)L_3)), ((float)((float)L_4)), ((float)((float)L_5)), /*hidden argument*/NULL);
		TerrainData_set_size_m67596DE2C49F97BA157235CF4BB46E56B36C31D1(L_2, L_6, /*hidden argument*/NULL);
		// terrain.SetHeights(0, 0, generateHeights());
		TerrainData_tAD3780D3C4DE5B9BE122BECE6D08C4AE169ED2A4 * L_7 = ___terrain0;
		SingleU5BU2CU5D_tC8145CABE3D285E5B2969DB657D4DE43A135BB43* L_8;
		L_8 = terrainGenerator_generateHeights_m2F9308972A1C8CCD05C55DDF90C306ED0A92C7C7(__this, /*hidden argument*/NULL);
		TerrainData_SetHeights_mB008164720CC8519F56BDA5B860FA358ED95B7AD(L_7, 0, 0, L_8, /*hidden argument*/NULL);
		// return terrain;
		TerrainData_tAD3780D3C4DE5B9BE122BECE6D08C4AE169ED2A4 * L_9 = ___terrain0;
		return L_9;
	}
}
// System.Single[0...,0...] terrainGenerator::generateHeights()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SingleU5BU2CU5D_tC8145CABE3D285E5B2969DB657D4DE43A135BB43* terrainGenerator_generateHeights_m2F9308972A1C8CCD05C55DDF90C306ED0A92C7C7 (terrainGenerator_tF54F9D96BC928A01556D8E58062DCF87544B186B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingleU5BU2CU5D_tC8145CABE3D285E5B2969DB657D4DE43A135BB43_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SingleU5BU2CU5D_tC8145CABE3D285E5B2969DB657D4DE43A135BB43* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		// float[,] heights = new float[width, height];
		int32_t L_0 = __this->get_width_4();
		int32_t L_1 = __this->get_height_5();
		il2cpp_array_size_t L_3[] = { (il2cpp_array_size_t)L_0, (il2cpp_array_size_t)L_1 };
		SingleU5BU2CU5D_tC8145CABE3D285E5B2969DB657D4DE43A135BB43* L_2 = (SingleU5BU2CU5D_tC8145CABE3D285E5B2969DB657D4DE43A135BB43*)GenArrayNew(SingleU5BU2CU5D_tC8145CABE3D285E5B2969DB657D4DE43A135BB43_il2cpp_TypeInfo_var, L_3);
		V_0 = L_2;
		// for (int x = 0; x < width; x++) {
		V_1 = 0;
		goto IL_003b;
	}

IL_0016:
	{
		// for (int y = 0; y < height; y++) {
		V_2 = 0;
		goto IL_002e;
	}

IL_001a:
	{
		// heights[x, y] = calcHeight(x, y);
		SingleU5BU2CU5D_tC8145CABE3D285E5B2969DB657D4DE43A135BB43* L_4 = V_0;
		int32_t L_5 = V_1;
		int32_t L_6 = V_2;
		int32_t L_7 = V_1;
		int32_t L_8 = V_2;
		float L_9;
		L_9 = terrainGenerator_calcHeight_mE98CC55487C3BB39055B86E75EDB06F2C88B8AD6(__this, L_7, L_8, /*hidden argument*/NULL);
		(L_4)->SetAtUnchecked(L_5, L_6, L_9);
		// for (int y = 0; y < height; y++) {
		int32_t L_10 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)1));
	}

IL_002e:
	{
		// for (int y = 0; y < height; y++) {
		int32_t L_11 = V_2;
		int32_t L_12 = __this->get_height_5();
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001a;
		}
	}
	{
		// for (int x = 0; x < width; x++) {
		int32_t L_13 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_13, (int32_t)1));
	}

IL_003b:
	{
		// for (int x = 0; x < width; x++) {
		int32_t L_14 = V_1;
		int32_t L_15 = __this->get_width_4();
		if ((((int32_t)L_14) < ((int32_t)L_15)))
		{
			goto IL_0016;
		}
	}
	{
		// return heights;
		SingleU5BU2CU5D_tC8145CABE3D285E5B2969DB657D4DE43A135BB43* L_16 = V_0;
		return L_16;
	}
}
// System.Single terrainGenerator::calcHeight(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float terrainGenerator_calcHeight_mE98CC55487C3BB39055B86E75EDB06F2C88B8AD6 (terrainGenerator_tF54F9D96BC928A01556D8E58062DCF87544B186B * __this, int32_t ___x0, int32_t ___y1, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		// float xCord = (float)x / width * scale + offsetX;
		int32_t L_0 = ___x0;
		int32_t L_1 = __this->get_width_4();
		float L_2 = __this->get_scale_7();
		float L_3 = __this->get_offsetX_8();
		// float yCord = (float)y / width * scale + offsetY;
		int32_t L_4 = ___y1;
		int32_t L_5 = __this->get_width_4();
		float L_6 = __this->get_scale_7();
		float L_7 = __this->get_offsetY_9();
		V_0 = ((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)((float)((float)((float)((float)L_4))/(float)((float)((float)L_5)))), (float)L_6)), (float)L_7));
		// return Mathf.PerlinNoise(xCord, yCord);
		float L_8 = V_0;
		float L_9;
		L_9 = Mathf_PerlinNoise_mBCF172821FEB8FAD7E7CF7F7982018846E702519(((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)((float)((float)((float)((float)L_0))/(float)((float)((float)L_1)))), (float)L_2)), (float)L_3)), L_8, /*hidden argument*/NULL);
		return L_9;
	}
}
// System.Void terrainGenerator::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void terrainGenerator__ctor_m1FFC1717BF811EC6DC35553F6738DC8CE489B0EE (terrainGenerator_tF54F9D96BC928A01556D8E58062DCF87544B186B * __this, const RuntimeMethod* method)
{
	{
		// public int width = 1000;
		__this->set_width_4(((int32_t)1000));
		// public int height = 1000;
		__this->set_height_5(((int32_t)1000));
		// public int depth = 20;
		__this->set_depth_6(((int32_t)20));
		// public float scale = 20f;
		__this->set_scale_7((20.0f));
		// public float offsetX = 100f;
		__this->set_offsetX_8((100.0f));
		// public float offsetY = 100f;
		__this->set_offsetY_9((100.0f));
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, float ___x0, float ___y1, const RuntimeMethod* method)
{
	{
		float L_0 = ___x0;
		__this->set_x_0(L_0);
		float L_1 = ___y1;
		__this->set_y_1(L_1);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method)
{
	{
		float L_0 = ___x0;
		__this->set_x_2(L_0);
		float L_1 = ___y1;
		__this->set_y_3(L_1);
		float L_2 = ___z2;
		__this->set_z_4(L_2);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, float ___d1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		float L_2 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = ___a0;
		float L_4 = L_3.get_y_3();
		float L_5 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___a0;
		float L_7 = L_6.get_z_4();
		float L_8 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_9), ((float)il2cpp_codegen_multiply((float)L_1, (float)L_2)), ((float)il2cpp_codegen_multiply((float)L_4, (float)L_5)), ((float)il2cpp_codegen_multiply((float)L_7, (float)L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___b1;
		float L_3 = L_2.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___a0;
		float L_5 = L_4.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___b1;
		float L_7 = L_6.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = ___a0;
		float L_9 = L_8.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = ___b1;
		float L_11 = L_10.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_12), ((float)il2cpp_codegen_add((float)L_1, (float)L_3)), ((float)il2cpp_codegen_add((float)L_5, (float)L_7)), ((float)il2cpp_codegen_add((float)L_9, (float)L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___v0, const RuntimeMethod* method)
{
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___v0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___v0;
		float L_3 = L_2.get_y_3();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_4), L_1, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_0015;
	}

IL_0015:
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float shipMovement_get_CurrentSpeed_m12AA7AF5FDED51A8AEE3480F336931B51B72CD43_inline (shipMovement_t24B9B843A8577B9D82BD0CCA80ED77E74CF079EE * __this, const RuntimeMethod* method)
{
	{
		// get { return currentSpeed; }
		float L_0 = __this->get_currentSpeed_6();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float shipMovement_get_AccelerationRate_m22022440F13D75AC5415CA83D2AC8A6FC0373BA9_inline (shipMovement_t24B9B843A8577B9D82BD0CCA80ED77E74CF079EE * __this, const RuntimeMethod* method)
{
	{
		// get { return accelerationRate; }
		float L_0 = __this->get_accelerationRate_7();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void shipMovement_set_CurrentSpeed_mE4E5D2F8A647B4B239C8CDB8A25562922B00A93D_inline (shipMovement_t24B9B843A8577B9D82BD0CCA80ED77E74CF079EE * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// set { currentSpeed = value; }
		float L_0 = ___value0;
		__this->set_currentSpeed_6(L_0);
		// set { currentSpeed = value; }
		return;
	}
}
