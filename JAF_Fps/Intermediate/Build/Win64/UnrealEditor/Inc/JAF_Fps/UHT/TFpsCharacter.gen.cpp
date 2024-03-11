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
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
	ENHANCEDINPUT_API UScriptStruct* Z_Construct_UScriptStruct_FInputActionValue();
	JAF_FPS_API UClass* Z_Construct_UClass_ATFpsCharacter();
	JAF_FPS_API UClass* Z_Construct_UClass_ATFpsCharacter_NoRegister();
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
	void ATFpsCharacter::StaticRegisterNativesATFpsCharacter()
	{
		UClass* Class = ATFpsCharacter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Look", &ATFpsCharacter::execLook },
			{ "Move", &ATFpsCharacter::execMove },
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
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATFpsCharacter);
	ATFpsCharacter::~ATFpsCharacter() {}
	struct Z_CompiledInDeferFile_FID_Git_UE_PersonalProject_1_GP4_PERSONAL_JAF_Fps_Source_JAF_Fps_TFpsCharacter_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Git_UE_PersonalProject_1_GP4_PERSONAL_JAF_Fps_Source_JAF_Fps_TFpsCharacter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ATFpsCharacter, ATFpsCharacter::StaticClass, TEXT("ATFpsCharacter"), &Z_Registration_Info_UClass_ATFpsCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATFpsCharacter), 2171650624U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Git_UE_PersonalProject_1_GP4_PERSONAL_JAF_Fps_Source_JAF_Fps_TFpsCharacter_h_2065730883(TEXT("/Script/JAF_Fps"),
		Z_CompiledInDeferFile_FID_Git_UE_PersonalProject_1_GP4_PERSONAL_JAF_Fps_Source_JAF_Fps_TFpsCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Git_UE_PersonalProject_1_GP4_PERSONAL_JAF_Fps_Source_JAF_Fps_TFpsCharacter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
