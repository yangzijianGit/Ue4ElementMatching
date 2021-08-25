// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ELEMENTGAME_ElementGameSaveGame_generated_h
#error "ElementGameSaveGame.generated.h already included, missing '#pragma once' in ElementGameSaveGame.h"
#endif
#define ELEMENTGAME_ElementGameSaveGame_generated_h

#define ElementGame_Source_ElementGame_ElementGameSaveGame_h_12_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FElementGameLevelSaveData_Statics; \
	ELEMENTGAME_API static class UScriptStruct* StaticStruct();


template<> ELEMENTGAME_API UScriptStruct* StaticStruct<struct FElementGameLevelSaveData>();

#define ElementGame_Source_ElementGame_ElementGameSaveGame_h_36_SPARSE_DATA
#define ElementGame_Source_ElementGame_ElementGameSaveGame_h_36_RPC_WRAPPERS
#define ElementGame_Source_ElementGame_ElementGameSaveGame_h_36_RPC_WRAPPERS_NO_PURE_DECLS
#define ElementGame_Source_ElementGame_ElementGameSaveGame_h_36_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUElementGameGameSaveGame(); \
	friend struct Z_Construct_UClass_UElementGameGameSaveGame_Statics; \
public: \
	DECLARE_CLASS(UElementGameGameSaveGame, UGameInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/ElementGame"), NO_API) \
	DECLARE_SERIALIZER(UElementGameGameSaveGame)


#define ElementGame_Source_ElementGame_ElementGameSaveGame_h_36_INCLASS \
private: \
	static void StaticRegisterNativesUElementGameGameSaveGame(); \
	friend struct Z_Construct_UClass_UElementGameGameSaveGame_Statics; \
public: \
	DECLARE_CLASS(UElementGameGameSaveGame, UGameInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/ElementGame"), NO_API) \
	DECLARE_SERIALIZER(UElementGameGameSaveGame)


#define ElementGame_Source_ElementGame_ElementGameSaveGame_h_36_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UElementGameGameSaveGame(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UElementGameGameSaveGame) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UElementGameGameSaveGame); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UElementGameGameSaveGame); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UElementGameGameSaveGame(UElementGameGameSaveGame&&); \
	NO_API UElementGameGameSaveGame(const UElementGameGameSaveGame&); \
public:


#define ElementGame_Source_ElementGame_ElementGameSaveGame_h_36_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UElementGameGameSaveGame(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UElementGameGameSaveGame(UElementGameGameSaveGame&&); \
	NO_API UElementGameGameSaveGame(const UElementGameGameSaveGame&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UElementGameGameSaveGame); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UElementGameGameSaveGame); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UElementGameGameSaveGame)


#define ElementGame_Source_ElementGame_ElementGameSaveGame_h_36_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__m_mpElementGameCustomIntData() { return STRUCT_OFFSET(UElementGameGameSaveGame, m_mpElementGameCustomIntData); }


#define ElementGame_Source_ElementGame_ElementGameSaveGame_h_33_PROLOG
#define ElementGame_Source_ElementGame_ElementGameSaveGame_h_36_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ElementGame_Source_ElementGame_ElementGameSaveGame_h_36_PRIVATE_PROPERTY_OFFSET \
	ElementGame_Source_ElementGame_ElementGameSaveGame_h_36_SPARSE_DATA \
	ElementGame_Source_ElementGame_ElementGameSaveGame_h_36_RPC_WRAPPERS \
	ElementGame_Source_ElementGame_ElementGameSaveGame_h_36_INCLASS \
	ElementGame_Source_ElementGame_ElementGameSaveGame_h_36_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ElementGame_Source_ElementGame_ElementGameSaveGame_h_36_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ElementGame_Source_ElementGame_ElementGameSaveGame_h_36_PRIVATE_PROPERTY_OFFSET \
	ElementGame_Source_ElementGame_ElementGameSaveGame_h_36_SPARSE_DATA \
	ElementGame_Source_ElementGame_ElementGameSaveGame_h_36_RPC_WRAPPERS_NO_PURE_DECLS \
	ElementGame_Source_ElementGame_ElementGameSaveGame_h_36_INCLASS_NO_PURE_DECLS \
	ElementGame_Source_ElementGame_ElementGameSaveGame_h_36_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ELEMENTGAME_API UClass* StaticClass<class UElementGameGameSaveGame>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ElementGame_Source_ElementGame_ElementGameSaveGame_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
