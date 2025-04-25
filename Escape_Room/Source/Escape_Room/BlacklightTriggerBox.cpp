// Fill out your copyright notice in the Description page of Project Settings.


#include "BlacklightTriggerBox.h"

ABlacklightTriggerBox::ABlacklightTriggerBox()
{
	OnActorBeginOverlap.AddDynamic( this, &ABlacklightTriggerBox::IsOverPoster );
	OnActorEndOverlap.AddDynamic(this, &ABlacklightTriggerBox::HasLeftPoster);

}

void ABlacklightTriggerBox::BeginPlay()
{
	Super::BeginPlay();
}

void ABlacklightTriggerBox::IsOverPoster(AActor* overlappedActor, AActor* otherActor)
{
	if(otherActor && otherActor != this)
	{
		APoster* const tempPost = Cast<APoster>(otherActor);
		if(tempPost && GetWorld())
		{
			APlayerController* pc = GetWorld()->GetFirstPlayerController();
			if(pc)
			{
				ACharacter_Controller* character = Cast<ACharacter_Controller>(pc->GetCharacter());
				if(character && character->BlacklightTriggerBoxActive)
				{
					tempPost->SetActorHiddenInGame(true);
				}
			}
		}
	}
}

void ABlacklightTriggerBox::HasLeftPoster(AActor* overlappedActor, AActor* otherActor)
{
	if(otherActor && otherActor != this)
	{
		APoster* const tempPost = Cast<APoster>(otherActor);
		if(tempPost && GetWorld())
		{
			APlayerController* pc = GetWorld()->GetFirstPlayerController();
			if(pc)
			{
				ACharacter_Controller* character = Cast<ACharacter_Controller>(pc->GetCharacter());
				if(character && character->BlacklightTriggerBoxActive)
				{
					tempPost->SetActorHiddenInGame(false);
				}
			}
		}
	}
}

//void ABlacklightTriggerBox::EndPlay(const EEndPlayReason::Type EndPlayReason)
//{
//	Super::EndPlay(EndPlayReason);
//
//	// Unbind delegates or do any cleanup here
//}