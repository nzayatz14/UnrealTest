// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.

#include "MyProject.h"
#include "MyProjectPlayerController.h"

AMyProjectPlayerController::AMyProjectPlayerController()
{
	bShowMouseCursor = true;
	bEnableClickEvents = true;
	bEnableTouchEvents = true;
	DefaultMouseCursor = EMouseCursor::Crosshairs;
}
