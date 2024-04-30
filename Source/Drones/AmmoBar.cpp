// Fill out your copyright notice in the Description page of Project Settings.


#include "AmmoBar.h"

void UAmmoBar::SetAmmoAmount(int32 Ammo)
{
	AmmoAmount = Ammo;
}

void UAmmoBar::SetMaxAmmoAmount(int32 Max)
{
	MaxAmmoAmount = Max;
}