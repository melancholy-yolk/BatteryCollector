// Fill out your copyright notice in the Description page of Project Settings.


#include "PickUp.h"

// Sets default values
APickUp::APickUp()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	bIsActive = true;

	PickupMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("PickupMesh"));
	RootComponent = PickupMesh;
}

bool APickUp::IsActive()
{
	return bIsActive;
}

void APickUp::SetActive(bool NewPickupState)
{
	bIsActive = NewPickupState;
}

void APickUp::WasCollected_Implementation()
{
	FString PickupDebugString = GetName();
	UE_LOG(LogClass, Log, TEXT("You have collected %s"), *PickupDebugString);
}

// Called when the game starts or when spawned
void APickUp::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APickUp::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

