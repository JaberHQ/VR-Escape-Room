// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Escape_Room/StatueTriggerBox.h"
#include "Runtime/Engine/Classes/Engine/TimerHandle.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStatueTriggerBox() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_ATriggerBox();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTimerHandle();
ESCAPE_ROOM_API UClass* Z_Construct_UClass_AStatueTriggerBox();
ESCAPE_ROOM_API UClass* Z_Construct_UClass_AStatueTriggerBox_NoRegister();
UPackage* Z_Construct_UPackage__Script_Escape_Room();
// End Cross Module References

// Begin Class AStatueTriggerBox Function CheckAnswer
struct Z_Construct_UFunction_AStatueTriggerBox_CheckAnswer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "StatueTriggerBox.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AStatueTriggerBox_CheckAnswer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AStatueTriggerBox, nullptr, "CheckAnswer", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AStatueTriggerBox_CheckAnswer_Statics::Function_MetaDataParams), Z_Construct_UFunction_AStatueTriggerBox_CheckAnswer_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AStatueTriggerBox_CheckAnswer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AStatueTriggerBox_CheckAnswer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AStatueTriggerBox::execCheckAnswer)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CheckAnswer();
	P_NATIVE_END;
}
// End Class AStatueTriggerBox Function CheckAnswer

// Begin Class AStatueTriggerBox Function PlaceIntoBox
struct Z_Construct_UFunction_AStatueTriggerBox_PlaceIntoBox_Statics
{
	struct StatueTriggerBox_eventPlaceIntoBox_Parms
	{
		AActor* overlappedActor;
		AActor* otherActor;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "StatueTriggerBox.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_overlappedActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_otherActor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AStatueTriggerBox_PlaceIntoBox_Statics::NewProp_overlappedActor = { "overlappedActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StatueTriggerBox_eventPlaceIntoBox_Parms, overlappedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AStatueTriggerBox_PlaceIntoBox_Statics::NewProp_otherActor = { "otherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StatueTriggerBox_eventPlaceIntoBox_Parms, otherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AStatueTriggerBox_PlaceIntoBox_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AStatueTriggerBox_PlaceIntoBox_Statics::NewProp_overlappedActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AStatueTriggerBox_PlaceIntoBox_Statics::NewProp_otherActor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AStatueTriggerBox_PlaceIntoBox_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AStatueTriggerBox_PlaceIntoBox_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AStatueTriggerBox, nullptr, "PlaceIntoBox", nullptr, nullptr, Z_Construct_UFunction_AStatueTriggerBox_PlaceIntoBox_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AStatueTriggerBox_PlaceIntoBox_Statics::PropPointers), sizeof(Z_Construct_UFunction_AStatueTriggerBox_PlaceIntoBox_Statics::StatueTriggerBox_eventPlaceIntoBox_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AStatueTriggerBox_PlaceIntoBox_Statics::Function_MetaDataParams), Z_Construct_UFunction_AStatueTriggerBox_PlaceIntoBox_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AStatueTriggerBox_PlaceIntoBox_Statics::StatueTriggerBox_eventPlaceIntoBox_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AStatueTriggerBox_PlaceIntoBox()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AStatueTriggerBox_PlaceIntoBox_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AStatueTriggerBox::execPlaceIntoBox)
{
	P_GET_OBJECT(AActor,Z_Param_overlappedActor);
	P_GET_OBJECT(AActor,Z_Param_otherActor);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PlaceIntoBox(Z_Param_overlappedActor,Z_Param_otherActor);
	P_NATIVE_END;
}
// End Class AStatueTriggerBox Function PlaceIntoBox

// Begin Class AStatueTriggerBox Function SetRemovedFalse
struct Z_Construct_UFunction_AStatueTriggerBox_SetRemovedFalse_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "StatueTriggerBox.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AStatueTriggerBox_SetRemovedFalse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AStatueTriggerBox, nullptr, "SetRemovedFalse", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AStatueTriggerBox_SetRemovedFalse_Statics::Function_MetaDataParams), Z_Construct_UFunction_AStatueTriggerBox_SetRemovedFalse_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AStatueTriggerBox_SetRemovedFalse()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AStatueTriggerBox_SetRemovedFalse_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AStatueTriggerBox::execSetRemovedFalse)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetRemovedFalse();
	P_NATIVE_END;
}
// End Class AStatueTriggerBox Function SetRemovedFalse

// Begin Class AStatueTriggerBox
void AStatueTriggerBox::StaticRegisterNativesAStatueTriggerBox()
{
	UClass* Class = AStatueTriggerBox::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CheckAnswer", &AStatueTriggerBox::execCheckAnswer },
		{ "PlaceIntoBox", &AStatueTriggerBox::execPlaceIntoBox },
		{ "SetRemovedFalse", &AStatueTriggerBox::execSetRemovedFalse },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AStatueTriggerBox);
UClass* Z_Construct_UClass_AStatueTriggerBox_NoRegister()
{
	return AStatueTriggerBox::StaticClass();
}
struct Z_Construct_UClass_AStatueTriggerBox_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "StatueTriggerBox.h" },
		{ "ModuleRelativePath", "StatueTriggerBox.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_statues_MetaData[] = {
		{ "Category", "StatueTriggerBox" },
		{ "ModuleRelativePath", "StatueTriggerBox.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_removedTimerHandle_MetaData[] = {
		{ "ModuleRelativePath", "StatueTriggerBox.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_answer_MetaData[] = {
		{ "Category", "Answer" },
		{ "ModuleRelativePath", "StatueTriggerBox.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_present_MetaData[] = {
		{ "ModuleRelativePath", "StatueTriggerBox.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_statueAnswers_MetaData[] = {
		{ "ModuleRelativePath", "StatueTriggerBox.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_statues_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_statues;
	static const UECodeGen_Private::FStructPropertyParams NewProp_removedTimerHandle;
	static const UECodeGen_Private::FIntPropertyParams NewProp_answer;
	static void NewProp_present_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_present;
	static const UECodeGen_Private::FBoolPropertyParams NewProp_statueAnswers_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_statueAnswers;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AStatueTriggerBox_CheckAnswer, "CheckAnswer" }, // 916259255
		{ &Z_Construct_UFunction_AStatueTriggerBox_PlaceIntoBox, "PlaceIntoBox" }, // 2693767616
		{ &Z_Construct_UFunction_AStatueTriggerBox_SetRemovedFalse, "SetRemovedFalse" }, // 1816121846
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AStatueTriggerBox>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AStatueTriggerBox_Statics::NewProp_statues_Inner = { "statues", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AStatueTriggerBox_Statics::NewProp_statues = { "statues", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AStatueTriggerBox, statues), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_statues_MetaData), NewProp_statues_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AStatueTriggerBox_Statics::NewProp_removedTimerHandle = { "removedTimerHandle", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AStatueTriggerBox, removedTimerHandle), Z_Construct_UScriptStruct_FTimerHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_removedTimerHandle_MetaData), NewProp_removedTimerHandle_MetaData) }; // 756291145
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AStatueTriggerBox_Statics::NewProp_answer = { "answer", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AStatueTriggerBox, answer), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_answer_MetaData), NewProp_answer_MetaData) };
void Z_Construct_UClass_AStatueTriggerBox_Statics::NewProp_present_SetBit(void* Obj)
{
	((AStatueTriggerBox*)Obj)->present = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AStatueTriggerBox_Statics::NewProp_present = { "present", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AStatueTriggerBox), &Z_Construct_UClass_AStatueTriggerBox_Statics::NewProp_present_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_present_MetaData), NewProp_present_MetaData) };
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AStatueTriggerBox_Statics::NewProp_statueAnswers_Inner = { "statueAnswers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AStatueTriggerBox_Statics::NewProp_statueAnswers = { "statueAnswers", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AStatueTriggerBox, statueAnswers), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_statueAnswers_MetaData), NewProp_statueAnswers_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AStatueTriggerBox_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStatueTriggerBox_Statics::NewProp_statues_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStatueTriggerBox_Statics::NewProp_statues,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStatueTriggerBox_Statics::NewProp_removedTimerHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStatueTriggerBox_Statics::NewProp_answer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStatueTriggerBox_Statics::NewProp_present,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStatueTriggerBox_Statics::NewProp_statueAnswers_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStatueTriggerBox_Statics::NewProp_statueAnswers,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AStatueTriggerBox_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AStatueTriggerBox_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ATriggerBox,
	(UObject* (*)())Z_Construct_UPackage__Script_Escape_Room,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AStatueTriggerBox_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AStatueTriggerBox_Statics::ClassParams = {
	&AStatueTriggerBox::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AStatueTriggerBox_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AStatueTriggerBox_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AStatueTriggerBox_Statics::Class_MetaDataParams), Z_Construct_UClass_AStatueTriggerBox_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AStatueTriggerBox()
{
	if (!Z_Registration_Info_UClass_AStatueTriggerBox.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AStatueTriggerBox.OuterSingleton, Z_Construct_UClass_AStatueTriggerBox_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AStatueTriggerBox.OuterSingleton;
}
template<> ESCAPE_ROOM_API UClass* StaticClass<AStatueTriggerBox>()
{
	return AStatueTriggerBox::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AStatueTriggerBox);
AStatueTriggerBox::~AStatueTriggerBox() {}
// End Class AStatueTriggerBox

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Jaber_Documents_GitHub_VR_Escape_Room_Escape_Room_Source_Escape_Room_StatueTriggerBox_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AStatueTriggerBox, AStatueTriggerBox::StaticClass, TEXT("AStatueTriggerBox"), &Z_Registration_Info_UClass_AStatueTriggerBox, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AStatueTriggerBox), 3980483282U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Jaber_Documents_GitHub_VR_Escape_Room_Escape_Room_Source_Escape_Room_StatueTriggerBox_h_2001820102(TEXT("/Script/Escape_Room"),
	Z_CompiledInDeferFile_FID_Users_Jaber_Documents_GitHub_VR_Escape_Room_Escape_Room_Source_Escape_Room_StatueTriggerBox_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Jaber_Documents_GitHub_VR_Escape_Room_Escape_Room_Source_Escape_Room_StatueTriggerBox_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
