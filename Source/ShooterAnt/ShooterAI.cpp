// Fill out your copyright notice in the Description page of Project Settings.


#include "ShooterAI.h"
#include "Kismet/GameplayStatics.h"

#include "BehaviorTree/BlackboardComponent.h"

void AShooterAI::BeginPlay()
{
	Super::BeginPlay();

	// says at the world find for player pawn(0) which is the player we play
	// remeber that getPawn returns to the AI character itself 
	//PlayerPawn = UGameplayStatics::GetPlayerPawn(GetWorld(), 0);

	

	
}

void AShooterAI::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	/*
	if (PlayerPawn)
	{
		//SetFocus(PlayerPawn);

		// have to set up navigation mesh first

		if (LineOfSightTo(PlayerPawn)) 
		{
			MoveToActor(PlayerPawn, 200.0f);

		}
		else
		{
			ClearFocus(EAIFocusPriority::Gameplay);
			StopMovement(); 
		}

		
		
	}
	*/

}

void AShooterAI::StartBehaviorTree(AShooterAntCharacter* Player)
{

	if (EnemyAIBehaviorTree)
	{
		// refers to the AI charactere
		MyCharacter = Cast<AShooterAntCharacter>(GetPawn());
		if (Player) 
		{
			//setting the player 
			PlayerCharacter = Player;
		}
		RunBehaviorTree(EnemyAIBehaviorTree);

		UBlackboardComponent* MyBlackBoard = GetBlackboardComponent();
		if (MyBlackBoard && PlayerCharacter && MyCharacter)
		{
			MyBlackBoard->SetValueAsVector("StartLocation", MyCharacter->GetActorLocation());
			//MyBlackBoard->SetValueAsVector("PlayerLocation", PlayerCharacter->GetActorLocation());
		}
	}
}

 
