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

bool ABallJamGameMode::GetLossStatus() const
{
	return GetGameState<ABallJamGameState>()->isLoss;
}

void ABallJamGameMode::SetLossStatus(bool status)
{
	GetGameState<ABallJamGameState>()->isLoss = status;
}

void ABallJamGameMode::IncreaseSportsmanSlain()
{
	GetGameState<ABallJamGameState>()->sportsmanSlain++;
}

int32 ABallJamGameMode::GetSportsmanSlain()
{
	return GetGameState<ABallJamGameState>()->sportsmanSlain;
}
