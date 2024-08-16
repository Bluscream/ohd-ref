#include "DFBasePlayerState.h"
#include "Net/UnrealNetwork.h"

ADFBasePlayerState::ADFBasePlayerState(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->TeamNum = 255;
    this->PrevTeamNum = 255;
    this->TeamState = NULL;
    this->PrevTeamState = NULL;
    this->bAdmin = false;
    this->NumKills = 0;
    this->NumAssists = 0;
    this->NumDeaths = 0;
    this->TeamStartTime = 0;
}

void ADFBasePlayerState::SetTeam(const uint8 NewTeamNum, bool bCopyToInactivePlayerState) {
}

void ADFBasePlayerState::SetAdminStatus(bool bNewAdminStatus) {
}

void ADFBasePlayerState::ScorePoints(float Points, bool bForceNetUpdate) {
}

void ADFBasePlayerState::ScoreKillPlayer(ADFBasePlayerState* Victim, float Points) {
}

void ADFBasePlayerState::ScoreDeath(ADFBasePlayerState* KilledBy, float Points) {
}

void ADFBasePlayerState::ScoreAssistPlayer(ADFBasePlayerState* Killer, ADFBasePlayerState* Victim, float Points) {
}


void ADFBasePlayerState::OnTeamStateUpdated_Implementation(ADFTeamState* TeamStateBeforeUpdate) {
}

void ADFBasePlayerState::OnTeamNumUpdated_Implementation(uint8 TeamNumBeforeUpdate) {
}

void ADFBasePlayerState::OnRep_TeamState(ADFTeamState* TeamStateBeforeUpdate) {
}

void ADFBasePlayerState::OnRep_TeamNum(uint8 TeamNumBeforeUpdate) {
}

void ADFBasePlayerState::OnRep_NumKills(int32 PrevNumKills) {
}

void ADFBasePlayerState::OnRep_NumDeaths(int32 PrevNumDeaths) {
}

void ADFBasePlayerState::OnRep_NumAssists(int32 PrevNumAssists) {
}

void ADFBasePlayerState::OnRep_bAdmin(bool bAdminStatusBeforeUpdate) {
}

uint8 ADFBasePlayerState::GetTeam() const {
    return 0;
}

uint8 ADFBasePlayerState::GetPreviousTeam() const {
    return 0;
}

int32 ADFBasePlayerState::GetKills() const {
    return 0;
}

int32 ADFBasePlayerState::GetDeaths() const {
    return 0;
}

int32 ADFBasePlayerState::GetAssists() const {
    return 0;
}

void ADFBasePlayerState::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ADFBasePlayerState, TeamNum);
    DOREPLIFETIME(ADFBasePlayerState, TeamState);
    DOREPLIFETIME(ADFBasePlayerState, bAdmin);
    DOREPLIFETIME(ADFBasePlayerState, NumKills);
    DOREPLIFETIME(ADFBasePlayerState, NumAssists);
    DOREPLIFETIME(ADFBasePlayerState, NumDeaths);
    DOREPLIFETIME(ADFBasePlayerState, TeamStartTime);
}


