// Copyright Epic Games, Inc. All Rights Reserved.

#include "BodyCamFPSGameMode.h"
#include "BodyCamFPSCharacter.h"
#include "UObject/ConstructorHelpers.h"

ABodyCamFPSGameMode::ABodyCamFPSGameMode()
{
	// set default pawn class to our Blueprinted character
	//static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	// if (PlayerPawnBPClass.Class != NULL)
	// {
	// 	DefaultPawnClass = PlayerPawnBPClass.Class;
	// }
}
