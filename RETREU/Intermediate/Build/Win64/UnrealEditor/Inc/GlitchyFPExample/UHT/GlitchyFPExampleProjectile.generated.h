// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GlitchyFPExampleProjectile.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef GLITCHYFPEXAMPLE_GlitchyFPExampleProjectile_generated_h
#error "GlitchyFPExampleProjectile.generated.h already included, missing '#pragma once' in GlitchyFPExampleProjectile.h"
#endif
#define GLITCHYFPEXAMPLE_GlitchyFPExampleProjectile_generated_h

#define FID_Users_gasma_OneDrive_Documents_Unreal_Projects_GlitchyFPExample_Source_GlitchyFPExample_GlitchyFPExampleProjectile_h_15_SPARSE_DATA
#define FID_Users_gasma_OneDrive_Documents_Unreal_Projects_GlitchyFPExample_Source_GlitchyFPExample_GlitchyFPExampleProjectile_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit);


#define FID_Users_gasma_OneDrive_Documents_Unreal_Projects_GlitchyFPExample_Source_GlitchyFPExample_GlitchyFPExampleProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit);


#define FID_Users_gasma_OneDrive_Documents_Unreal_Projects_GlitchyFPExample_Source_GlitchyFPExample_GlitchyFPExampleProjectile_h_15_ACCESSORS
#define FID_Users_gasma_OneDrive_Documents_Unreal_Projects_GlitchyFPExample_Source_GlitchyFPExample_GlitchyFPExampleProjectile_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGlitchyFPExampleProjectile(); \
	friend struct Z_Construct_UClass_AGlitchyFPExampleProjectile_Statics; \
public: \
	DECLARE_CLASS(AGlitchyFPExampleProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GlitchyFPExample"), NO_API) \
	DECLARE_SERIALIZER(AGlitchyFPExampleProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_Users_gasma_OneDrive_Documents_Unreal_Projects_GlitchyFPExample_Source_GlitchyFPExample_GlitchyFPExampleProjectile_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAGlitchyFPExampleProjectile(); \
	friend struct Z_Construct_UClass_AGlitchyFPExampleProjectile_Statics; \
public: \
	DECLARE_CLASS(AGlitchyFPExampleProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GlitchyFPExample"), NO_API) \
	DECLARE_SERIALIZER(AGlitchyFPExampleProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_Users_gasma_OneDrive_Documents_Unreal_Projects_GlitchyFPExample_Source_GlitchyFPExample_GlitchyFPExampleProjectile_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AGlitchyFPExampleProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AGlitchyFPExampleProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGlitchyFPExampleProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGlitchyFPExampleProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGlitchyFPExampleProjectile(AGlitchyFPExampleProjectile&&); \
	NO_API AGlitchyFPExampleProjectile(const AGlitchyFPExampleProjectile&); \
public: \
	NO_API virtual ~AGlitchyFPExampleProjectile();


#define FID_Users_gasma_OneDrive_Documents_Unreal_Projects_GlitchyFPExample_Source_GlitchyFPExample_GlitchyFPExampleProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGlitchyFPExampleProjectile(AGlitchyFPExampleProjectile&&); \
	NO_API AGlitchyFPExampleProjectile(const AGlitchyFPExampleProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGlitchyFPExampleProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGlitchyFPExampleProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AGlitchyFPExampleProjectile) \
	NO_API virtual ~AGlitchyFPExampleProjectile();


#define FID_Users_gasma_OneDrive_Documents_Unreal_Projects_GlitchyFPExample_Source_GlitchyFPExample_GlitchyFPExampleProjectile_h_12_PROLOG
#define FID_Users_gasma_OneDrive_Documents_Unreal_Projects_GlitchyFPExample_Source_GlitchyFPExample_GlitchyFPExampleProjectile_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_gasma_OneDrive_Documents_Unreal_Projects_GlitchyFPExample_Source_GlitchyFPExample_GlitchyFPExampleProjectile_h_15_SPARSE_DATA \
	FID_Users_gasma_OneDrive_Documents_Unreal_Projects_GlitchyFPExample_Source_GlitchyFPExample_GlitchyFPExampleProjectile_h_15_RPC_WRAPPERS \
	FID_Users_gasma_OneDrive_Documents_Unreal_Projects_GlitchyFPExample_Source_GlitchyFPExample_GlitchyFPExampleProjectile_h_15_ACCESSORS \
	FID_Users_gasma_OneDrive_Documents_Unreal_Projects_GlitchyFPExample_Source_GlitchyFPExample_GlitchyFPExampleProjectile_h_15_INCLASS \
	FID_Users_gasma_OneDrive_Documents_Unreal_Projects_GlitchyFPExample_Source_GlitchyFPExample_GlitchyFPExampleProjectile_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Users_gasma_OneDrive_Documents_Unreal_Projects_GlitchyFPExample_Source_GlitchyFPExample_GlitchyFPExampleProjectile_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_gasma_OneDrive_Documents_Unreal_Projects_GlitchyFPExample_Source_GlitchyFPExample_GlitchyFPExampleProjectile_h_15_SPARSE_DATA \
	FID_Users_gasma_OneDrive_Documents_Unreal_Projects_GlitchyFPExample_Source_GlitchyFPExample_GlitchyFPExampleProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_gasma_OneDrive_Documents_Unreal_Projects_GlitchyFPExample_Source_GlitchyFPExample_GlitchyFPExampleProjectile_h_15_ACCESSORS \
	FID_Users_gasma_OneDrive_Documents_Unreal_Projects_GlitchyFPExample_Source_GlitchyFPExample_GlitchyFPExampleProjectile_h_15_INCLASS_NO_PURE_DECLS \
	FID_Users_gasma_OneDrive_Documents_Unreal_Projects_GlitchyFPExample_Source_GlitchyFPExample_GlitchyFPExampleProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GLITCHYFPEXAMPLE_API UClass* StaticClass<class AGlitchyFPExampleProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_gasma_OneDrive_Documents_Unreal_Projects_GlitchyFPExample_Source_GlitchyFPExample_GlitchyFPExampleProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
