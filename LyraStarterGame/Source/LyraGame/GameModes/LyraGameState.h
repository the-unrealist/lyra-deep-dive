// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "ModularGameState.h"
#include "UObject/UObjectGlobals.h"

#include "LyraGameState.generated.h"

class ULyraExperienceManagerComponent;

/**
 * ALyraGameState
 *
 *	The base game state class used by this project.
 */
UCLASS(Config = Game)
class LYRAGAME_API ALyraGameState : public AModularGameStateBase
{
	GENERATED_BODY()

public:

	ALyraGameState(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());

    // Matt: Omitted functions

private:
	UPROPERTY()
	TObjectPtr<ULyraExperienceManagerComponent> ExperienceManagerComponent;
};
