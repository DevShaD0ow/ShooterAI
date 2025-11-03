#pragma once

#include "CoreMinimal.h"
#include "TP3Shoot/TP3ShootCharacter.h"
#include "BehaviorTree/BehaviorTree.h"
#include "AIShooterCharacter.generated.h"

UCLASS()
class TP3SHOOT_API AAIShooterCharacter : public ATP3ShootCharacter
{
	GENERATED_BODY()
	
public:
	AAIShooterCharacter();

	// Référence vers le Behavior Tree utilisé par cette IA
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="AI")
	UBehaviorTree* BehaviorTree;
};
