// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Item.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ESCAPE_ROOM_Item_generated_h
#error "Item.generated.h already included, missing '#pragma once' in Item.h"
#endif
#define ESCAPE_ROOM_Item_generated_h

#define FID_Users_Jaber_OneDrive_Documents_GitHub_VR_Escape_Room_Escape_Room_Source_Escape_Room_Item_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execTouched); \
	DECLARE_FUNCTION(execSetActive); \
	DECLARE_FUNCTION(execGetActive);


#define FID_Users_Jaber_OneDrive_Documents_GitHub_VR_Escape_Room_Escape_Room_Source_Escape_Room_Item_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAItem(); \
	friend struct Z_Construct_UClass_AItem_Statics; \
public: \
	DECLARE_CLASS(AItem, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Escape_Room"), NO_API) \
	DECLARE_SERIALIZER(AItem)


#define FID_Users_Jaber_OneDrive_Documents_GitHub_VR_Escape_Room_Escape_Room_Source_Escape_Room_Item_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AItem(AItem&&); \
	AItem(const AItem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AItem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AItem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AItem) \
	NO_API virtual ~AItem();


#define FID_Users_Jaber_OneDrive_Documents_GitHub_VR_Escape_Room_Escape_Room_Source_Escape_Room_Item_h_10_PROLOG
#define FID_Users_Jaber_OneDrive_Documents_GitHub_VR_Escape_Room_Escape_Room_Source_Escape_Room_Item_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Jaber_OneDrive_Documents_GitHub_VR_Escape_Room_Escape_Room_Source_Escape_Room_Item_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_Jaber_OneDrive_Documents_GitHub_VR_Escape_Room_Escape_Room_Source_Escape_Room_Item_h_13_INCLASS_NO_PURE_DECLS \
	FID_Users_Jaber_OneDrive_Documents_GitHub_VR_Escape_Room_Escape_Room_Source_Escape_Room_Item_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ESCAPE_ROOM_API UClass* StaticClass<class AItem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Jaber_OneDrive_Documents_GitHub_VR_Escape_Room_Escape_Room_Source_Escape_Room_Item_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
