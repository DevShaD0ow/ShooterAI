// Copyright Epic Games, Inc. All Rights Reserved.

#include "TP3ShootGameMode.h"
#include "TP3ShootCharacter.h"
#include "GameFramework/GameStateBase.h"
#include "UObject/ConstructorHelpers.h"

ATP3ShootGameMode::ATP3ShootGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
	/*static ConstructorHelpers::FClassFinder<AGameStateBase> GameStateBPClass(TEXT("/Game/Blueprints/ShooterGameMode"));
    
	if (GameStateBPClass.Class != NULL)
	{
		GameStateClass = GameStateBPClass.Class;
	}*/
}
