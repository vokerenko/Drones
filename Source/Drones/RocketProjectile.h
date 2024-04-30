// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "RocketProjectile.generated.h"

UCLASS()
class DRONES_API ARocketProjectile : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ARocketProjectile();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

public:
	UFUNCTION()
	void OnCollision(UPrimitiveComponent* OverlappedComp, AActor* OtherActor,
		UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
public:
	/** Name of the CollisionComponent. */
	const static FName CollisionComponentName;

	/** Name of the MeshComponent. */
	const static FName MeshComponentName;

	/** Name of the CameraComponent. */
	const static FName ProjectileMovementComponentName;
protected:
	UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Category = "Explosion")
	TObjectPtr<UParticleSystem> ExplosionEffect;

	UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Category = "Explosion")
	TObjectPtr<USoundBase> ExplosionSound;

	UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Category = "Explosion")
	float Damage = 1.0f;

	UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Category = "Default")
	TObjectPtr<class UBoxComponent> BoxComponent;

	UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Category = "Default")
	TObjectPtr<class UStaticMeshComponent> StaticMeshComponent;

	UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Category = "Default")
	TObjectPtr<class UProjectileMovementComponent> ProjectileMovementComponent;

	
};
