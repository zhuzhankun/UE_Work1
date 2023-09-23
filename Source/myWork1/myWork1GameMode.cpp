// Copyright Epic Games, Inc. All Rights Reserved.

#include "myWork1GameMode.h"
#include "myWork1Character.h"
#include "UObject/ConstructorHelpers.h"

AmyWork1GameMode::AmyWork1GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
