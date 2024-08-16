#include "HDKitPrerequisite_SquadSizeLimit.h"

UHDKitPrerequisite_SquadSizeLimit::UHDKitPrerequisite_SquadSizeLimit() {
    this->KitDenialReason = FText::FromString(TEXT("Total Squads Limit Of 1 Reached"));
    this->MaxSquadCount = 1;
}


