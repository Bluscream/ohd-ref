#include "DFBaseGameState.h"
#include "Net/UnrealNetwork.h"

ADFBaseGameState::ADFBaseGameState(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->NumTeams = 0;
    this->bTimerPaused = false;
    this->RemainingTime = 0;
    this->ReplicatedRemainingTime = 0;
    this->bAllowVoting = false;
    this->bAllowPlayerToChangeVote = false;
    this->GameStateVotingComponent = NULL;
}

void ADFBaseGameState::SetTimerPauseState(bool bNewPauseState) {
}

void ADFBaseGameState::SetRemainingTime(int32 NewRemainingTime) {
}

void ADFBaseGameState::OnRep_ReplicatedRemainingTime() {
}

void ADFBaseGameState::OnRep_NumTeams() {
}

bool ADFBaseGameState::IsValidTeamId(const uint8 TeamId) const {
    return false;
}

ADFTeamState* ADFBaseGameState::GetTeamStateById(const uint8 TeamIdNum) const {
    return NULL;
}

UDFVotingComponent* ADFBaseGameState::GetGameStateVotingComponent() const {
    return NULL;
}

void ADFBaseGameState::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ADFBaseGameState, NumTeams);
    DOREPLIFETIME(ADFBaseGameState, bTimerPaused);
    DOREPLIFETIME(ADFBaseGameState, ReplicatedRemainingTime);
    DOREPLIFETIME(ADFBaseGameState, TeamScores);
    DOREPLIFETIME(ADFBaseGameState, bAllowVoting);
    DOREPLIFETIME(ADFBaseGameState, bAllowPlayerToChangeVote);
}


