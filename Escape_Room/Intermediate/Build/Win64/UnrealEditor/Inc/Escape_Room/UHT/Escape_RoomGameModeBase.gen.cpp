// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Escape_Room/Escape_RoomGameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEscape_RoomGameModeBase() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
ESCAPE_ROOM_API UClass* Z_Construct_UClass_AEscape_RoomGameModeBase();
ESCAPE_ROOM_API UClass* Z_Construct_UClass_AEscape_RoomGameModeBase_NoRegister();
UPackage* Z_Construct_UPackage__Script_Escape_Room();
// End Cross Module References

// Begin Class AEscape_RoomGameModeBase
void AEscape_RoomGameModeBase::StaticRegisterNativesAEscape_RoomGameModeBase()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AEscape_RoomGameModeBase);
UClass* Z_Construct_UClass_AEscape_RoomGameModeBase_NoRegister()
{
	return AEscape_RoomGameModeBase::StaticClass();
}
struct Z_Construct_UClass_AEscape_RoomGameModeBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "Escape_RoomGameModeBase.h" },
		{ "ModuleRelativePath", "Escape_RoomGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemDB_MetaData[] = {
		{ "Category", "Escape_RoomGameModeBase" },
		{ "ModuleRelativePath", "Escape_RoomGameModeBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ItemDB;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEscape_RoomGameModeBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEscape_RoomGameModeBase_Statics::NewProp_ItemDB = { "ItemDB", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEscape_RoomGameModeBase, ItemDB), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemDB_MetaData), NewProp_ItemDB_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AEscape_RoomGameModeBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEscape_RoomGameModeBase_Statics::NewProp_ItemDB,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AEscape_RoomGameModeBase_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AEscape_RoomGameModeBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_Escape_Room,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AEscape_RoomGameModeBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AEscape_RoomGameModeBase_Statics::ClassParams = {
	&AEscape_RoomGameModeBase::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AEscape_RoomGameModeBase_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AEscape_RoomGameModeBase_Statics::PropPointers),
	0,
	0x009002ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AEscape_RoomGameModeBase_Statics::Class_MetaDataParams), Z_Construct_UClass_AEscape_RoomGameModeBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AEscape_RoomGameModeBase()
{
	if (!Z_Registration_Info_UClass_AEscape_RoomGameModeBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AEscape_RoomGameModeBase.OuterSingleton, Z_Construct_UClass_AEscape_RoomGameModeBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AEscape_RoomGameModeBase.OuterSingleton;
}
template<> ESCAPE_ROOM_API UClass* StaticClass<AEscape_RoomGameModeBase>()
{
	return AEscape_RoomGameModeBase::StaticClass();
}
AEscape_RoomGameModeBase::AEscape_RoomGameModeBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AEscape_RoomGameModeBase);
AEscape_RoomGameModeBase::~AEscape_RoomGameModeBase() {}
// End Class AEscape_RoomGameModeBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Jaber_Documents_GitHub_VR_Escape_Room_Escape_Room_Source_Escape_Room_Escape_RoomGameModeBase_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AEscape_RoomGameModeBase, AEscape_RoomGameModeBase::StaticClass, TEXT("AEscape_RoomGameModeBase"), &Z_Registration_Info_UClass_AEscape_RoomGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AEscape_RoomGameModeBase), 173046999U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Jaber_Documents_GitHub_VR_Escape_Room_Escape_Room_Source_Escape_Room_Escape_RoomGameModeBase_h_1100459262(TEXT("/Script/Escape_Room"),
	Z_CompiledInDeferFile_FID_Users_Jaber_Documents_GitHub_VR_Escape_Room_Escape_Room_Source_Escape_Room_Escape_RoomGameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Jaber_Documents_GitHub_VR_Escape_Room_Escape_Room_Source_Escape_Room_Escape_RoomGameModeBase_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
