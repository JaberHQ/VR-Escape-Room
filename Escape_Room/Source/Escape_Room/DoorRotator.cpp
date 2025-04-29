// Fill out your copyright notice in the Description page of Project Settings.


#include "DoorRotator.h"

// Sets default values
ADoorRotator::ADoorRotator()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
}

// Called when the game starts or when spawned
void ADoorRotator::BeginPlay()
{
	Super::BeginPlay();

	if(Anim)
	{
		FOnTimelineFloat rotationFunction;

		rotationFunction.BindUFunction(this, FName("UpdateRotation"));
		timeline.AddInterpFloat(Anim, rotationFunction);
		timeline.SetLooping(false);

		InitRotation = TargetRotation - GetActorRotation();

		TargetRotation.Yaw += Angle;
	}
}

// Called every frame
void ADoorRotator::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	timeline.TickTimeline(DeltaTime);
}

void ADoorRotator::CallAnimation()
{
	if(!timeline.IsPlaying())
	{
		timeline.PlayFromStart();
	}
}

void ADoorRotator::UpdateRotation(float value)
{
	FRotator tempRotation = FMath::Lerp(InitRotation, TargetRotation, value);
	SetActorRotation(tempRotation);
}

