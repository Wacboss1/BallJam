// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "BallJamGameMode.generated.h"

UCLASS(minimalapi)
class ABallJamGameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	ABallJamGameMode();

	UFUNCTION(BlueprintPure, Category="Status")
	bool GetLostStatus() const;
	UFUNCTION(BlueprintCallable, Category="Modify")
	void SetLostStatus(bool status);
};



