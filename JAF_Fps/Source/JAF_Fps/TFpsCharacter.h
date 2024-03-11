// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "TFpsCharacter.generated.h"


class USpringArmComponent;
class UCameraComponent;
class UInputMappingContext;
class UInputAction;


UCLASS()
class JAF_FPS_API ATFpsCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ATFpsCharacter();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:	
	// Called every frame
	//virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
	
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Components")
	class UCameraComponent* Camera;

protected:
	//Weapons Classes Spawned By Default
	UPROPERTY(EditDefaultsOnly,Category = "Configurations")
	TArray<TSubclassOf<class AWeapon>> DefaultWeapons;
public:
	UPROPERTY(VisibleInstanceOnly,BlueprintReadWrite,Replicated,Category = "State")
	TArray<class AWeapon*> Weapons;

	UPROPERTY(VisibleInstanceOnly, BlueprintReadWrite,ReplicatedUsing = OnRep_CurrentWeapon, Category ="State")
	class AWeapon* CurrentWeapon;
	
	UPROPERTY(VisibleInstanceOnly, BlueprintReadWrite, Category = "State")
	int32 CurrentIndex = 0;

	UFUNCTION(Blueprintable,Category = "Character")
	virtual void EquipWeapon(const int32 Index);

protected:
	UFUNCTION()
	virtual void OnRep_CurrentWeapon(const class AWeapon* OldWeapon);
	
private:
	/*****************************************************/
	/*                       Input                       */
	/*****************************************************/
	UPROPERTY(EditDefaultsOnly, Category="Input")
	UInputMappingContext* inputMapping;

	UPROPERTY(EditDefaultsOnly, Category="Input")
	UInputAction* moveInputAction;

	UPROPERTY(EditDefaultsOnly, Category = "Input")
	UInputAction* lookInputAction;

	UPROPERTY(EditDefaultsOnly, Category = "Input")
	UInputAction* jumpInputAction;

	UPROPERTY(EditDefaultsOnly, Category = "Input")
	UInputAction* nextWeaponInputAction;

	UPROPERTY(EditDefaultsOnly, Category = "Input")
	UInputAction* lastWeaponInputAction;

	// UPROPERTY(EditDefaultsOnly, Category = "Input")
	// UInputAction* baiscAttackAction;

	UFUNCTION()
	virtual void NextWeapon();

	UFUNCTION()
	virtual void LastWeapon();
	
	UFUNCTION()
	void Move(const FInputActionValue& InputValue);

	UFUNCTION()
	void Look(const FInputActionValue& InputValue);

	FVector GetMoveFwdDir() const;
	FVector GetMoveRightDir() const;
	

};
