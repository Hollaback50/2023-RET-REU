// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GlitchyFPExample/GlitchyFPExampleGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGlitchyFPExampleGameMode() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	GLITCHYFPEXAMPLE_API UClass* Z_Construct_UClass_AGlitchyFPExampleGameMode();
	GLITCHYFPEXAMPLE_API UClass* Z_Construct_UClass_AGlitchyFPExampleGameMode_NoRegister();
	UPackage* Z_Construct_UPackage__Script_GlitchyFPExample();
// End Cross Module References
	void AGlitchyFPExampleGameMode::StaticRegisterNativesAGlitchyFPExampleGameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGlitchyFPExampleGameMode);
	UClass* Z_Construct_UClass_AGlitchyFPExampleGameMode_NoRegister()
	{
		return AGlitchyFPExampleGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AGlitchyFPExampleGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGlitchyFPExampleGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_GlitchyFPExample,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGlitchyFPExampleGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "GlitchyFPExampleGameMode.h" },
		{ "ModuleRelativePath", "GlitchyFPExampleGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGlitchyFPExampleGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGlitchyFPExampleGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AGlitchyFPExampleGameMode_Statics::ClassParams = {
		&AGlitchyFPExampleGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_AGlitchyFPExampleGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AGlitchyFPExampleGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGlitchyFPExampleGameMode()
	{
		if (!Z_Registration_Info_UClass_AGlitchyFPExampleGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGlitchyFPExampleGameMode.OuterSingleton, Z_Construct_UClass_AGlitchyFPExampleGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AGlitchyFPExampleGameMode.OuterSingleton;
	}
	template<> GLITCHYFPEXAMPLE_API UClass* StaticClass<AGlitchyFPExampleGameMode>()
	{
		return AGlitchyFPExampleGameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGlitchyFPExampleGameMode);
	AGlitchyFPExampleGameMode::~AGlitchyFPExampleGameMode() {}
	struct Z_CompiledInDeferFile_FID_Users_gasma_OneDrive_Documents_Unreal_Projects_GlitchyFPExample_Source_GlitchyFPExample_GlitchyFPExampleGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_gasma_OneDrive_Documents_Unreal_Projects_GlitchyFPExample_Source_GlitchyFPExample_GlitchyFPExampleGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AGlitchyFPExampleGameMode, AGlitchyFPExampleGameMode::StaticClass, TEXT("AGlitchyFPExampleGameMode"), &Z_Registration_Info_UClass_AGlitchyFPExampleGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGlitchyFPExampleGameMode), 4110257436U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_gasma_OneDrive_Documents_Unreal_Projects_GlitchyFPExample_Source_GlitchyFPExample_GlitchyFPExampleGameMode_h_1643111385(TEXT("/Script/GlitchyFPExample"),
		Z_CompiledInDeferFile_FID_Users_gasma_OneDrive_Documents_Unreal_Projects_GlitchyFPExample_Source_GlitchyFPExample_GlitchyFPExampleGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_gasma_OneDrive_Documents_Unreal_Projects_GlitchyFPExample_Source_GlitchyFPExample_GlitchyFPExampleGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
