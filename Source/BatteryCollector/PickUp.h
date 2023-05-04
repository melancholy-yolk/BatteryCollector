// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PickUp.generated.h"

UCLASS()
class BATTERYCOLLECTOR_API APickUp : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	APickUp();

	UFUNCTION(BlueprintPure, Category="Pickup")
	bool IsActive();

	UFUNCTION(BlueprintCallable, Category = "Pickup")
	void SetActive(bool NewPickupState);

	UFUNCTION(BlueprintNativeEvent)
	void WasCollected();

	virtual void WasCollected_Implementation();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	bool bIsActive;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	FORCEINLINE UStaticMeshComponent* GetMesh() const { return PickupMesh; }

private:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="Pickup", meta=(AllowPrivateAccess="true"))
	UStaticMeshComponent* PickupMesh;

};
