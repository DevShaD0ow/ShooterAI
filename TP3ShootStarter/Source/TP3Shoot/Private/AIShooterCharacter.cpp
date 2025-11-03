#include "AIShooterCharacter.h"
#include "AIControllerShooter.h"

AAIShooterCharacter::AAIShooterCharacter()
{
	AIControllerClass = AAIControllerShooter::StaticClass();
	AutoPossessAI = EAutoPossessAI::PlacedInWorldOrSpawned;
}
