// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ElementGame/ElementGameSaveGame.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeElementGameSaveGame() {}
// Cross Module References
	ELEMENTGAME_API UScriptStruct* Z_Construct_UScriptStruct_FElementGameLevelSaveData();
	UPackage* Z_Construct_UPackage__Script_ElementGame();
	ELEMENTGAME_API UClass* Z_Construct_UClass_UElementGameGameSaveGame_NoRegister();
	ELEMENTGAME_API UClass* Z_Construct_UClass_UElementGameGameSaveGame();
	ENGINE_API UClass* Z_Construct_UClass_UGameInstance();
// End Cross Module References
class UScriptStruct* FElementGameLevelSaveData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ELEMENTGAME_API uint32 Get_Z_Construct_UScriptStruct_FElementGameLevelSaveData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FElementGameLevelSaveData, Z_Construct_UPackage__Script_ElementGame(), TEXT("ElementGameLevelSaveData"), sizeof(FElementGameLevelSaveData), Get_Z_Construct_UScriptStruct_FElementGameLevelSaveData_Hash());
	}
	return Singleton;
}
template<> ELEMENTGAME_API UScriptStruct* StaticStruct<FElementGameLevelSaveData>()
{
	return FElementGameLevelSaveData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FElementGameLevelSaveData(FElementGameLevelSaveData::StaticStruct, TEXT("/Script/ElementGame"), TEXT("ElementGameLevelSaveData"), false, nullptr, nullptr);
static struct FScriptStruct_ElementGame_StaticRegisterNativesFElementGameLevelSaveData
{
	FScriptStruct_ElementGame_StaticRegisterNativesFElementGameLevelSaveData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ElementGameLevelSaveData")),new UScriptStruct::TCppStructOps<FElementGameLevelSaveData>);
	}
} ScriptStruct_ElementGame_StaticRegisterNativesFElementGameLevelSaveData;
	struct Z_Construct_UScriptStruct_FElementGameLevelSaveData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_goldScore_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_goldScore;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_silverScore_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_silverScore;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bronzeScore_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_bronzeScore;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_topScore_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_topScore;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FElementGameLevelSaveData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "ElementGameSaveGame.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FElementGameLevelSaveData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FElementGameLevelSaveData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FElementGameLevelSaveData_Statics::NewProp_goldScore_MetaData[] = {
		{ "Category", "ElementGameLevelSaveData" },
		{ "Comment", "// score to beat to get gold.\n" },
		{ "ModuleRelativePath", "ElementGameSaveGame.h" },
		{ "ToolTip", "score to beat to get gold." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FElementGameLevelSaveData_Statics::NewProp_goldScore = { "goldScore", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FElementGameLevelSaveData, goldScore), METADATA_PARAMS(Z_Construct_UScriptStruct_FElementGameLevelSaveData_Statics::NewProp_goldScore_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FElementGameLevelSaveData_Statics::NewProp_goldScore_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FElementGameLevelSaveData_Statics::NewProp_silverScore_MetaData[] = {
		{ "Category", "ElementGameLevelSaveData" },
		{ "Comment", "// score to beat to get silver.\n" },
		{ "ModuleRelativePath", "ElementGameSaveGame.h" },
		{ "ToolTip", "score to beat to get silver." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FElementGameLevelSaveData_Statics::NewProp_silverScore = { "silverScore", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FElementGameLevelSaveData, silverScore), METADATA_PARAMS(Z_Construct_UScriptStruct_FElementGameLevelSaveData_Statics::NewProp_silverScore_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FElementGameLevelSaveData_Statics::NewProp_silverScore_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FElementGameLevelSaveData_Statics::NewProp_bronzeScore_MetaData[] = {
		{ "Category", "ElementGameLevelSaveData" },
		{ "Comment", "// score to beat to get bronze.\n" },
		{ "ModuleRelativePath", "ElementGameSaveGame.h" },
		{ "ToolTip", "score to beat to get bronze." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FElementGameLevelSaveData_Statics::NewProp_bronzeScore = { "bronzeScore", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FElementGameLevelSaveData, bronzeScore), METADATA_PARAMS(Z_Construct_UScriptStruct_FElementGameLevelSaveData_Statics::NewProp_bronzeScore_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FElementGameLevelSaveData_Statics::NewProp_bronzeScore_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FElementGameLevelSaveData_Statics::NewProp_topScore_MetaData[] = {
		{ "Category", "ElementGameLevelSaveData" },
		{ "Comment", "// player's personal best score. Not necessarily a gold-medal score.\n" },
		{ "ModuleRelativePath", "ElementGameSaveGame.h" },
		{ "ToolTip", "player's personal best score. Not necessarily a gold-medal score." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FElementGameLevelSaveData_Statics::NewProp_topScore = { "topScore", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FElementGameLevelSaveData, topScore), METADATA_PARAMS(Z_Construct_UScriptStruct_FElementGameLevelSaveData_Statics::NewProp_topScore_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FElementGameLevelSaveData_Statics::NewProp_topScore_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FElementGameLevelSaveData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FElementGameLevelSaveData_Statics::NewProp_goldScore,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FElementGameLevelSaveData_Statics::NewProp_silverScore,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FElementGameLevelSaveData_Statics::NewProp_bronzeScore,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FElementGameLevelSaveData_Statics::NewProp_topScore,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FElementGameLevelSaveData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ElementGame,
		nullptr,
		&NewStructOps,
		"ElementGameLevelSaveData",
		sizeof(FElementGameLevelSaveData),
		alignof(FElementGameLevelSaveData),
		Z_Construct_UScriptStruct_FElementGameLevelSaveData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FElementGameLevelSaveData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FElementGameLevelSaveData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FElementGameLevelSaveData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FElementGameLevelSaveData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FElementGameLevelSaveData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ElementGame();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ElementGameLevelSaveData"), sizeof(FElementGameLevelSaveData), Get_Z_Construct_UScriptStruct_FElementGameLevelSaveData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FElementGameLevelSaveData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FElementGameLevelSaveData_Hash() { return 2526671236U; }
	void UElementGameGameSaveGame::StaticRegisterNativesUElementGameGameSaveGame()
	{
	}
	UClass* Z_Construct_UClass_UElementGameGameSaveGame_NoRegister()
	{
		return UElementGameGameSaveGame::StaticClass();
	}
	struct Z_Construct_UClass_UElementGameGameSaveGame_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_m_mpElementGameSaveData_ValueProp;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_m_mpElementGameSaveData_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_mpElementGameSaveData_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_m_mpElementGameSaveData;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_m_mpElementGameCustomIntData_ValueProp;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_m_mpElementGameCustomIntData_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_mpElementGameCustomIntData_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_m_mpElementGameCustomIntData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UElementGameGameSaveGame_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_ElementGame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UElementGameGameSaveGame_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ElementGameSaveGame.h" },
		{ "ModuleRelativePath", "ElementGameSaveGame.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UElementGameGameSaveGame_Statics::NewProp_m_mpElementGameSaveData_ValueProp = { "m_mpElementGameSaveData", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FElementGameLevelSaveData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UElementGameGameSaveGame_Statics::NewProp_m_mpElementGameSaveData_Key_KeyProp = { "m_mpElementGameSaveData_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UElementGameGameSaveGame_Statics::NewProp_m_mpElementGameSaveData_MetaData[] = {
		{ "Comment", "/**\n\x09*\x09@see UGameplayStatics::CreateSaveGameObject\n\x09*\x09@see UGameplayStatics::SaveGameToSlot\n\x09*\x09@see UGameplayStatics::DoesSaveGameExist\n\x09*\x09@see UGameplayStatics::LoadGameFromSlot\n\x09*\x09@see UGameplayStatics::DeleteGameInSlot\n\x09*/" },
		{ "ModuleRelativePath", "ElementGameSaveGame.h" },
		{ "ToolTip", "@see UGameplayStatics::CreateSaveGameObject\n@see UGameplayStatics::SaveGameToSlot\n@see UGameplayStatics::DoesSaveGameExist\n@see UGameplayStatics::LoadGameFromSlot\n@see UGameplayStatics::DeleteGameInSlot" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UElementGameGameSaveGame_Statics::NewProp_m_mpElementGameSaveData = { "m_mpElementGameSaveData", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UElementGameGameSaveGame, m_mpElementGameSaveData), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UElementGameGameSaveGame_Statics::NewProp_m_mpElementGameSaveData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UElementGameGameSaveGame_Statics::NewProp_m_mpElementGameSaveData_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UElementGameGameSaveGame_Statics::NewProp_m_mpElementGameCustomIntData_ValueProp = { "m_mpElementGameCustomIntData", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UElementGameGameSaveGame_Statics::NewProp_m_mpElementGameCustomIntData_Key_KeyProp = { "m_mpElementGameCustomIntData_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UElementGameGameSaveGame_Statics::NewProp_m_mpElementGameCustomIntData_MetaData[] = {
		{ "ModuleRelativePath", "ElementGameSaveGame.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UElementGameGameSaveGame_Statics::NewProp_m_mpElementGameCustomIntData = { "m_mpElementGameCustomIntData", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UElementGameGameSaveGame, m_mpElementGameCustomIntData), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UElementGameGameSaveGame_Statics::NewProp_m_mpElementGameCustomIntData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UElementGameGameSaveGame_Statics::NewProp_m_mpElementGameCustomIntData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UElementGameGameSaveGame_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UElementGameGameSaveGame_Statics::NewProp_m_mpElementGameSaveData_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UElementGameGameSaveGame_Statics::NewProp_m_mpElementGameSaveData_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UElementGameGameSaveGame_Statics::NewProp_m_mpElementGameSaveData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UElementGameGameSaveGame_Statics::NewProp_m_mpElementGameCustomIntData_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UElementGameGameSaveGame_Statics::NewProp_m_mpElementGameCustomIntData_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UElementGameGameSaveGame_Statics::NewProp_m_mpElementGameCustomIntData,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UElementGameGameSaveGame_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UElementGameGameSaveGame>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UElementGameGameSaveGame_Statics::ClassParams = {
		&UElementGameGameSaveGame::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UElementGameGameSaveGame_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UElementGameGameSaveGame_Statics::PropPointers),
		0,
		0x009000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UElementGameGameSaveGame_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UElementGameGameSaveGame_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UElementGameGameSaveGame()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UElementGameGameSaveGame_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UElementGameGameSaveGame, 1198780283);
	template<> ELEMENTGAME_API UClass* StaticClass<UElementGameGameSaveGame>()
	{
		return UElementGameGameSaveGame::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UElementGameGameSaveGame(Z_Construct_UClass_UElementGameGameSaveGame, &UElementGameGameSaveGame::StaticClass, TEXT("/Script/ElementGame"), TEXT("UElementGameGameSaveGame"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UElementGameGameSaveGame);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
