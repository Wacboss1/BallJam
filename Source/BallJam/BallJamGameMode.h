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
	bool GetLossStatus() const;
	UFUNCTION(BlueprintCallable, Category="Modify")
	void SetLossStatus(bool status);

	UFUNCTION(BlueprintCallable, Category="Modify")
	void UpdateHighScore(int32 newScore);
	UFUNCTION(BlueprintCallable, Category="Status")
	int32 GetHighScore();

	UFUNCTION(BlueprintCallable, Category="Modify")
	void ResetSportsmanSlain();
	UFUNCTION(BlueprintCallable, Category="Modify")
	void IncreaseSportsmanSlain();
	UFUNCTION(BlueprintCallable, Category="Status")
	int32 GetSportsmanSlain();

	UFUNCTION(BlueprintCallable, Category="Status")
	int32 GetMaxSportsman();

	UFUNCTION(BlueprintCallable, Category="Status")
	int32 GetCurrentSportsman();
	UFUNCTION(BlueprintCallable, Category="Status")
	int32 GetRedSportsman();
	UFUNCTION(BlueprintCallable, Category="Status")
	int32 GetBlueSportsman();
	
	UFUNCTION(BlueprintCallable, Category="Modify")
	void AddBlueSportsman();
	UFUNCTION(BlueprintCallable, Category="Modify")
	void AddRedSportsman();

	UFUNCTION(BlueprintCallable, Category="Modify")
	void RemoveBlueSportsman();
	UFUNCTION(BlueprintCallable, Category="Modify")
	void RemoveRedSportsman();
};



