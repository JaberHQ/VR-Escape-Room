// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Escape_Room/Character_Controller.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCharacter_Controller() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
ESCAPE_ROOM_API UClass* Z_Construct_UClass_ACharacter_Controller();
ESCAPE_ROOM_API UClass* Z_Construct_UClass_ACharacter_Controller_NoRegister();
UPackage* Z_Construct_UPackage__Script_Escape_Room();
// End Cross Module References

// Begin Class ACharacter_Controller
void ACharacter_Controller::StaticRegisterNativesACharacter_Controller()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACharacter_Controller);
UClass* Z_Construct_UClass_ACharacter_Controller_NoRegister()
{
	return ACharacter_Controller::StaticClass();
}
struct Z_Construct_UClass_ACharacter_Controller_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Character_Controller.h" },
		{ "ModuleRelativePath", "Character_Controller.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultMappingContext_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Character_Controller.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LookAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Character_Controller.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MoveAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Character_Controller.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DefaultMappingContext;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LookAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MoveAction;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACharacter_Controller>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACharacter_Controller_Statics::NewProp_DefaultMappingContext = { "DefaultMappingContext", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACharacter_Controller, DefaultMappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultMappingContext_MetaData), NewProp_DefaultMappingContext_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACharacter_Controller_Statics::NewProp_LookAction = { "LookAction", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACharacter_Controller, LookAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LookAction_MetaData), NewProp_LookAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACharacter_Controller_Statics::NewProp_MoveAction = { "MoveAction", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACharacter_Controller, MoveAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoveAction_MetaData), NewProp_MoveAction_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACharacter_Controller_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacter_Controller_Statics::NewProp_DefaultMappingContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacter_Controller_Statics::NewProp_LookAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacter_Controller_Statics::NewProp_MoveAction,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACharacter_Controller_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ACharacter_Controller_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_Escape_Room,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACharacter_Controller_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ACharacter_Controller_Statics::ClassParams = {
	&ACharacter_Controller::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ACharacter_Controller_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ACharacter_Controller_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACharacter_Controller_Statics::Class_MetaDataParams), Z_Construct_UClass_ACharacter_Controller_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ACharacter_Controller()
{
	if (!Z_Registration_Info_UClass_ACharacter_Controller.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACharacter_Controller.OuterSingleton, Z_Construct_UClass_ACharacter_Controller_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ACharacter_Controller.OuterSingleton;
}
template<> ESCAPE_ROOM_API UClass* StaticClass<ACharacter_Controller>()
{
	return ACharacter_Controller::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ACharacter_Controller);
ACharacter_Controller::~ACharacter_Controller() {}
// End Class ACharacter_Controller

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Jaber_Documents_GitHub_VR_Escape_Room_Escape_Room_Source_Escape_Room_Character_Controller_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ACharacter_Controller, ACharacter_Controller::StaticClass, TEXT("ACharacter_Controller"), &Z_Registration_Info_UClass_ACharacter_Controller, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACharacter_Controller), 1940031345U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Jaber_Documents_GitHub_VR_Escape_Room_Escape_Room_Source_Escape_Room_Character_Controller_h_644197435(TEXT("/Script/Escape_Room"),
	Z_CompiledInDeferFile_FID_Users_Jaber_Documents_GitHub_VR_Escape_Room_Escape_Room_Source_Escape_Room_Character_Controller_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Jaber_Documents_GitHub_VR_Escape_Room_Escape_Room_Source_Escape_Room_Character_Controller_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
