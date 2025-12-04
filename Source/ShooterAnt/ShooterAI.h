// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "ShooterAntCharacter.h"

#include "ShooterAI.generated.h"

/**
 * 
 */
UCLASS()
class SHOOTERANT_API AShooterAI : public AAIController
{
	GENERATED_BODY()

protected:

	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	APawn* PlayerPawn;

	UPROPERTY(EditAnywhere)
	UBehaviorTree* EnemyAIBehaviorTree;

	AShooterAntCharacter* PlayerCharacter;
	AShooterAntCharacter* MyCharacter;

	void StartBehaviorTree(AShooterAntCharacter * Player);




	

};
