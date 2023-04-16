// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "Containers/UnrealString.h"
#include "Logging/LogMacros.h"

class UObject;

LYRAGAME_API DECLARE_LOG_CATEGORY_EXTERN(LogLyra, Log, All);
LYRAGAME_API DECLARE_LOG_CATEGORY_EXTERN(LogLyraExperience, Log, All);
// Matt: Omitted all other log categories.

// Matt: Gets a string indicating whether the provided object is in the client or server context.
LYRAGAME_API FString GetClientServerContextString(UObject* ContextObject = nullptr);