// Copyright Epic Games, Inc. All Rights Reserved.

#include "CardGamePlayerController.h"

ACardGamePlayerController::ACardGamePlayerController()
{
	bShowMouseCursor = true;
	bEnableClickEvents = true;
	bEnableTouchEvents = true;
	DefaultMouseCursor = EMouseCursor::Crosshairs;
}
