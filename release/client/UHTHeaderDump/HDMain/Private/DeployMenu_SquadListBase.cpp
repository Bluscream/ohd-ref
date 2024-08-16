#include "DeployMenu_SquadListBase.h"

UDeployMenu_SquadListBase::UDeployMenu_SquadListBase() : UUserWidget(FObjectInitializer::Get()) {
    this->SquadData = NULL;
    this->bSortSquadMembers = true;
}

void UDeployMenu_SquadListBase::SquadNameChanged(AHDSquadState* SourceSquad, const FText& NewName, const FText& PrevName) {
}

void UDeployMenu_SquadListBase::SquadLockStateUpdated(AHDSquadState* SourceSquad, bool bNewLocked) {
}

void UDeployMenu_SquadListBase::SquadLeaderChanged(AHDSquadState* SourceSquad, AHDPlayerState* NewLeaderPS, AHDPlayerState* PrevLeaderPS) {
}

void UDeployMenu_SquadListBase::SetupSquad(USquadListEntry* InSquadData) {
}

void UDeployMenu_SquadListBase::RepopulateSquad() {
}





void UDeployMenu_SquadListBase::OnListRefresh() {
}

void UDeployMenu_SquadListBase::MemberSquadInfoUpdated(AHDSquadState* SourceSquad, AHDPlayerState* MemberPS, const FHDSquadAssignmentInfo& MemberSQInfo) {
}

void UDeployMenu_SquadListBase::MemberPreRemoveFromSquad(AHDSquadState* SourceSquad, AHDPlayerState* MemberPSToBeRemoved) {
}

void UDeployMenu_SquadListBase::MemberAddedToSquad(AHDSquadState* SourceSquad, AHDPlayerState* NewMemberPS) {
}

AHDSquadState* UDeployMenu_SquadListBase::GetSquadStateFromData() const {
    return NULL;
}

AHDPlatoonState* UDeployMenu_SquadListBase::GetParentPlatoonStateFromData() const {
    return NULL;
}




