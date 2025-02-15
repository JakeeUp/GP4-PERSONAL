﻿// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

#include "GameFramework/Actor.h"
#include "Weapon.generated.h"

/**
 * 
 */
USTRUCT(BlueprintType)
struct FIKProperties
{
	GENERATED_BODY()
	
	UPROPERTY(EditAnywhere,BlueprintReadWrite)
	class UAnimSequence* AnimPose;

	UPROPERTY(EditAnywhere,BlueprintReadWrite)
	float AimOffset = 15.f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FTransform CustomOffsetTransform;
};

UCLASS(Abstract)
class JAF_FPS_API AWeapon : public AActor
{
	GENERATED_BODY()

public:
	AWeapon();

protected:
	virtual void BeginPlay() override;

public:
	UPROPERTY(VisibleAnywhere,BlueprintReadWrite, Category = "Component")
	class USceneComponent* Root;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite,Category = "Component")
	class USkeletalMeshComponent* Mesh;

	UPROPERTY(VisibleInstanceOnly,BlueprintReadWrite,Category = "State")
	class ATFpsCharacter* CurrentOwner;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Configurations")
	FIKProperties IKProperties;

	UPROPERTY(EditAnywhere,BlueprintReadWrite, Category = "Configurations")
	FTransform PlacementTransform;
	
};
