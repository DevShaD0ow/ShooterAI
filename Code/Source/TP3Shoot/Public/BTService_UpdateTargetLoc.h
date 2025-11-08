// BTService_UpdateTargetLocation.h

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTService.h"
#include "BehaviorTree/Blackboard/BlackboardKeyType.h" // Nécessaire pour FBlackboardKeySelector
#include "BTService_UpdateTargetLoc.generated.h"

UCLASS()
class TP3SHOOT_API UBTService_UpdateTargetLoc : public UBTService
{
	GENERATED_BODY()

public:
	UBTService_UpdateTargetLoc();

protected:
	virtual void TickNode(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds) override;

	UPROPERTY(EditAnywhere, Category = "Blackboard")
	FBlackboardKeySelector TargetActorKey;

	UPROPERTY(EditAnywhere, Category = "Blackboard")
	FBlackboardKeySelector TargetLocationKey; 
};