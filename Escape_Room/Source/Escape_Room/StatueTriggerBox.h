// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/TriggerBox.h"
#include "Character_Controller.h"
#include "TimerManager.h"
#include "Engine/TriggerBox.h"
#include "StatueTriggerBox.generated.h"

/**
 * 
 */
UCLASS()
class ESCAPE_ROOM_API AStatueTriggerBox : public ATriggerBox
{
	GENERATED_BODY()
	
protected:
	virtual void BeginPlay() override;

public:
	AStatueTriggerBox();

	UPROPERTY(EditAnywhere)
	TArray<AActor*> statues;

	UPROPERTY()
	FTimerHandle removedTimerHandle;
	
	UPROPERTY(EditAnywhere, Category = "Answer")
	int answer;

	UPROPERTY()
	bool present;

	UPROPERTY()
	TArray<bool> statueAnswers;

	UFUNCTION()
	void PlaceIntoBox(class AActor* overlappedActor, class AActor* otherActor);

	UFUNCTION()
	void SetRemovedFalse();

	UFUNCTION()
	void CheckAnswer();
};
