#include "DFVoteIssue.h"

UDFVoteIssue::UDFVoteIssue() {
    this->PassRatio = 0.51f;
    this->Duration = 60.00f;
    this->PassedVoteCooldown = 30.00f;
    this->FailedVoteCooldown = 120.00f;
    this->bDenyVACBannedUsersFromVoting = false;
    this->bDisableVACBanCheckWhileAdminIsOnline = false;
    this->bOnlyAdminsCanInitiateVote = false;
    this->NumEligibleVoters = 0;
    this->VoteStartTime = 0.00f;
    this->VoteEndTime = 0.00f;
    this->VoteEndStatus = EDFVoteStatus::Inactive;
    this->VoteOwner = NULL;
}

void UDFVoteIssue::VotePassed_Implementation() {
}

void UDFVoteIssue::VoteFailed_Implementation() {
}

void UDFVoteIssue::ResetVote() {
}



void UDFVoteIssue::GetYesNoVoteCounts(int32& OutYesVotes, int32& OutNoVotes) const {
}

void UDFVoteIssue::GetVoteSelections(TArray<FDFPlayerVoteSelection>& OutVoteSelections) {
}

int32 UDFVoteIssue::GetRequiredVoteCountToPass() const {
    return 0;
}

UDFVotingComponent* UDFVoteIssue::GetOwningVotingComponent() const {
    return NULL;
}

void UDFVoteIssue::GetEligibleVoters(TArray<APlayerState*>& OutEligibleVoters) const {
}

int32 UDFVoteIssue::GetEligibleVoterCount() const {
    return 0;
}

EDFVoteStatus UDFVoteIssue::DetermineVoteStatus() const {
    return EDFVoteStatus::Inactive;
}

bool UDFVoteIssue::CanVoteOn(APlayerState* VoterPS) const {
    return false;
}

bool UDFVoteIssue::CanStartVote(APlayerState* InvokingPlayer) const {
    return false;
}

bool UDFVoteIssue::AllowsVoteFrom_Implementation(APlayerState* VoterPS) const {
    return false;
}

bool UDFVoteIssue::AllowsStartVoteBy_Implementation(APlayerState* InvokingPlayer) const {
    return false;
}


