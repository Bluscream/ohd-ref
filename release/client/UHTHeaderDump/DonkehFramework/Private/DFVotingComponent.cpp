#include "DFVotingComponent.h"
#include "Net/UnrealNetwork.h"
#include "Templates/SubclassOf.h"

UDFVotingComponent::UDFVotingComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ActiveVoteIssue = NULL;
}

void UDFVotingComponent::OnRep_ActiveVoteInfo(const FDFActiveVoteInfo& PreviousValue) {
}

bool UDFVotingComponent::IsVotingInProgress() const {
    return false;
}

bool UDFVotingComponent::InitiateVote(APlayerState* InvokingPlayer, TSubclassOf<UDFVoteIssue> IssueClass, const FDFVoteIssueContext& IssueContext) {
    return false;
}

UDFVoteIssue* UDFVotingComponent::GetVoteIssueForClass(TSubclassOf<UDFVoteIssue> IssueClass) const {
    return NULL;
}

bool UDFVotingComponent::GetVoteIssueDefinitionForClass(TSubclassOf<UDFVoteIssue> IssueClass, FDFVoteIssueDefinition& OutIssueDefinition) const {
    return false;
}

bool UDFVotingComponent::CastVote(APlayerState* InvokingPlayer, int32 VoteSelectionID) {
    return false;
}

bool UDFVotingComponent::CanVoteTargetPlayer(APlayerState* TargetPS, TSubclassOf<UDFVoteIssue> IssueClass) const {
    return false;
}

bool UDFVotingComponent::CanInitiateVote(APlayerState* InvokingPlayer, TSubclassOf<UDFVoteIssue> IssueClass) const {
    return false;
}

bool UDFVotingComponent::CanCastVote(APlayerState* VotingPlayer, int32 VoteSelectionID) const {
    return false;
}

void UDFVotingComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UDFVotingComponent, ActiveVoteInfo);
    DOREPLIFETIME(UDFVotingComponent, VoteIssueDefinitions);
}


