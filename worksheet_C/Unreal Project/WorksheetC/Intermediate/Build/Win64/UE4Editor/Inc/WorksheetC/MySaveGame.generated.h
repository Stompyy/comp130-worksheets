// Copyright 1998-2016 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	C++ class header boilerplate exported from UnrealHeaderTool.
	This is automatically generated by the tools.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef WORKSHEETC_MySaveGame_generated_h
#error "MySaveGame.generated.h already included, missing '#pragma once' in MySaveGame.h"
#endif
#define WORKSHEETC_MySaveGame_generated_h

#define WorksheetC_Source_WorksheetC_MySaveGame_h_14_RPC_WRAPPERS
#define WorksheetC_Source_WorksheetC_MySaveGame_h_14_RPC_WRAPPERS_NO_PURE_DECLS
#define WorksheetC_Source_WorksheetC_MySaveGame_h_14_INCLASS_NO_PURE_DECLS \
	private: \
	static void StaticRegisterNativesUMySaveGame(); \
	friend WORKSHEETC_API class UClass* Z_Construct_UClass_UMySaveGame(); \
	public: \
	DECLARE_CLASS(UMySaveGame, USaveGame, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/WorksheetC"), NO_API) \
	DECLARE_SERIALIZER(UMySaveGame) \
	/** Indicates whether the class is compiled into the engine */ \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define WorksheetC_Source_WorksheetC_MySaveGame_h_14_INCLASS \
	private: \
	static void StaticRegisterNativesUMySaveGame(); \
	friend WORKSHEETC_API class UClass* Z_Construct_UClass_UMySaveGame(); \
	public: \
	DECLARE_CLASS(UMySaveGame, USaveGame, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/WorksheetC"), NO_API) \
	DECLARE_SERIALIZER(UMySaveGame) \
	/** Indicates whether the class is compiled into the engine */ \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define WorksheetC_Source_WorksheetC_MySaveGame_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMySaveGame(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMySaveGame) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMySaveGame); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMySaveGame); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMySaveGame(UMySaveGame&&); \
	NO_API UMySaveGame(const UMySaveGame&); \
public:


#define WorksheetC_Source_WorksheetC_MySaveGame_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMySaveGame(UMySaveGame&&); \
	NO_API UMySaveGame(const UMySaveGame&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMySaveGame); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMySaveGame); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMySaveGame)


#define WorksheetC_Source_WorksheetC_MySaveGame_h_14_PRIVATE_PROPERTY_OFFSET
#define WorksheetC_Source_WorksheetC_MySaveGame_h_11_PROLOG
#define WorksheetC_Source_WorksheetC_MySaveGame_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	WorksheetC_Source_WorksheetC_MySaveGame_h_14_PRIVATE_PROPERTY_OFFSET \
	WorksheetC_Source_WorksheetC_MySaveGame_h_14_RPC_WRAPPERS \
	WorksheetC_Source_WorksheetC_MySaveGame_h_14_INCLASS \
	WorksheetC_Source_WorksheetC_MySaveGame_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define WorksheetC_Source_WorksheetC_MySaveGame_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	WorksheetC_Source_WorksheetC_MySaveGame_h_14_PRIVATE_PROPERTY_OFFSET \
	WorksheetC_Source_WorksheetC_MySaveGame_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	WorksheetC_Source_WorksheetC_MySaveGame_h_14_INCLASS_NO_PURE_DECLS \
	WorksheetC_Source_WorksheetC_MySaveGame_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID WorksheetC_Source_WorksheetC_MySaveGame_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
