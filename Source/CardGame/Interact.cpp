// Fill out your copyright notice in the Description page of Project Settings.


#include "Components/InputComponent.h"

#include "Interact.h"

// Sets default values for this component's properties
UInteract::UInteract()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

}

// Called when the game starts
void UInteract::BeginPlay()
{
	Super::BeginPlay();
}


// Called every frame
void UInteract::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
}

void UInteract::SetUpInputComponent(UInputComponent* PlayerInputComponent)
{
	UE_LOG(LogTemp, Warning, TEXT("is it getting here?"));
	if (PlayerInputComponent) {
		UE_LOG(LogTemp, Error, TEXT("Input component found on: %s"), *GetOwner()->GetName());
		PlayerInputComponent->BindAction("LeftClick", IE_Pressed, this, &UInteract::PerformRayCastFromMouse);
	}
}

void UInteract::PerformRayCastFromMouse()
{
	UE_LOG(LogTemp, Warning, TEXT("clicking?"));
}

