// Fill out your copyright notice in the Description page of Project Settings.


#include "Turret.h"
#include "Components/StaticMeshComponent.h"
#include "Components/ArrowComponent.h"
#include "Perception/PawnSensingComponent.h"
#include "Kismet/GameplayStatics.h"
#include "RocketProjectile.h"
#include "Drone.h"
#include "Kismet/KismetMathLibrary.h"
#include "HealthBar.h"
#include "Components/WidgetComponent.h"

const FName ATurret::ArrowComponentName(TEXT("ArrowComponent0"));
const FName ATurret::PawnSensingComponentName(TEXT("PawnSensingComponent"));
const FName ATurret::MeshComponentName(TEXT("MeshComponent0"));
const FName ADrone::WidgetComponentName(TEXT("HealthBarComponent0"));

ATurret::ATurret()
{
	PrimaryActorTick.bCanEverTick = false;

	StaticMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(ATurret::MeshComponentName);
	StaticMeshComponent->AttachToComponent(RootComponent, FAttachmentTransformRules::KeepRelativeTransform);

	ArrowComponent = CreateDefaultSubobject<UArrowComponent>(ATurret::ArrowComponentName);
	ArrowComponent->AttachToComponent(StaticMeshComponent, FAttachmentTransformRules::KeepRelativeTransform);
	
	WidgetComponent = CreateDefaultSubobject<UWidgetComponent>(ADrone::WidgetComponentName);
	WidgetComponent->AttachToComponent(StaticMeshComponent, FAttachmentTransformRules::KeepRelativeTransform);
	if (HealthBarClass)
	{
		WidgetComponent->SetWidgetClass(HealthBarClass);
	}
	

	PawnSensingComponent = CreateDefaultSubobject<UPawnSensingComponent>(ATurret::PawnSensingComponentName);

	constexpr const float TurretHealth = 5.0f;
	Health = TurretHealth;
}

void ATurret::BeginPlay()
{
	Super::BeginPlay();
	if (PawnSensingComponent)
	{
		PawnSensingComponent->OnSeePawn.AddDynamic(this, &ATurret::OnSeePawn);
	}
	if (WidgetComponent)
	{
		WidgetComponent->InitWidget();
		if (HealthBar = Cast<UHealthBar>(WidgetComponent->GetWidget()))
		{
			HealthBar->SetMaxHealth(Health);
			HealthBar->SetCurrentHealth(Health);
		}
	}

}

void ATurret::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ATurret::OnSeePawn(APawn* Pawn)
{
	if (Cast<ADrone>(Pawn))
	{
		if (ArrowComponent)
		{
			FVector Start = ArrowComponent->GetComponentLocation();;
			FVector End = Pawn->GetActorLocation();
			FRotator Rotation = UKismetMathLibrary::FindLookAtRotation(Start, End);
			SetActorRotation(Rotation);
			if (!GetWorld()->GetTimerManager().IsTimerActive(ReloadRocketTimerHandle))
			{
				GetWorld()->GetTimerManager().SetTimer(ReloadRocketTimerHandle, this, &ATurret::FireRocket, ReloadRocketTime, false);
			}
			
		}
		
	}
}

void ATurret::FireRocket()
{
	FActorSpawnParameters Params;
	Params.Owner = this;
	GetWorld()->SpawnActor<AActor>(ProjectileClass, ArrowComponent->GetComponentTransform(), Params);
	GetWorld()->GetTimerManager().ClearTimer(ReloadRocketTimerHandle);
}

void ATurret::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	Super::EndPlay(EndPlayReason);
	GetWorld()->GetTimerManager().ClearTimer(ReloadRocketTimerHandle);
}

void ATurret::OnConstruction(const FTransform& Transform)
{
	Super::OnConstruction(Transform);
}
