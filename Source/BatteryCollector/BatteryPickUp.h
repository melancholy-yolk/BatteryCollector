// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PickUp.h"
#include "BatteryPickUp.generated.h"

/**
 * 
 */
UCLASS()
class BATTERYCOLLECTOR_API ABatteryPickUp : public APickUp
{
	GENERATED_BODY()
	
public:
	// Sets default values for this actor's properties
	ABatteryPickUp();

	virtual void WasCollected_Implementation() override;

	float GetPower();

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Power", Meta = (BlueprintProtected = "true"))
	float BatteryPower;

};
