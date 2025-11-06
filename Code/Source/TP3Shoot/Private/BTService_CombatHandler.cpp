// Fill out your copyright notice in the Description page of Project Settings.


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

		// 1. Récupérer la cible
		AActor* TargetActor = Cast<AActor>(BlackboardComp->GetValueAsObject("PlayerTargetActor"));

		if (TargetActor)
		{
			ATP3ShootCharacter* AIChar = Cast<ATP3ShootCharacter>(AICon->GetPawn());
			if (AIChar)
			{
				// 2. Maintenir le Focus (Au cas où une autre tâche l'aurait effacé)
				AICon->SetFocus(TargetActor);
                
				// 3. Tirer !
				AIChar->Fire();
                
				// 4. Réinitialiser la cadence du service
				TimeSinceLastShot = 0.0f;
			}
		}
	}
}
