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

int32 ABallJamGameMode::GetMaxSportsman()
{
	return GetGameState<ABallJamGameState>()->maxSportsman;
}

int32 ABallJamGameMode::GetCurrentSportsman()
{
	int32 red = GetGameState<ABallJamGameState>()->redSportsman;
	int32 blue = GetGameState<ABallJamGameState>()->blueSportsman;
	return red + blue;
}

int32 ABallJamGameMode::GetRedSportsman()
{
	return GetGameState<ABallJamGameState>()->redSportsman;
}

int32 ABallJamGameMode::GetBlueSportsman()
{
	return GetGameState<ABallJamGameState>()->blueSportsman;
}

void ABallJamGameMode::AddBlueSportsman()
{
	GetGameState<ABallJamGameState>()->blueSportsman++;
}

void ABallJamGameMode::AddRedSportsman()
{
	GetGameState<ABallJamGameState>()->redSportsman++;
}

void ABallJamGameMode::RemoveBlueSportsman()
{
	GetGameState<ABallJamGameState>()->blueSportsman--;
}

void ABallJamGameMode::RemoveRedSportsman()
{
	GetGameState<ABallJamGameState>()->redSportsman--;
}
