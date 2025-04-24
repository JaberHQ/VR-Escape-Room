// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Character_Controller.h"
#include "GameFramework/Actor.h"
#include "Poster.h"
#include "Engine/TriggerBox.h"
#include "BlacklightTriggerBox.generated.h"
/**
 * 
 */
UCLASS()
class ESCAPE_ROOM_API ABlacklightTriggerBox : public ATriggerBox
{
	GENERATED_BODY()
	

protected:
	virtual void BeginPlay() override;

public:
	ABlacklightTriggerBox();

	UFUNCTION()
	void IsOverPoster(class AActor* overlappedActor, class AActor* otherActor);

	UFUNCTION()
	void HasLeftPoster(class AActor* overlappedActor, class AActor* otherActor);

};
