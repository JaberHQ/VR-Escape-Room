// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Escape_Room/DoorRotator.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDoorRotator() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
ESCAPE_ROOM_API UClass* Z_Construct_UClass_ADoorRotator();
ESCAPE_ROOM_API UClass* Z_Construct_UClass_ADoorRotator_NoRegister();
UPackage* Z_Construct_UPackage__Script_Escape_Room();
// End Cross Module References

// Begin Class ADoorRotator Function CallAnimation
struct Z_Construct_UFunction_ADoorRotator_CallAnimation_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "DoorRotator.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADoorRotator_CallAnimation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADoorRotator, nullptr, "CallAnimation", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADoorRotator_CallAnimation_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADoorRotator_CallAnimation_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ADoorRotator_CallAnimation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADoorRotator_CallAnimation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ADoorRotator::execCallAnimation)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CallAnimation();
	P_NATIVE_END;
}
// End Class ADoorRotator Function CallAnimation

// Begin Class ADoorRotator Function UpdateRotation
struct Z_Construct_UFunction_ADoorRotator_UpdateRotation_Statics
{
	struct DoorRotator_eventUpdateRotation_Parms
	{
		float value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "DoorRotator.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ADoorRotator_UpdateRotation_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DoorRotator_eventUpdateRotation_Parms, value), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADoorRotator_UpdateRotation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADoorRotator_UpdateRotation_Statics::NewProp_value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ADoorRotator_UpdateRotation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADoorRotator_UpdateRotation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADoorRotator, nullptr, "UpdateRotation", nullptr, nullptr, Z_Construct_UFunction_ADoorRotator_UpdateRotation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADoorRotator_UpdateRotation_Statics::PropPointers), sizeof(Z_Construct_UFunction_ADoorRotator_UpdateRotation_Statics::DoorRotator_eventUpdateRotation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADoorRotator_UpdateRotation_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADoorRotator_UpdateRotation_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ADoorRotator_UpdateRotation_Statics::DoorRotator_eventUpdateRotation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ADoorRotator_UpdateRotation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADoorRotator_UpdateRotation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ADoorRotator::execUpdateRotation)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateRotation(Z_Param_value);
	P_NATIVE_END;
}
// End Class ADoorRotator Function UpdateRotation

// Begin Class ADoorRotator
void ADoorRotator::StaticRegisterNativesADoorRotator()
{
	UClass* Class = ADoorRotator::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CallAnimation", &ADoorRotator::execCallAnimation },
		{ "UpdateRotation", &ADoorRotator::execUpdateRotation },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ADoorRotator);
UClass* Z_Construct_UClass_ADoorRotator_NoRegister()
{
	return ADoorRotator::StaticClass();
}
struct Z_Construct_UClass_ADoorRotator_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "DoorRotator.h" },
		{ "ModuleRelativePath", "DoorRotator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[] = {
		{ "Category", "DoorRotator" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "DoorRotator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Anim_MetaData[] = {
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "DoorRotator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Angle_MetaData[] = {
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "DoorRotator.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Mesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Anim;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Angle;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ADoorRotator_CallAnimation, "CallAnimation" }, // 1287713805
		{ &Z_Construct_UFunction_ADoorRotator_UpdateRotation, "UpdateRotation" }, // 789209355
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADoorRotator>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADoorRotator_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADoorRotator, Mesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Mesh_MetaData), NewProp_Mesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADoorRotator_Statics::NewProp_Anim = { "Anim", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADoorRotator, Anim), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Anim_MetaData), NewProp_Anim_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADoorRotator_Statics::NewProp_Angle = { "Angle", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADoorRotator, Angle), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Angle_MetaData), NewProp_Angle_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADoorRotator_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADoorRotator_Statics::NewProp_Mesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADoorRotator_Statics::NewProp_Anim,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADoorRotator_Statics::NewProp_Angle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADoorRotator_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ADoorRotator_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Escape_Room,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADoorRotator_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ADoorRotator_Statics::ClassParams = {
	&ADoorRotator::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ADoorRotator_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ADoorRotator_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADoorRotator_Statics::Class_MetaDataParams), Z_Construct_UClass_ADoorRotator_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ADoorRotator()
{
	if (!Z_Registration_Info_UClass_ADoorRotator.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ADoorRotator.OuterSingleton, Z_Construct_UClass_ADoorRotator_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ADoorRotator.OuterSingleton;
}
template<> ESCAPE_ROOM_API UClass* StaticClass<ADoorRotator>()
{
	return ADoorRotator::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ADoorRotator);
ADoorRotator::~ADoorRotator() {}
// End Class ADoorRotator

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Jaber_Documents_GitHub_VR_Escape_Room_Escape_Room_Source_Escape_Room_DoorRotator_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ADoorRotator, ADoorRotator::StaticClass, TEXT("ADoorRotator"), &Z_Registration_Info_UClass_ADoorRotator, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADoorRotator), 3157386264U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Jaber_Documents_GitHub_VR_Escape_Room_Escape_Room_Source_Escape_Room_DoorRotator_h_3172779180(TEXT("/Script/Escape_Room"),
	Z_CompiledInDeferFile_FID_Users_Jaber_Documents_GitHub_VR_Escape_Room_Escape_Room_Source_Escape_Room_DoorRotator_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Jaber_Documents_GitHub_VR_Escape_Room_Escape_Room_Source_Escape_Room_DoorRotator_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
