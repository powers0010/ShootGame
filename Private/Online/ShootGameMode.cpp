// Fill out your copyright notice in the Description page of Project Settings.

#include "ShootGameMode.h"
#include "ShooterCharacter.h"
#include "Player/ShooterPlayerController.h"
#include "Player/ShooterPlayerState.h"
#include "Online/ShooterGameState.h"
#include "Player/ShooterSpectatorPawn.h"
#include "UI/ShooterHUD.h"
#include "Runtime/CoreUObject/Public/UObject/ConstructorHelpers.h"


AShootGameMode::AShootGameMode()
{
	//���ýӴ������
	static ConstructorHelpers::FClassFinder<AShooterCharacter> BP_ShootCharacter(TEXT("/Game/Blueprints/Pawn/BP_ShootCharacter"));
	DefaultPawnClass = BP_ShootCharacter.Class;

	PlayerControllerClass = AShooterPlayerController::StaticClass();
	PlayerStateClass = AShooterPlayerState::StaticClass();
	GameStateClass = AShooterGameState::StaticClass();
	SpectatorClass = AShooterSpectatorPawn::StaticClass();
	HUDClass = AShooterHUD::StaticClass();
}

