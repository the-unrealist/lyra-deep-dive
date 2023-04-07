// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "LyraExperienceDefinition.generated.h"

class UGameFeatureAction;
class ULyraPawnData;
class ULyraExperienceActionSet;

/**
 * Definition of an experience
 */
UCLASS(BlueprintType, Const)
class ULyraExperienceDefinition : public UPrimaryDataAsset
{
    GENERATED_BODY()

public:
    ULyraExperienceDefinition();

    //~UObject interface
    #if WITH_EDITOR
    virtual EDataValidationResult IsDataValid(TArray<FText>& ValidationErrors) override;
#endif
    //~End of UObject interface

    //~UPrimaryDataAsset interface
    #if WITH_EDITORONLY_DATA
    virtual void UpdateAssetBundleData() override;
#endif
    //~End of UPrimaryDataAsset interface

    public:
    // List of Game Feature Plugins this experience wants to have active
    UPROPERTY(EditDefaultsOnly, Category = Gameplay)
    TArray<FString> GameFeaturesToEnable;

    // Matt: Omitted DefaultPawnData because we'll implement this when we cover pawn spawning later.

    // List of actions to perform as this experience is loaded/activated/deactivated/unloaded
    UPROPERTY(EditDefaultsOnly, Instanced, Category="Actions")
    TArray<TObjectPtr<UGameFeatureAction>> Actions;

    // List of additional action sets to compose into this experience
    UPROPERTY(EditDefaultsOnly, Category=Gameplay)
    TArray<TObjectPtr<ULyraExperienceActionSet>> ActionSets;
};
