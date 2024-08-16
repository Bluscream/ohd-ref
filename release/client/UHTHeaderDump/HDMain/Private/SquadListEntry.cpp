#include "SquadListEntry.h"

USquadListEntry::USquadListEntry() {
    this->TeamId = 255;
    this->Team = EHDTeam::NoTeam;
    this->TeamState = NULL;
    this->ParentPlatoonData = NULL;
    this->ID = -1;
    this->SquadState = NULL;
}

AHDPlatoonState* USquadListEntry::GetParentPlatoonState() const {
    return NULL;
}


