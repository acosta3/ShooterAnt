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


	

	for (AActor* ShooterAIActor : ShooterAIActors)
	{
		
		AShooterAI* ShooterAI = Cast<AShooterAI>(ShooterAIActor);

		if (ShooterAI)
		{
			ShooterAI->StartBehaviorTree(Player);
			UE_LOG(LogTemp, Display, TEXT("%s Starting behaviortree"), *ShooterAI->GetActorNameOrLabel());
		}
	}


}
