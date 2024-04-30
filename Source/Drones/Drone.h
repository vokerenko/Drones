// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "Health.h"
#include "Drone.generated.h"

class UInputAction;
UCLASS()
class DRONES_API ADrone : public APawn, public IHealth
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	ADrone();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	virtual void OnConstruction(const FTransform& Transform) override;

	UFUNCTION(BlueprintCallable)
	void UpdateUIVisibility(bool bIsVisible);

	UFUNCTION(BlueprintCallable)
	void UpdateAmmoBar();
public:
	const static FName MovementComponentName;

	/** Name of the CollisionComponent. */
	const static FName CollisionComponentName;

	/** Name of the MeshComponent. */
	const static FName MeshComponentName;

	/** Name of the CameraComponent. */
	const static FName CameraComponentName;

	/** Name of the WidgetComponent. */
	const static FName WidgetComponentName;

protected:
	UFUNCTION()
	void Move(const FVector& Vec);

	UFUNCTION()
	void Rotate(const FVector2D& Vec);

	UFUNCTION()
	void Fire();
protected:
	UPROPERTY(BlueprintReadOnly, Category = "Widget")
	TObjectPtr<class UPlayerPanel> Panel;

	UPROPERTY(BlueprintReadOnly, Category = "Widget")
	TObjectPtr<class UAmmoBar> AmmoBar;

	UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Category = "Widget")
	TSubclassOf<class UPlayerPanel> PanelClass;

	UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Category = "Projectile")
	TSubclassOf<class ARocketProjectile> ProjectileClass;


	UPROPERTY(EditAnywhere, Category = "Input")
	TSoftObjectPtr<class UInputMappingContext> InputMapping;

	UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Category = "Input")
	TObjectPtr<UInputAction> MovementAction;

	UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Category = "Input")
	TObjectPtr<UInputAction> RotationAction;

	UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Category = "Input")
	TObjectPtr<UInputAction> FireAction;

	UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
	TObjectPtr<class UPawnMovementComponent> MovementComponent;

	UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
	TObjectPtr<class UCameraComponent> CameraComponent;


	UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
	TObjectPtr<class UStaticMeshComponent> StaticMeshComponent;

	UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
	TObjectPtr<class UBoxComponent> CollisionComponent;

	UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
	int32 MaxAmmoAmount = 10;

	UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
	int32 AmmoAmount = MaxAmmoAmount;

	UPROPERTY()
	bool bIsUIVisible = false;
};
