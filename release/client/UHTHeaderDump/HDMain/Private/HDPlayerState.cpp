#include "HDPlayerState.h"
#include "Net/UnrealNetwork.h"

AHDPlayerState::AHDPlayerState(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SpawnLoadout = NULL;
    this->CurrentLoadout = NULL;
}

void AHDPlayerState::UnregisterFromSquad() {
}

void AHDPlayerState::OnRep_SquadInfo() {
}

void AHDPlayerState::OnRep_SpawnLoadout(UHDKit* PrevSpawnLoadout) {
}

void AHDPlayerState::OnRep_CurrentLoadout(UHDKit* PrevLoadout) {
}

void AHDPlayerState::AssignSpawnLoadout(UHDKit* NewSpawnLoadout) {
}

void AHDPlayerState::AssignCurrentLoadout(UHDKit* NewCurrentLoadout) {
}

void AHDPlayerState::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AHDPlayerState, SpawnLoadout);
    DOREPLIFETIME(AHDPlayerState, CurrentLoadout);
    DOREPLIFETIME(AHDPlayerState, SquadInfo);
}


