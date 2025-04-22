// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/StaticMeshComponent.h"
#include "Item.generated.h"

UCLASS()
class ESCAPE_ROOM_API AItem : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AItem();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	bool isVisible;

	
public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	FORCEINLINE class UStaticMeshComponent* GetMesh() const{ return itemMesh; }

	UFUNCTION(BlueprintPure, Category = "Item")
	bool GetActive() const;

	UFUNCTION(BlueprintCallable, Category = "Item")
	void SetActive(bool visible);

	UFUNCTION(BlueprintCallable)
	void Touched();

	UPROPERTY(EditDefaultsOnly)
	FString name;
		
	UPROPERTY(EditDefaultsOnly)
	FName itemID;

	
private:
	UPROPERTY(VisibleAnywhere, Category = "Item")
	class UStaticMeshComponent* itemMesh;
};
