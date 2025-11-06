#include "AIShooterCharacter.h"
#include "AIControllerShooter.h"
#include "GameFramework/CharacterMovementComponent.h"

AAIShooterCharacter::AAIShooterCharacter()
{
	bUseControllerRotationYaw = true;
	GetCharacterMovement()->bOrientRotationToMovement = false; 
	
}
