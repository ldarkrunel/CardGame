// Fill out your copyright notice in the Description page of Project Settings.


#include "Board.h"

// Sets default values for this component's properties
UBoard::UBoard()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

}


// Called when the game starts
void UBoard::BeginPlay()
{
	Super::BeginPlay();

	GameBoard = GetOwner()->FindComponentByClass<UStaticMeshComponent>();

	FBoxSphereBounds BoardBoxBounds = GameBoard->Bounds;
	BoardX = BoardBoxBounds.GetBox().GetSize().X;
	BoardY = BoardBoxBounds.GetBox().GetSize().Y;

	//UE_LOG(LogTemp, Warning, TEXT("length is: %f"), size.Y);
}


// Called every frame
void UBoard::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

}

