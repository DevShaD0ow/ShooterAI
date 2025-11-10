// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameState.h"
#include "ShooterGameState.generated.h"

/**
 * 
 */
UCLASS()
class TP3SHOOT_API AShooterGameState : public AGameStateBase
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintReadWrite,EditAnywhere,Category="GameState")int killTeam0=0;
	UPROPERTY(BlueprintReadWrite,EditAnywhere,Category="GameState")int killTeam1=0;
	void updatekillTeam0();
	void updatekillTeam1();
};
