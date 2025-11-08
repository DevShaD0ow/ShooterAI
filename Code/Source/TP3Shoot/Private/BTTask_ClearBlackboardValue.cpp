// Fill out your copyright notice in the Description page of Project Settings.

#include "BTTask_ClearBlackboardValue.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "AIController.h"

UBTTask_ClearBlackboardValue::UBTTask_ClearBlackboardValue()
{
	NodeName = "Clear Blackboard Value";
}

EBTNodeResult::Type UBTTask_ClearBlackboardValue::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	UBlackboardComponent* BlackboardComp = OwnerComp.GetBlackboardComponent();
    
	if (BlackboardComp)
	{
		BlackboardComp->ClearValue(BlackboardKey.SelectedKeyName);
		return EBTNodeResult::Succeeded;
	}

	return EBTNodeResult::Failed;
}