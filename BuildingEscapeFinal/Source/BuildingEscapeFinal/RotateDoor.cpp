// Fill out your copyright notice in the Description page of Project Settings.


#include "RotateDoor.h"
#include "GameFramework/Actor.h"
#include "Components/PrimitiveComponent.h"

// Sets default values for this component's properties
URotateDoor::URotateDoor()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void URotateDoor::BeginPlay()
{
	Super::BeginPlay();
	
	InitialYaw = GetOwner()->GetActorRotation().Yaw;
	FinalYaw += InitialYaw;
	// ...
	
}


// Called every frame
void URotateDoor::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
	
	if(GetTotalMass() > 20 )
	{
		OpenDoor();
	}
	else
	{
		CloseDoor();
	}
}

void URotateDoor::OpenDoor()
{
	FRotator CurrentRotation = GetOwner()->GetActorRotation();
	CurrentRotation.Yaw = FMath::FInterpConstantTo(CurrentRotation.Yaw, FinalYaw, 2, 0.2);

	GetOwner()->SetActorRotation(CurrentRotation);
}

void URotateDoor::CloseDoor()
{
	FRotator CurrentRotation = GetOwner()->GetActorRotation();
	CurrentRotation.Yaw = FMath::FInterpConstantTo(CurrentRotation.Yaw, InitialYaw, 2, 0.2);

	GetOwner()->SetActorRotation(CurrentRotation);
}

float URotateDoor::GetTotalMass()
{
	TotalMass = 0.f;
	TArray<AActor*> Actors;
	Scanner->GetOverlappingActors(OUT Actors);
	for(AActor* Actor:Actors)
	{
		TotalMass += Actor->FindComponentByClass<UPrimitiveComponent>()->GetMass();
	}

	return TotalMass;
}