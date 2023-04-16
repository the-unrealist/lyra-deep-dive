// Copyright Epic Games, Inc. All Rights Reserved.

#include "LyraGameState.h"

#include "Engine/EngineBaseTypes.h"
#include "GameModes/LyraExperienceManagerComponent.h"
#include "HAL/Platform.h"
#include "Net/UnrealNetwork.h"

#include UE_INLINE_GENERATED_CPP_BY_NAME(LyraGameState)

ALyraGameState::ALyraGameState(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	PrimaryActorTick.bCanEverTick = true;
	PrimaryActorTick.bStartWithTickEnabled = true;

	ExperienceManagerComponent = CreateDefaultSubobject<ULyraExperienceManagerComponent>(TEXT("ExperienceManagerComponent"));
}
