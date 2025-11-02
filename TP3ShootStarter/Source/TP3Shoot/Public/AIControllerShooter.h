#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "Perception/AIPerceptionTypes.h"
#include "Perception/AIPerceptionComponent.h"
#include "Perception/AISenseConfig_Sight.h"
#include "BehaviorTree/BehaviorTree.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "BehaviorTree/BehaviorTreeComponent.h"
#include "AIControllerShooter.generated.h"

UCLASS()
class TP3SHOOT_API AAIControllerShooter : public AAIController
{
	GENERATED_BODY()

public:
	AAIControllerShooter();

	virtual void BeginPlay() override;

	// Callback perception
	UFUNCTION()
	void OnTargetPerceptionUpdated(AActor* Actor, FAIStimulus Stimulus);

protected:
	// Composants du Behavior Tree et Blackboard
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	UBlackboardComponent* BlackboardComponent;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	UBehaviorTreeComponent* BehaviorTreeComponent;
};
