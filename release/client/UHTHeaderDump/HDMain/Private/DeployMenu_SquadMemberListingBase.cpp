#include "DeployMenu_SquadMemberListingBase.h"

UDeployMenu_SquadMemberListingBase::UDeployMenu_SquadMemberListingBase() : UUserWidget(FObjectInitializer::Get()) {
    this->MemberData = NULL;
}

void UDeployMenu_SquadMemberListingBase::SetupMember(USquadMemberInfo* InMemberData) {
}



void UDeployMenu_SquadMemberListingBase::MemberPlayerNameChanged(APlayerState* PlayerState, const FString& NewPlayerName) {
}

AHDPlayerState* UDeployMenu_SquadMemberListingBase::GetPlayerStateFromData() const {
    return NULL;
}

AHDSquadState* UDeployMenu_SquadMemberListingBase::GetParentSquadStateFromData() const {
    return NULL;
}

AHDPlatoonState* UDeployMenu_SquadMemberListingBase::GetParentPlatoonStateFromData() const {
    return NULL;
}


