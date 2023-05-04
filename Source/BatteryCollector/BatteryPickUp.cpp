// Fill out your copyright notice in the Description page of Project Settings.


#include "BatteryPickUp.h"

ABatteryPickUp::ABatteryPickUp()
{
	GetMesh()->SetSimulatePhysics(true);
}

void ABatteryPickUp::WasCollected_Implementation()
{
	Super::WasCollected_Implementation();
	Destroy();
}

float ABatteryPickUp::GetPower()
{
	return BatteryPower;
}
