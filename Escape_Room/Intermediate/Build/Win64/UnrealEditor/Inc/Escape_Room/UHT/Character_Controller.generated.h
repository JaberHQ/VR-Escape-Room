// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Character_Controller.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ESCAPE_ROOM_Character_Controller_generated_h
#error "Character_Controller.generated.h already included, missing '#pragma once' in Character_Controller.h"
#endif
#define ESCAPE_ROOM_Character_Controller_generated_h

#define FID_Users_Jaber_Documents_GitHub_VR_Escape_Room_Escape_Room_Source_Escape_Room_Character_Controller_h_24_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FInventoryItem_Statics; \
	ESCAPE_ROOM_API static class UScriptStruct* StaticStruct(); \
	typedef FTableRowBase Super;


template<> ESCAPE_ROOM_API UScriptStruct* StaticStruct<struct FInventoryItem>();

#define FID_Users_Jaber_Documents_GitHub_VR_Escape_Room_Escape_Room_Source_Escape_Room_Character_Controller_h_58_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execCheckAnswer); \
	DECLARE_FUNCTION(execGetRecentlyRemoved); \
	DECLARE_FUNCTION(execGetRecentlyPickedUp); \
	DECLARE_FUNCTION(execWielding); \
	DECLARE_FUNCTION(execRemoveFromInventory); \
	DECLARE_FUNCTION(execAddToInventory); \
	DECLARE_FUNCTION(execInventoryMinus); \
	DECLARE_FUNCTION(execInventoryPlus); \
	DECLARE_FUNCTION(execCollect);


#define FID_Users_Jaber_Documents_GitHub_VR_Escape_Room_Escape_Room_Source_Escape_Room_Character_Controller_h_58_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACharacter_Controller(); \
	friend struct Z_Construct_UClass_ACharacter_Controller_Statics; \
public: \
	DECLARE_CLASS(ACharacter_Controller, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Escape_Room"), NO_API) \
	DECLARE_SERIALIZER(ACharacter_Controller)


#define FID_Users_Jaber_Documents_GitHub_VR_Escape_Room_Escape_Room_Source_Escape_Room_Character_Controller_h_58_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ACharacter_Controller(ACharacter_Controller&&); \
	ACharacter_Controller(const ACharacter_Controller&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACharacter_Controller); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACharacter_Controller); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACharacter_Controller) \
	NO_API virtual ~ACharacter_Controller();


#define FID_Users_Jaber_Documents_GitHub_VR_Escape_Room_Escape_Room_Source_Escape_Room_Character_Controller_h_55_PROLOG
#define FID_Users_Jaber_Documents_GitHub_VR_Escape_Room_Escape_Room_Source_Escape_Room_Character_Controller_h_58_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Jaber_Documents_GitHub_VR_Escape_Room_Escape_Room_Source_Escape_Room_Character_Controller_h_58_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_Jaber_Documents_GitHub_VR_Escape_Room_Escape_Room_Source_Escape_Room_Character_Controller_h_58_INCLASS_NO_PURE_DECLS \
	FID_Users_Jaber_Documents_GitHub_VR_Escape_Room_Escape_Room_Source_Escape_Room_Character_Controller_h_58_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ESCAPE_ROOM_API UClass* StaticClass<class ACharacter_Controller>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Jaber_Documents_GitHub_VR_Escape_Room_Escape_Room_Source_Escape_Room_Character_Controller_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
