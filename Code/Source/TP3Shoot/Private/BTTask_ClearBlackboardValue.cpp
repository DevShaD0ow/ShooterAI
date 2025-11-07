// Fill out your copyright notice in the Description page of Project Settings.

#include "BTTask_ClearBlackboardValue.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "AIController.h"

UBTTask_ClearBlackboardValue::UBTTask_ClearBlackboardValue()
{
	// Donne un nom lisible à la tâche dans l'éditeur BT
	NodeName = "Clear Blackboard Value";
}

EBTNodeResult::Type UBTTask_ClearBlackboardValue::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	// 1. Obtenir le Blackboard Component
	UBlackboardComponent* BlackboardComp = OwnerComp.GetBlackboardComponent();
    
	if (BlackboardComp)
	{
		// 2. Tenter d'effacer la valeur de la clé sélectionnée
		BlackboardComp->ClearValue(BlackboardKey.SelectedKeyName);
        
		return EBTNodeResult::Succeeded;
	}

	// Échec si le Blackboard n'est pas accessible
	return EBTNodeResult::Failed;
}