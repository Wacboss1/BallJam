// Copyright Epic Games, Inc. All Rights Reserved.

#include "BallJamGameMode.h"
#include "BallJamBall.h"
#include "BallJamGameState.h"

ABallJamGameMode::ABallJamGameMode()
{
	// set default pawn class to our ball
	DefaultPawnClass = ABallJamBall::StaticClass();
	GameStateClass = ABallJamGameState::StaticClass();
}

bool ABallJamGameMode::GetLostStatus() const
{
	return GetGameState<ABallJamGameState>()->isLost;
}

void ABallJamGameMode::SetLostStatus(bool status)
{
	GetGameState<ABallJamGameState>()->isLost = status;
}
