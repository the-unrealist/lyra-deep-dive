// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "Engine/EngineTypes.h"
#include "GameFramework/PlayerState.h"

#include "ModularPlayerState.generated.h"

class UObject;

/** Minimal class that supports extension by game feature plugins */
UCLASS(Blueprintable)
class MODULARGAMEPLAYACTORS_API AModularPlayerState : public APlayerState
{
	GENERATED_BODY()

public:
	//~ Begin AActor interface
	virtual void PreInitializeComponents() override;
	virtual void BeginPlay() override;
	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;
	virtual void Reset() override;
	//~ End AActor interface

protected:
	//~ Begin APlayerState interface
	virtual void CopyProperties(APlayerState* PlayerState) override;
	//~ End APlayerState interface
};
