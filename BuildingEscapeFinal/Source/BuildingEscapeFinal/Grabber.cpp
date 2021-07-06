// Fill out your copyright notice in the Description page of Project Settings.


#include "Grabber.h"
#include "GameFramework/Actor.h"
#include "DrawDebugHelpers.h"
#include "Engine/World.h"

#define OUT // A marker for when we are using out parameters, has no definiton

// Sets default values for this component's properties
UGrabber::UGrabber()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UGrabber::BeginPlay()
{
	Super::BeginPlay();

	PhysicsHandle = GetOwner()->FindComponentByClass<UPhysicsHandleComponent>();
	InputComponent = GetOwner()->FindComponentByClass<UInputComponent>();


	if(PhysicsHandle)
	{
		UE_LOG(LogTemp, Warning, TEXT("Physics handle"));
	}
	InputComponent->BindAction("Grab", IE_Pressed, this, &UGrabber::Grab);
	InputComponent->BindAction("Grab", IE_Released, this, &UGrabber::Release);
	// ...
	
}


// Called every frame
void UGrabber::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
	// DrawDebugLine(GetWorld(), PlayerViewPointLocation, LineEnd, FColor (0, 255, 0), false, 0, 0, 2);
	// ...
	GetWorld()->GetFirstPlayerController()->GetPlayerViewPoint(OUT PlayerViewPointLocation, OUT PlayerViewPointRotation);
	FVector LineEnd = PlayerViewPointLocation + (PlayerViewPointRotation.Vector()* Reach);
	if(PhysicsHandle->GetGrabbedComponent())
	{
		PhysicsHandle->SetTargetLocation(LineEnd);
	}
}

void UGrabber::Grab()
{
	GetWorld()->GetFirstPlayerController()->GetPlayerViewPoint(OUT PlayerViewPointLocation, OUT PlayerViewPointRotation);
	FVector LineEnd = PlayerViewPointLocation + (PlayerViewPointRotation.Vector()* Reach);
	FCollisionQueryParams QueryParams(FName(TEXT("")), false, GetOwner());
	GetWorld()->LineTraceSingleByObjectType(OUT Hit, PlayerViewPointLocation, LineEnd, FCollisionObjectQueryParams(ECollisionChannel::ECC_PhysicsBody), QueryParams);
	UPrimitiveComponent* ComponentToGrab = Hit.GetComponent();
	if(Hit.GetActor())
	{
		UE_LOG(LogTemp, Warning, TEXT("Grabber pressed on %s"), *Hit.GetActor()->GetName());
		PhysicsHandle->GrabComponentAtLocation(ComponentToGrab, NAME_None, LineEnd);
	}

}

void UGrabber::Release()
{
	PhysicsHandle->ReleaseComponent();
}