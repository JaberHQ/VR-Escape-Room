// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GameFramework/Actor.h"
#include "GameFramework/Character.h"
#include "Components/InputComponent.h"
#include "InputActionValue.h"
#include "Engine/DataTable.h"
#include "Engine/World.h"
#include "Escape_RoomGameModeBase.h"
#include "Item.h"
#include "Components/SphereComponent.h"
#include "Character_Controller.generated.h"


USTRUCT(BlueprintType)
struct FInventoryItem : public FTableRowBase
{
	GENERATED_BODY()

public:
	FInventoryItem()
	{
		name = FText::FromString("item");
		isVisible = false;
	}

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName itemID;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<class AItem> ItemToCompare;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText name;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool isVisible;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UTexture2D* image;

	bool operator==(const FInventoryItem& item) const
	{
		return itemID == item.itemID ? true : false;
	}

};

UCLASS()
class ESCAPE_ROOM_API ACharacter_Controller : public ACharacter
{
	GENERATED_BODY()


	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	class UInputMappingContext* DefaultMappingContext;

public:
	// Sets default values for this character's properties
	ACharacter_Controller();

	

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UFUNCTION(BlueprintCallable, Category = "Items")
	void Collect();

	UFUNCTION()
	void InventoryPlus();

	UFUNCTION()
	void InventoryMinus();

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	class UInputAction* LookAction;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	class UInputAction* MoveAction;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	class UInputAction* InteractionAction;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	class UInputAction* InventoryPlusAction;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	class UInputAction* InventoryMinusAction;

	UPROPERTY(EditAnywhere)
	bool BlacklightTriggerBoxActive;
protected:
	/** Called for movement input */
	void Move(const FInputActionValue& Value);

	/** Called for looking input */
	void Look(const FInputActionValue& Value);

	UFUNCTION(BlueprintCallable, Category = "Utilities")
	void AddToInventory(FName itemID);

	UFUNCTION(BlueprintCallable, Category = "Utilities")
	void RemoveFromInventory();
	
	UFUNCTION(BlueprintCallable)
	void Wielding();

	UFUNCTION(BlueprintCallable)
	bool GetRecentlyPickedUp();

	UFUNCTION(BlueprintCallable)
	bool GetRecentlyRemoved();

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	TArray<FInventoryItem> InventoryItems;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int InventoryIndex;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	class USphereComponent* CollectionRange;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FInventoryItem Wield;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FInventoryItem Empty;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FInventoryItem> PickupableObjects;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Wielded Items")
	TArray<AActor*> WieldObjects;

	UPROPERTY( EditAnywhere, BlueprintReadWrite)
	bool RecentlyPickedUp;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool RecentlyRemoved;

	


	FORCEINLINE class USphereComponent* GetCollectionRange() const { return CollectionRange; }
};

