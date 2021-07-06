// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BuildingEscapeFinal/RotateDoor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRotateDoor() {}
// Cross Module References
	BUILDINGESCAPEFINAL_API UClass* Z_Construct_UClass_URotateDoor_NoRegister();
	BUILDINGESCAPEFINAL_API UClass* Z_Construct_UClass_URotateDoor();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_BuildingEscapeFinal();
	ENGINE_API UClass* Z_Construct_UClass_ATriggerVolume_NoRegister();
// End Cross Module References
	void URotateDoor::StaticRegisterNativesURotateDoor()
	{
	}
	UClass* Z_Construct_UClass_URotateDoor_NoRegister()
	{
		return URotateDoor::StaticClass();
	}
	struct Z_Construct_UClass_URotateDoor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FinalYaw_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FinalYaw;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Scanner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Scanner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URotateDoor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_BuildingEscapeFinal,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URotateDoor_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "RotateDoor.h" },
		{ "ModuleRelativePath", "RotateDoor.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URotateDoor_Statics::NewProp_FinalYaw_MetaData[] = {
		{ "Category", "RotateDoor" },
		{ "ModuleRelativePath", "RotateDoor.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_URotateDoor_Statics::NewProp_FinalYaw = { "FinalYaw", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URotateDoor, FinalYaw), METADATA_PARAMS(Z_Construct_UClass_URotateDoor_Statics::NewProp_FinalYaw_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URotateDoor_Statics::NewProp_FinalYaw_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URotateDoor_Statics::NewProp_Scanner_MetaData[] = {
		{ "Category", "RotateDoor" },
		{ "ModuleRelativePath", "RotateDoor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_URotateDoor_Statics::NewProp_Scanner = { "Scanner", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URotateDoor, Scanner), Z_Construct_UClass_ATriggerVolume_NoRegister, METADATA_PARAMS(Z_Construct_UClass_URotateDoor_Statics::NewProp_Scanner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URotateDoor_Statics::NewProp_Scanner_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URotateDoor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URotateDoor_Statics::NewProp_FinalYaw,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URotateDoor_Statics::NewProp_Scanner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_URotateDoor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URotateDoor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_URotateDoor_Statics::ClassParams = {
		&URotateDoor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_URotateDoor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_URotateDoor_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_URotateDoor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URotateDoor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URotateDoor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_URotateDoor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(URotateDoor, 2943409465);
	template<> BUILDINGESCAPEFINAL_API UClass* StaticClass<URotateDoor>()
	{
		return URotateDoor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_URotateDoor(Z_Construct_UClass_URotateDoor, &URotateDoor::StaticClass, TEXT("/Script/BuildingEscapeFinal"), TEXT("URotateDoor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(URotateDoor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
