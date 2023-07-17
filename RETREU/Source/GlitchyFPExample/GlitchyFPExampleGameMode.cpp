// Copyright Epic Games, Inc. All Rights Reserved.

#include "GlitchyFPExampleGameMode.h"
#include "GlitchyFPExampleCharacter.h"
#include "UObject/ConstructorHelpers.h"

AGlitchyFPExampleGameMode::AGlitchyFPExampleGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
