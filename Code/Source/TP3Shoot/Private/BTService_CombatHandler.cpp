// Fichier : BTService_CombatHandler.cpp

#include "BTService_CombatHandler.h"

#include "AIController.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "TP3Shoot/TP3ShootCharacter.h"

void UBTService_CombatHandler::TickNode(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds)
{
	Super::TickNode(OwnerComp, NodeMemory, DeltaSeconds);

	TimeSinceLastShot += DeltaSeconds;

	if (TimeSinceLastShot >= ShootFrequency)
	{
		AAIController* AICon = OwnerComp.GetAIOwner();
		UBlackboardComponent* BlackboardComp = OwnerComp.GetBlackboardComponent();
        
		if (!AICon || !BlackboardComp) return;
		AActor* TargetActor = Cast<AActor>(BlackboardComp->GetValueAsObject(TEXT("PlayerTargetActor")));

		if (TargetActor)
		{
			bool bCanSeePlayer = BlackboardComp->GetValueAsBool(TEXT("CanSeePlayer"));
          
			ATP3ShootCharacter* AIChar = Cast<ATP3ShootCharacter>(AICon->GetPawn());
			if (AIChar && bCanSeePlayer) 
			{
				AICon->SetFocus(TargetActor);
				AIChar->Fire();
				TimeSinceLastShot = 0.0f;
			}
		}
	}
}