#include "HDGameState.h"
#include "Net/UnrealNetwork.h"

AHDGameState::AHDGameState(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ReplicatedMinRespawnDelay = 0.00f;
    this->bReplicatedDisableSpawnKitRestrictions = false;
    this->BluforTickets = 0;
    this->OpforTickets = 0;
    this->BluforTeamState = NULL;
    this->OpforTeamState = NULL;
}

void AHDGameState::RevokeTicketsFromTeam(EHDTeam TicketTeam, int32 TicketsToRemove) {
}

bool AHDGameState::IsGameUsingTickets() const {
    return false;
}

bool AHDGameState::IsGameUsingPlayerSpawnKitRestrictions(const AController* Controller) const {
    return false;
}

void AHDGameState::GiveTicketsToTeam(EHDTeam TicketTeam, int32 TicketsToAdd) {
}

int32 AHDGameState::GetNumPlayersOnTeam(EHDTeam TeamToCheck) const {
    return 0;
}

void AHDGameState::ClearTickets() {
}

void AHDGameState::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AHDGameState, ReplicatedMinRespawnDelay);
    DOREPLIFETIME(AHDGameState, bReplicatedDisableSpawnKitRestrictions);
    DOREPLIFETIME(AHDGameState, BluforTickets);
    DOREPLIFETIME(AHDGameState, OpforTickets);
    DOREPLIFETIME(AHDGameState, BluforTeamState);
    DOREPLIFETIME(AHDGameState, OpforTeamState);
}


