// Copyright Epic Games, Inc. All Rights Reserved.

#include "CardGameGameMode.h"
#include "CardGamePlayerController.h"
#include "CardGamePawn.h"

ACardGameGameMode::ACardGameGameMode()
{
	// no pawn by default
	DefaultPawnClass = ACardGamePawn::StaticClass();
	// use our own player controller class
	PlayerControllerClass = ACardGamePlayerController::StaticClass();
}
