// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "Health.h"
#include "Turret.generated.h"

UCLASS()
class DRONES_API ATurret : public APawn, public IHealth
{
	GENERATED_BODY()

public:
	ATurret();

protected:
	virtual void BeginPlay() override;

public:	
	virtual void Tick(float DeltaTime) override;

	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;

	virtual void OnConstruction(const FTransform& Transform) override;
public:
	const static FName ArrowComponentName;

	/** Name of the CollisionComponent. */
	const static FName PawnSensingComponentName;

	/** Name of the MeshComponent. */
	const static FName MeshComponentName;

protected:
	UFUNCTION()
	void OnSeePawn(APawn* Pawn);

	UFUNCTION()
	void FireRocket();
protected:


	UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Category = "Widget")
	TSubclassOf<class UHealthBar> HealthBarClass;

	UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Category = "Projectile")
	TSubclassOf<class ARocketProjectile> ProjectileClass;

	UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
	TObjectPtr<class UArrowComponent> ArrowComponent;


	UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
	TObjectPtr<class UPawnSensingComponent> PawnSensingComponent;

	UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
	TObjectPtr<class UStaticMeshComponent> StaticMeshComponent;

	UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
	TObjectPtr<class UWidgetComponent> WidgetComponent;

	UPROPERTY()
	FTimerHandle ReloadRocketTimerHandle;

	// in seconds
	UPROPERTY()
	float ReloadRocketTime = 1.5f;
};
