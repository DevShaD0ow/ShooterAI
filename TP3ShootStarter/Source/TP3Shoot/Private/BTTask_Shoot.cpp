#include "BTTask_Shoot.h"
#include "AIController.h"
#include "AIShooterCharacter.h"
#include "BehaviorTree/BlackboardComponent.h" // NÉCESSAIRE pour accéder au Blackboard

UBTTask_Shoot::UBTTask_Shoot()
{
	NodeName = "Shoot Player";
}

EBTNodeResult::Type UBTTask_Shoot::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	AAIController* AICon = OwnerComp.GetAIOwner();
	if (!AICon) return EBTNodeResult::Failed;

	ATP3ShootCharacter* AIChar = Cast<ATP3ShootCharacter>(AICon->GetPawn());
	if (!AIChar) return EBTNodeResult::Failed;

	UBlackboardComponent* BlackboardComp = OwnerComp.GetBlackboardComponent();
	if (!BlackboardComp) return EBTNodeResult::Failed;

	AActor* TargetActor = Cast<AActor>(BlackboardComp->GetValueAsObject("PlayerTargetActor"));
	if (!TargetActor)
	{
		return EBTNodeResult::Failed;
	}
	AICon->SetFocus(TargetActor);


	// Tir
	AIChar->Fire();
	AICon->ClearFocus(EAIFocusPriority::Gameplay); 

	return EBTNodeResult::Succeeded;
}