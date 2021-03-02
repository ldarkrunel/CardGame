// Fill out your copyright notice in the Description page of Project Settings.


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
	SetUpInputComponent();

}


// Called every frame
void UInteract::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
}

void UInteract::SetUpInputComponent()
{
	InputComponent = GetOwner()->FindComponentByClass<UInputComponent>();
	if (InputComponent) {
		UE_LOG(LogTemp, Error, TEXT("Input comonent found on: %s"), *GetOwner()->GetName());
		InputComponent->BindAction("LeftClick", IE_Pressed, this, &UInteract::PerformRayCastFromMouse);
	}
}

void UInteract::PerformRayCastFromMouse()
{

}

