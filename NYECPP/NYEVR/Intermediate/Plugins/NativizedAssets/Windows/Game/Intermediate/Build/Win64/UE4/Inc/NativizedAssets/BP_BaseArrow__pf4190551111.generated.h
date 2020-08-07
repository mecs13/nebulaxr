// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FVector;
struct FHitResult;
#ifdef NATIVIZEDASSETS_BP_BaseArrow__pf4190551111_generated_h
#error "BP_BaseArrow__pf4190551111.generated.h already included, missing '#pragma once' in BP_BaseArrow__pf4190551111.h"
#endif
#define NATIVIZEDASSETS_BP_BaseArrow__pf4190551111_generated_h

#define NYEVR_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BP_BaseArrow__pf4190551111_h_18_SPARSE_DATA
#define NYEVR_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BP_BaseArrow__pf4190551111_h_18_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execbpf__ReceiveHit__pf); \
	DECLARE_FUNCTION(execbpf__ReceiveBeginPlay__pf);


#define NYEVR_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BP_BaseArrow__pf4190551111_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execbpf__ReceiveHit__pf); \
	DECLARE_FUNCTION(execbpf__ReceiveBeginPlay__pf);


#define NYEVR_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BP_BaseArrow__pf4190551111_h_18_EVENT_PARMS \
	struct BP_BaseArrow_C__pf4190551111_eventbpf__ReceiveHit__pf_Parms \
	{ \
		UPrimitiveComponent* bpp__MyComp__pf; \
		AActor* bpp__Other__pf; \
		UPrimitiveComponent* bpp__OtherComp__pf; \
		bool bpp__bSelfMoved__pf; \
		FVector bpp__HitLocation__pf; \
		FVector bpp__HitNormal__pf; \
		FVector bpp__NormalImpulse__pf; \
		FHitResult bpp__Hit__pf__const; \
	};


#define NYEVR_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BP_BaseArrow__pf4190551111_h_18_CALLBACK_WRAPPERS \
	void eventbpf__ReceiveBeginPlay__pf(); \
 \
	void eventbpf__ReceiveHit__pf(UPrimitiveComponent* bpp__MyComp__pf, AActor* bpp__Other__pf, UPrimitiveComponent* bpp__OtherComp__pf, bool bpp__bSelfMoved__pf, FVector bpp__HitLocation__pf, FVector bpp__HitNormal__pf, FVector bpp__NormalImpulse__pf, FHitResult const& bpp__Hit__pf__const); \



#define NYEVR_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BP_BaseArrow__pf4190551111_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABP_BaseArrow_C__pf4190551111(); \
	friend struct Z_Construct_UClass_ABP_BaseArrow_C__pf4190551111_Statics; \
public: \
	DECLARE_CLASS(ABP_BaseArrow_C__pf4190551111, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Game/Blueprints/Bow/BP_BaseArrow"), NO_API) \
	DECLARE_SERIALIZER(ABP_BaseArrow_C__pf4190551111)


#define NYEVR_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BP_BaseArrow__pf4190551111_h_18_INCLASS \
private: \
	static void StaticRegisterNativesABP_BaseArrow_C__pf4190551111(); \
	friend struct Z_Construct_UClass_ABP_BaseArrow_C__pf4190551111_Statics; \
public: \
	DECLARE_CLASS(ABP_BaseArrow_C__pf4190551111, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Game/Blueprints/Bow/BP_BaseArrow"), NO_API) \
	DECLARE_SERIALIZER(ABP_BaseArrow_C__pf4190551111)


#define NYEVR_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BP_BaseArrow__pf4190551111_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABP_BaseArrow_C__pf4190551111(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABP_BaseArrow_C__pf4190551111) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABP_BaseArrow_C__pf4190551111); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABP_BaseArrow_C__pf4190551111); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABP_BaseArrow_C__pf4190551111(ABP_BaseArrow_C__pf4190551111&&); \
	NO_API ABP_BaseArrow_C__pf4190551111(const ABP_BaseArrow_C__pf4190551111&); \
public:


#define NYEVR_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BP_BaseArrow__pf4190551111_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABP_BaseArrow_C__pf4190551111(ABP_BaseArrow_C__pf4190551111&&); \
	NO_API ABP_BaseArrow_C__pf4190551111(const ABP_BaseArrow_C__pf4190551111&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABP_BaseArrow_C__pf4190551111); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABP_BaseArrow_C__pf4190551111); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABP_BaseArrow_C__pf4190551111)


#define NYEVR_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BP_BaseArrow__pf4190551111_h_18_PRIVATE_PROPERTY_OFFSET
#define NYEVR_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BP_BaseArrow__pf4190551111_h_14_PROLOG \
	NYEVR_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BP_BaseArrow__pf4190551111_h_18_EVENT_PARMS


#define NYEVR_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BP_BaseArrow__pf4190551111_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	NYEVR_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BP_BaseArrow__pf4190551111_h_18_PRIVATE_PROPERTY_OFFSET \
	NYEVR_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BP_BaseArrow__pf4190551111_h_18_SPARSE_DATA \
	NYEVR_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BP_BaseArrow__pf4190551111_h_18_RPC_WRAPPERS \
	NYEVR_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BP_BaseArrow__pf4190551111_h_18_CALLBACK_WRAPPERS \
	NYEVR_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BP_BaseArrow__pf4190551111_h_18_INCLASS \
	NYEVR_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BP_BaseArrow__pf4190551111_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define NYEVR_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BP_BaseArrow__pf4190551111_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	NYEVR_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BP_BaseArrow__pf4190551111_h_18_PRIVATE_PROPERTY_OFFSET \
	NYEVR_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BP_BaseArrow__pf4190551111_h_18_SPARSE_DATA \
	NYEVR_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BP_BaseArrow__pf4190551111_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	NYEVR_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BP_BaseArrow__pf4190551111_h_18_CALLBACK_WRAPPERS \
	NYEVR_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BP_BaseArrow__pf4190551111_h_18_INCLASS_NO_PURE_DECLS \
	NYEVR_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BP_BaseArrow__pf4190551111_h_18_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NATIVIZEDASSETS_API UClass* StaticClass<class ABP_BaseArrow_C__pf4190551111>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID NYEVR_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BP_BaseArrow__pf4190551111_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
