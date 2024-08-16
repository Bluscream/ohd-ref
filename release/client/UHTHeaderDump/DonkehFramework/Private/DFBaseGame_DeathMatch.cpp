#include "DFBaseGame_DeathMatch.h"

ADFBaseGame_DeathMatch::ADFBaseGame_DeathMatch(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->AllowedVoteIssues.AddDefaulted(1);
    this->WinningPlayerState = NULL;
}


