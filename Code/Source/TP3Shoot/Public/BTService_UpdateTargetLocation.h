// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTService.h"
#include "BTService_UpdateTargetLocation.generated.h"

/**
 * 
 */
UCLASS()
class TP3SHOOT_API UBTService_UpdateTargetLocation : public UBTService
{
	GENERATED_BODY()
	void TickNode(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds);
};
