// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once 

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "SFSCameraTestHUD.generated.h"

UCLASS()
class ASFSCameraTestHUD : public AHUD
{
	GENERATED_BODY()

public:
	ASFSCameraTestHUD();

	/** Primary draw call for the HUD */
	virtual void DrawHUD() override;

private:
	/** Crosshair asset pointer */
	class UTexture2D* CrosshairTex;

};

