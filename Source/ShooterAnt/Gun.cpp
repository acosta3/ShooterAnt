// Fill out your copyright notice in the Description page of Project Settings.


#include "Gun.h"

// Sets default values
AGun::AGun()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;


	MyRoot = CreateDefaultSubobject<USceneComponent>(TEXT("Root Comp"));
	SetRootComponent(MyRoot);

	SkeletalComp = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Skeletal Comp"));
	SkeletalComp->SetupAttachment(RootComponent);




}

// Called when the game starts or when spawned
void AGun::BeginPlay()
{
	Super::BeginPlay();

	
	
	
}

// Called every frame
void AGun::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AGun::PullTrigger()
{
	if (OwnerController)

	{
		FRotator ViewPointRotation;
		FVector ViewPointLocation;
		OwnerController->GetPlayerViewPoint(ViewPointLocation, ViewPointRotation);

		//DrawDebugCamera(GetWorld(), ViewPointLocation, ViewPointRotation, 90.f, 2.f, FColor::Red, true);
		FVector EndLocation = ViewPointLocation + (ViewPointRotation.Vector() * MaxRange);

		FHitResult HitResult;

		FCollisionQueryParams Params;
		Params.AddIgnoredActor(this);
		Params.AddIgnoredActor(GetOwner());

		bool isHit = GetWorld()->LineTraceSingleByChannel(
			HitResult,
			ViewPointLocation,
			EndLocation,
			ECC_EngineTraceChannel2,
			Params
		);

		if(isHit)
		{
			DrawDebugSphere(
				GetWorld(),
				HitResult.ImpactPoint,
				5.0f,
				16,
				FColor::Red,
				true
			);
		}

		
	}
}

