// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "AmmoBar.generated.h"

/**
 * 
 */
UCLASS()
class DRONES_API UAmmoBar : public UUserWidget
{
	GENERATED_BODY()
public:
	void SetAmmoAmount(int32 Ammo);

	void SetMaxAmmoAmount(int32 Max);

protected:
	UPROPERTY(BlueprintReadOnly)
	int32 AmmoAmount = 0;

	UPROPERTY(BlueprintReadOnly)
	int32 MaxAmmoAmount = 1;
};
