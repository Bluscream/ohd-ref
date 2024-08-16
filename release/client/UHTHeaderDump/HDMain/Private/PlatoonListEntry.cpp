#include "PlatoonListEntry.h"

UPlatoonListEntry::UPlatoonListEntry() {
    this->TeamId = 255;
    this->Team = EHDTeam::NoTeam;
    this->TeamState = NULL;
    this->ID = -1;
    this->Info = NULL;
    this->PlatoonState = NULL;
}


