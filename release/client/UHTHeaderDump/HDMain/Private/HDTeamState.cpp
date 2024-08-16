#include "HDTeamState.h"
#include "Net/UnrealNetwork.h"

AHDTeamState::AHDTeamState(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MaxPlatoonLimit = -1;
}

void AHDTeamState::RemovePlatoonAt(int32 RemoveIdx) {
}

void AHDTeamState::RemovePlatoon(AHDPlatoonState* PlatoonToRemove) {
}



bool AHDTeamState::PlatoonExists(const AHDPlatoonState* Platoon, bool bIgnorePendingRemoval) const {
    return false;
}

bool AHDTeamState::IsPlatoonPendingRemovalFromTeam(const AHDPlatoonState* Platoon) const {
    return false;
}

bool AHDTeamState::HasReachedMaxPlatoonLimit() const {
    return false;
}

EHDTeam AHDTeamState::GetTeam() const {
    return EHDTeam::Red;
}

AHDPlatoonState* AHDTeamState::GetPlatoonAt(int32 Index, bool bIgnorePendingRemoval) const {
    return NULL;
}

int32 AHDTeamState::GetNumPlatoons(bool bValidPlatoonsOnly) const {
    return 0;
}

bool AHDTeamState::FindPlatoonByName(const FText& PlatoonDisplayName, AHDPlatoonState*& OutFoundPlatoon) {
    return false;
}

bool AHDTeamState::FindPlatoonByDefinition(const UHDPlatoonInfo* PlatoonDef, AHDPlatoonState*& OutFoundPlatoon) {
    return false;
}

void AHDTeamState::DumpPlatoonState() const {
}

AHDPlatoonState* AHDTeamState::AddPlatoon(const UHDPlatoonInfo* PlatoonInfo) {
    return NULL;
}

void AHDTeamState::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AHDTeamState, Platoons);
}


