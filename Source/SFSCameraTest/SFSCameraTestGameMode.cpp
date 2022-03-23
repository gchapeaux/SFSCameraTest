// Copyright Epic Games, Inc. All Rights Reserved.

#include "SFSCameraTestGameMode.h"
#include "SFSCameraTestHUD.h"
#include "SFSCameraTestCharacter.h"
#include "UObject/ConstructorHelpers.h"

ASFSCameraTestGameMode::ASFSCameraTestGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = ASFSCameraTestHUD::StaticClass();
}
