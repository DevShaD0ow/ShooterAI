// Fill out your copyright notice in the Description page of Project Settings.


#include "ShooterGameState.h"
// Fill out your copyright notice in the Description page of Project Settings.

#include "ShooterGameState.h"

void AShooterGameState::updatekillTeam0()
{
	// Incrémente le score de l'équipe 0
	killTeam0++;
    
	// Facultatif : Afficher un log pour déboguer
	UE_LOG(LogTemp, Warning, TEXT("Score Équipe 0 mis à jour : %d"), killTeam0);
}

void AShooterGameState::updatekillTeam1()
{
	// Incrémente le score de l'équipe 1
	killTeam1++;
    
	// Facultatif : Afficher un log pour déboguer
	UE_LOG(LogTemp, Warning, TEXT("Score Équipe 1 mis à jour : %d"), killTeam1);
}