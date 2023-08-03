// Copyright Epic Games, Inc. All Rights Reserved.

#include "ElementalistGameMode.h"
#include "ElementalistCharacter.h"
#include "UObject/ConstructorHelpers.h"

AElementalistGameMode::AElementalistGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
