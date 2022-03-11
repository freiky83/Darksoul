// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DARKSOUL_CharStat_generated_h
#error "CharStat.generated.h already included, missing '#pragma once' in CharStat.h"
#endif
#define DARKSOUL_CharStat_generated_h

#define Darksoul_Source_Darksoul_Public_CharStat_h_13_SPARSE_DATA
#define Darksoul_Source_Darksoul_Public_CharStat_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execTakeDamage); \
	DECLARE_FUNCTION(execGetHp);


#define Darksoul_Source_Darksoul_Public_CharStat_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execTakeDamage); \
	DECLARE_FUNCTION(execGetHp);


#define Darksoul_Source_Darksoul_Public_CharStat_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCharStat(); \
	friend struct Z_Construct_UClass_UCharStat_Statics; \
public: \
	DECLARE_CLASS(UCharStat, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Darksoul"), NO_API) \
	DECLARE_SERIALIZER(UCharStat)


#define Darksoul_Source_Darksoul_Public_CharStat_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUCharStat(); \
	friend struct Z_Construct_UClass_UCharStat_Statics; \
public: \
	DECLARE_CLASS(UCharStat, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Darksoul"), NO_API) \
	DECLARE_SERIALIZER(UCharStat)


#define Darksoul_Source_Darksoul_Public_CharStat_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCharStat(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCharStat) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCharStat); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCharStat); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCharStat(UCharStat&&); \
	NO_API UCharStat(const UCharStat&); \
public:


#define Darksoul_Source_Darksoul_Public_CharStat_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCharStat(UCharStat&&); \
	NO_API UCharStat(const UCharStat&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCharStat); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCharStat); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCharStat)


#define Darksoul_Source_Darksoul_Public_CharStat_h_13_PRIVATE_PROPERTY_OFFSET
#define Darksoul_Source_Darksoul_Public_CharStat_h_10_PROLOG
#define Darksoul_Source_Darksoul_Public_CharStat_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Darksoul_Source_Darksoul_Public_CharStat_h_13_PRIVATE_PROPERTY_OFFSET \
	Darksoul_Source_Darksoul_Public_CharStat_h_13_SPARSE_DATA \
	Darksoul_Source_Darksoul_Public_CharStat_h_13_RPC_WRAPPERS \
	Darksoul_Source_Darksoul_Public_CharStat_h_13_INCLASS \
	Darksoul_Source_Darksoul_Public_CharStat_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Darksoul_Source_Darksoul_Public_CharStat_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Darksoul_Source_Darksoul_Public_CharStat_h_13_PRIVATE_PROPERTY_OFFSET \
	Darksoul_Source_Darksoul_Public_CharStat_h_13_SPARSE_DATA \
	Darksoul_Source_Darksoul_Public_CharStat_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	Darksoul_Source_Darksoul_Public_CharStat_h_13_INCLASS_NO_PURE_DECLS \
	Darksoul_Source_Darksoul_Public_CharStat_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DARKSOUL_API UClass* StaticClass<class UCharStat>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Darksoul_Source_Darksoul_Public_CharStat_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
