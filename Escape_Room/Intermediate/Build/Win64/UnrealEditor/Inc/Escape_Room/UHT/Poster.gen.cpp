// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Escape_Room/Poster.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePoster() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
ESCAPE_ROOM_API UClass* Z_Construct_UClass_APoster();
ESCAPE_ROOM_API UClass* Z_Construct_UClass_APoster_NoRegister();
UPackage* Z_Construct_UPackage__Script_Escape_Room();
// End Cross Module References

// Begin Class APoster
void APoster::StaticRegisterNativesAPoster()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APoster);
UClass* Z_Construct_UClass_APoster_NoRegister()
{
	return APoster::StaticClass();
}
struct Z_Construct_UClass_APoster_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Poster.h" },
		{ "ModuleRelativePath", "Poster.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemMesh_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Mesh" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Poster.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ItemMesh;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APoster>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APoster_Statics::NewProp_ItemMesh = { "ItemMesh", nullptr, (EPropertyFlags)0x004000000008001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APoster, ItemMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemMesh_MetaData), NewProp_ItemMesh_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APoster_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APoster_Statics::NewProp_ItemMesh,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APoster_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_APoster_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Escape_Room,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APoster_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_APoster_Statics::ClassParams = {
	&APoster::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_APoster_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_APoster_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APoster_Statics::Class_MetaDataParams), Z_Construct_UClass_APoster_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_APoster()
{
	if (!Z_Registration_Info_UClass_APoster.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APoster.OuterSingleton, Z_Construct_UClass_APoster_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_APoster.OuterSingleton;
}
template<> ESCAPE_ROOM_API UClass* StaticClass<APoster>()
{
	return APoster::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(APoster);
APoster::~APoster() {}
// End Class APoster

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Jaber_Documents_GitHub_VR_Escape_Room_Escape_Room_Source_Escape_Room_Poster_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_APoster, APoster::StaticClass, TEXT("APoster"), &Z_Registration_Info_UClass_APoster, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APoster), 873395480U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Jaber_Documents_GitHub_VR_Escape_Room_Escape_Room_Source_Escape_Room_Poster_h_1636343940(TEXT("/Script/Escape_Room"),
	Z_CompiledInDeferFile_FID_Users_Jaber_Documents_GitHub_VR_Escape_Room_Escape_Room_Source_Escape_Room_Poster_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Jaber_Documents_GitHub_VR_Escape_Room_Escape_Room_Source_Escape_Room_Poster_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
