#include "HDBaseGameMode.h"
#include "HDAIController.h"
#include "HDGameSession.h"
#include "HDGameState.h"
#include "HDHUD.h"
#include "HDPlatoonState.h"
#include "HDPlayerCharacter.h"
#include "HDPlayerController.h"
#include "HDPlayerState.h"
#include "HDTeamDefinition.h"
#include "HDTeamState.h"

AHDBaseGameMode::AHDBaseGameMode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->GameSessionClass = AHDGameSession::StaticClass();
    this->GameStateClass = AHDGameState::StaticClass();
    this->PlayerControllerClass = AHDPlayerController::StaticClass();
    this->PlayerStateClass = AHDPlayerState::StaticClass();
    this->HUDClass = AHDHUD::StaticClass();
    this->DefaultPawnClass = AHDPlayerCharacter::StaticClass();
    this->TeamStateClass = AHDTeamState::StaticClass();
    this->AIControllerClass = AHDAIController::StaticClass();
    this->bBalanceTeams = true;
    this->bAllowUnassignedTeams = false;
    this->bRestartPlayerAtTransformOnly = true;
    this->bFriendlyFire = false;
    this->AllowedVoteIssues.AddDefaulted(1);
    this->ScoreboardMenuClass = NULL;
    this->bDisablePlayerSpawnKitRestrictions = false;
    this->bUseTickets = true;
    this->DefaultBluforTeamDefinition = CreateDefaultSubobject<UHDTeamDefinition>(TEXT("DefaultBluforTeamDefinition"));
    this->DefaultOpforTeamDefinition = CreateDefaultSubobject<UHDTeamDefinition>(TEXT("DefaultOpforTeamDefinition"));
    this->BluforTeamDefinition = NULL;
    this->OpforTeamDefinition = NULL;
    this->bRandomPlayerTeamBalance = false;
    this->PlatoonStateClass = AHDPlatoonState::StaticClass();
}

void AHDBaseGameMode::RemoveOpforBots(int32 Num) {
}

void AHDBaseGameMode::RemoveBluforBots(int32 Num) {
}

bool AHDBaseGameMode::PlayerCanRestartAtPlayerStart_Implementation(AController* Player, AActor* StartSpot, UDFLoadout* StartLoadout) {
    return false;
}

void AHDBaseGameMode::AddOpforBots(int32 Num) {
}

void AHDBaseGameMode::AddBluforBots(int32 Num) {
}


