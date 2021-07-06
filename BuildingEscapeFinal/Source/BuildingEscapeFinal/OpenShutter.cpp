// Fill out your copyright notice in the Description page of Project Settings.


#include "OpenShutter.h"

// Sets default values for this component's properties
UOpenShutter::UOpenShutter()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;
	// ...
}


// Called when the game starts
void UOpenShutter::BeginPlay()
{
	Super::BeginPlay();
	if(!PressurePlate)
	{
		UE_LOG(LogTemp, Warning, TEXT("No Pressure plate set"));
	}
	InitialZ = GetOwner()->GetActorLocation().Z;
	FinalZ += InitialZ;
	// ...
	
}


// Called every frame
void UOpenShutter::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
	if(GetTotalMass() > 20)
	{	
		OpenShutter();
	}
	else
	{
		CloseShutter();
	}
}

void UOpenShutter::OpenShutter()
{

	FVector CurrentLocation = GetOwner()->GetActorLocation();
	CurrentLocation.Z = FMath::FInterpConstantTo(CurrentLocation.Z, FinalZ, 2, 0.2);
	GetOwner()->SetActorLocation(CurrentLocation);
}

void UOpenShutter::CloseShutter()
{
	FVector CurrentLocation = GetOwner()->GetActorLocation();
	CurrentLocation.Z = FMath::FInterpConstantTo(CurrentLocation.Z, InitialZ, 2, 0.2);
	GetOwner()->SetActorLocation(CurrentLocation);	
}

float UOpenShutter::GetTotalMass()
{
	TotalMass = 0.f;
	TArray<AActor*> Actors;
	PressurePlate->GetOverlappingActors(OUT Actors);
	for(AActor* Actor:Actors)
	{
		TotalMass += Actor->FindComponentByClass<UPrimitiveComponent>()->GetMass();
	}

	return TotalMass;
}