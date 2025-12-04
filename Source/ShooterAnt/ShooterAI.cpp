// Fill out your copyright notice in the Description page of Project Settings.

#include "Kismet/GameplayStatics.h"
#include "ShooterAI.h"

void AShooterAI::BeginPlay()
{
	Super::BeginPlay();

	// says at the world find for player pawn(0) which is the player we play
	// remeber that getPawn returns to the AI character itself 
	APawn* PlayerPawn = UGameplayStatics::GetPlayerPawn(GetWorld(), 0);

	if (PlayerPawn)
	{
		SetFocus(PlayerPawn);
	}
}
