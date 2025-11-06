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

	// Callback de perception
	UFUNCTION()
	void OnTargetPerceptionUpdated(AActor* Actor, FAIStimulus Stimulus);
	void ForgetPlayer();
	void ReactToThreat(AActor* Attacker);

protected:
	// Composants de perception et configuration
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="AI")
	UAIPerceptionComponent* AIPerceptionComponent;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="AI")
	UAISenseConfig_Sight* SightConfig;

	FTimerHandle LostSightTimer;
	
	// Composants de Behavior Tree
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="AI")
	UBlackboardComponent* BlackboardComponent;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="AI")
	UBehaviorTreeComponent* BehaviorTreeComponent;
};
