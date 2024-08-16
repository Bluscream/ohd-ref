#include "DFBaseGame_TeamDeathMatch.h"

ADFBaseGame_TeamDeathMatch::ADFBaseGame_TeamDeathMatch(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAllowUnassignedTeams = false;
    this->bUpdatePlayerGameplayMuteStates = true;
    this->bTeamOnlyVoice = true;
    this->AllowedVoteIssues.AddDefaulted(1);
}


