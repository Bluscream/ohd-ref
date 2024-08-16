#include "DeployMenu_PlatoonSquadListBase.h"

UDeployMenu_PlatoonSquadListBase::UDeployMenu_PlatoonSquadListBase() : UUserWidget(FObjectInitializer::Get()) {
    this->PlatoonData = NULL;
    this->bSortSquads = true;
}

void UDeployMenu_PlatoonSquadListBase::SquadPreRemoveFromPlatoon(AHDPlatoonState* SourcePlatoon, AHDSquadState* SquadToBeRemoved) {
}

void UDeployMenu_PlatoonSquadListBase::SquadAddedToPlatoon(AHDPlatoonState* SourcePlatoon, AHDSquadState* NewSquad) {
}

void UDeployMenu_PlatoonSquadListBase::SetupPlatoon(UPlatoonListEntry* InPlatoonData) {
}

void UDeployMenu_PlatoonSquadListBase::RepopulatePlatoon() {
}


AHDPlatoonState* UDeployMenu_PlatoonSquadListBase::GetPlatoonStateFromData() const {
    return NULL;
}




