#include "HDPlatoonInfo.h"

UHDPlatoonInfo::UHDPlatoonInfo() {
    this->MaxSquadLimit = 9;
}

bool UHDPlatoonInfo::ShouldCreateForTeam(const UHDTeamDefinition* TeamDef) const {
    return false;
}


