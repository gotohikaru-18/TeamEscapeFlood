// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "HP.generated.h"

/**
 * 
 */
UCLASS()
class ESCAPEFLOOD_API UHP : public UWidgetBase
{
	GENERATED_BODY()


public:

	UFUNCTION(BlueprintCallable, Category = "MainStage")
	void SetHP(float numvalue);

	UFUNCTION(BlueprintCallable, Category = "MainStage")
	void ChangeHP(float numvalue);



	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	float _hp;


	
};
