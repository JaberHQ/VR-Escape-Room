// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Escape_Room/BlacklightTriggerBox.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBlacklightTriggerBox() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_ATriggerBox();
ESCAPE_ROOM_API UClass* Z_Construct_UClass_ABlacklightTriggerBox();
ESCAPE_ROOM_API UClass* Z_Construct_UClass_ABlacklightTriggerBox_NoRegister();
UPackage* Z_Construct_UPackage__Script_Escape_Room();
// End Cross Module References

// Begin Class ABlacklightTriggerBox Function HasLeftPoster
struct Z_Construct_UFunction_ABlacklightTriggerBox_HasLeftPoster_Statics
{
	struct BlacklightTriggerBox_eventHasLeftPoster_Parms
	{
		AActor* overlappedActor;
		AActor* otherActor;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "BlacklightTriggerBox.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_overlappedActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_otherActor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABlacklightTriggerBox_HasLeftPoster_Statics::NewProp_overlappedActor = { "overlappedActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlacklightTriggerBox_eventHasLeftPoster_Parms, overlappedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABlacklightTriggerBox_HasLeftPoster_Statics::NewProp_otherActor = { "otherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlacklightTriggerBox_eventHasLeftPoster_Parms, otherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABlacklightTriggerBox_HasLeftPoster_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABlacklightTriggerBox_HasLeftPoster_Statics::NewProp_overlappedActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABlacklightTriggerBox_HasLeftPoster_Statics::NewProp_otherActor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABlacklightTriggerBox_HasLeftPoster_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABlacklightTriggerBox_HasLeftPoster_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABlacklightTriggerBox, nullptr, "HasLeftPoster", nullptr, nullptr, Z_Construct_UFunction_ABlacklightTriggerBox_HasLeftPoster_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABlacklightTriggerBox_HasLeftPoster_Statics::PropPointers), sizeof(Z_Construct_UFunction_ABlacklightTriggerBox_HasLeftPoster_Statics::BlacklightTriggerBox_eventHasLeftPoster_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABlacklightTriggerBox_HasLeftPoster_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABlacklightTriggerBox_HasLeftPoster_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ABlacklightTriggerBox_HasLeftPoster_Statics::BlacklightTriggerBox_eventHasLeftPoster_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ABlacklightTriggerBox_HasLeftPoster()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABlacklightTriggerBox_HasLeftPoster_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABlacklightTriggerBox::execHasLeftPoster)
{
	P_GET_OBJECT(AActor,Z_Param_overlappedActor);
	P_GET_OBJECT(AActor,Z_Param_otherActor);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HasLeftPoster(Z_Param_overlappedActor,Z_Param_otherActor);
	P_NATIVE_END;
}
// End Class ABlacklightTriggerBox Function HasLeftPoster

// Begin Class ABlacklightTriggerBox Function IsOverPoster
struct Z_Construct_UFunction_ABlacklightTriggerBox_IsOverPoster_Statics
{
	struct BlacklightTriggerBox_eventIsOverPoster_Parms
	{
		AActor* overlappedActor;
		AActor* otherActor;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "BlacklightTriggerBox.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_overlappedActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_otherActor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABlacklightTriggerBox_IsOverPoster_Statics::NewProp_overlappedActor = { "overlappedActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlacklightTriggerBox_eventIsOverPoster_Parms, overlappedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABlacklightTriggerBox_IsOverPoster_Statics::NewProp_otherActor = { "otherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlacklightTriggerBox_eventIsOverPoster_Parms, otherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABlacklightTriggerBox_IsOverPoster_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABlacklightTriggerBox_IsOverPoster_Statics::NewProp_overlappedActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABlacklightTriggerBox_IsOverPoster_Statics::NewProp_otherActor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABlacklightTriggerBox_IsOverPoster_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABlacklightTriggerBox_IsOverPoster_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABlacklightTriggerBox, nullptr, "IsOverPoster", nullptr, nullptr, Z_Construct_UFunction_ABlacklightTriggerBox_IsOverPoster_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABlacklightTriggerBox_IsOverPoster_Statics::PropPointers), sizeof(Z_Construct_UFunction_ABlacklightTriggerBox_IsOverPoster_Statics::BlacklightTriggerBox_eventIsOverPoster_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABlacklightTriggerBox_IsOverPoster_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABlacklightTriggerBox_IsOverPoster_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ABlacklightTriggerBox_IsOverPoster_Statics::BlacklightTriggerBox_eventIsOverPoster_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ABlacklightTriggerBox_IsOverPoster()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABlacklightTriggerBox_IsOverPoster_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABlacklightTriggerBox::execIsOverPoster)
{
	P_GET_OBJECT(AActor,Z_Param_overlappedActor);
	P_GET_OBJECT(AActor,Z_Param_otherActor);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->IsOverPoster(Z_Param_overlappedActor,Z_Param_otherActor);
	P_NATIVE_END;
}
// End Class ABlacklightTriggerBox Function IsOverPoster

// Begin Class ABlacklightTriggerBox
void ABlacklightTriggerBox::StaticRegisterNativesABlacklightTriggerBox()
{
	UClass* Class = ABlacklightTriggerBox::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "HasLeftPoster", &ABlacklightTriggerBox::execHasLeftPoster },
		{ "IsOverPoster", &ABlacklightTriggerBox::execIsOverPoster },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABlacklightTriggerBox);
UClass* Z_Construct_UClass_ABlacklightTriggerBox_NoRegister()
{
	return ABlacklightTriggerBox::StaticClass();
}
struct Z_Construct_UClass_ABlacklightTriggerBox_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "BlacklightTriggerBox.h" },
		{ "ModuleRelativePath", "BlacklightTriggerBox.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ABlacklightTriggerBox_HasLeftPoster, "HasLeftPoster" }, // 3186811015
		{ &Z_Construct_UFunction_ABlacklightTriggerBox_IsOverPoster, "IsOverPoster" }, // 795639501
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABlacklightTriggerBox>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ABlacklightTriggerBox_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ATriggerBox,
	(UObject* (*)())Z_Construct_UPackage__Script_Escape_Room,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABlacklightTriggerBox_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABlacklightTriggerBox_Statics::ClassParams = {
	&ABlacklightTriggerBox::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABlacklightTriggerBox_Statics::Class_MetaDataParams), Z_Construct_UClass_ABlacklightTriggerBox_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABlacklightTriggerBox()
{
	if (!Z_Registration_Info_UClass_ABlacklightTriggerBox.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABlacklightTriggerBox.OuterSingleton, Z_Construct_UClass_ABlacklightTriggerBox_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABlacklightTriggerBox.OuterSingleton;
}
template<> ESCAPE_ROOM_API UClass* StaticClass<ABlacklightTriggerBox>()
{
	return ABlacklightTriggerBox::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABlacklightTriggerBox);
ABlacklightTriggerBox::~ABlacklightTriggerBox() {}
// End Class ABlacklightTriggerBox

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Jaber_OneDrive_Documents_GitHub_VR_Escape_Room_Escape_Room_Source_Escape_Room_BlacklightTriggerBox_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABlacklightTriggerBox, ABlacklightTriggerBox::StaticClass, TEXT("ABlacklightTriggerBox"), &Z_Registration_Info_UClass_ABlacklightTriggerBox, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABlacklightTriggerBox), 2899879236U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Jaber_OneDrive_Documents_GitHub_VR_Escape_Room_Escape_Room_Source_Escape_Room_BlacklightTriggerBox_h_690463721(TEXT("/Script/Escape_Room"),
	Z_CompiledInDeferFile_FID_Users_Jaber_OneDrive_Documents_GitHub_VR_Escape_Room_Escape_Room_Source_Escape_Room_BlacklightTriggerBox_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Jaber_OneDrive_Documents_GitHub_VR_Escape_Room_Escape_Room_Source_Escape_Room_BlacklightTriggerBox_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
