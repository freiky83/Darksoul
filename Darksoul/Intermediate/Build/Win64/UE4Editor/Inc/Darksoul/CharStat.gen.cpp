// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Darksoul/Public/CharStat.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCharStat() {}
// Cross Module References
	DARKSOUL_API UClass* Z_Construct_UClass_UCharStat_NoRegister();
	DARKSOUL_API UClass* Z_Construct_UClass_UCharStat();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_Darksoul();
// End Cross Module References
	DEFINE_FUNCTION(UCharStat::execTakeDamage)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_p_damage);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TakeDamage(Z_Param_p_damage);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCharStat::execSetOnFire)
	{
		P_GET_UBOOL(Z_Param_p_onFire);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetOnFire(Z_Param_p_onFire);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCharStat::execSetDeath)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDeath();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCharStat::execGetIsOnFire)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetIsOnFire();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCharStat::execGetIsAlive)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetIsAlive();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCharStat::execGetHp)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetHp();
		P_NATIVE_END;
	}
	void UCharStat::StaticRegisterNativesUCharStat()
	{
		UClass* Class = UCharStat::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetHp", &UCharStat::execGetHp },
			{ "GetIsAlive", &UCharStat::execGetIsAlive },
			{ "GetIsOnFire", &UCharStat::execGetIsOnFire },
			{ "SetDeath", &UCharStat::execSetDeath },
			{ "SetOnFire", &UCharStat::execSetOnFire },
			{ "TakeDamage", &UCharStat::execTakeDamage },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCharStat_GetHp_Statics
	{
		struct CharStat_eventGetHp_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UCharStat_GetHp_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CharStat_eventGetHp_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCharStat_GetHp_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharStat_GetHp_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCharStat_GetHp_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// GETTER -----------------------------------\n" },
		{ "ModuleRelativePath", "Public/CharStat.h" },
		{ "ToolTip", "GETTER -----------------------------------" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharStat_GetHp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCharStat, nullptr, "GetHp", nullptr, nullptr, sizeof(CharStat_eventGetHp_Parms), Z_Construct_UFunction_UCharStat_GetHp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharStat_GetHp_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCharStat_GetHp_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharStat_GetHp_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCharStat_GetHp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCharStat_GetHp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCharStat_GetIsAlive_Statics
	{
		struct CharStat_eventGetIsAlive_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UCharStat_GetIsAlive_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CharStat_eventGetIsAlive_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCharStat_GetIsAlive_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CharStat_eventGetIsAlive_Parms), &Z_Construct_UFunction_UCharStat_GetIsAlive_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCharStat_GetIsAlive_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharStat_GetIsAlive_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCharStat_GetIsAlive_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CharStat.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharStat_GetIsAlive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCharStat, nullptr, "GetIsAlive", nullptr, nullptr, sizeof(CharStat_eventGetIsAlive_Parms), Z_Construct_UFunction_UCharStat_GetIsAlive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharStat_GetIsAlive_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCharStat_GetIsAlive_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharStat_GetIsAlive_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCharStat_GetIsAlive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCharStat_GetIsAlive_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCharStat_GetIsOnFire_Statics
	{
		struct CharStat_eventGetIsOnFire_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UCharStat_GetIsOnFire_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CharStat_eventGetIsOnFire_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCharStat_GetIsOnFire_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CharStat_eventGetIsOnFire_Parms), &Z_Construct_UFunction_UCharStat_GetIsOnFire_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCharStat_GetIsOnFire_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharStat_GetIsOnFire_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCharStat_GetIsOnFire_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CharStat.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharStat_GetIsOnFire_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCharStat, nullptr, "GetIsOnFire", nullptr, nullptr, sizeof(CharStat_eventGetIsOnFire_Parms), Z_Construct_UFunction_UCharStat_GetIsOnFire_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharStat_GetIsOnFire_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCharStat_GetIsOnFire_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharStat_GetIsOnFire_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCharStat_GetIsOnFire()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCharStat_GetIsOnFire_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCharStat_SetDeath_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCharStat_SetDeath_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// SETTER -----------------------------------\n" },
		{ "ModuleRelativePath", "Public/CharStat.h" },
		{ "ToolTip", "SETTER -----------------------------------" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharStat_SetDeath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCharStat, nullptr, "SetDeath", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCharStat_SetDeath_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharStat_SetDeath_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCharStat_SetDeath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCharStat_SetDeath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCharStat_SetOnFire_Statics
	{
		struct CharStat_eventSetOnFire_Parms
		{
			bool p_onFire;
		};
		static void NewProp_p_onFire_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_p_onFire;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UCharStat_SetOnFire_Statics::NewProp_p_onFire_SetBit(void* Obj)
	{
		((CharStat_eventSetOnFire_Parms*)Obj)->p_onFire = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCharStat_SetOnFire_Statics::NewProp_p_onFire = { "p_onFire", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CharStat_eventSetOnFire_Parms), &Z_Construct_UFunction_UCharStat_SetOnFire_Statics::NewProp_p_onFire_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCharStat_SetOnFire_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharStat_SetOnFire_Statics::NewProp_p_onFire,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCharStat_SetOnFire_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CharStat.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharStat_SetOnFire_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCharStat, nullptr, "SetOnFire", nullptr, nullptr, sizeof(CharStat_eventSetOnFire_Parms), Z_Construct_UFunction_UCharStat_SetOnFire_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharStat_SetOnFire_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCharStat_SetOnFire_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharStat_SetOnFire_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCharStat_SetOnFire()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCharStat_SetOnFire_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCharStat_TakeDamage_Statics
	{
		struct CharStat_eventTakeDamage_Parms
		{
			int32 p_damage;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_p_damage;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UCharStat_TakeDamage_Statics::NewProp_p_damage = { "p_damage", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CharStat_eventTakeDamage_Parms, p_damage), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCharStat_TakeDamage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharStat_TakeDamage_Statics::NewProp_p_damage,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCharStat_TakeDamage_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// OTHER ------------------------------------\n" },
		{ "ModuleRelativePath", "Public/CharStat.h" },
		{ "ToolTip", "OTHER ------------------------------------" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharStat_TakeDamage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCharStat, nullptr, "TakeDamage", nullptr, nullptr, sizeof(CharStat_eventTakeDamage_Parms), Z_Construct_UFunction_UCharStat_TakeDamage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharStat_TakeDamage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCharStat_TakeDamage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharStat_TakeDamage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCharStat_TakeDamage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCharStat_TakeDamage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCharStat_NoRegister()
	{
		return UCharStat::StaticClass();
	}
	struct Z_Construct_UClass_UCharStat_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_hp_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_m_hp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_alive_MetaData[];
#endif
		static void NewProp_m_alive_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_m_alive;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_onFire_MetaData[];
#endif
		static void NewProp_m_onFire_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_m_onFire;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCharStat_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Darksoul,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCharStat_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCharStat_GetHp, "GetHp" }, // 295879405
		{ &Z_Construct_UFunction_UCharStat_GetIsAlive, "GetIsAlive" }, // 2173512688
		{ &Z_Construct_UFunction_UCharStat_GetIsOnFire, "GetIsOnFire" }, // 47188083
		{ &Z_Construct_UFunction_UCharStat_SetDeath, "SetDeath" }, // 2563976857
		{ &Z_Construct_UFunction_UCharStat_SetOnFire, "SetOnFire" }, // 1882050976
		{ &Z_Construct_UFunction_UCharStat_TakeDamage, "TakeDamage" }, // 3016929767
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCharStat_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "CharStat.h" },
		{ "ModuleRelativePath", "Public/CharStat.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCharStat_Statics::NewProp_m_hp_MetaData[] = {
		{ "Category", "DATABASE" },
		{ "Comment", "// VARIABLES\n" },
		{ "ModuleRelativePath", "Public/CharStat.h" },
		{ "ToolTip", "VARIABLES" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UCharStat_Statics::NewProp_m_hp = { "m_hp", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCharStat, m_hp), METADATA_PARAMS(Z_Construct_UClass_UCharStat_Statics::NewProp_m_hp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCharStat_Statics::NewProp_m_hp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCharStat_Statics::NewProp_m_alive_MetaData[] = {
		{ "Comment", "// VARIABLES \n" },
		{ "ModuleRelativePath", "Public/CharStat.h" },
		{ "ToolTip", "VARIABLES" },
	};
#endif
	void Z_Construct_UClass_UCharStat_Statics::NewProp_m_alive_SetBit(void* Obj)
	{
		((UCharStat*)Obj)->m_alive = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCharStat_Statics::NewProp_m_alive = { "m_alive", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UCharStat), &Z_Construct_UClass_UCharStat_Statics::NewProp_m_alive_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCharStat_Statics::NewProp_m_alive_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCharStat_Statics::NewProp_m_alive_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCharStat_Statics::NewProp_m_onFire_MetaData[] = {
		{ "ModuleRelativePath", "Public/CharStat.h" },
	};
#endif
	void Z_Construct_UClass_UCharStat_Statics::NewProp_m_onFire_SetBit(void* Obj)
	{
		((UCharStat*)Obj)->m_onFire = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCharStat_Statics::NewProp_m_onFire = { "m_onFire", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UCharStat), &Z_Construct_UClass_UCharStat_Statics::NewProp_m_onFire_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCharStat_Statics::NewProp_m_onFire_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCharStat_Statics::NewProp_m_onFire_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCharStat_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharStat_Statics::NewProp_m_hp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharStat_Statics::NewProp_m_alive,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharStat_Statics::NewProp_m_onFire,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCharStat_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCharStat>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCharStat_Statics::ClassParams = {
		&UCharStat::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCharStat_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCharStat_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UCharStat_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCharStat_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCharStat()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCharStat_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCharStat, 622188119);
	template<> DARKSOUL_API UClass* StaticClass<UCharStat>()
	{
		return UCharStat::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCharStat(Z_Construct_UClass_UCharStat, &UCharStat::StaticClass, TEXT("/Script/Darksoul"), TEXT("UCharStat"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCharStat);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
