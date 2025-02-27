// Copyright 1998-2014 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	C++ class header boilerplate exported from UnrealHeaderTool.
	This is automatically generated by the tools.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectBase.h"

#ifdef LIGHTCYCLE_LightCycleTail_generated_h
#error "LightCycleTail.generated.h already included, missing '#pragma once' in LightCycleTail.h"
#endif
#define LIGHTCYCLE_LightCycleTail_generated_h

#define ALightCycleTail_EVENTPARMS
#define ALightCycleTail_RPC_WRAPPERS
#define ALightCycleTail_CALLBACK_WRAPPERS
#define ALightCycleTail_INCLASS \
	private: \
	static void StaticRegisterNativesALightCycleTail(); \
	friend LIGHTCYCLE_API class UClass* Z_Construct_UClass_ALightCycleTail(); \
	public: \
	DECLARE_CLASS(ALightCycleTail, AActor, COMPILED_IN_FLAGS(0), 0, LightCycle, NO_API) \
	DECLARE_SERIALIZER(ALightCycleTail) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	UObject* _getUObject() const { return const_cast<ALightCycleTail*>(this); }


#define ALightCycleTail_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ALightCycleTail(const class FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ALightCycleTail) \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API ALightCycleTail(const ALightCycleTail& InCopy); \
public:


#define ALightCycleTail_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ALightCycleTail(const class FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) { }; \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API ALightCycleTail(const ALightCycleTail& InCopy); \
public: \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ALightCycleTail)


#undef UCLASS_CURRENT_FILE_NAME
#define UCLASS_CURRENT_FILE_NAME ALightCycleTail


#undef UCLASS
#undef UINTERFACE
#if UE_BUILD_DOCS
#define UCLASS(...)
#else
#define UCLASS(...) \
ALightCycleTail_EVENTPARMS
#endif


#undef GENERATED_UCLASS_BODY
#undef GENERATED_BODY
#undef GENERATED_IINTERFACE_BODY
#define GENERATED_UCLASS_BODY() \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ALightCycleTail_RPC_WRAPPERS \
	ALightCycleTail_CALLBACK_WRAPPERS \
	ALightCycleTail_INCLASS \
	ALightCycleTail_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define GENERATED_BODY() \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ALightCycleTail_RPC_WRAPPERS \
	ALightCycleTail_CALLBACK_WRAPPERS \
	ALightCycleTail_INCLASS \
	ALightCycleTail_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


