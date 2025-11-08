// BTService_UpdateTargetLocation.cpp

#include "BTService_UpdateTargetLoc.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "GameFramework/Actor.h"

 UBTService_UpdateTargetLoc::UBTService_UpdateTargetLoc() 
 {
     NodeName = TEXT("Update Target Location");
     
}

void UBTService_UpdateTargetLoc::TickNode(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds)
{
	Super::TickNode(OwnerComp, NodeMemory, DeltaSeconds);

	UBlackboardComponent* BlackboardComp = OwnerComp.GetBlackboardComponent();
	if (!BlackboardComp) return;
 	
 	AActor* TargetActor = Cast<AActor>(BlackboardComp->GetValueAsObject(TargetActorKey.SelectedKeyName));

	if (TargetActor)
	{
		BlackboardComp->SetValueAsVector(TargetLocationKey.SelectedKeyName, TargetActor->GetActorLocation());
	}
}