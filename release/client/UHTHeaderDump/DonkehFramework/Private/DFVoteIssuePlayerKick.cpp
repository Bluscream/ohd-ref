#include "DFVoteIssuePlayerKick.h"

UDFVoteIssuePlayerKick::UDFVoteIssuePlayerKick() {
    this->IssueDisplayNameText = FText::FromString(TEXT("Kick Player"));
    this->VotePromptFormatText = FText::FromString(TEXT("\"{VoteOwner}\" wants to kick \"{VoteTarget}\" from server"));
    this->BanDuration = 300.00f;
}


