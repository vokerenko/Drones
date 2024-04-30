// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "HealthBar.generated.h"

/**
 * 
 */
UCLASS()
class DRONES_API UHealthBar : public UUserWidget
{
	GENERATED_BODY()

public:
	void SetCurrentHealth(const float Health);
	void SetMaxHealth(const float Max);
protected:
	UPROPERTY(BlueprintReadOnly)
	float CurrentHealth = 0.0f;

	UPROPERTY(BlueprintReadOnly)
	float MaxHealth = 1.0f;
};
