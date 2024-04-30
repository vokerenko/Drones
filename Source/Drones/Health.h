// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "Health.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI, meta = (CannotImplementInterfaceInBlueprint))
class UHealth : public UInterface
{
	GENERATED_BODY()
};


/**
 * 
 */

class DRONES_API IHealth
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:
	UFUNCTION(BlueprintCallable)
	virtual void SetHealth(float NewHealth);

	// true means need to kill the actor, false otherwise
	virtual bool TakeDamage(const float DamageAmount);
protected:
	
	float Health = 1.0f;

	TObjectPtr<class UHealthBar> HealthBar = nullptr;

};
