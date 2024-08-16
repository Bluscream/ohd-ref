#include "SquadMemberInfo.h"

USquadMemberInfo::USquadMemberInfo() {
    this->TeamId = 255;
    this->Team = EHDTeam::NoTeam;
    this->TeamState = NULL;
    this->ParentPlatoonData = NULL;
    this->ParentSquadData = NULL;
    this->PlayerState = NULL;
}

AHDSquadState* USquadMemberInfo::GetParentSquadState() const {
    return NULL;
}

AHDPlatoonState* USquadMemberInfo::GetParentPlatoonState() const {
    return NULL;
}


