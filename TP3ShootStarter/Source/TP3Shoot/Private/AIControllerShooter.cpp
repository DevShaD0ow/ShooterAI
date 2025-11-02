// Fill out your copyright notice in the Description page of Project Settings.


#include "TP3Shoot/Public/AIControllerShooter.h"

#include "Perception/AIPerceptionComponent.h"
#include "Perception/AISenseConfig_Sight.h"
#include "TP3Shoot/Public/AIShooterCharacter.h"


AAIControllerShooter::AAIControllerShooter()
{
	// Création des composants
	AIPerceptionComponent = CreateDefaultSubobject<UAIPerceptionComponent>(TEXT("AIPerceptionComponent"));
	SightConfig = CreateDefaultSubobject<UAISenseConfig_Sight>(TEXT("SightConfig"));
	SetPerceptionComponent(*AIPerceptionComponent);

	// Comportement et blackboard
	BlackboardComp = CreateDefaultSubobject<UBlackboardComponent>(TEXT("BlackboardComponent"));
	BehaviorComp = CreateDefaultSubobject<UBehaviorTreeComponent>(TEXT("BehaviorComponent"));

	// Config vue
	SightConfig->SightRadius = 3000.f;
	SightConfig->LoseSightRadius = 3500.f;
	SightConfig->PeripheralVisionAngleDegrees = 90.f;
	SightConfig->SetMaxAge(5.f);
	SightConfig->DetectionByAffiliation.bDetectEnemies = true;
	SightConfig->DetectionByAffiliation.bDetectFriendlies = true;
	SightConfig->DetectionByAffiliation.bDetectNeutrals = true;

	AIPerceptionComponent->ConfigureSense(*SightConfig);
	AIPerceptionComponent->SetDominantSense(SightConfig->GetSenseImplementation());
}

void AAIControllerShooter::BeginPlay()
{
	Super::BeginPlay();

	AIPerceptionComponent->OnTargetPerceptionUpdated.AddDynamic(this, &AAIControllerShooter::OnTargetPerceptionUpdated);

	if (BehaviorTreeComponent)
	{
		RunBehaviorTree(BehaviorTreeComponent);
	}
}

void AAIControllerShooter::OnTargetPerceptionUpdated(AActor* Actor, FAIStimulus const Stimulus)
{
	// Check actor is a TP3ShootCharacter
	AAIShooterCharacter* ShootCharacter = Cast<AAIShooterCharacter>(Actor);
	// Get the team id of the AI character

	
	//int TeamId = Cast<AAIShooterCharacter>(GetPawn())->TeamId;
	//if (!ShootCharacter || ShootCharacter->TeamId == TeamId) return;

	
	// check if stimulus is sight
	if (Stimulus.Type == UAISense::GetSenseID<UAISense_Sight>())
	{
		// if stimulus is sight, check if stimulus is sensed
		if (Stimulus.WasSuccessfullySensed())
		{
			// Set can see player to true
			BlackboardComponent->SetValueAsBool("CanSeePlayer", true);
			// Set target actor
			BlackboardComponent->SetValueAsObject("Target", Actor);
		}
		else
		{
			BlackboardComponent->SetValueAsBool("CanSeePlayer", false);
			BlackboardComponent->SetValueAsObject("Target", nullptr);
		}
	}
}