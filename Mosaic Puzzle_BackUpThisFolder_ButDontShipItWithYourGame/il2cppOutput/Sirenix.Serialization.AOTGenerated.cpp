#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename T1, typename T2, typename T3>
struct VirtualActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R, typename T1>
struct VirtualFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};

// Sirenix.Serialization.ComplexTypeSerializer`1<TileColor[,]>
struct ComplexTypeSerializer_1_t68ED3DE5D757B90891D601272DE8515375835605;
// Sirenix.Serialization.ComplexTypeSerializer`1<TileShape[,]>
struct ComplexTypeSerializer_1_t718DF12778B396422EBD8D6DC16A7219A041812B;
// Sirenix.Serialization.ComplexTypeSerializer`1<System.Object>
struct ComplexTypeSerializer_1_tCFADED5CEF4AAA38D0FB34727CB6436B605B38A8;
// System.Collections.Generic.Dictionary`2<Sirenix.Serialization.ISerializationPolicy,Sirenix.Serialization.IFormatter`1<TileColor[,]>>
struct Dictionary_2_t60B4F080EEB65C8EEEA79CA8276DD76A737F2137;
// System.Collections.Generic.Dictionary`2<Sirenix.Serialization.ISerializationPolicy,Sirenix.Serialization.IFormatter`1<TileShape[,]>>
struct Dictionary_2_t954BA8DD505266B5AEFB4723BEC738AC1D3E2485;
// System.Collections.Generic.Dictionary`2<System.Type,Sirenix.Serialization.Serializer>
struct Dictionary_2_tFC542F52AF721FEF237136A160FE0EBB15A771CA;
// System.Collections.Generic.Dictionary`2<System.Type,System.Type>
struct Dictionary_2_t8BF76F08F2E28AE3B97CD39EBC7A0FE57398B1B0;
// Sirenix.Serialization.EnumSerializer`1<System.Int32Enum>
struct EnumSerializer_1_t06FE69B3F19EE7862025B6F9D1E3847F425D0733;
// Sirenix.Serialization.EnumSerializer`1<TileColor>
struct EnumSerializer_1_tEF22403A99AB91D3CA791ABEF5B435534284CBC8;
// Sirenix.Serialization.EnumSerializer`1<TileShape>
struct EnumSerializer_1_tE72CCA3141C094A38EC4F56BA148ACFF495CD3C4;
// Sirenix.Serialization.IFormatter`1<TileColor[,]>
struct IFormatter_1_t8A03E77DCD2FE01C317725A20B209952C9A58877;
// Sirenix.Serialization.IFormatter`1<TileShape[,]>
struct IFormatter_1_t490AC0ED8E19727433500E3BCB37DF5BE30DE7FA;
// Sirenix.Serialization.MultiDimensionalArrayFormatter`2<TileColor[,],TileColor>
struct MultiDimensionalArrayFormatter_2_tA8899743EFE8AB57AB65502E68F0F847EAA38A3E;
// Sirenix.Serialization.MultiDimensionalArrayFormatter`2<TileShape[,],TileShape>
struct MultiDimensionalArrayFormatter_2_t12643C7A4BE1CA5A6325BBF78FA3652FCED364FD;
// Sirenix.Serialization.MultiDimensionalArrayFormatter`2<System.Object,System.Int32Enum>
struct MultiDimensionalArrayFormatter_2_tE7EC38E6FC45E7D8A7A415A824D9A113B451E40B;
// Sirenix.Serialization.ReflectionFormatter`1<TileColor[,]>
struct ReflectionFormatter_1_t7597D4EDC4915E2A075625B2826C65606E4A6147;
// Sirenix.Serialization.ReflectionFormatter`1<TileShape[,]>
struct ReflectionFormatter_1_tB597C2B14B1F79560B355EE8EF1115B787A290CB;
// Sirenix.Serialization.ReflectionFormatter`1<System.Object>
struct ReflectionFormatter_1_tB6DAF53F6F410C9664F5960209ABDD85E507E2D8;
// Sirenix.Serialization.Serializer`1<TileColor>
struct Serializer_1_t51B639340BF6337342E0E05D82C1CBAB8B689C0E;
// Sirenix.Serialization.Serializer`1<TileShape>
struct Serializer_1_t6847C296B66D065739B1B624E3AFA0E61965139B;
// Sirenix.Serialization.BaseFormatter`1/SerializationCallback<TileColor[,]>[]
struct SerializationCallbackU5BU5D_tEFF652E5E07E38537738102DF116261F713A559F;
// Sirenix.Serialization.BaseFormatter`1/SerializationCallback<TileShape[,]>[]
struct SerializationCallbackU5BU5D_t42CC802CCD4552C11996969B9E6FA6197D7484F6;
// Sirenix.Serialization.ISerializationPolicy
struct ISerializationPolicy_t0C47BF78FD9B96AE6371585EAE63593988C2FA43;
// System.String
struct String_t;
// System.Type
struct Type_t;

IL2CPP_EXTERN_C RuntimeClass* ComplexTypeSerializer_1_t68ED3DE5D757B90891D601272DE8515375835605_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ComplexTypeSerializer_1_t718DF12778B396422EBD8D6DC16A7219A041812B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EnumSerializer_1_tE72CCA3141C094A38EC4F56BA148ACFF495CD3C4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EnumSerializer_1_tEF22403A99AB91D3CA791ABEF5B435534284CBC8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MultiDimensionalArrayFormatter_2_t12643C7A4BE1CA5A6325BBF78FA3652FCED364FD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MultiDimensionalArrayFormatter_2_tA8899743EFE8AB57AB65502E68F0F847EAA38A3E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ReflectionFormatter_1_t7597D4EDC4915E2A075625B2826C65606E4A6147_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ReflectionFormatter_1_tB597C2B14B1F79560B355EE8EF1115B787A290CB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C const RuntimeMethod* ComplexTypeSerializer_1__ctor_m6213E04A2F95AA97254930BE7A70E4007E7ACD30_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ComplexTypeSerializer_1__ctor_mE2C8CE3A35E61EE1D850AB2BEAFB83A7361688E3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EnumSerializer_1__ctor_m4D17C8ECC4CF6B8CD6AD6BCA37354199A009713A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EnumSerializer_1__ctor_mCC1340C406B44DF9933C35BE93EE41EE9EAFF882_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MultiDimensionalArrayFormatter_2__ctor_m7E0A57CC4617B5A5D050CA3F1303ED402E26DD46_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MultiDimensionalArrayFormatter_2__ctor_mE33441B8C973D0226DE9F9B834AAE5FA0CFCA222_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReflectionFormatter_1__ctor_m5876A7BC60A76B2BF086897195E679AD12AF3CA1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReflectionFormatter_1__ctor_mB47D50B2D3C9E53C0DEFD1FF254D0F76B8B4122F_RuntimeMethod_var;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t173B7B51E1BD4E21DB527508DCEFDA1073158A81 
{
};

// Sirenix.Serialization.BaseFormatter`1<TileColor[,]>
struct BaseFormatter_1_t095732D5E7811BDBD66A5B1477EBE0FD7BC055C6  : public RuntimeObject
{
};

struct BaseFormatter_1_t095732D5E7811BDBD66A5B1477EBE0FD7BC055C6_StaticFields
{
	// Sirenix.Serialization.BaseFormatter`1/SerializationCallback<T>[] Sirenix.Serialization.BaseFormatter`1::OnSerializingCallbacks
	SerializationCallbackU5BU5D_tEFF652E5E07E38537738102DF116261F713A559F* ___OnSerializingCallbacks_0;
	// Sirenix.Serialization.BaseFormatter`1/SerializationCallback<T>[] Sirenix.Serialization.BaseFormatter`1::OnSerializedCallbacks
	SerializationCallbackU5BU5D_tEFF652E5E07E38537738102DF116261F713A559F* ___OnSerializedCallbacks_1;
	// Sirenix.Serialization.BaseFormatter`1/SerializationCallback<T>[] Sirenix.Serialization.BaseFormatter`1::OnDeserializingCallbacks
	SerializationCallbackU5BU5D_tEFF652E5E07E38537738102DF116261F713A559F* ___OnDeserializingCallbacks_2;
	// Sirenix.Serialization.BaseFormatter`1/SerializationCallback<T>[] Sirenix.Serialization.BaseFormatter`1::OnDeserializedCallbacks
	SerializationCallbackU5BU5D_tEFF652E5E07E38537738102DF116261F713A559F* ___OnDeserializedCallbacks_3;
	// System.Boolean Sirenix.Serialization.BaseFormatter`1::IsValueType
	bool ___IsValueType_4;
	// System.Boolean Sirenix.Serialization.BaseFormatter`1::ImplementsISerializationCallbackReceiver
	bool ___ImplementsISerializationCallbackReceiver_5;
	// System.Boolean Sirenix.Serialization.BaseFormatter`1::ImplementsIDeserializationCallback
	bool ___ImplementsIDeserializationCallback_6;
	// System.Boolean Sirenix.Serialization.BaseFormatter`1::ImplementsIObjectReference
	bool ___ImplementsIObjectReference_7;
};

// Sirenix.Serialization.BaseFormatter`1<TileShape[,]>
struct BaseFormatter_1_t8ED2F8779045E917A4CCFB4677F963D48BEAA895  : public RuntimeObject
{
};

struct BaseFormatter_1_t8ED2F8779045E917A4CCFB4677F963D48BEAA895_StaticFields
{
	// Sirenix.Serialization.BaseFormatter`1/SerializationCallback<T>[] Sirenix.Serialization.BaseFormatter`1::OnSerializingCallbacks
	SerializationCallbackU5BU5D_t42CC802CCD4552C11996969B9E6FA6197D7484F6* ___OnSerializingCallbacks_0;
	// Sirenix.Serialization.BaseFormatter`1/SerializationCallback<T>[] Sirenix.Serialization.BaseFormatter`1::OnSerializedCallbacks
	SerializationCallbackU5BU5D_t42CC802CCD4552C11996969B9E6FA6197D7484F6* ___OnSerializedCallbacks_1;
	// Sirenix.Serialization.BaseFormatter`1/SerializationCallback<T>[] Sirenix.Serialization.BaseFormatter`1::OnDeserializingCallbacks
	SerializationCallbackU5BU5D_t42CC802CCD4552C11996969B9E6FA6197D7484F6* ___OnDeserializingCallbacks_2;
	// Sirenix.Serialization.BaseFormatter`1/SerializationCallback<T>[] Sirenix.Serialization.BaseFormatter`1::OnDeserializedCallbacks
	SerializationCallbackU5BU5D_t42CC802CCD4552C11996969B9E6FA6197D7484F6* ___OnDeserializedCallbacks_3;
	// System.Boolean Sirenix.Serialization.BaseFormatter`1::IsValueType
	bool ___IsValueType_4;
	// System.Boolean Sirenix.Serialization.BaseFormatter`1::ImplementsISerializationCallbackReceiver
	bool ___ImplementsISerializationCallbackReceiver_5;
	// System.Boolean Sirenix.Serialization.BaseFormatter`1::ImplementsIDeserializationCallback
	bool ___ImplementsIDeserializationCallback_6;
	// System.Boolean Sirenix.Serialization.BaseFormatter`1::ImplementsIObjectReference
	bool ___ImplementsIObjectReference_7;
};
struct Il2CppArrayBounds;

// Sirenix.Serialization.AOTGenerated.PreventCodeStrippingViaReferences
struct PreventCodeStrippingViaReferences_t73A6D17CC562E67E2D540453D45099F37AB84BCD  : public RuntimeObject
{
};

// Sirenix.Serialization.Serializer
struct Serializer_t6C6FF0C071058921A25F0197AEBE808891C78EDA  : public RuntimeObject
{
};

struct Serializer_t6C6FF0C071058921A25F0197AEBE808891C78EDA_StaticFields
{
	// System.Collections.Generic.Dictionary`2<System.Type,System.Type> Sirenix.Serialization.Serializer::PrimitiveReaderWriterTypes
	Dictionary_2_t8BF76F08F2E28AE3B97CD39EBC7A0FE57398B1B0* ___PrimitiveReaderWriterTypes_0;
	// System.Object Sirenix.Serialization.Serializer::LOCK
	RuntimeObject* ___LOCK_1;
	// System.Collections.Generic.Dictionary`2<System.Type,Sirenix.Serialization.Serializer> Sirenix.Serialization.Serializer::ReaderWriterCache
	Dictionary_2_tFC542F52AF721FEF237136A160FE0EBB15A771CA* ___ReaderWriterCache_2;
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// Sirenix.Serialization.MultiDimensionalArrayFormatter`2<TileColor[,],TileColor>
struct MultiDimensionalArrayFormatter_2_tA8899743EFE8AB57AB65502E68F0F847EAA38A3E  : public BaseFormatter_1_t095732D5E7811BDBD66A5B1477EBE0FD7BC055C6
{
};

struct MultiDimensionalArrayFormatter_2_tA8899743EFE8AB57AB65502E68F0F847EAA38A3E_StaticFields
{
	// System.Int32 Sirenix.Serialization.MultiDimensionalArrayFormatter`2::ArrayRank
	int32_t ___ArrayRank_10;
	// Sirenix.Serialization.Serializer`1<TElement> Sirenix.Serialization.MultiDimensionalArrayFormatter`2::ValueReaderWriter
	Serializer_1_t51B639340BF6337342E0E05D82C1CBAB8B689C0E* ___ValueReaderWriter_11;
};

// Sirenix.Serialization.MultiDimensionalArrayFormatter`2<TileShape[,],TileShape>
struct MultiDimensionalArrayFormatter_2_t12643C7A4BE1CA5A6325BBF78FA3652FCED364FD  : public BaseFormatter_1_t8ED2F8779045E917A4CCFB4677F963D48BEAA895
{
};

struct MultiDimensionalArrayFormatter_2_t12643C7A4BE1CA5A6325BBF78FA3652FCED364FD_StaticFields
{
	// System.Int32 Sirenix.Serialization.MultiDimensionalArrayFormatter`2::ArrayRank
	int32_t ___ArrayRank_10;
	// Sirenix.Serialization.Serializer`1<TElement> Sirenix.Serialization.MultiDimensionalArrayFormatter`2::ValueReaderWriter
	Serializer_1_t6847C296B66D065739B1B624E3AFA0E61965139B* ___ValueReaderWriter_11;
};

// Sirenix.Serialization.ReflectionFormatter`1<TileColor[,]>
struct ReflectionFormatter_1_t7597D4EDC4915E2A075625B2826C65606E4A6147  : public BaseFormatter_1_t095732D5E7811BDBD66A5B1477EBE0FD7BC055C6
{
	// Sirenix.Serialization.ISerializationPolicy Sirenix.Serialization.ReflectionFormatter`1::<OverridePolicy>k__BackingField
	RuntimeObject* ___U3COverridePolicyU3Ek__BackingField_8;
};

// Sirenix.Serialization.ReflectionFormatter`1<TileShape[,]>
struct ReflectionFormatter_1_tB597C2B14B1F79560B355EE8EF1115B787A290CB  : public BaseFormatter_1_t8ED2F8779045E917A4CCFB4677F963D48BEAA895
{
	// Sirenix.Serialization.ISerializationPolicy Sirenix.Serialization.ReflectionFormatter`1::<OverridePolicy>k__BackingField
	RuntimeObject* ___U3COverridePolicyU3Ek__BackingField_8;
};

// Sirenix.Serialization.Serializer`1<TileColor[,]>
struct Serializer_1_tB12A9FFE5B22F9FA7648076A988CEE144CB9D30F  : public Serializer_t6C6FF0C071058921A25F0197AEBE808891C78EDA
{
};

// Sirenix.Serialization.Serializer`1<TileShape[,]>
struct Serializer_1_tE14F8DA1E248BC4712BFC50D8DF4DCF4602D0E1B  : public Serializer_t6C6FF0C071058921A25F0197AEBE808891C78EDA
{
};

// Sirenix.Serialization.Serializer`1<TileColor>
struct Serializer_1_t51B639340BF6337342E0E05D82C1CBAB8B689C0E  : public Serializer_t6C6FF0C071058921A25F0197AEBE808891C78EDA
{
};

// Sirenix.Serialization.Serializer`1<TileShape>
struct Serializer_1_t6847C296B66D065739B1B624E3AFA0E61965139B  : public Serializer_t6C6FF0C071058921A25F0197AEBE808891C78EDA
{
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

// Sirenix.Serialization.ComplexTypeSerializer`1<TileColor[,]>
struct ComplexTypeSerializer_1_t68ED3DE5D757B90891D601272DE8515375835605  : public Serializer_1_tB12A9FFE5B22F9FA7648076A988CEE144CB9D30F
{
};

struct ComplexTypeSerializer_1_t68ED3DE5D757B90891D601272DE8515375835605_StaticFields
{
	// System.Boolean Sirenix.Serialization.ComplexTypeSerializer`1::ComplexTypeMayBeBoxedValueType
	bool ___ComplexTypeMayBeBoxedValueType_3;
	// System.Boolean Sirenix.Serialization.ComplexTypeSerializer`1::ComplexTypeIsAbstract
	bool ___ComplexTypeIsAbstract_4;
	// System.Boolean Sirenix.Serialization.ComplexTypeSerializer`1::ComplexTypeIsNullable
	bool ___ComplexTypeIsNullable_5;
	// System.Boolean Sirenix.Serialization.ComplexTypeSerializer`1::ComplexTypeIsValueType
	bool ___ComplexTypeIsValueType_6;
	// System.Type Sirenix.Serialization.ComplexTypeSerializer`1::TypeOf_T
	Type_t* ___TypeOf_T_7;
	// System.Boolean Sirenix.Serialization.ComplexTypeSerializer`1::AllowDeserializeInvalidDataForT
	bool ___AllowDeserializeInvalidDataForT_8;
	// System.Collections.Generic.Dictionary`2<Sirenix.Serialization.ISerializationPolicy,Sirenix.Serialization.IFormatter`1<T>> Sirenix.Serialization.ComplexTypeSerializer`1::FormattersByPolicy
	Dictionary_2_t60B4F080EEB65C8EEEA79CA8276DD76A737F2137* ___FormattersByPolicy_9;
	// System.Object Sirenix.Serialization.ComplexTypeSerializer`1::FormattersByPolicy_LOCK
	RuntimeObject* ___FormattersByPolicy_LOCK_10;
	// Sirenix.Serialization.ISerializationPolicy Sirenix.Serialization.ComplexTypeSerializer`1::UnityPolicy
	RuntimeObject* ___UnityPolicy_11;
	// Sirenix.Serialization.ISerializationPolicy Sirenix.Serialization.ComplexTypeSerializer`1::StrictPolicy
	RuntimeObject* ___StrictPolicy_12;
	// Sirenix.Serialization.ISerializationPolicy Sirenix.Serialization.ComplexTypeSerializer`1::EverythingPolicy
	RuntimeObject* ___EverythingPolicy_13;
	// Sirenix.Serialization.IFormatter`1<T> Sirenix.Serialization.ComplexTypeSerializer`1::UnityPolicyFormatter
	RuntimeObject* ___UnityPolicyFormatter_14;
	// Sirenix.Serialization.IFormatter`1<T> Sirenix.Serialization.ComplexTypeSerializer`1::StrictPolicyFormatter
	RuntimeObject* ___StrictPolicyFormatter_15;
	// Sirenix.Serialization.IFormatter`1<T> Sirenix.Serialization.ComplexTypeSerializer`1::EverythingPolicyFormatter
	RuntimeObject* ___EverythingPolicyFormatter_16;
};

// Sirenix.Serialization.ComplexTypeSerializer`1<TileShape[,]>
struct ComplexTypeSerializer_1_t718DF12778B396422EBD8D6DC16A7219A041812B  : public Serializer_1_tE14F8DA1E248BC4712BFC50D8DF4DCF4602D0E1B
{
};

struct ComplexTypeSerializer_1_t718DF12778B396422EBD8D6DC16A7219A041812B_StaticFields
{
	// System.Boolean Sirenix.Serialization.ComplexTypeSerializer`1::ComplexTypeMayBeBoxedValueType
	bool ___ComplexTypeMayBeBoxedValueType_3;
	// System.Boolean Sirenix.Serialization.ComplexTypeSerializer`1::ComplexTypeIsAbstract
	bool ___ComplexTypeIsAbstract_4;
	// System.Boolean Sirenix.Serialization.ComplexTypeSerializer`1::ComplexTypeIsNullable
	bool ___ComplexTypeIsNullable_5;
	// System.Boolean Sirenix.Serialization.ComplexTypeSerializer`1::ComplexTypeIsValueType
	bool ___ComplexTypeIsValueType_6;
	// System.Type Sirenix.Serialization.ComplexTypeSerializer`1::TypeOf_T
	Type_t* ___TypeOf_T_7;
	// System.Boolean Sirenix.Serialization.ComplexTypeSerializer`1::AllowDeserializeInvalidDataForT
	bool ___AllowDeserializeInvalidDataForT_8;
	// System.Collections.Generic.Dictionary`2<Sirenix.Serialization.ISerializationPolicy,Sirenix.Serialization.IFormatter`1<T>> Sirenix.Serialization.ComplexTypeSerializer`1::FormattersByPolicy
	Dictionary_2_t954BA8DD505266B5AEFB4723BEC738AC1D3E2485* ___FormattersByPolicy_9;
	// System.Object Sirenix.Serialization.ComplexTypeSerializer`1::FormattersByPolicy_LOCK
	RuntimeObject* ___FormattersByPolicy_LOCK_10;
	// Sirenix.Serialization.ISerializationPolicy Sirenix.Serialization.ComplexTypeSerializer`1::UnityPolicy
	RuntimeObject* ___UnityPolicy_11;
	// Sirenix.Serialization.ISerializationPolicy Sirenix.Serialization.ComplexTypeSerializer`1::StrictPolicy
	RuntimeObject* ___StrictPolicy_12;
	// Sirenix.Serialization.ISerializationPolicy Sirenix.Serialization.ComplexTypeSerializer`1::EverythingPolicy
	RuntimeObject* ___EverythingPolicy_13;
	// Sirenix.Serialization.IFormatter`1<T> Sirenix.Serialization.ComplexTypeSerializer`1::UnityPolicyFormatter
	RuntimeObject* ___UnityPolicyFormatter_14;
	// Sirenix.Serialization.IFormatter`1<T> Sirenix.Serialization.ComplexTypeSerializer`1::StrictPolicyFormatter
	RuntimeObject* ___StrictPolicyFormatter_15;
	// Sirenix.Serialization.IFormatter`1<T> Sirenix.Serialization.ComplexTypeSerializer`1::EverythingPolicyFormatter
	RuntimeObject* ___EverythingPolicyFormatter_16;
};

// Sirenix.Serialization.EnumSerializer`1<TileColor>
struct EnumSerializer_1_tEF22403A99AB91D3CA791ABEF5B435534284CBC8  : public Serializer_1_t51B639340BF6337342E0E05D82C1CBAB8B689C0E
{
};

// Sirenix.Serialization.EnumSerializer`1<TileShape>
struct EnumSerializer_1_tE72CCA3141C094A38EC4F56BA148ACFF495CD3C4  : public Serializer_1_t6847C296B66D065739B1B624E3AFA0E61965139B
{
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif


// System.Void Sirenix.Serialization.EnumSerializer`1<System.Int32Enum>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnumSerializer_1__ctor_mAC694703E716197B0BBD5CC3AD6CE13599A0CEBD_gshared (EnumSerializer_1_t06FE69B3F19EE7862025B6F9D1E3847F425D0733* __this, const RuntimeMethod* method) ;
// System.Void Sirenix.Serialization.MultiDimensionalArrayFormatter`2<System.Object,System.Int32Enum>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MultiDimensionalArrayFormatter_2__ctor_m4AF6D2E9C08BE036CED6B0284347B228C6E7F653_gshared (MultiDimensionalArrayFormatter_2_tE7EC38E6FC45E7D8A7A415A824D9A113B451E40B* __this, const RuntimeMethod* method) ;
// System.Void Sirenix.Serialization.ReflectionFormatter`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReflectionFormatter_1__ctor_mBEB4F353923A667045D79ACE70460FF2968B5EDE_gshared (ReflectionFormatter_1_tB6DAF53F6F410C9664F5960209ABDD85E507E2D8* __this, const RuntimeMethod* method) ;
// System.Void Sirenix.Serialization.ComplexTypeSerializer`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ComplexTypeSerializer_1__ctor_mAA16309B355AE0A4CA59971202DA063826030EBA_gshared (ComplexTypeSerializer_1_tCFADED5CEF4AAA38D0FB34727CB6436B605B38A8* __this, const RuntimeMethod* method) ;

// System.Void Sirenix.Serialization.EnumSerializer`1<TileColor>::.ctor()
inline void EnumSerializer_1__ctor_m4D17C8ECC4CF6B8CD6AD6BCA37354199A009713A (EnumSerializer_1_tEF22403A99AB91D3CA791ABEF5B435534284CBC8* __this, const RuntimeMethod* method)
{
	((  void (*) (EnumSerializer_1_tEF22403A99AB91D3CA791ABEF5B435534284CBC8*, const RuntimeMethod*))EnumSerializer_1__ctor_mAC694703E716197B0BBD5CC3AD6CE13599A0CEBD_gshared)(__this, method);
}
// System.Void Sirenix.Serialization.MultiDimensionalArrayFormatter`2<TileColor[,],TileColor>::.ctor()
inline void MultiDimensionalArrayFormatter_2__ctor_m7E0A57CC4617B5A5D050CA3F1303ED402E26DD46 (MultiDimensionalArrayFormatter_2_tA8899743EFE8AB57AB65502E68F0F847EAA38A3E* __this, const RuntimeMethod* method)
{
	((  void (*) (MultiDimensionalArrayFormatter_2_tA8899743EFE8AB57AB65502E68F0F847EAA38A3E*, const RuntimeMethod*))MultiDimensionalArrayFormatter_2__ctor_m4AF6D2E9C08BE036CED6B0284347B228C6E7F653_gshared)(__this, method);
}
// System.Void Sirenix.Serialization.ReflectionFormatter`1<TileColor[,]>::.ctor()
inline void ReflectionFormatter_1__ctor_mB47D50B2D3C9E53C0DEFD1FF254D0F76B8B4122F (ReflectionFormatter_1_t7597D4EDC4915E2A075625B2826C65606E4A6147* __this, const RuntimeMethod* method)
{
	((  void (*) (ReflectionFormatter_1_t7597D4EDC4915E2A075625B2826C65606E4A6147*, const RuntimeMethod*))ReflectionFormatter_1__ctor_mBEB4F353923A667045D79ACE70460FF2968B5EDE_gshared)(__this, method);
}
// System.Void Sirenix.Serialization.ComplexTypeSerializer`1<TileColor[,]>::.ctor()
inline void ComplexTypeSerializer_1__ctor_m6213E04A2F95AA97254930BE7A70E4007E7ACD30 (ComplexTypeSerializer_1_t68ED3DE5D757B90891D601272DE8515375835605* __this, const RuntimeMethod* method)
{
	((  void (*) (ComplexTypeSerializer_1_t68ED3DE5D757B90891D601272DE8515375835605*, const RuntimeMethod*))ComplexTypeSerializer_1__ctor_mAA16309B355AE0A4CA59971202DA063826030EBA_gshared)(__this, method);
}
// System.Void Sirenix.Serialization.EnumSerializer`1<TileShape>::.ctor()
inline void EnumSerializer_1__ctor_mCC1340C406B44DF9933C35BE93EE41EE9EAFF882 (EnumSerializer_1_tE72CCA3141C094A38EC4F56BA148ACFF495CD3C4* __this, const RuntimeMethod* method)
{
	((  void (*) (EnumSerializer_1_tE72CCA3141C094A38EC4F56BA148ACFF495CD3C4*, const RuntimeMethod*))EnumSerializer_1__ctor_mAC694703E716197B0BBD5CC3AD6CE13599A0CEBD_gshared)(__this, method);
}
// System.Void Sirenix.Serialization.MultiDimensionalArrayFormatter`2<TileShape[,],TileShape>::.ctor()
inline void MultiDimensionalArrayFormatter_2__ctor_mE33441B8C973D0226DE9F9B834AAE5FA0CFCA222 (MultiDimensionalArrayFormatter_2_t12643C7A4BE1CA5A6325BBF78FA3652FCED364FD* __this, const RuntimeMethod* method)
{
	((  void (*) (MultiDimensionalArrayFormatter_2_t12643C7A4BE1CA5A6325BBF78FA3652FCED364FD*, const RuntimeMethod*))MultiDimensionalArrayFormatter_2__ctor_m4AF6D2E9C08BE036CED6B0284347B228C6E7F653_gshared)(__this, method);
}
// System.Void Sirenix.Serialization.ReflectionFormatter`1<TileShape[,]>::.ctor()
inline void ReflectionFormatter_1__ctor_m5876A7BC60A76B2BF086897195E679AD12AF3CA1 (ReflectionFormatter_1_tB597C2B14B1F79560B355EE8EF1115B787A290CB* __this, const RuntimeMethod* method)
{
	((  void (*) (ReflectionFormatter_1_tB597C2B14B1F79560B355EE8EF1115B787A290CB*, const RuntimeMethod*))ReflectionFormatter_1__ctor_mBEB4F353923A667045D79ACE70460FF2968B5EDE_gshared)(__this, method);
}
// System.Void Sirenix.Serialization.ComplexTypeSerializer`1<TileShape[,]>::.ctor()
inline void ComplexTypeSerializer_1__ctor_mE2C8CE3A35E61EE1D850AB2BEAFB83A7361688E3 (ComplexTypeSerializer_1_t718DF12778B396422EBD8D6DC16A7219A041812B* __this, const RuntimeMethod* method)
{
	((  void (*) (ComplexTypeSerializer_1_t718DF12778B396422EBD8D6DC16A7219A041812B*, const RuntimeMethod*))ComplexTypeSerializer_1__ctor_mAA16309B355AE0A4CA59971202DA063826030EBA_gshared)(__this, method);
}
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
// System.Void Sirenix.Serialization.AOTGenerated.PreventCodeStrippingViaReferences::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PreventCodeStrippingViaReferences__cctor_m2299EBFF5769500E8639CDB151322A7B2C673EB6 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ComplexTypeSerializer_1__ctor_m6213E04A2F95AA97254930BE7A70E4007E7ACD30_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ComplexTypeSerializer_1__ctor_mE2C8CE3A35E61EE1D850AB2BEAFB83A7361688E3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ComplexTypeSerializer_1_t68ED3DE5D757B90891D601272DE8515375835605_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ComplexTypeSerializer_1_t718DF12778B396422EBD8D6DC16A7219A041812B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EnumSerializer_1__ctor_m4D17C8ECC4CF6B8CD6AD6BCA37354199A009713A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EnumSerializer_1__ctor_mCC1340C406B44DF9933C35BE93EE41EE9EAFF882_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EnumSerializer_1_tE72CCA3141C094A38EC4F56BA148ACFF495CD3C4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EnumSerializer_1_tEF22403A99AB91D3CA791ABEF5B435534284CBC8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MultiDimensionalArrayFormatter_2__ctor_m7E0A57CC4617B5A5D050CA3F1303ED402E26DD46_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MultiDimensionalArrayFormatter_2__ctor_mE33441B8C973D0226DE9F9B834AAE5FA0CFCA222_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MultiDimensionalArrayFormatter_2_t12643C7A4BE1CA5A6325BBF78FA3652FCED364FD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MultiDimensionalArrayFormatter_2_tA8899743EFE8AB57AB65502E68F0F847EAA38A3E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReflectionFormatter_1__ctor_m5876A7BC60A76B2BF086897195E679AD12AF3CA1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReflectionFormatter_1__ctor_mB47D50B2D3C9E53C0DEFD1FF254D0F76B8B4122F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReflectionFormatter_1_t7597D4EDC4915E2A075625B2826C65606E4A6147_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReflectionFormatter_1_tB597C2B14B1F79560B355EE8EF1115B787A290CB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	EnumSerializer_1_tEF22403A99AB91D3CA791ABEF5B435534284CBC8* G_B2_0 = NULL;
	EnumSerializer_1_tEF22403A99AB91D3CA791ABEF5B435534284CBC8* G_B1_0 = NULL;
	EnumSerializer_1_tE72CCA3141C094A38EC4F56BA148ACFF495CD3C4* G_B4_0 = NULL;
	EnumSerializer_1_tE72CCA3141C094A38EC4F56BA148ACFF495CD3C4* G_B3_0 = NULL;
	{
		V_0 = (bool)0;
		il2cpp_codegen_initobj((&V_1), sizeof(int32_t));
		EnumSerializer_1_tEF22403A99AB91D3CA791ABEF5B435534284CBC8* L_0 = (EnumSerializer_1_tEF22403A99AB91D3CA791ABEF5B435534284CBC8*)il2cpp_codegen_object_new(EnumSerializer_1_tEF22403A99AB91D3CA791ABEF5B435534284CBC8_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		EnumSerializer_1__ctor_m4D17C8ECC4CF6B8CD6AD6BCA37354199A009713A(L_0, EnumSerializer_1__ctor_m4D17C8ECC4CF6B8CD6AD6BCA37354199A009713A_RuntimeMethod_var);
		bool L_1 = V_0;
		G_B1_0 = L_0;
		if (!L_1)
		{
			G_B2_0 = L_0;
			goto IL_0026;
		}
	}
	{
		EnumSerializer_1_tEF22403A99AB91D3CA791ABEF5B435534284CBC8* L_2 = G_B1_0;
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = VirtualFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(4 /* System.Object Sirenix.Serialization.Serializer`1<TileColor>::ReadValueWeak(Sirenix.Serialization.IDataReader) */, L_2, (RuntimeObject*)NULL);
		EnumSerializer_1_tEF22403A99AB91D3CA791ABEF5B435534284CBC8* L_4 = L_2;
		NullCheck(L_4);
		VirtualActionInvoker3< String_t*, RuntimeObject*, RuntimeObject* >::Invoke(5 /* System.Void Sirenix.Serialization.Serializer`1<TileColor>::WriteValueWeak(System.String,System.Object,Sirenix.Serialization.IDataWriter) */, L_4, (String_t*)NULL, NULL, (RuntimeObject*)NULL);
		G_B2_0 = L_4;
	}

IL_0026:
	{
		MultiDimensionalArrayFormatter_2_tA8899743EFE8AB57AB65502E68F0F847EAA38A3E* L_5 = (MultiDimensionalArrayFormatter_2_tA8899743EFE8AB57AB65502E68F0F847EAA38A3E*)il2cpp_codegen_object_new(MultiDimensionalArrayFormatter_2_tA8899743EFE8AB57AB65502E68F0F847EAA38A3E_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		MultiDimensionalArrayFormatter_2__ctor_m7E0A57CC4617B5A5D050CA3F1303ED402E26DD46(L_5, MultiDimensionalArrayFormatter_2__ctor_m7E0A57CC4617B5A5D050CA3F1303ED402E26DD46_RuntimeMethod_var);
		MultiDimensionalArrayFormatter_2_tA8899743EFE8AB57AB65502E68F0F847EAA38A3E* L_6 = (MultiDimensionalArrayFormatter_2_tA8899743EFE8AB57AB65502E68F0F847EAA38A3E*)il2cpp_codegen_object_new(MultiDimensionalArrayFormatter_2_tA8899743EFE8AB57AB65502E68F0F847EAA38A3E_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		MultiDimensionalArrayFormatter_2__ctor_m7E0A57CC4617B5A5D050CA3F1303ED402E26DD46(L_6, MultiDimensionalArrayFormatter_2__ctor_m7E0A57CC4617B5A5D050CA3F1303ED402E26DD46_RuntimeMethod_var);
		ReflectionFormatter_1_t7597D4EDC4915E2A075625B2826C65606E4A6147* L_7 = (ReflectionFormatter_1_t7597D4EDC4915E2A075625B2826C65606E4A6147*)il2cpp_codegen_object_new(ReflectionFormatter_1_t7597D4EDC4915E2A075625B2826C65606E4A6147_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		ReflectionFormatter_1__ctor_mB47D50B2D3C9E53C0DEFD1FF254D0F76B8B4122F(L_7, ReflectionFormatter_1__ctor_mB47D50B2D3C9E53C0DEFD1FF254D0F76B8B4122F_RuntimeMethod_var);
		ComplexTypeSerializer_1_t68ED3DE5D757B90891D601272DE8515375835605* L_8 = (ComplexTypeSerializer_1_t68ED3DE5D757B90891D601272DE8515375835605*)il2cpp_codegen_object_new(ComplexTypeSerializer_1_t68ED3DE5D757B90891D601272DE8515375835605_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		ComplexTypeSerializer_1__ctor_m6213E04A2F95AA97254930BE7A70E4007E7ACD30(L_8, ComplexTypeSerializer_1__ctor_m6213E04A2F95AA97254930BE7A70E4007E7ACD30_RuntimeMethod_var);
		il2cpp_codegen_initobj((&V_2), sizeof(int32_t));
		EnumSerializer_1_tE72CCA3141C094A38EC4F56BA148ACFF495CD3C4* L_9 = (EnumSerializer_1_tE72CCA3141C094A38EC4F56BA148ACFF495CD3C4*)il2cpp_codegen_object_new(EnumSerializer_1_tE72CCA3141C094A38EC4F56BA148ACFF495CD3C4_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		EnumSerializer_1__ctor_mCC1340C406B44DF9933C35BE93EE41EE9EAFF882(L_9, EnumSerializer_1__ctor_mCC1340C406B44DF9933C35BE93EE41EE9EAFF882_RuntimeMethod_var);
		bool L_10 = V_0;
		G_B3_0 = L_9;
		if (!L_10)
		{
			G_B4_0 = L_9;
			goto IL_0063;
		}
	}
	{
		EnumSerializer_1_tE72CCA3141C094A38EC4F56BA148ACFF495CD3C4* L_11 = G_B3_0;
		NullCheck(L_11);
		RuntimeObject* L_12;
		L_12 = VirtualFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(4 /* System.Object Sirenix.Serialization.Serializer`1<TileShape>::ReadValueWeak(Sirenix.Serialization.IDataReader) */, L_11, (RuntimeObject*)NULL);
		EnumSerializer_1_tE72CCA3141C094A38EC4F56BA148ACFF495CD3C4* L_13 = L_11;
		NullCheck(L_13);
		VirtualActionInvoker3< String_t*, RuntimeObject*, RuntimeObject* >::Invoke(5 /* System.Void Sirenix.Serialization.Serializer`1<TileShape>::WriteValueWeak(System.String,System.Object,Sirenix.Serialization.IDataWriter) */, L_13, (String_t*)NULL, NULL, (RuntimeObject*)NULL);
		G_B4_0 = L_13;
	}

IL_0063:
	{
		MultiDimensionalArrayFormatter_2_t12643C7A4BE1CA5A6325BBF78FA3652FCED364FD* L_14 = (MultiDimensionalArrayFormatter_2_t12643C7A4BE1CA5A6325BBF78FA3652FCED364FD*)il2cpp_codegen_object_new(MultiDimensionalArrayFormatter_2_t12643C7A4BE1CA5A6325BBF78FA3652FCED364FD_il2cpp_TypeInfo_var);
		NullCheck(L_14);
		MultiDimensionalArrayFormatter_2__ctor_mE33441B8C973D0226DE9F9B834AAE5FA0CFCA222(L_14, MultiDimensionalArrayFormatter_2__ctor_mE33441B8C973D0226DE9F9B834AAE5FA0CFCA222_RuntimeMethod_var);
		MultiDimensionalArrayFormatter_2_t12643C7A4BE1CA5A6325BBF78FA3652FCED364FD* L_15 = (MultiDimensionalArrayFormatter_2_t12643C7A4BE1CA5A6325BBF78FA3652FCED364FD*)il2cpp_codegen_object_new(MultiDimensionalArrayFormatter_2_t12643C7A4BE1CA5A6325BBF78FA3652FCED364FD_il2cpp_TypeInfo_var);
		NullCheck(L_15);
		MultiDimensionalArrayFormatter_2__ctor_mE33441B8C973D0226DE9F9B834AAE5FA0CFCA222(L_15, MultiDimensionalArrayFormatter_2__ctor_mE33441B8C973D0226DE9F9B834AAE5FA0CFCA222_RuntimeMethod_var);
		ReflectionFormatter_1_tB597C2B14B1F79560B355EE8EF1115B787A290CB* L_16 = (ReflectionFormatter_1_tB597C2B14B1F79560B355EE8EF1115B787A290CB*)il2cpp_codegen_object_new(ReflectionFormatter_1_tB597C2B14B1F79560B355EE8EF1115B787A290CB_il2cpp_TypeInfo_var);
		NullCheck(L_16);
		ReflectionFormatter_1__ctor_m5876A7BC60A76B2BF086897195E679AD12AF3CA1(L_16, ReflectionFormatter_1__ctor_m5876A7BC60A76B2BF086897195E679AD12AF3CA1_RuntimeMethod_var);
		ComplexTypeSerializer_1_t718DF12778B396422EBD8D6DC16A7219A041812B* L_17 = (ComplexTypeSerializer_1_t718DF12778B396422EBD8D6DC16A7219A041812B*)il2cpp_codegen_object_new(ComplexTypeSerializer_1_t718DF12778B396422EBD8D6DC16A7219A041812B_il2cpp_TypeInfo_var);
		NullCheck(L_17);
		ComplexTypeSerializer_1__ctor_mE2C8CE3A35E61EE1D850AB2BEAFB83A7361688E3(L_17, ComplexTypeSerializer_1__ctor_mE2C8CE3A35E61EE1D850AB2BEAFB83A7361688E3_RuntimeMethod_var);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
