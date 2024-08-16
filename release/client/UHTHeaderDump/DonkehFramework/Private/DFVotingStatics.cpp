#include "DFVotingStatics.h"

UDFVotingStatics::UDFVotingStatics() {
}

FText UDFVotingStatics::VoteInfoGetPromptTextForDisplay(const FDFActiveVoteInfo& VoteInfo) {
    return FText::GetEmpty();
}

FDFVoteIssueContext UDFVotingStatics::MakeVoteContext(APlayerState* TargetPlayer) {
    return FDFVoteIssueContext{};
}

bool UDFVotingStatics::IsValidVotingPlayer(APlayerState* PlayerState) {
    return false;
}

UDFVotingComponent* UDFVotingStatics::GetGameStateVotingComponent(const UObject* WorldContextObject) {
    return NULL;
}


