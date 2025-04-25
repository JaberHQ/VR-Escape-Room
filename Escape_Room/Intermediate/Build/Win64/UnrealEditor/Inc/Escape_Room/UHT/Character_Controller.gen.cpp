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
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
ESCAPE_ROOM_API UClass* Z_Construct_UClass_ACharacter_Controller();
ESCAPE_ROOM_API UClass* Z_Construct_UClass_ACharacter_Controller_NoRegister();
ESCAPE_ROOM_API UClass* Z_Construct_UClass_AItem_NoRegister();
ESCAPE_ROOM_API UScriptStruct* Z_Construct_UScriptStruct_FInventoryItem();
UPackage* Z_Construct_UPackage__Script_Escape_Room();
// End Cross Module References

// Begin ScriptStruct FInventoryItem
static_assert(std::is_polymorphic<FInventoryItem>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FInventoryItem cannot be polymorphic unless super FTableRowBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_InventoryItem;
class UScriptStruct* FInventoryItem::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_InventoryItem.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_InventoryItem.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInventoryItem, (UObject*)Z_Construct_UPackage__Script_Escape_Room(), TEXT("InventoryItem"));
	}
	return Z_Registration_Info_UScriptStruct_InventoryItem.OuterSingleton;
}
template<> ESCAPE_ROOM_API UScriptStruct* StaticStruct<FInventoryItem>()
{
	return FInventoryItem::StaticStruct();
}
struct Z_Construct_UScriptStruct_FInventoryItem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Character_Controller.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_itemID_MetaData[] = {
		{ "Category", "InventoryItem" },
		{ "ModuleRelativePath", "Character_Controller.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemToCompare_MetaData[] = {
		{ "Category", "InventoryItem" },
		{ "ModuleRelativePath", "Character_Controller.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_name_MetaData[] = {
		{ "Category", "InventoryItem" },
		{ "ModuleRelativePath", "Character_Controller.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_isVisible_MetaData[] = {
		{ "Category", "InventoryItem" },
		{ "ModuleRelativePath", "Character_Controller.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_image_MetaData[] = {
		{ "Category", "InventoryItem" },
		{ "ModuleRelativePath", "Character_Controller.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_itemID;
	static const UECodeGen_Private::FClassPropertyParams NewProp_ItemToCompare;
	static const UECodeGen_Private::FTextPropertyParams NewProp_name;
	static void NewProp_isVisible_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_isVisible;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_image;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInventoryItem>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FInventoryItem_Statics::NewProp_itemID = { "itemID", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInventoryItem, itemID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_itemID_MetaData), NewProp_itemID_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FInventoryItem_Statics::NewProp_ItemToCompare = { "ItemToCompare", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInventoryItem, ItemToCompare), Z_Construct_UClass_UClass, Z_Construct_UClass_AItem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemToCompare_MetaData), NewProp_ItemToCompare_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FInventoryItem_Statics::NewProp_name = { "name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInventoryItem, name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_name_MetaData), NewProp_name_MetaData) };
void Z_Construct_UScriptStruct_FInventoryItem_Statics::NewProp_isVisible_SetBit(void* Obj)
{
	((FInventoryItem*)Obj)->isVisible = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FInventoryItem_Statics::NewProp_isVisible = { "isVisible", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FInventoryItem), &Z_Construct_UScriptStruct_FInventoryItem_Statics::NewProp_isVisible_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_isVisible_MetaData), NewProp_isVisible_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FInventoryItem_Statics::NewProp_image = { "image", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInventoryItem, image), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_image_MetaData), NewProp_image_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInventoryItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryItem_Statics::NewProp_itemID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryItem_Statics::NewProp_ItemToCompare,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryItem_Statics::NewProp_name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryItem_Statics::NewProp_isVisible,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryItem_Statics::NewProp_image,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInventoryItem_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInventoryItem_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Escape_Room,
	Z_Construct_UScriptStruct_FTableRowBase,
	&NewStructOps,
	"InventoryItem",
	Z_Construct_UScriptStruct_FInventoryItem_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInventoryItem_Statics::PropPointers),
	sizeof(FInventoryItem),
	alignof(FInventoryItem),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInventoryItem_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FInventoryItem_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FInventoryItem()
{
	if (!Z_Registration_Info_UScriptStruct_InventoryItem.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_InventoryItem.InnerSingleton, Z_Construct_UScriptStruct_FInventoryItem_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_InventoryItem.InnerSingleton;
}
// End ScriptStruct FInventoryItem

// Begin Class ACharacter_Controller Function AddToInventory
struct Z_Construct_UFunction_ACharacter_Controller_AddToInventory_Statics
{
	struct Character_Controller_eventAddToInventory_Parms
	{
		FName itemID;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Utilities" },
		{ "ModuleRelativePath", "Character_Controller.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_itemID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ACharacter_Controller_AddToInventory_Statics::NewProp_itemID = { "itemID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Character_Controller_eventAddToInventory_Parms, itemID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACharacter_Controller_AddToInventory_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACharacter_Controller_AddToInventory_Statics::NewProp_itemID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACharacter_Controller_AddToInventory_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACharacter_Controller_AddToInventory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACharacter_Controller, nullptr, "AddToInventory", nullptr, nullptr, Z_Construct_UFunction_ACharacter_Controller_AddToInventory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACharacter_Controller_AddToInventory_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACharacter_Controller_AddToInventory_Statics::Character_Controller_eventAddToInventory_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACharacter_Controller_AddToInventory_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACharacter_Controller_AddToInventory_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ACharacter_Controller_AddToInventory_Statics::Character_Controller_eventAddToInventory_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ACharacter_Controller_AddToInventory()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACharacter_Controller_AddToInventory_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACharacter_Controller::execAddToInventory)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_itemID);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddToInventory(Z_Param_itemID);
	P_NATIVE_END;
}
// End Class ACharacter_Controller Function AddToInventory

// Begin Class ACharacter_Controller Function Collect
struct Z_Construct_UFunction_ACharacter_Controller_Collect_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Items" },
		{ "ModuleRelativePath", "Character_Controller.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACharacter_Controller_Collect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACharacter_Controller, nullptr, "Collect", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACharacter_Controller_Collect_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACharacter_Controller_Collect_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ACharacter_Controller_Collect()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACharacter_Controller_Collect_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACharacter_Controller::execCollect)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Collect();
	P_NATIVE_END;
}
// End Class ACharacter_Controller Function Collect

// Begin Class ACharacter_Controller Function GetRecentlyPickedUp
struct Z_Construct_UFunction_ACharacter_Controller_GetRecentlyPickedUp_Statics
{
	struct Character_Controller_eventGetRecentlyPickedUp_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Character_Controller.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_ACharacter_Controller_GetRecentlyPickedUp_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((Character_Controller_eventGetRecentlyPickedUp_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ACharacter_Controller_GetRecentlyPickedUp_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Character_Controller_eventGetRecentlyPickedUp_Parms), &Z_Construct_UFunction_ACharacter_Controller_GetRecentlyPickedUp_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACharacter_Controller_GetRecentlyPickedUp_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACharacter_Controller_GetRecentlyPickedUp_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACharacter_Controller_GetRecentlyPickedUp_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACharacter_Controller_GetRecentlyPickedUp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACharacter_Controller, nullptr, "GetRecentlyPickedUp", nullptr, nullptr, Z_Construct_UFunction_ACharacter_Controller_GetRecentlyPickedUp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACharacter_Controller_GetRecentlyPickedUp_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACharacter_Controller_GetRecentlyPickedUp_Statics::Character_Controller_eventGetRecentlyPickedUp_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACharacter_Controller_GetRecentlyPickedUp_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACharacter_Controller_GetRecentlyPickedUp_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ACharacter_Controller_GetRecentlyPickedUp_Statics::Character_Controller_eventGetRecentlyPickedUp_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ACharacter_Controller_GetRecentlyPickedUp()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACharacter_Controller_GetRecentlyPickedUp_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACharacter_Controller::execGetRecentlyPickedUp)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetRecentlyPickedUp();
	P_NATIVE_END;
}
// End Class ACharacter_Controller Function GetRecentlyPickedUp

// Begin Class ACharacter_Controller Function GetRecentlyRemoved
struct Z_Construct_UFunction_ACharacter_Controller_GetRecentlyRemoved_Statics
{
	struct Character_Controller_eventGetRecentlyRemoved_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Character_Controller.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_ACharacter_Controller_GetRecentlyRemoved_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((Character_Controller_eventGetRecentlyRemoved_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ACharacter_Controller_GetRecentlyRemoved_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Character_Controller_eventGetRecentlyRemoved_Parms), &Z_Construct_UFunction_ACharacter_Controller_GetRecentlyRemoved_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACharacter_Controller_GetRecentlyRemoved_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACharacter_Controller_GetRecentlyRemoved_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACharacter_Controller_GetRecentlyRemoved_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACharacter_Controller_GetRecentlyRemoved_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACharacter_Controller, nullptr, "GetRecentlyRemoved", nullptr, nullptr, Z_Construct_UFunction_ACharacter_Controller_GetRecentlyRemoved_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACharacter_Controller_GetRecentlyRemoved_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACharacter_Controller_GetRecentlyRemoved_Statics::Character_Controller_eventGetRecentlyRemoved_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACharacter_Controller_GetRecentlyRemoved_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACharacter_Controller_GetRecentlyRemoved_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ACharacter_Controller_GetRecentlyRemoved_Statics::Character_Controller_eventGetRecentlyRemoved_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ACharacter_Controller_GetRecentlyRemoved()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACharacter_Controller_GetRecentlyRemoved_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACharacter_Controller::execGetRecentlyRemoved)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetRecentlyRemoved();
	P_NATIVE_END;
}
// End Class ACharacter_Controller Function GetRecentlyRemoved

// Begin Class ACharacter_Controller Function InventoryMinus
struct Z_Construct_UFunction_ACharacter_Controller_InventoryMinus_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Character_Controller.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACharacter_Controller_InventoryMinus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACharacter_Controller, nullptr, "InventoryMinus", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACharacter_Controller_InventoryMinus_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACharacter_Controller_InventoryMinus_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ACharacter_Controller_InventoryMinus()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACharacter_Controller_InventoryMinus_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACharacter_Controller::execInventoryMinus)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->InventoryMinus();
	P_NATIVE_END;
}
// End Class ACharacter_Controller Function InventoryMinus

// Begin Class ACharacter_Controller Function InventoryPlus
struct Z_Construct_UFunction_ACharacter_Controller_InventoryPlus_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Character_Controller.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACharacter_Controller_InventoryPlus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACharacter_Controller, nullptr, "InventoryPlus", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACharacter_Controller_InventoryPlus_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACharacter_Controller_InventoryPlus_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ACharacter_Controller_InventoryPlus()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACharacter_Controller_InventoryPlus_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACharacter_Controller::execInventoryPlus)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->InventoryPlus();
	P_NATIVE_END;
}
// End Class ACharacter_Controller Function InventoryPlus

// Begin Class ACharacter_Controller Function RemoveFromInventory
struct Z_Construct_UFunction_ACharacter_Controller_RemoveFromInventory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Utilities" },
		{ "ModuleRelativePath", "Character_Controller.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACharacter_Controller_RemoveFromInventory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACharacter_Controller, nullptr, "RemoveFromInventory", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACharacter_Controller_RemoveFromInventory_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACharacter_Controller_RemoveFromInventory_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ACharacter_Controller_RemoveFromInventory()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACharacter_Controller_RemoveFromInventory_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACharacter_Controller::execRemoveFromInventory)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RemoveFromInventory();
	P_NATIVE_END;
}
// End Class ACharacter_Controller Function RemoveFromInventory

// Begin Class ACharacter_Controller Function Wielding
struct Z_Construct_UFunction_ACharacter_Controller_Wielding_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Character_Controller.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACharacter_Controller_Wielding_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACharacter_Controller, nullptr, "Wielding", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACharacter_Controller_Wielding_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACharacter_Controller_Wielding_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ACharacter_Controller_Wielding()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACharacter_Controller_Wielding_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACharacter_Controller::execWielding)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Wielding();
	P_NATIVE_END;
}
// End Class ACharacter_Controller Function Wielding

// Begin Class ACharacter_Controller
void ACharacter_Controller::StaticRegisterNativesACharacter_Controller()
{
	UClass* Class = ACharacter_Controller::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddToInventory", &ACharacter_Controller::execAddToInventory },
		{ "Collect", &ACharacter_Controller::execCollect },
		{ "GetRecentlyPickedUp", &ACharacter_Controller::execGetRecentlyPickedUp },
		{ "GetRecentlyRemoved", &ACharacter_Controller::execGetRecentlyRemoved },
		{ "InventoryMinus", &ACharacter_Controller::execInventoryMinus },
		{ "InventoryPlus", &ACharacter_Controller::execInventoryPlus },
		{ "RemoveFromInventory", &ACharacter_Controller::execRemoveFromInventory },
		{ "Wielding", &ACharacter_Controller::execWielding },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
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
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InteractionAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Character_Controller.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InventoryPlusAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Character_Controller.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InventoryMinusAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Character_Controller.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlacklightTriggerBoxActive_MetaData[] = {
		{ "Category", "Character_Controller" },
		{ "ModuleRelativePath", "Character_Controller.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RecentlyPickedUp_MetaData[] = {
		{ "Category", "Character_Controller" },
		{ "ModuleRelativePath", "Character_Controller.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RecentlyRemoved_MetaData[] = {
		{ "Category", "Character_Controller" },
		{ "ModuleRelativePath", "Character_Controller.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Wield_MetaData[] = {
		{ "Category", "Character_Controller" },
		{ "ModuleRelativePath", "Character_Controller.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Empty_MetaData[] = {
		{ "Category", "Character_Controller" },
		{ "ModuleRelativePath", "Character_Controller.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PickupableObjects_MetaData[] = {
		{ "Category", "Character_Controller" },
		{ "ModuleRelativePath", "Character_Controller.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WieldObjects_MetaData[] = {
		{ "Category", "Wielded Items" },
		{ "ModuleRelativePath", "Character_Controller.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InventoryItems_MetaData[] = {
		{ "Category", "Character_Controller" },
		{ "ModuleRelativePath", "Character_Controller.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InventoryIndex_MetaData[] = {
		{ "Category", "Character_Controller" },
		{ "ModuleRelativePath", "Character_Controller.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CollectionRange_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Character_Controller.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DefaultMappingContext;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LookAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MoveAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InteractionAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InventoryPlusAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InventoryMinusAction;
	static void NewProp_BlacklightTriggerBoxActive_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_BlacklightTriggerBoxActive;
	static void NewProp_RecentlyPickedUp_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_RecentlyPickedUp;
	static void NewProp_RecentlyRemoved_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_RecentlyRemoved;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Wield;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Empty;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PickupableObjects_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PickupableObjects;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WieldObjects_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_WieldObjects;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InventoryItems_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_InventoryItems;
	static const UECodeGen_Private::FIntPropertyParams NewProp_InventoryIndex;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CollectionRange;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ACharacter_Controller_AddToInventory, "AddToInventory" }, // 3133705795
		{ &Z_Construct_UFunction_ACharacter_Controller_Collect, "Collect" }, // 606619795
		{ &Z_Construct_UFunction_ACharacter_Controller_GetRecentlyPickedUp, "GetRecentlyPickedUp" }, // 514264100
		{ &Z_Construct_UFunction_ACharacter_Controller_GetRecentlyRemoved, "GetRecentlyRemoved" }, // 870791290
		{ &Z_Construct_UFunction_ACharacter_Controller_InventoryMinus, "InventoryMinus" }, // 2145119535
		{ &Z_Construct_UFunction_ACharacter_Controller_InventoryPlus, "InventoryPlus" }, // 3987128848
		{ &Z_Construct_UFunction_ACharacter_Controller_RemoveFromInventory, "RemoveFromInventory" }, // 4178838510
		{ &Z_Construct_UFunction_ACharacter_Controller_Wielding, "Wielding" }, // 99657819
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACharacter_Controller>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACharacter_Controller_Statics::NewProp_DefaultMappingContext = { "DefaultMappingContext", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACharacter_Controller, DefaultMappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultMappingContext_MetaData), NewProp_DefaultMappingContext_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACharacter_Controller_Statics::NewProp_LookAction = { "LookAction", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACharacter_Controller, LookAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LookAction_MetaData), NewProp_LookAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACharacter_Controller_Statics::NewProp_MoveAction = { "MoveAction", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACharacter_Controller, MoveAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoveAction_MetaData), NewProp_MoveAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACharacter_Controller_Statics::NewProp_InteractionAction = { "InteractionAction", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACharacter_Controller, InteractionAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InteractionAction_MetaData), NewProp_InteractionAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACharacter_Controller_Statics::NewProp_InventoryPlusAction = { "InventoryPlusAction", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACharacter_Controller, InventoryPlusAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InventoryPlusAction_MetaData), NewProp_InventoryPlusAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACharacter_Controller_Statics::NewProp_InventoryMinusAction = { "InventoryMinusAction", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACharacter_Controller, InventoryMinusAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InventoryMinusAction_MetaData), NewProp_InventoryMinusAction_MetaData) };
void Z_Construct_UClass_ACharacter_Controller_Statics::NewProp_BlacklightTriggerBoxActive_SetBit(void* Obj)
{
	((ACharacter_Controller*)Obj)->BlacklightTriggerBoxActive = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACharacter_Controller_Statics::NewProp_BlacklightTriggerBoxActive = { "BlacklightTriggerBoxActive", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ACharacter_Controller), &Z_Construct_UClass_ACharacter_Controller_Statics::NewProp_BlacklightTriggerBoxActive_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlacklightTriggerBoxActive_MetaData), NewProp_BlacklightTriggerBoxActive_MetaData) };
void Z_Construct_UClass_ACharacter_Controller_Statics::NewProp_RecentlyPickedUp_SetBit(void* Obj)
{
	((ACharacter_Controller*)Obj)->RecentlyPickedUp = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACharacter_Controller_Statics::NewProp_RecentlyPickedUp = { "RecentlyPickedUp", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ACharacter_Controller), &Z_Construct_UClass_ACharacter_Controller_Statics::NewProp_RecentlyPickedUp_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RecentlyPickedUp_MetaData), NewProp_RecentlyPickedUp_MetaData) };
void Z_Construct_UClass_ACharacter_Controller_Statics::NewProp_RecentlyRemoved_SetBit(void* Obj)
{
	((ACharacter_Controller*)Obj)->RecentlyRemoved = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACharacter_Controller_Statics::NewProp_RecentlyRemoved = { "RecentlyRemoved", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ACharacter_Controller), &Z_Construct_UClass_ACharacter_Controller_Statics::NewProp_RecentlyRemoved_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RecentlyRemoved_MetaData), NewProp_RecentlyRemoved_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ACharacter_Controller_Statics::NewProp_Wield = { "Wield", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACharacter_Controller, Wield), Z_Construct_UScriptStruct_FInventoryItem, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Wield_MetaData), NewProp_Wield_MetaData) }; // 2137917385
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ACharacter_Controller_Statics::NewProp_Empty = { "Empty", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACharacter_Controller, Empty), Z_Construct_UScriptStruct_FInventoryItem, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Empty_MetaData), NewProp_Empty_MetaData) }; // 2137917385
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ACharacter_Controller_Statics::NewProp_PickupableObjects_Inner = { "PickupableObjects", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FInventoryItem, METADATA_PARAMS(0, nullptr) }; // 2137917385
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ACharacter_Controller_Statics::NewProp_PickupableObjects = { "PickupableObjects", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACharacter_Controller, PickupableObjects), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PickupableObjects_MetaData), NewProp_PickupableObjects_MetaData) }; // 2137917385
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACharacter_Controller_Statics::NewProp_WieldObjects_Inner = { "WieldObjects", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ACharacter_Controller_Statics::NewProp_WieldObjects = { "WieldObjects", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACharacter_Controller, WieldObjects), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WieldObjects_MetaData), NewProp_WieldObjects_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ACharacter_Controller_Statics::NewProp_InventoryItems_Inner = { "InventoryItems", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FInventoryItem, METADATA_PARAMS(0, nullptr) }; // 2137917385
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ACharacter_Controller_Statics::NewProp_InventoryItems = { "InventoryItems", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACharacter_Controller, InventoryItems), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InventoryItems_MetaData), NewProp_InventoryItems_MetaData) }; // 2137917385
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ACharacter_Controller_Statics::NewProp_InventoryIndex = { "InventoryIndex", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACharacter_Controller, InventoryIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InventoryIndex_MetaData), NewProp_InventoryIndex_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACharacter_Controller_Statics::NewProp_CollectionRange = { "CollectionRange", nullptr, (EPropertyFlags)0x002008000008001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACharacter_Controller, CollectionRange), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CollectionRange_MetaData), NewProp_CollectionRange_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACharacter_Controller_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacter_Controller_Statics::NewProp_DefaultMappingContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacter_Controller_Statics::NewProp_LookAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacter_Controller_Statics::NewProp_MoveAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacter_Controller_Statics::NewProp_InteractionAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacter_Controller_Statics::NewProp_InventoryPlusAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacter_Controller_Statics::NewProp_InventoryMinusAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacter_Controller_Statics::NewProp_BlacklightTriggerBoxActive,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacter_Controller_Statics::NewProp_RecentlyPickedUp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacter_Controller_Statics::NewProp_RecentlyRemoved,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacter_Controller_Statics::NewProp_Wield,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacter_Controller_Statics::NewProp_Empty,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacter_Controller_Statics::NewProp_PickupableObjects_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacter_Controller_Statics::NewProp_PickupableObjects,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacter_Controller_Statics::NewProp_WieldObjects_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacter_Controller_Statics::NewProp_WieldObjects,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacter_Controller_Statics::NewProp_InventoryItems_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacter_Controller_Statics::NewProp_InventoryItems,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacter_Controller_Statics::NewProp_InventoryIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacter_Controller_Statics::NewProp_CollectionRange,
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
	FuncInfo,
	Z_Construct_UClass_ACharacter_Controller_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
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
struct Z_CompiledInDeferFile_FID_Users_Jaber_OneDrive_Documents_GitHub_VR_Escape_Room_Escape_Room_Source_Escape_Room_Character_Controller_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FInventoryItem::StaticStruct, Z_Construct_UScriptStruct_FInventoryItem_Statics::NewStructOps, TEXT("InventoryItem"), &Z_Registration_Info_UScriptStruct_InventoryItem, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInventoryItem), 2137917385U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ACharacter_Controller, ACharacter_Controller::StaticClass, TEXT("ACharacter_Controller"), &Z_Registration_Info_UClass_ACharacter_Controller, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACharacter_Controller), 937496186U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Jaber_OneDrive_Documents_GitHub_VR_Escape_Room_Escape_Room_Source_Escape_Room_Character_Controller_h_1154685297(TEXT("/Script/Escape_Room"),
	Z_CompiledInDeferFile_FID_Users_Jaber_OneDrive_Documents_GitHub_VR_Escape_Room_Escape_Room_Source_Escape_Room_Character_Controller_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Jaber_OneDrive_Documents_GitHub_VR_Escape_Room_Escape_Room_Source_Escape_Room_Character_Controller_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Users_Jaber_OneDrive_Documents_GitHub_VR_Escape_Room_Escape_Room_Source_Escape_Room_Character_Controller_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Jaber_OneDrive_Documents_GitHub_VR_Escape_Room_Escape_Room_Source_Escape_Room_Character_Controller_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
