// Fill out your copyright notice in the Description page of Project Settings.

#include "ShootGameMode.h"
#include "ShooterCharacter.h"
#include "Runtime/CoreUObject/Public/UObject/ConstructorHelpers.h"


AShootGameMode::AShootGameMode()
{
	static ConstructorHelpers::FClassFinder<AShooterCharacter> PlayerPawn(TEXT("/Game/Blueprints/Pawn/BP_ShootCharactor"));
	DefaultPawnClass = PlayerPawn.Class;

}

