// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameStateBase.h"
#include "BallJamGameState.generated.h"

/**
 * 
 */
UCLASS()
class BALLJAM_API ABallJamGameState : public AGameStateBase
{
	GENERATED_BODY()
	
public:
	ABallJamGameState();
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool isLoss;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 maxSportsman;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 redSportsman;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 blueSportsman;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 sportsmanSlain;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 highScore;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 kickStrength;
};
