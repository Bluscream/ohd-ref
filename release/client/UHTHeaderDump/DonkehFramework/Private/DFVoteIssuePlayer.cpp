#include "DFVoteIssuePlayer.h"

UDFVoteIssuePlayer::UDFVoteIssuePlayer() {
    this->bAllowAdminTargets = false;
}

bool UDFVoteIssuePlayer::CanInitiateVoteWithTarget(APlayerState* TargetPS) const {
    return false;
}


