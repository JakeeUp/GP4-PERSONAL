// Fill out your copyright notice in the Description page of Project Settings.


#include "TFpsCharacter.h"
#include "Camera/CameraComponent.h"
#include "AbilitySystemComponent.h"

#include "EnhancedInputSubsystems.h"
#include "EnhancedInputComponent.h"


#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"

// Sets default values
ATFpsCharacter::ATFpsCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;


	Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
	Camera->bUsePawnControlRotation = true;
	Camera->SetupAttachment(GetMesh(), FName("Head"));

	
	GetCharacterMovement()->bOrientRotationToMovement = true;
	GetCharacterMovement()->RotationRate = FRotator(1080.f);
	GetCharacterMovement()->JumpZVelocity = 600.f;

}

// // Called when the game starts or when spawned
// void ATFpsCharacter::BeginPlay()
// {
// 	Super::BeginPlay();
// 	
// }
//


// Called to bind functionality to input
void ATFpsCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	UEnhancedInputComponent* enhancedInputComp = Cast<UEnhancedInputComponent>(PlayerInputComponent);
	if (enhancedInputComp)
	{
		enhancedInputComp->BindAction(moveInputAction, ETriggerEvent::Triggered, this, &ATFpsCharacter::Move);
		enhancedInputComp->BindAction(lookInputAction, ETriggerEvent::Triggered, this, &ATFpsCharacter::Look);
		enhancedInputComp->BindAction(jumpInputAction, ETriggerEvent::Triggered, this, &ATFpsCharacter::Jump);
	}

}

void ATFpsCharacter::Move(const FInputActionValue& InputValue)
{
	FVector2D input = InputValue.Get<FVector2D>();
	input.Normalize();
	UE_LOG(LogTemp, Warning, TEXT("Move Input: X=%f, Y=%f"), input.X, input.Y);
	AddMovementInput(input.Y * GetMoveFwdDir() + input.X * GetMoveRightDir());
}

void ATFpsCharacter::Look(const FInputActionValue& InputValue)
{
	FVector2D input = InputValue.Get<FVector2D>();
	AddControllerYawInput(input.X);
	AddControllerPitchInput(-input.Y);
}

FVector ATFpsCharacter::GetMoveFwdDir() const
{
	FVector CamerFwd = Camera->GetForwardVector();
	CamerFwd.Z = 0;
	return CamerFwd.GetSafeNormal();
}

FVector ATFpsCharacter::GetMoveRightDir() const
{
	return Camera->GetRightVector();
}

