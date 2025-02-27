// Copyright 1998-2014 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	C++ class header boilerplate exported from UnrealHeaderTool.
	This is automatically generated by the tools.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectBase.h"

#ifdef LIGHTCYCLE_LightCycleHUD_generated_h
#error "LightCycleHUD.generated.h already included, missing '#pragma once' in LightCycleHUD.h"
#endif
#define LIGHTCYCLE_LightCycleHUD_generated_h

#define ALightCycleHUD_EVENTPARMS
#define ALightCycleHUD_RPC_WRAPPERS
#define ALightCycleHUD_CALLBACK_WRAPPERS
#define ALightCycleHUD_INCLASS \
	private: \
	static void StaticRegisterNativesALightCycleHUD(); \
	friend LIGHTCYCLE_API class UClass* Z_Construct_UClass_ALightCycleHUD(); \
	public: \
	DECLARE_CLASS(ALightCycleHUD, AHUD, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), 0, LightCycle, NO_API) \
	DECLARE_SERIALIZER(ALightCycleHUD) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	UObject* _getUObject() const { return const_cast<ALightCycleHUD*>(this); }


#define ALightCycleHUD_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ALightCycleHUD(const class FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ALightCycleHUD) \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API ALightCycleHUD(const ALightCycleHUD& InCopy); \
public:


#define ALightCycleHUD_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ALightCycleHUD(const class FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) { }; \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API ALightCycleHUD(const ALightCycleHUD& InCopy); \
public: \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ALightCycleHUD)


#undef UCLASS_CURRENT_FILE_NAME
#define UCLASS_CURRENT_FILE_NAME ALightCycleHUD


#undef UCLASS
#undef UINTERFACE
#if UE_BUILD_DOCS
#define UCLASS(...)
#else
#define UCLASS(...) \
ALightCycleHUD_EVENTPARMS
#endif


#undef GENERATED_UCLASS_BODY
#undef GENERATED_BODY
#undef GENERATED_IINTERFACE_BODY
#define GENERATED_UCLASS_BODY() \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ALightCycleHUD_RPC_WRAPPERS \
	ALightCycleHUD_CALLBACK_WRAPPERS \
	ALightCycleHUD_INCLASS \
	ALightCycleHUD_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define GENERATED_BODY() \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ALightCycleHUD_RPC_WRAPPERS \
	ALightCycleHUD_CALLBACK_WRAPPERS \
	ALightCycleHUD_INCLASS \
	ALightCycleHUD_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class LightCycleHUD."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


