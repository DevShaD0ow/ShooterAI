#include "AIControllerShooter.h"
#include "Perception/AISense_Sight.h"
#include "BehaviorTree/BlackboardData.h"
#include "BehaviorTree/BehaviorTree.h"
#include "AIShooterCharacter.h"

AAIControllerShooter::AAIControllerShooter()
{
	// Composants de perception
	AIPerceptionComponent = CreateDefaultSubobject<UAIPerceptionComponent>(TEXT("AIPerceptionComponent"));
	SightConfig = CreateDefaultSubobject<UAISenseConfig_Sight>(TEXT("SightConfig"));
	SetPerceptionComponent(*AIPerceptionComponent);

	// Paramètres de vision
	SightConfig->SightRadius = 2000.0f;
	SightConfig->LoseSightRadius = 2500.0f;
	SightConfig->PeripheralVisionAngleDegrees = 90.0f;
	SightConfig->SetMaxAge(5.0f);

	SightConfig->DetectionByAffiliation.bDetectEnemies = true;
	SightConfig->DetectionByAffiliation.bDetectFriendlies = true;
	SightConfig->DetectionByAffiliation.bDetectNeutrals = true;

	AIPerceptionComponent->ConfigureSense(*SightConfig);
	AIPerceptionComponent->SetDominantSense(SightConfig->GetSenseImplementation());

	// Components Behavior Tree
	BlackboardComponent = CreateDefaultSubobject<UBlackboardComponent>(TEXT("BlackboardComponent"));
	BehaviorTreeComponent = CreateDefaultSubobject<UBehaviorTreeComponent>(TEXT("BehaviorTreeComponent"));
}

void AAIControllerShooter::BeginPlay()
{
	Super::BeginPlay();

	// 🔹 Attache l’événement de perception
	AIPerceptionComponent->OnTargetPerceptionUpdated.AddDynamic(this, &AAIControllerShooter::OnTargetPerceptionUpdated);

	// 🔹 Récupère le Pawn contrôlé
	APawn* ControlledPawn = GetPawn();
	if (!ControlledPawn) return;

	AAIShooterCharacter* AICharacter = Cast<AAIShooterCharacter>(ControlledPawn);
	if (AICharacter && AICharacter->BehaviorTree)
	{
		// Initialise Blackboard et Behavior Tree
		UseBlackboard(AICharacter->BehaviorTree->BlackboardAsset, BlackboardComponent);
		RunBehaviorTree(AICharacter->BehaviorTree);
	}
}

void AAIControllerShooter::OnTargetPerceptionUpdated(AActor* Actor, FAIStimulus Stimulus)
{
	if (!Actor) return; // vérifie juste que l'acteur existe

	// Optionnel : vérifier que ce n’est pas l’IA elle-même
	if (Actor == GetPawn()) return;

	// Vision (vue)
	if (Stimulus.Type == UAISense::GetSenseID<UAISense_Sight>())
	{
		if (Stimulus.WasSuccessfullySensed())
		{
			UE_LOG(LogTemp, Warning, TEXT("IA voit le joueur !"));
			BlackboardComponent->SetValueAsBool("CanSeePlayer", true);
			BlackboardComponent->SetValueAsObject("Target", Actor);
		}
		else
		{
			UE_LOG(LogTemp, Warning, TEXT("IA ne voit plus le joueur."));
			BlackboardComponent->SetValueAsBool("CanSeePlayer", false);
			BlackboardComponent->SetValueAsObject("Target", nullptr);
		}
	}
}
