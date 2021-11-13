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
	bool isLost;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 remainingSportsman;
};
