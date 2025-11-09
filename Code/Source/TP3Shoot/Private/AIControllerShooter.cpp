#include "AIControllerShooter.h"
#include "Perception/AISense_Sight.h"
#include "BehaviorTree/BlackboardData.h"
#include "BehaviorTree/BehaviorTree.h"
#include "AIShooterCharacter.h"
#include "TimerManager.h"

AAIControllerShooter::AAIControllerShooter()
{
    AIPerceptionComponent = CreateDefaultSubobject<UAIPerceptionComponent>(TEXT("AIPerceptionComponent"));
    SightConfig = CreateDefaultSubobject<UAISenseConfig_Sight>(TEXT("SightConfig"));
    SetPerceptionComponent(*AIPerceptionComponent);

    SightConfig->SightRadius = 2000.0f;
    SightConfig->LoseSightRadius = 2500.0f;
    SightConfig->PeripheralVisionAngleDegrees = 90.0f;
    SightConfig->SetMaxAge(5.0f); 

    SightConfig->DetectionByAffiliation.bDetectEnemies = true;
    SightConfig->DetectionByAffiliation.bDetectFriendlies = true;
    SightConfig->DetectionByAffiliation.bDetectNeutrals = true;

    AIPerceptionComponent->ConfigureSense(*SightConfig);
    AIPerceptionComponent->SetDominantSense(SightConfig->GetSenseImplementation());

    BlackboardComponent = CreateDefaultSubobject<UBlackboardComponent>(TEXT("BlackboardComponent"));
    BehaviorTreeComponent = CreateDefaultSubobject<UBehaviorTreeComponent>(TEXT("BehaviorTreeComponent"));
}

void AAIControllerShooter::BeginPlay()
{
    Super::BeginPlay();

    if (AIPerceptionComponent)AIPerceptionComponent->OnTargetPerceptionUpdated.AddDynamic(this, &AAIControllerShooter::OnTargetPerceptionUpdated);
    
    APawn* ControlledPawn = GetPawn();
    if (!ControlledPawn) return;

    AAIShooterCharacter* AICharacter = Cast<AAIShooterCharacter>(ControlledPawn);
    if (AICharacter && AICharacter->BehaviorTree)
    {
        UseBlackboard(AICharacter->BehaviorTree->BlackboardAsset, BlackboardComponent);
        RunBehaviorTree(AICharacter->BehaviorTree);
    }
}

void AAIControllerShooter::OnTargetPerceptionUpdated(AActor* Actor, FAIStimulus Stimulus)
{
    if (!Actor) return;
    if (Actor == GetPawn()) return;

    AAIShooterCharacter* SelfChar = Cast<AAIShooterCharacter>(GetPawn());
    AAIShooterCharacter* OtherChar = Cast<AAIShooterCharacter>(Actor);
    ATP3ShootCharacter* PlayerChar = Cast<ATP3ShootCharacter>(Actor);

    if (SelfChar && OtherChar)
    {
        if (SelfChar->TeamID == OtherChar->TeamID)
        {
            return;
        }
    }

    if (SelfChar && PlayerChar)
    {
        if (SelfChar->TeamID == PlayerChar->TeamID)
        {
            return;
        }
    }

    if (Stimulus.Type == UAISense::GetSenseID<UAISense_Sight>())
    {
        if (Stimulus.WasSuccessfullySensed())
        {
            SetFocus(Actor);
            
            BlackboardComponent->SetValueAsBool("CanSeePlayer", true);
            BlackboardComponent->SetValueAsObject("PlayerTargetActor", Actor); 
            BlackboardComponent->SetValueAsVector("LastKnownPlayerLocation", Actor->GetActorLocation()); 
            GetWorld()->GetTimerManager().ClearTimer(LostSightTimer);
        }
        else 
        {
            BlackboardComponent->ClearValue("CanSeePlayer");
            if (!GetWorld()->GetTimerManager().IsTimerActive(LostSightTimer))
            {
                GetWorld()->GetTimerManager().SetTimer(
                    LostSightTimer, 
                    this, 
                    &AAIControllerShooter::ForgetPlayer, 
                    6.0f, 
                    false
                );
            }
        }
    }
}

void AAIControllerShooter::ForgetPlayer()
{
    ClearFocus(EAIFocusPriority::Gameplay);
    
    BlackboardComponent->ClearValue("PlayerTargetActor");
    BlackboardComponent->ClearValue("LastKnownPlayerLocation");
    BlackboardComponent->ClearValue("CanSeePlayer");
}

// Fonction : AAIControllerShooter::ReactToThreat
void AAIControllerShooter::ReactToThreat(AActor* Attacker){
    if (!BlackboardComponent || !Attacker) return;

    AAIShooterCharacter* SelfChar = Cast<AAIShooterCharacter>(GetPawn());
    AAIShooterCharacter* OtherChar = Cast<AAIShooterCharacter>(Attacker);
    ATP3ShootCharacter* PlayerChar = Cast<ATP3ShootCharacter>(Attacker);

    if (SelfChar && OtherChar)
    {
        if (SelfChar->TeamID == OtherChar->TeamID)
        {
            return;
        }
    }

    if (SelfChar && PlayerChar)
    {
        if (SelfChar->TeamID == PlayerChar->TeamID)
        {
            return;
        }
    }

    SetFocus(Attacker);
    BlackboardComponent->SetValueAsBool("CanSeePlayer", true); 
    BlackboardComponent->SetValueAsObject("PlayerTargetActor", Attacker);
    BlackboardComponent->SetValueAsVector("LastKnownPlayerLocation", Attacker->GetActorLocation());
    BlackboardComponent->SetValueAsBool("IsThreatened", true);
    GetWorld()->GetTimerManager().ClearTimer(LostSightTimer);
    
    UE_LOG(LogTemp, Warning, TEXT("IA %s attaquée par %s. Entrée en mode Menace/Riposte!"), *GetName(), *Attacker->GetName());
    APawn* AIPawn = GetPawn();
    if (AIPawn)
    {
        UE_LOG(LogTemp, Warning, TEXT("Ma position : %s"), *AIPawn->GetActorLocation().ToString());
    }
}