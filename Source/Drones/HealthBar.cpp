// Fill out your copyright notice in the Description page of Project Settings.


#include "HealthBar.h"


void UHealthBar::SetCurrentHealth(float Health)
{
	CurrentHealth = Health;
}

void UHealthBar::SetMaxHealth(float Max)
{
	MaxHealth = Max;
}