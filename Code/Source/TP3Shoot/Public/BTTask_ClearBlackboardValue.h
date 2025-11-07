// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BehaviorTree/Blackboard/BlackboardKeyType.h" // Nécessaire pour FBlackboardKeySelector
#include "BTTask_ClearBlackboardValue.generated.h"

/**
 * Tâche BT pour effacer une valeur donnée dans le Blackboard.
 */
UCLASS()
class TP3SHOOT_API UBTTask_ClearBlackboardValue : public UBTTaskNode
{
	GENERATED_BODY()

public:
	UBTTask_ClearBlackboardValue();

protected:
	// Surcharge de la fonction d'exécution de la tâche
	virtual EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) override;

	// Propriété pour sélectionner la clé à effacer (visible dans le Behavior Tree)
	UPROPERTY(EditAnywhere, Category = "Blackboard")
	FBlackboardKeySelector BlackboardKey;
};