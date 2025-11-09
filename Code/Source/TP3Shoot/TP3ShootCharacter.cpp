// Copyright Epic Games, Inc. All Rights Reserved.

#include "TP3ShootCharacter.h"

#include "AIControllerShooter.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/InputComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/Controller.h"
#include "Components/TimelineComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "Kismet/KismetSystemLibrary.h"
#include "Kismet/GameplayStatics.h"
#include "Perception/AISense_Hearing.h"
#include "AIShooterCharacter.h"


//////////////////////////////////////////////////////////////////////////
// ATP3ShootCharacter

	ATP3ShootCharacter::ATP3ShootCharacter()
	{
		// Set size for collision capsule
		GetCapsuleComponent()->InitCapsuleSize(42.f, 96.0f);

		// set our turn rate for input
		TurnRateGamepad = 50.f;

		// Don't rotate when the controller rotates. Let that just affect the camera.
		bUseControllerRotationPitch = false;
		bUseControllerRotationYaw = false;
		bUseControllerRotationRoll = false;

		// Configure character movement
		GetCharacterMovement()->bOrientRotationToMovement = true; // Character moves in the direction of input...	
		GetCharacterMovement()->RotationRate = FRotator(0.0f, 500.0f, 0.0f); // ...at this rotation rate

		// Note: For faster iteration times these variables, and many more, can be tweaked in the Character Blueprint
		// instead of recompiling to adjust them
		GetCharacterMovement()->JumpZVelocity = 700.f;
		GetCharacterMovement()->AirControl = 0.35f;
		GetCharacterMovement()->MaxWalkSpeed = 500.f;
		GetCharacterMovement()->MinAnalogWalkSpeed = 20.f;
		GetCharacterMovement()->BrakingDecelerationWalking = 2000.f;

		// Create a camera boom (pulls in towards the player if there is a collision)
		CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
		CameraBoom->SetupAttachment(RootComponent);
		CameraBoom->TargetArmLength = 400.0f; // The camera follows at this distance behind the character	
		CameraBoom->bUsePawnControlRotation = true; // Rotate the arm based on the controller

		// Create a follow camera
		FollowCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("FollowCamera"));
		FollowCamera->SetupAttachment(CameraBoom, USpringArmComponent::SocketName); // Attach the camera to the end of the boom and let the boom adjust to match the controller orientation
		FollowCamera->bUsePawnControlRotation = false; // Camera does not rotate relative to arm

		// Create SK_Gun
		SK_Gun = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Gun"));
		SK_Gun->SetupAttachment(GetMesh());
		// Set parent socket
		SK_Gun->AttachToComponent(GetMesh(), FAttachmentTransformRules::KeepRelativeTransform, TEXT("GripPoint"));

		// Note: The skeletal mesh and anim blueprint references on the Mesh component (inherited from Character) 
		// are set in the derived blueprint asset named ThirdPersonCharacter (to avoid direct content references in C++)

		StimuliSource = CreateDefaultSubobject<UAIPerceptionStimuliSourceComponent>(TEXT("StimuliSource"));

		// Enregistrer le joueur pour le sens Sight et Hearing
		StimuliSource->RegisterForSense(UAISense_Sight::StaticClass());
		StimuliSource->RegisterForSense(UAISense_Hearing::StaticClass());

		// Enregistrer dans le système de perception d'Unreal
		StimuliSource->RegisterWithPerceptionSystem();
	}

//////////////////////////////////////////////////////////////////////////
// Input

void ATP3ShootCharacter::SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent)
{
	// Set up gameplay key bindings
	check(PlayerInputComponent);
	PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &ACharacter::Jump);
	PlayerInputComponent->BindAction("Jump", IE_Released, this, &ACharacter::StopJumping);

	PlayerInputComponent->BindAxis("Move Forward / Backward", this, &ATP3ShootCharacter::MoveForward);
	PlayerInputComponent->BindAxis("Move Right / Left", this, &ATP3ShootCharacter::MoveRight);

	// We have 2 versions of the rotation bindings to handle different kinds of devices differently
	// "turn" handles devices that provide an absolute delta, such as a mouse.
	// "turnrate" is for devices that we choose to treat as a rate of change, such as an analog joystick
	PlayerInputComponent->BindAxis("Turn Right / Left Mouse", this, &APawn::AddControllerYawInput);
	PlayerInputComponent->BindAxis("Turn Right / Left Gamepad", this, &ATP3ShootCharacter::TurnAtRate);
	PlayerInputComponent->BindAxis("Look Up / Down Mouse", this, &APawn::AddControllerPitchInput);
	PlayerInputComponent->BindAxis("Look Up / Down Gamepad", this, &ATP3ShootCharacter::LookUpAtRate);

	// handle touch devices
	PlayerInputComponent->BindTouch(IE_Pressed, this, &ATP3ShootCharacter::TouchStarted);
	PlayerInputComponent->BindTouch(IE_Released, this, &ATP3ShootCharacter::TouchStopped);

	// Aiming 
	PlayerInputComponent->BindAction("Aiming", IE_Pressed, this, &ATP3ShootCharacter::Aim);
	PlayerInputComponent->BindAction("Aiming", IE_Released, this, &ATP3ShootCharacter::StopAiming);

	// Fire
	PlayerInputComponent->BindAction("Fire", IE_Pressed, this, &ATP3ShootCharacter::Fire);

	// Boost Speed
	PlayerInputComponent->BindAction("BoostSpeed", IE_Pressed, this, &ATP3ShootCharacter::BoostSpeed);
	PlayerInputComponent->BindAction("BoostSpeed", IE_Released, this, &ATP3ShootCharacter::RemoveSpeedBoost);
}

void ATP3ShootCharacter::TouchStarted(ETouchIndex::Type FingerIndex, FVector Location)
{
	Jump();
}

void ATP3ShootCharacter::TouchStopped(ETouchIndex::Type FingerIndex, FVector Location)
{
	StopJumping();
}

void ATP3ShootCharacter::Aim()
{
	IsAiming = true;
}

void ATP3ShootCharacter::StopAiming()
{
	IsAiming = false;
}

// N'oubliez pas d'inclure #include "DrawDebugHelpers.h" en tête de votre fichier .cpp !

void ATP3ShootCharacter::Fire(){
		if (IsFiring) return;

		IsFiring = true;
		

		FVector Start;

		FVector ForwardVector;

		FHitResult HitResult;


		// ... (Logique pour déterminer Start et ForwardVector inchangée) ...

		if (IsPlayerControlled())

		{

			Start = FollowCamera->GetComponentLocation();

			ForwardVector = FollowCamera->GetForwardVector();

		}

		else // Contrôlé par l'IA

		{

			FName MuzzleSocketName = TEXT("MuzzleFlash");

			if (SK_Gun && SK_Gun->DoesSocketExist(MuzzleSocketName))

			{

				Start = SK_Gun->GetSocketLocation(MuzzleSocketName);

			}

			else

			{

				Start = GetMesh()->GetSocketLocation(TEXT("GripPoint"));

			}



			if (Controller)

			{

				ForwardVector = Controller->GetControlRotation().Vector();

			}

			else

			{

				ForwardVector = GetActorForwardVector();

			}

		}



		FVector End = Start + (ForwardVector * WeaponRange);


		// TRACÉ DE RAYON STANDARD + DEBUG VISUEL

		FCollisionQueryParams TraceParams;

		TraceParams.AddIgnoredActor(this);


		if (!IsPlayerControlled() && SK_Gun)

		{

			TraceParams.AddIgnoredActor(SK_Gun->GetOwner());

		}

		if (GetWorld()->LineTraceSingleByChannel(HitResult, Start, End, ECC_Visibility, TraceParams))

		{

			FVector ImpactPoint = HitResult.ImpactPoint;

			FireParticle(Start, ImpactPoint);



			AActor* HitActor = HitResult.GetActor();

			if (HitActor)

			{

				UGameplayStatics::ApplyDamage(HitActor, Damage, GetController(), this, nullptr);

			}


			// 2. Dessine la ligne VERTE (touche l'ImpactPoint)

#if ENABLE_DRAW_DEBUG

			DrawDebugLine(GetWorld(), Start, ImpactPoint, FColor::Green, false, 3.0f, 0, 2.0f);

#endif

		}

		else

		{

			// 1. Particules (si ça rate)

			FVector EndNoHit = Start + (ForwardVector * WeaponRange);

			FireParticle(Start, EndNoHit);



#if ENABLE_DRAW_DEBUG

			DrawDebugLine(GetWorld(), Start, EndNoHit, FColor::Red, false, 3.0f, 0, 2.0f);

#endif

		}

		// Cadence de tir

		GetWorldTimerManager().SetTimer(FireTimer, [&]()

		{

		IsFiring = false;

		}, FireRate, false);

	}

void ATP3ShootCharacter::BoostSpeed()
{
	// Set Max walking speed to 800
	GetCharacterMovement()->MaxWalkSpeed = 800.f;

	GetWorld()->GetTimerManager().SetTimer(BoostSpeedTimer, [&]()
		{
			// Set Max walking speed to 500
			GetCharacterMovement()->MaxWalkSpeed = 500.f;
			
			// Clear existing timer boost speed
			GetWorldTimerManager().ClearTimer(BoostSpeedTimer);

		}, 4, false);
}

void ATP3ShootCharacter::RemoveSpeedBoost()
{
	// Set Max walking speed to 500
	GetCharacterMovement()->MaxWalkSpeed = 500.f;
}


void ATP3ShootCharacter::FireParticle(FVector Start, FVector Impact)
{
	if (!ParticleStart || !ParticleImpact) return;

	FTransform ParticleT;

	ParticleT.SetLocation(Start);

	ParticleT.SetScale3D(FVector(0.25, 0.25, 0.25));

	UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), ParticleStart, ParticleT, true);

	// Spawn particle at impact point
	ParticleT.SetLocation(Impact);

	UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), ParticleImpact, ParticleT, true);

}

void ATP3ShootCharacter::TurnAtRate(float Rate)
{
	// calculate delta for this frame from the rate information
	AddControllerYawInput(Rate * TurnRateGamepad * GetWorld()->GetDeltaSeconds());
}

void ATP3ShootCharacter::LookUpAtRate(float Rate)
{
	// calculate delta for this frame from the rate information
	AddControllerPitchInput(Rate * TurnRateGamepad * GetWorld()->GetDeltaSeconds());
}

void ATP3ShootCharacter::MoveForward(float Value)
{
	if ((Controller != nullptr) && (Value != 0.0f))
	{
		// find out which way is forward
		const FRotator Rotation = Controller->GetControlRotation();
		const FRotator YawRotation(0, Rotation.Yaw, 0);

		// get forward vector
		const FVector Direction = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::X);
		AddMovementInput(Direction, Value);
	}
}

void ATP3ShootCharacter::MoveRight(float Value)
{
	if ( (Controller != nullptr) && (Value != 0.0f) )
	{
		// find out which way is right
		const FRotator Rotation = Controller->GetControlRotation();
		const FRotator YawRotation(0, Rotation.Yaw, 0);
	
		// get right vector 
		const FVector Direction = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::Y);
		// add movement in that direction
		AddMovementInput(Direction, Value);
	}
}


float ATP3ShootCharacter::TakeDamage(float DamageAmount, FDamageEvent const& DamageEvent, AController* EventInstigator, AActor* DamageCauser)
	{
		float ActualDamage = Super::TakeDamage(DamageAmount, DamageEvent, EventInstigator, DamageCauser);

		if (ActualDamage > 0.0f)
		{
			Life -= FMath::RoundToInt(ActualDamage);
        
			UE_LOG(LogTemp, Warning, TEXT("%s a subi %.2f dégâts. Vie restante : %d"), 
				*GetName(), ActualDamage, Life);

			AAIControllerShooter* AIController = Cast<AAIControllerShooter>(GetController());
        
			if (AIController && DamageCauser && EventInstigator)
			{
				if (UBlackboardComponent* BlackboardComp = AIController->GetBlackboardComponent())
				{
					bool bIsPlayerVisible = BlackboardComp->GetValueAsBool(TEXT("CanSeePlayer"));

					if (!bIsPlayerVisible)
					{
						AIController->ReactToThreat(DamageCauser); 
					}
				}
				else
				{
					AIController->ReactToThreat(DamageCauser);
				}
			}
        
			if (Life <= 0)
			{
				// Destruction ou logique de mort ici
			}
		}

		return ActualDamage;
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
	