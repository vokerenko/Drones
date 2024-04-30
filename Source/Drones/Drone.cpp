// Fill out your copyright notice in the Description page of Project Settings.


#include "Drone.h"
#include "GameFramework/FloatingPawnMovement.h"
#include "Components/BoxComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Camera/CameraComponent.h"
#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"
#include "Kismet/KismetMathLibrary.h"
#include "Kismet/GameplayStatics.h"
#include "RocketProjectile.h"
#include "InputMappingContext.h"
#include "HealthBar.h"
#include "PlayerPanel.h"
#include "AmmoBar.h"


const FName ADrone::MovementComponentName(TEXT("MovementComponent0"));
const FName ADrone::CollisionComponentName(TEXT("CollisionComponent0"));
const FName ADrone::MeshComponentName(TEXT("MeshComponent0"));
const FName ADrone::CameraComponentName(TEXT("CameraComponent0"));


ADrone::ADrone()
{
	PrimaryActorTick.bCanEverTick = false;

	BaseEyeHeight = 0.0f;
	SpawnCollisionHandlingMethod = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;

	CollisionComponent = CreateDefaultSubobject<UBoxComponent>(ADrone::CollisionComponentName);

	CollisionComponent->bDynamicObstacle = true;

	RootComponent = CollisionComponent;

	MovementComponent = CreateDefaultSubobject<UPawnMovementComponent, UFloatingPawnMovement>(ADrone::MovementComponentName);
	MovementComponent->UpdatedComponent = CollisionComponent;

	StaticMeshComponent = CreateOptionalDefaultSubobject<UStaticMeshComponent>(ADrone::MeshComponentName);
	if (StaticMeshComponent)
	{
		StaticMeshComponent->AttachToComponent(RootComponent, FAttachmentTransformRules::KeepRelativeTransform);
	}


	

	CameraComponent = CreateDefaultSubobject<UCameraComponent>(ADrone::CameraComponentName);
	CameraComponent->AttachToComponent(RootComponent, FAttachmentTransformRules::KeepRelativeTransform);

	constexpr const float DroneHealth = 10.0f;
	Health = DroneHealth;
}

void ADrone::BeginPlay()
{
	
	if (APlayerCameraManager* PCM = UGameplayStatics::GetPlayerCameraManager(GetWorld(), 0))
	{
		const constexpr float ViewPitchValue = 15.0f;
		PCM->ViewPitchMin = -ViewPitchValue;
		PCM->ViewPitchMax = ViewPitchValue;
	}
	if (Panel = CreateWidget<UPlayerPanel>(GetWorld(), PanelClass))
	{
		HealthBar = Panel->GetHealthBar();
		if (HealthBar)
		{
			HealthBar->SetMaxHealth(Health);
			HealthBar->SetCurrentHealth(Health);
		}
		AmmoBar = Panel->GetAmmoBar();
		if (AmmoBar)
		{
			AmmoBar->SetAmmoAmount(AmmoAmount);
			AmmoBar->SetMaxAmmoAmount(MaxAmmoAmount);
		}
		if (bIsUIVisible)
		{
			Panel->AddToViewport();
		}
	}
	Super::BeginPlay();
}

void ADrone::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ADrone::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	UEnhancedInputComponent* Input = Cast<UEnhancedInputComponent>(PlayerInputComponent);

	if (Input)
	{
		Input->ClearActionEventBindings();
		Input->ClearActionValueBindings();
		if (MovementAction)
		{
			Input->BindAction(MovementAction, ETriggerEvent::Triggered, this, TEXT("Move"));
		}
		if (RotationAction)
		{
			Input->BindAction(RotationAction, ETriggerEvent::Triggered, this, TEXT("Rotate"));
		}
		if (FireAction)
		{
			Input->BindAction(FireAction, ETriggerEvent::Triggered, this, TEXT("Fire"));
		}
		if (APlayerController* PC = Cast<APlayerController>(GetController()))
		{
			if (ULocalPlayer* LocalPlayer = PC->GetLocalPlayer())
			{
				if (UEnhancedInputLocalPlayerSubsystem* InputSystem = LocalPlayer->GetSubsystem<UEnhancedInputLocalPlayerSubsystem>())
				{
					if (!InputMapping.IsNull())
					{
						int32 Priority = 0;
						InputSystem->AddMappingContext(InputMapping.LoadSynchronous(), Priority);
					}
				}
			}
		}


	}



}

void ADrone::Move(const FVector& Vec)
{
	if (!Vec.IsNearlyZero() && MovementComponent)
	{
		FTransform ActorTransform = GetActorTransform();
		FVector WorldDirection = UKismetMathLibrary::TransformDirection(ActorTransform, Vec);
		MovementComponent->AddInputVector(WorldDirection);
	}
}

void ADrone::Rotate(const FVector2D& Vec)
{
	if (!Vec.IsNearlyZero())
	{
		AddControllerYawInput(Vec.X);
		AddControllerPitchInput(Vec.Y);
	}
}

void ADrone::Fire()
{
	if (ProjectileClass)
	{
		FActorSpawnParameters Params;
		Params.Owner = this;
		if (AmmoAmount > 0)
		{
			GetWorld()->SpawnActor<AActor>(ProjectileClass, GetActorTransform(), Params);
			AmmoAmount--;
			AmmoBar->SetAmmoAmount(AmmoAmount);
		}
		
	}
	
}


void ADrone::OnConstruction(const FTransform& Transform)
{
	Super::OnConstruction(Transform);


	
}

void ADrone::UpdateUIVisibility(bool bIsVisible)
{
	bIsUIVisible = bIsVisible;
}

void ADrone::UpdateAmmoBar()
{
	AmmoBar->SetAmmoAmount(AmmoAmount);
}
