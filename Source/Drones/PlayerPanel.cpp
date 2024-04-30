// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerPanel.h"
#include "HealthBar.h"
#include "AmmoBar.h"

void UPlayerPanel::NativeConstruct()
{
	Super::NativeConstruct();
	HealthBar = Cast<UHealthBar>(CreateWidget(this, HealthBar->StaticClass()));
	AmmoBar = Cast<UAmmoBar>(CreateWidget(this, AmmoBar->StaticClass()));
}

void UPlayerPanel::SetHealthBar(UHealthBar* InHealthBar)
{
	HealthBar = InHealthBar;
}
UHealthBar* UPlayerPanel::GetHealthBar() const
{
	return HealthBar;
}

UAmmoBar* UPlayerPanel::GetAmmoBar() const
{
	return AmmoBar;
}
