// Copyright Epic Games, Inc. All Rights Reserved.

#include "ShooterAntGameMode.h"
#include "Kismet/GameplayStatics.h"
#include "ShooterAntCharacter.h"
#include "ShooterAI.h"
AShooterAntGameMode::AShooterAntGameMode()
{
	// stub
}

void AShooterAntGameMode::BeginPlay()
{
	Super::BeginPlay();

	AShooterAntCharacter * Player = Cast<AShooterAntCharacter>(UGameplayStatics::GetPlayerPawn(GetWorld(), 0));

	TArray<AActor*>ShooterAIActors;
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), AShooterAI::StaticClass(), ShooterAIActors);


	for (int32 LoopIndex = 0; LoopIndex < ShooterAIActors.Num(); LoopIndex++) 
	{
		AActor* ShooterAIActor = ShooterAIActors[LoopIndex];
		AShooterAI* ShooterAI = Cast<AShooterAI>(ShooterAIActor);

		if (ShooterAI)
		{
			ShooterAI->StartBehaviorTree(Player);
		}
	}


}
