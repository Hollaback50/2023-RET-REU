// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GlitchyFPExample/GlitchyFPExampleCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGlitchyFPExampleCharacter() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
	GLITCHYFPEXAMPLE_API UClass* Z_Construct_UClass_AGlitchyFPExampleCharacter();
	GLITCHYFPEXAMPLE_API UClass* Z_Construct_UClass_AGlitchyFPExampleCharacter_NoRegister();
	UPackage* Z_Construct_UPackage__Script_GlitchyFPExample();
// End Cross Module References
	DEFINE_FUNCTION(AGlitchyFPExampleCharacter::execGetHasRifle)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetHasRifle();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGlitchyFPExampleCharacter::execSetHasRifle)
	{
		P_GET_UBOOL(Z_Param_bNewHasRifle);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetHasRifle(Z_Param_bNewHasRifle);
		P_NATIVE_END;
	}
	void AGlitchyFPExampleCharacter::StaticRegisterNativesAGlitchyFPExampleCharacter()
	{
		UClass* Class = AGlitchyFPExampleCharacter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetHasRifle", &AGlitchyFPExampleCharacter::execGetHasRifle },
			{ "SetHasRifle", &AGlitchyFPExampleCharacter::execSetHasRifle },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AGlitchyFPExampleCharacter_GetHasRifle_Statics
	{
		struct GlitchyFPExampleCharacter_eventGetHasRifle_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AGlitchyFPExampleCharacter_GetHasRifle_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GlitchyFPExampleCharacter_eventGetHasRifle_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AGlitchyFPExampleCharacter_GetHasRifle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GlitchyFPExampleCharacter_eventGetHasRifle_Parms), &Z_Construct_UFunction_AGlitchyFPExampleCharacter_GetHasRifle_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGlitchyFPExampleCharacter_GetHasRifle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGlitchyFPExampleCharacter_GetHasRifle_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGlitchyFPExampleCharacter_GetHasRifle_Statics::Function_MetaDataParams[] = {
		{ "Category", "Weapon" },
		{ "Comment", "/** Getter for the bool */" },
		{ "ModuleRelativePath", "GlitchyFPExampleCharacter.h" },
		{ "ToolTip", "Getter for the bool" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGlitchyFPExampleCharacter_GetHasRifle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGlitchyFPExampleCharacter, nullptr, "GetHasRifle", nullptr, nullptr, sizeof(Z_Construct_UFunction_AGlitchyFPExampleCharacter_GetHasRifle_Statics::GlitchyFPExampleCharacter_eventGetHasRifle_Parms), Z_Construct_UFunction_AGlitchyFPExampleCharacter_GetHasRifle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGlitchyFPExampleCharacter_GetHasRifle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGlitchyFPExampleCharacter_GetHasRifle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGlitchyFPExampleCharacter_GetHasRifle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGlitchyFPExampleCharacter_GetHasRifle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGlitchyFPExampleCharacter_GetHasRifle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGlitchyFPExampleCharacter_SetHasRifle_Statics
	{
		struct GlitchyFPExampleCharacter_eventSetHasRifle_Parms
		{
			bool bNewHasRifle;
		};
		static void NewProp_bNewHasRifle_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bNewHasRifle;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AGlitchyFPExampleCharacter_SetHasRifle_Statics::NewProp_bNewHasRifle_SetBit(void* Obj)
	{
		((GlitchyFPExampleCharacter_eventSetHasRifle_Parms*)Obj)->bNewHasRifle = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AGlitchyFPExampleCharacter_SetHasRifle_Statics::NewProp_bNewHasRifle = { "bNewHasRifle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GlitchyFPExampleCharacter_eventSetHasRifle_Parms), &Z_Construct_UFunction_AGlitchyFPExampleCharacter_SetHasRifle_Statics::NewProp_bNewHasRifle_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGlitchyFPExampleCharacter_SetHasRifle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGlitchyFPExampleCharacter_SetHasRifle_Statics::NewProp_bNewHasRifle,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGlitchyFPExampleCharacter_SetHasRifle_Statics::Function_MetaDataParams[] = {
		{ "Category", "Weapon" },
		{ "Comment", "/** Setter to set the bool */" },
		{ "ModuleRelativePath", "GlitchyFPExampleCharacter.h" },
		{ "ToolTip", "Setter to set the bool" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGlitchyFPExampleCharacter_SetHasRifle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGlitchyFPExampleCharacter, nullptr, "SetHasRifle", nullptr, nullptr, sizeof(Z_Construct_UFunction_AGlitchyFPExampleCharacter_SetHasRifle_Statics::GlitchyFPExampleCharacter_eventSetHasRifle_Parms), Z_Construct_UFunction_AGlitchyFPExampleCharacter_SetHasRifle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGlitchyFPExampleCharacter_SetHasRifle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGlitchyFPExampleCharacter_SetHasRifle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGlitchyFPExampleCharacter_SetHasRifle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGlitchyFPExampleCharacter_SetHasRifle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGlitchyFPExampleCharacter_SetHasRifle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGlitchyFPExampleCharacter);
	UClass* Z_Construct_UClass_AGlitchyFPExampleCharacter_NoRegister()
	{
		return AGlitchyFPExampleCharacter::StaticClass();
	}
	struct Z_Construct_UClass_AGlitchyFPExampleCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Mesh1P_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Mesh1P;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FirstPersonCameraComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FirstPersonCameraComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultMappingContext_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DefaultMappingContext;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_JumpAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_JumpAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MoveAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MoveAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LookAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LookAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHasRifle_MetaData[];
#endif
		static void NewProp_bHasRifle_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasRifle;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGlitchyFPExampleCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_GlitchyFPExample,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AGlitchyFPExampleCharacter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AGlitchyFPExampleCharacter_GetHasRifle, "GetHasRifle" }, // 2704748008
		{ &Z_Construct_UFunction_AGlitchyFPExampleCharacter_SetHasRifle, "SetHasRifle" }, // 1846323338
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGlitchyFPExampleCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "GlitchyFPExampleCharacter.h" },
		{ "ModuleRelativePath", "GlitchyFPExampleCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGlitchyFPExampleCharacter_Statics::NewProp_Mesh1P_MetaData[] = {
		{ "Category", "Mesh" },
		{ "Comment", "/** Pawn mesh: 1st person view (arms; seen only by self) */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "GlitchyFPExampleCharacter.h" },
		{ "ToolTip", "Pawn mesh: 1st person view (arms; seen only by self)" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGlitchyFPExampleCharacter_Statics::NewProp_Mesh1P = { "Mesh1P", nullptr, (EPropertyFlags)0x00400000000b0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AGlitchyFPExampleCharacter, Mesh1P), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGlitchyFPExampleCharacter_Statics::NewProp_Mesh1P_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGlitchyFPExampleCharacter_Statics::NewProp_Mesh1P_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGlitchyFPExampleCharacter_Statics::NewProp_FirstPersonCameraComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "Comment", "/** First person camera */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "GlitchyFPExampleCharacter.h" },
		{ "ToolTip", "First person camera" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGlitchyFPExampleCharacter_Statics::NewProp_FirstPersonCameraComponent = { "FirstPersonCameraComponent", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AGlitchyFPExampleCharacter, FirstPersonCameraComponent), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGlitchyFPExampleCharacter_Statics::NewProp_FirstPersonCameraComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGlitchyFPExampleCharacter_Statics::NewProp_FirstPersonCameraComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGlitchyFPExampleCharacter_Statics::NewProp_DefaultMappingContext_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "Comment", "/** MappingContext */" },
		{ "ModuleRelativePath", "GlitchyFPExampleCharacter.h" },
		{ "ToolTip", "MappingContext" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGlitchyFPExampleCharacter_Statics::NewProp_DefaultMappingContext = { "DefaultMappingContext", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AGlitchyFPExampleCharacter, DefaultMappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGlitchyFPExampleCharacter_Statics::NewProp_DefaultMappingContext_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGlitchyFPExampleCharacter_Statics::NewProp_DefaultMappingContext_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGlitchyFPExampleCharacter_Statics::NewProp_JumpAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "Comment", "/** Jump Input Action */" },
		{ "ModuleRelativePath", "GlitchyFPExampleCharacter.h" },
		{ "ToolTip", "Jump Input Action" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGlitchyFPExampleCharacter_Statics::NewProp_JumpAction = { "JumpAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AGlitchyFPExampleCharacter, JumpAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGlitchyFPExampleCharacter_Statics::NewProp_JumpAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGlitchyFPExampleCharacter_Statics::NewProp_JumpAction_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGlitchyFPExampleCharacter_Statics::NewProp_MoveAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "Comment", "/** Move Input Action */" },
		{ "ModuleRelativePath", "GlitchyFPExampleCharacter.h" },
		{ "ToolTip", "Move Input Action" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGlitchyFPExampleCharacter_Statics::NewProp_MoveAction = { "MoveAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AGlitchyFPExampleCharacter, MoveAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGlitchyFPExampleCharacter_Statics::NewProp_MoveAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGlitchyFPExampleCharacter_Statics::NewProp_MoveAction_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGlitchyFPExampleCharacter_Statics::NewProp_LookAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "Comment", "/** Look Input Action */" },
		{ "ModuleRelativePath", "GlitchyFPExampleCharacter.h" },
		{ "ToolTip", "Look Input Action" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGlitchyFPExampleCharacter_Statics::NewProp_LookAction = { "LookAction", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AGlitchyFPExampleCharacter, LookAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGlitchyFPExampleCharacter_Statics::NewProp_LookAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGlitchyFPExampleCharacter_Statics::NewProp_LookAction_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGlitchyFPExampleCharacter_Statics::NewProp_bHasRifle_MetaData[] = {
		{ "Category", "Weapon" },
		{ "Comment", "/** Bool for AnimBP to switch to another animation set */" },
		{ "ModuleRelativePath", "GlitchyFPExampleCharacter.h" },
		{ "ToolTip", "Bool for AnimBP to switch to another animation set" },
	};
#endif
	void Z_Construct_UClass_AGlitchyFPExampleCharacter_Statics::NewProp_bHasRifle_SetBit(void* Obj)
	{
		((AGlitchyFPExampleCharacter*)Obj)->bHasRifle = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AGlitchyFPExampleCharacter_Statics::NewProp_bHasRifle = { "bHasRifle", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AGlitchyFPExampleCharacter), &Z_Construct_UClass_AGlitchyFPExampleCharacter_Statics::NewProp_bHasRifle_SetBit, METADATA_PARAMS(Z_Construct_UClass_AGlitchyFPExampleCharacter_Statics::NewProp_bHasRifle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGlitchyFPExampleCharacter_Statics::NewProp_bHasRifle_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGlitchyFPExampleCharacter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGlitchyFPExampleCharacter_Statics::NewProp_Mesh1P,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGlitchyFPExampleCharacter_Statics::NewProp_FirstPersonCameraComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGlitchyFPExampleCharacter_Statics::NewProp_DefaultMappingContext,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGlitchyFPExampleCharacter_Statics::NewProp_JumpAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGlitchyFPExampleCharacter_Statics::NewProp_MoveAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGlitchyFPExampleCharacter_Statics::NewProp_LookAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGlitchyFPExampleCharacter_Statics::NewProp_bHasRifle,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGlitchyFPExampleCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGlitchyFPExampleCharacter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AGlitchyFPExampleCharacter_Statics::ClassParams = {
		&AGlitchyFPExampleCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AGlitchyFPExampleCharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AGlitchyFPExampleCharacter_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AGlitchyFPExampleCharacter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AGlitchyFPExampleCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGlitchyFPExampleCharacter()
	{
		if (!Z_Registration_Info_UClass_AGlitchyFPExampleCharacter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGlitchyFPExampleCharacter.OuterSingleton, Z_Construct_UClass_AGlitchyFPExampleCharacter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AGlitchyFPExampleCharacter.OuterSingleton;
	}
	template<> GLITCHYFPEXAMPLE_API UClass* StaticClass<AGlitchyFPExampleCharacter>()
	{
		return AGlitchyFPExampleCharacter::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGlitchyFPExampleCharacter);
	AGlitchyFPExampleCharacter::~AGlitchyFPExampleCharacter() {}
	struct Z_CompiledInDeferFile_FID_Users_gasma_OneDrive_Documents_Unreal_Projects_GlitchyFPExample_Source_GlitchyFPExample_GlitchyFPExampleCharacter_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_gasma_OneDrive_Documents_Unreal_Projects_GlitchyFPExample_Source_GlitchyFPExample_GlitchyFPExampleCharacter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AGlitchyFPExampleCharacter, AGlitchyFPExampleCharacter::StaticClass, TEXT("AGlitchyFPExampleCharacter"), &Z_Registration_Info_UClass_AGlitchyFPExampleCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGlitchyFPExampleCharacter), 2995213649U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_gasma_OneDrive_Documents_Unreal_Projects_GlitchyFPExample_Source_GlitchyFPExample_GlitchyFPExampleCharacter_h_1421899208(TEXT("/Script/GlitchyFPExample"),
		Z_CompiledInDeferFile_FID_Users_gasma_OneDrive_Documents_Unreal_Projects_GlitchyFPExample_Source_GlitchyFPExample_GlitchyFPExampleCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_gasma_OneDrive_Documents_Unreal_Projects_GlitchyFPExample_Source_GlitchyFPExample_GlitchyFPExampleCharacter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
