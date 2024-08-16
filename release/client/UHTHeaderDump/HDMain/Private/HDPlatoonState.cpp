#include "HDPlatoonState.h"
#include "HDSquadState.h"
#include "Net/UnrealNetwork.h"

AHDPlatoonState::AHDPlatoonState(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAlwaysRelevant = false;
    this->SquadStateClass = AHDSquadState::StaticClass();
    this->bInitialized = false;
    this->ID = -1;
    this->Info = NULL;
    this->TeamId = 255;
    this->OwnerTeam = NULL;
}

bool AHDPlatoonState::SquadExists(const AHDSquadState* Squad, bool bIgnorePendingRemoval) const {
    return false;
}

void AHDPlatoonState::RemoveSquadAt(int32 RemoveIdx) {
}

void AHDPlatoonState::RemoveSquad(AHDSquadState* SquadToRemove) {
}

void AHDPlatoonState::RemoveFromOwner() {
}



bool AHDPlatoonState::IsSquadPendingRemovalFromPlatoon(const AHDSquadState* Squad) const {
    return false;
}

bool AHDPlatoonState::HasReachedMaxSquadLimit() const {
    return false;
}

AHDSquadState* AHDPlatoonState::GetSquadAt(int32 Index, bool bIgnorePendingRemoval) const {
    return NULL;
}

int32 AHDPlatoonState::GetNumSquads(bool bValidSquadsOnly) const {
    return 0;
}

int32 AHDPlatoonState::GetMaxSquadLimit() const {
    return 0;
}

bool AHDPlatoonState::FindSquadByName(const FText& SquadDisplayName, AHDSquadState*& OutFoundSquad) {
    return false;
}

void AHDPlatoonState::DumpSquadState() const {
}

AHDSquadState* AHDPlatoonState::AddSquad(const FText& SquadDisplayName, AHDPlayerState* SquadLeader, bool bStartLocked) {
    return NULL;
}

void AHDPlatoonState::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AHDPlatoonState, Squads);
    DOREPLIFETIME(AHDPlatoonState, Info);
    DOREPLIFETIME(AHDPlatoonState, TeamId);
    DOREPLIFETIME(AHDPlatoonState, OwnerTeam);
}


