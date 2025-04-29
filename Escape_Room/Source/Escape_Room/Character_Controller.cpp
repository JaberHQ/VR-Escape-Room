// Fill out your copyright notice in the Description page of Project Settings.


#include "Character_Controller.h"
#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"
#include "Kismet/GameplayStatics.h"

// Sets default values
ACharacter_Controller::ACharacter_Controller()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	InventoryIndex = 0;
	Empty.itemID = "4";

	CollectionRange = CreateDefaultSubobject<USphereComponent>(TEXT("CollectionRange"));
	CollectionRange->SetupAttachment(RootComponent);
	CollectionRange->SetSphereRadius(100.0f);

}

// Called when the game starts or when spawned
void ACharacter_Controller::BeginPlay()
{
	Super::BeginPlay();

	//Add Input Mapping Context
	if(APlayerController* PlayerController = Cast<APlayerController>(Controller))
	{
		if(UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(PlayerController->GetLocalPlayer()))
		{
			Subsystem->AddMappingContext(DefaultMappingContext, 0);
		}
	}

	for(int i = 0; i < WieldObjects.Num(); i++)
	{
		if(WieldObjects[i])
		{
			WieldObjects[i]->SetActorHiddenInGame(true);
		}
	}
}

// Called to bind functionality to input
void ACharacter_Controller::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	/*Super::SetupPlayerInputComponent(PlayerInputComponent); */

	
	if(UEnhancedInputComponent* EnhancedInputComponent = CastChecked<UEnhancedInputComponent>(PlayerInputComponent))
	{
		//Moving
		EnhancedInputComponent->BindAction(MoveAction, ETriggerEvent::Triggered, this, &ACharacter_Controller::Move);

		//Looking
		EnhancedInputComponent->BindAction(LookAction, ETriggerEvent::Triggered, this, &ACharacter_Controller::Look);

		EnhancedInputComponent->BindAction(InteractionAction,ETriggerEvent::Triggered, this, &ACharacter_Controller::Collect);
		EnhancedInputComponent->BindAction(InventoryPlusAction, ETriggerEvent::Triggered, this, &ACharacter_Controller::InventoryPlus);
		EnhancedInputComponent->BindAction(InventoryMinusAction, ETriggerEvent::Triggered, this, &ACharacter_Controller::InventoryMinus);

	}

}

void ACharacter_Controller::Move(const FInputActionValue& Value)
{
	// input is a Vector2D
	FVector2D MovementVector = Value.Get<FVector2D>();

	if(Controller != nullptr)
	{
		// add movement 
		AddMovementInput(GetActorForwardVector(), MovementVector.Y);
		AddMovementInput(GetActorRightVector(), MovementVector.X);
	}
}

void ACharacter_Controller::Look(const FInputActionValue& Value)
{
	// input is a Vector2D
	FVector2D LookAxisVector = Value.Get<FVector2D>();

	if(Controller != nullptr)
	{
		// add yaw and pitch input to controller
		AddControllerYawInput(LookAxisVector.X);
		AddControllerPitchInput(LookAxisVector.Y);
	}
}

void ACharacter_Controller::Collect()
{
	/*if(GEngine)
		GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, TEXT("Collect!"));*/
	TArray<AActor*> collectedItems;
	CollectionRange->GetOverlappingActors(collectedItems);

	for(int i = 0; i < collectedItems.Num(); i++)
	{
		AItem* const testItem = Cast<AItem>(collectedItems[i]);
		if(testItem && testItem->GetActive())
		{
			testItem->Touched();
			AddToInventory(testItem->itemID);
			testItem->SetActive(false);
		}
	}
}

void ACharacter_Controller::InventoryPlus()
{
	InventoryIndex++;

	if(InventoryIndex >= 5)
		InventoryIndex = 0;

	Wielding();
	//GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Red, FString::FromInt(InventoryIndex));
}

void ACharacter_Controller::InventoryMinus()
{
	InventoryIndex--;

	if(InventoryIndex < 0)
		InventoryIndex = 4;

	Wielding();
	//GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Red, FString::FromInt(InventoryIndex));
}

// Called every frame
void ACharacter_Controller::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}


void ACharacter_Controller::AddToInventory(FName itemID)
{
	AEscape_RoomGameModeBase* gameMode = Cast<AEscape_RoomGameModeBase>(GetWorld()->GetAuthGameMode());
	UDataTable* itemTable = gameMode->GetItemDB();

	if(gameMode)
	{
		if(itemTable)
		{
			FInventoryItem* itemAdded = itemTable->FindRow<FInventoryItem>(itemID, "");
			if(itemAdded)
			{
				InventoryItems.Add(*itemAdded);
				Wielding();
				RecentlyPickedUp = true;
			}
		}
	}
}

void ACharacter_Controller::RemoveFromInventory()
{
	if(InventoryItems.Num() > InventoryIndex)
	{
		InventoryItems.RemoveAt(InventoryIndex);
		Wielding();
	}
}



void ACharacter_Controller::Wielding()
{
	BlacklightTriggerBoxActive = false;
	if(InventoryItems.Num() > InventoryIndex)
	{
		Wield = InventoryItems[InventoryIndex];
		if(&Wield)
		{
			FString wieldValue = Wield.itemID.ToString();
			int wieldIndex = FCString::Atoi(*wieldValue);
			for(int i = 0; i < PickupableObjects.Num(); i++)
			{
				if(Wield.itemID == PickupableObjects[i].itemID)
				{
					if(WieldObjects[wieldIndex])
					{
						if(wieldIndex == 0)
						{
							BlacklightTriggerBoxActive = true;
						}
						WieldObjects[wieldIndex]->SetActorHiddenInGame(false);
					}
				}
				else
				{
					if(WieldObjects[i])
					{
						WieldObjects[i]->SetActorHiddenInGame(true);
					}
				}
			}
		}
		

	}
	else
	{
		Wield = Empty;
	}
	if(Wield == Empty)
	{
		for(int i = 0; i < PickupableObjects.Num(); i++)
		{
			WieldObjects[i]->SetActorHiddenInGame(true);
		}
	}
}

bool ACharacter_Controller::GetRecentlyPickedUp()
{
	return RecentlyPickedUp;
}

bool ACharacter_Controller::GetRecentlyRemoved()
{
	return RecentlyRemoved;
}
