// Fill out your copyright notice in the Description page of Project Settings.


#include "Health.h"
#include "HealthBar.h"

// Add default functionality here for any IHealth functions that are not pure virtual.


void IHealth::SetHealth(float NewHealth)
{
	Health = NewHealth;
	if (HealthBar)
	{
		HealthBar->SetCurrentHealth(Health);
	}
}

bool IHealth::TakeDamage(const float DamageAmount)
{
	Health--;
	if (Health <= 0)
	{
		return true;
	}
	if (HealthBar)
	{
		HealthBar->SetCurrentHealth(Health);
	}
	return false;
}