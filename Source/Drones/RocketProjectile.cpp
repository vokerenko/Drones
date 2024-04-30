// Fill out your copyright notice in the Description page of Project Settings.


#include "RocketProjectile.h"
#include "Components/StaticMeshComponent.h"
#include "Components/BoxComponent.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "Kismet/GameplayStatics.h"
#include "Health.h"
#include "Drone.h"

const FName ARocketProjectile::CollisionComponentName(TEXT("BoxComponent0"));
const FName ARocketProjectile::MeshComponentName(TEXT("StaticMeshComponent0"));
const FName ARocketProjectile::ProjectileMovementComponentName(TEXT("ProjectileMovementComponent"));

// Sets default values
ARocketProjectile::ARocketProjectile()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;
	BoxComponent = CreateDefaultSubobject<UBoxComponent>(ARocketProjectile::CollisionComponentName);
	StaticMeshComponent = CreateOptionalDefaultSubobject<UStaticMeshComponent>(ARocketProjectile::MeshComponentName);
	if (StaticMeshComponent)
	{
		StaticMeshComponent->AttachToComponent(BoxComponent, FAttachmentTransformRules::KeepRelativeTransform);
	}
	ProjectileMovementComponent = CreateDefaultSubobject<UProjectileMovementComponent>(ARocketProjectile::ProjectileMovementComponentName);
	if (ProjectileMovementComponent)
	{
		ProjectileMovementComponent->Bounciness = 0.0f;
		ProjectileMovementComponent->Friction = 0.0f;
		ProjectileMovementComponent->BounceVelocityStopSimulatingThreshold = 0.0f;
		ProjectileMovementComponent->InitialSpeed = 2000.0f;
		ProjectileMovementComponent->MaxSpeed = 3000.0f;
		ProjectileMovementComponent->ProjectileGravityScale = 0.0f;
	}
}

// Called when the game starts or when spawned
void ARocketProjectile::BeginPlay()
{
	Super::BeginPlay();
	if (BoxComponent)
	{
		BoxComponent->OnComponentBeginOverlap.AddDynamic(this, &ARocketProjectile::OnCollision);
	}
}

// Called every frame
void ARocketProjectile::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ARocketProjectile::OnCollision(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (OtherActor != this && OtherActor != Owner)
	{
		if (ExplosionEffect)
		{
			UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), ExplosionEffect, GetActorTransform());
		}
		if (ExplosionSound)
		{
			constexpr const float VolumeModifier = 0.5f;
			UGameplayStatics::SpawnSoundAtLocation(GetWorld(), ExplosionSound, GetActorLocation(), FRotator::ZeroRotator, VolumeModifier);
		}
		Destroy();
		if (IHealth* HealthActor = Cast<IHealth>(OtherActor))
		{
			bool bShouldDestroyActor = HealthActor->TakeDamage(Damage);
			if (bShouldDestroyActor)
			{
				if (ADrone* Drone = Cast<ADrone>(OtherActor))
				{
					UGameplayStatics::OpenLevel(GetWorld(), TEXT("L_Menu"));
				}
				else
				{
					OtherActor->Destroy();
				}
			}
		}
	}
}

