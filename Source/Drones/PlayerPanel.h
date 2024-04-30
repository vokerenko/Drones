// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "PlayerPanel.generated.h"

class UHealthBar;
class UAmmoBar;
/**
 * 
 */
UCLASS()
class DRONES_API UPlayerPanel : public UUserWidget
{
	GENERATED_BODY()
	
public:
	virtual void NativeConstruct() override;

	void SetHealthBar(UHealthBar* InHealthBar);

	UHealthBar* GetHealthBar() const;
	UAmmoBar* GetAmmoBar() const;
protected:

	UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Category = "Widget", meta=(BindWidget))
	TObjectPtr<UHealthBar> HealthBar;

	UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Category = "Widget", meta = (BindWidget))
	TObjectPtr<UAmmoBar> AmmoBar;
};
