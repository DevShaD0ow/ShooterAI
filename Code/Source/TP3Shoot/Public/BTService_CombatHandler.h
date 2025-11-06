// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "BehaviorTree/BTService.h"
#include "BTService_CombatHandler.generated.h"

UCLASS()
class TP3SHOOT_API UBTService_CombatHandler : public UBTService
{
	GENERATED_BODY()

protected:
	// Surcharge de la fonction Tick/Timer du Service
	virtual void TickNode(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds) override;
    
	// Délai entre les tirs (Réutilisez votre FireRate si vous voulez la cadence de l'arme)
	UPROPERTY(EditAnywhere, Category="Combat")
	float ShootFrequency = 0.3f; 

	float TimeSinceLastShot = 0.0f;
};