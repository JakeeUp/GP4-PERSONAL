// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "JAF_Fps/TFpsCharacter.h"
#include "InputActionValue.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTFpsCharacter() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
	ENHANCEDINPUT_API UScriptStruct* Z_Construct_UScriptStruct_FInputActionValue();
	JAF_FPS_API UClass* Z_Construct_UClass_ATFpsCharacter();
	JAF_FPS_API UClass* Z_Construct_UClass_ATFpsCharacter_NoRegister();
	JAF_FPS_API UClass* Z_Construct_UClass_AWeapon_NoRegister();
	UPackage* Z_Construct_UPackage__Script_JAF_Fps();
// End Cross Module References
	DEFINE_FUNCTION(ATFpsCharacter::execLook)
	{
		P_GET_STRUCT_REF(FInputActionValue,Z_Param_Out_InputValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Look(Z_Param_Out_InputValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATFpsCharacter::execMove)
	{
		P_GET_STRUCT_REF(FInputActionValue,Z_Param_Out_InputValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Move(Z_Param_Out_InputValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATFpsCharacter::execOnRep_CurrentWeapon)
	{
		P_GET_OBJECT(AWeapon,Z_Param_OldWeapon);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_CurrentWeapon(Z_Param_OldWeapon);
		P_NATIVE_END;
	}
	void ATFpsCharacter::StaticRegisterNativesATFpsCharacter()
	{
		UClass* Class = ATFpsCharacter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Look", &ATFpsCharacter::execLook },
			{ "Move", &ATFpsCharacter::execMove },
			{ "OnRep_CurrentWeapon", &ATFpsCharacter::execOnRep_CurrentWeapon },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ATFpsCharacter_Look_Statics
	{
		struct TFpsCharacter_eventLook_Parms
		{
			FInputActionValue InputValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputValue_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InputValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATFpsCharacter_Look_Statics::NewProp_InputValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ATFpsCharacter_Look_Statics::NewProp_InputValue = { "InputValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TFpsCharacter_eventLook_Parms, InputValue), Z_Construct_UScriptStruct_FInputActionValue, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATFpsCharacter_Look_Statics::NewProp_InputValue_MetaData), Z_Construct_UFunction_ATFpsCharacter_Look_Statics::NewProp_InputValue_MetaData) }; // 1693336646
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATFpsCharacter_Look_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATFpsCharacter_Look_Statics::NewProp_InputValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATFpsCharacter_Look_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "TFpsCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATFpsCharacter_Look_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATFpsCharacter, nullptr, "Look", nullptr, nullptr, Z_Construct_UFunction_ATFpsCharacter_Look_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATFpsCharacter_Look_Statics::PropPointers), sizeof(Z_Construct_UFunction_ATFpsCharacter_Look_Statics::TFpsCharacter_eventLook_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00440401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATFpsCharacter_Look_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATFpsCharacter_Look_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ATFpsCharacter_Look_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ATFpsCharacter_Look_Statics::TFpsCharacter_eventLook_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ATFpsCharacter_Look()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATFpsCharacter_Look_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATFpsCharacter_Move_Statics
	{
		struct TFpsCharacter_eventMove_Parms
		{
			FInputActionValue InputValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputValue_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InputValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATFpsCharacter_Move_Statics::NewProp_InputValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ATFpsCharacter_Move_Statics::NewProp_InputValue = { "InputValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TFpsCharacter_eventMove_Parms, InputValue), Z_Construct_UScriptStruct_FInputActionValue, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATFpsCharacter_Move_Statics::NewProp_InputValue_MetaData), Z_Construct_UFunction_ATFpsCharacter_Move_Statics::NewProp_InputValue_MetaData) }; // 1693336646
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATFpsCharacter_Move_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATFpsCharacter_Move_Statics::NewProp_InputValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATFpsCharacter_Move_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// UPROPERTY(EditDefaultsOnly, Category = \"Input\")\n// UInputAction* baiscAttackAction;\n" },
#endif
		{ "ModuleRelativePath", "TFpsCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UPROPERTY(EditDefaultsOnly, Category = \"Input\")\nUInputAction* baiscAttackAction;" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATFpsCharacter_Move_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATFpsCharacter, nullptr, "Move", nullptr, nullptr, Z_Construct_UFunction_ATFpsCharacter_Move_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATFpsCharacter_Move_Statics::PropPointers), sizeof(Z_Construct_UFunction_ATFpsCharacter_Move_Statics::TFpsCharacter_eventMove_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00440401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATFpsCharacter_Move_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATFpsCharacter_Move_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ATFpsCharacter_Move_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ATFpsCharacter_Move_Statics::TFpsCharacter_eventMove_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ATFpsCharacter_Move()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATFpsCharacter_Move_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATFpsCharacter_OnRep_CurrentWeapon_Statics
	{
		struct TFpsCharacter_eventOnRep_CurrentWeapon_Parms
		{
			const AWeapon* OldWeapon;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OldWeapon_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OldWeapon;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATFpsCharacter_OnRep_CurrentWeapon_Statics::NewProp_OldWeapon_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATFpsCharacter_OnRep_CurrentWeapon_Statics::NewProp_OldWeapon = { "OldWeapon", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TFpsCharacter_eventOnRep_CurrentWeapon_Parms, OldWeapon), Z_Construct_UClass_AWeapon_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATFpsCharacter_OnRep_CurrentWeapon_Statics::NewProp_OldWeapon_MetaData), Z_Construct_UFunction_ATFpsCharacter_OnRep_CurrentWeapon_Statics::NewProp_OldWeapon_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATFpsCharacter_OnRep_CurrentWeapon_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATFpsCharacter_OnRep_CurrentWeapon_Statics::NewProp_OldWeapon,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATFpsCharacter_OnRep_CurrentWeapon_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "TFpsCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATFpsCharacter_OnRep_CurrentWeapon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATFpsCharacter, nullptr, "OnRep_CurrentWeapon", nullptr, nullptr, Z_Construct_UFunction_ATFpsCharacter_OnRep_CurrentWeapon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATFpsCharacter_OnRep_CurrentWeapon_Statics::PropPointers), sizeof(Z_Construct_UFunction_ATFpsCharacter_OnRep_CurrentWeapon_Statics::TFpsCharacter_eventOnRep_CurrentWeapon_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATFpsCharacter_OnRep_CurrentWeapon_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATFpsCharacter_OnRep_CurrentWeapon_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ATFpsCharacter_OnRep_CurrentWeapon_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ATFpsCharacter_OnRep_CurrentWeapon_Statics::TFpsCharacter_eventOnRep_CurrentWeapon_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ATFpsCharacter_OnRep_CurrentWeapon()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATFpsCharacter_OnRep_CurrentWeapon_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATFpsCharacter);
	UClass* Z_Construct_UClass_ATFpsCharacter_NoRegister()
	{
		return ATFpsCharacter::StaticClass();
	}
	struct Z_Construct_UClass_ATFpsCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Camera_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Camera;
		static const UECodeGen_Private::FClassPropertyParams NewProp_DefaultWeapons_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultWeapons_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_DefaultWeapons;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Weapons_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Weapons_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Weapons;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentWeapon_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentWeapon;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_inputMapping_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_inputMapping;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_moveInputAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_moveInputAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_lookInputAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_lookInputAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_jumpInputAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_jumpInputAction;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATFpsCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_JAF_Fps,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATFpsCharacter_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_ATFpsCharacter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ATFpsCharacter_Look, "Look" }, // 580142039
		{ &Z_Construct_UFunction_ATFpsCharacter_Move, "Move" }, // 2420040832
		{ &Z_Construct_UFunction_ATFpsCharacter_OnRep_CurrentWeapon, "OnRep_CurrentWeapon" }, // 3313280399
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATFpsCharacter_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATFpsCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "TFpsCharacter.h" },
		{ "ModuleRelativePath", "TFpsCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATFpsCharacter_Statics::NewProp_Camera_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "TFpsCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATFpsCharacter_Statics::NewProp_Camera = { "Camera", nullptr, (EPropertyFlags)0x00100000000a000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATFpsCharacter, Camera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATFpsCharacter_Statics::NewProp_Camera_MetaData), Z_Construct_UClass_ATFpsCharacter_Statics::NewProp_Camera_MetaData) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ATFpsCharacter_Statics::NewProp_DefaultWeapons_Inner = { "DefaultWeapons", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_AWeapon_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATFpsCharacter_Statics::NewProp_DefaultWeapons_MetaData[] = {
		{ "Category", "Configurations" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Weapons Classes Spawned By Default\n" },
#endif
		{ "ModuleRelativePath", "TFpsCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Weapons Classes Spawned By Default" },
#endif
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ATFpsCharacter_Statics::NewProp_DefaultWeapons = { "DefaultWeapons", nullptr, (EPropertyFlags)0x0024080000010001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATFpsCharacter, DefaultWeapons), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATFpsCharacter_Statics::NewProp_DefaultWeapons_MetaData), Z_Construct_UClass_ATFpsCharacter_Statics::NewProp_DefaultWeapons_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATFpsCharacter_Statics::NewProp_Weapons_Inner = { "Weapons", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AWeapon_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATFpsCharacter_Statics::NewProp_Weapons_MetaData[] = {
		{ "Category", "State" },
		{ "ModuleRelativePath", "TFpsCharacter.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ATFpsCharacter_Statics::NewProp_Weapons = { "Weapons", nullptr, (EPropertyFlags)0x0010000000020825, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATFpsCharacter, Weapons), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATFpsCharacter_Statics::NewProp_Weapons_MetaData), Z_Construct_UClass_ATFpsCharacter_Statics::NewProp_Weapons_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATFpsCharacter_Statics::NewProp_CurrentWeapon_MetaData[] = {
		{ "Category", "State" },
		{ "ModuleRelativePath", "TFpsCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATFpsCharacter_Statics::NewProp_CurrentWeapon = { "CurrentWeapon", "OnRep_CurrentWeapon", (EPropertyFlags)0x0010000100020825, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATFpsCharacter, CurrentWeapon), Z_Construct_UClass_AWeapon_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATFpsCharacter_Statics::NewProp_CurrentWeapon_MetaData), Z_Construct_UClass_ATFpsCharacter_Statics::NewProp_CurrentWeapon_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATFpsCharacter_Statics::NewProp_CurrentIndex_MetaData[] = {
		{ "Category", "State" },
		{ "ModuleRelativePath", "TFpsCharacter.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ATFpsCharacter_Statics::NewProp_CurrentIndex = { "CurrentIndex", nullptr, (EPropertyFlags)0x0010000000020805, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATFpsCharacter, CurrentIndex), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATFpsCharacter_Statics::NewProp_CurrentIndex_MetaData), Z_Construct_UClass_ATFpsCharacter_Statics::NewProp_CurrentIndex_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATFpsCharacter_Statics::NewProp_inputMapping_MetaData[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*****************************************************/" },
#endif
		{ "ModuleRelativePath", "TFpsCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATFpsCharacter_Statics::NewProp_inputMapping = { "inputMapping", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATFpsCharacter, inputMapping), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATFpsCharacter_Statics::NewProp_inputMapping_MetaData), Z_Construct_UClass_ATFpsCharacter_Statics::NewProp_inputMapping_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATFpsCharacter_Statics::NewProp_moveInputAction_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "TFpsCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATFpsCharacter_Statics::NewProp_moveInputAction = { "moveInputAction", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATFpsCharacter, moveInputAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATFpsCharacter_Statics::NewProp_moveInputAction_MetaData), Z_Construct_UClass_ATFpsCharacter_Statics::NewProp_moveInputAction_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATFpsCharacter_Statics::NewProp_lookInputAction_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "TFpsCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATFpsCharacter_Statics::NewProp_lookInputAction = { "lookInputAction", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATFpsCharacter, lookInputAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATFpsCharacter_Statics::NewProp_lookInputAction_MetaData), Z_Construct_UClass_ATFpsCharacter_Statics::NewProp_lookInputAction_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATFpsCharacter_Statics::NewProp_jumpInputAction_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "TFpsCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATFpsCharacter_Statics::NewProp_jumpInputAction = { "jumpInputAction", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATFpsCharacter, jumpInputAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATFpsCharacter_Statics::NewProp_jumpInputAction_MetaData), Z_Construct_UClass_ATFpsCharacter_Statics::NewProp_jumpInputAction_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATFpsCharacter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATFpsCharacter_Statics::NewProp_Camera,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATFpsCharacter_Statics::NewProp_DefaultWeapons_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATFpsCharacter_Statics::NewProp_DefaultWeapons,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATFpsCharacter_Statics::NewProp_Weapons_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATFpsCharacter_Statics::NewProp_Weapons,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATFpsCharacter_Statics::NewProp_CurrentWeapon,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATFpsCharacter_Statics::NewProp_CurrentIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATFpsCharacter_Statics::NewProp_inputMapping,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATFpsCharacter_Statics::NewProp_moveInputAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATFpsCharacter_Statics::NewProp_lookInputAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATFpsCharacter_Statics::NewProp_jumpInputAction,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATFpsCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATFpsCharacter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ATFpsCharacter_Statics::ClassParams = {
		&ATFpsCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ATFpsCharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ATFpsCharacter_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATFpsCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_ATFpsCharacter_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATFpsCharacter_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ATFpsCharacter()
	{
		if (!Z_Registration_Info_UClass_ATFpsCharacter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATFpsCharacter.OuterSingleton, Z_Construct_UClass_ATFpsCharacter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ATFpsCharacter.OuterSingleton;
	}
	template<> JAF_FPS_API UClass* StaticClass<ATFpsCharacter>()
	{
		return ATFpsCharacter::StaticClass();
	}

	void ATFpsCharacter::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_Weapons(TEXT("Weapons"));
		static const FName Name_CurrentWeapon(TEXT("CurrentWeapon"));

		const bool bIsValid = true
			&& Name_Weapons == ClassReps[(int32)ENetFields_Private::Weapons].Property->GetFName()
			&& Name_CurrentWeapon == ClassReps[(int32)ENetFields_Private::CurrentWeapon].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ATFpsCharacter"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATFpsCharacter);
	ATFpsCharacter::~ATFpsCharacter() {}
	struct Z_CompiledInDeferFile_FID_Git_UE_PersonalProject_1_GP4_PERSONAL_JAF_Fps_Source_JAF_Fps_TFpsCharacter_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Git_UE_PersonalProject_1_GP4_PERSONAL_JAF_Fps_Source_JAF_Fps_TFpsCharacter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ATFpsCharacter, ATFpsCharacter::StaticClass, TEXT("ATFpsCharacter"), &Z_Registration_Info_UClass_ATFpsCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATFpsCharacter), 3559855395U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Git_UE_PersonalProject_1_GP4_PERSONAL_JAF_Fps_Source_JAF_Fps_TFpsCharacter_h_2060153717(TEXT("/Script/JAF_Fps"),
		Z_CompiledInDeferFile_FID_Git_UE_PersonalProject_1_GP4_PERSONAL_JAF_Fps_Source_JAF_Fps_TFpsCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Git_UE_PersonalProject_1_GP4_PERSONAL_JAF_Fps_Source_JAF_Fps_TFpsCharacter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
