#include "DFBasePlayerController.h"
#include "DFCheatManager.h"
#include "DFPlayerCameraManager.h"
#include "Templates/SubclassOf.h"

ADFBasePlayerController::ADFBasePlayerController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->PlayerCameraManagerClass = ADFPlayerCameraManager::StaticClass();
    this->CheatClass = UDFCheatManager::StaticClass();
    this->ClickEventKeys.AddDefaulted(1);
    this->DFCharacter = NULL;
    this->bSetGameOnlyInputOnBeginPlay = true;
    this->TeamState = NULL;
    this->MaxChatMsgLen = 128;
}

void ADFBasePlayerController::TeamSay(const FString& Msg) {
}

void ADFBasePlayerController::ServerTeamSay_Implementation(const FString& Msg) {
}
bool ADFBasePlayerController::ServerTeamSay_Validate(const FString& Msg) {
    return true;
}

void ADFBasePlayerController::ServerSay_Implementation(const FString& Msg) {
}
bool ADFBasePlayerController::ServerSay_Validate(const FString& Msg) {
    return true;
}

void ADFBasePlayerController::ServerNotifyProjCSHit_Implementation(ADFBaseProjectile* HitProj, APawn* HitProjDamageInstigator, const FCSHitInfo& HitInfo, int32 ShotID) {
}
bool ADFBasePlayerController::ServerNotifyProjCSHit_Validate(ADFBaseProjectile* HitProj, APawn* HitProjDamageInstigator, const FCSHitInfo& HitInfo, int32 ShotID) {
    return true;
}

void ADFBasePlayerController::ServerInitiateVote_Implementation(TSubclassOf<UDFVoteIssue> IssueClass, FDFVoteIssueContext IssueContext, int32 VoteSelectionIndex, EDFVotingChannel VotingChannel) {
}

void ADFBasePlayerController::ServerEnableCheats_Implementation() {
}
bool ADFBasePlayerController::ServerEnableCheats_Validate() {
    return true;
}

void ADFBasePlayerController::ServerCastVote_Implementation(int32 VoteSelectionIndex, EDFVotingChannel VotingChannel) {
}

void ADFBasePlayerController::ServerAdmin_Implementation(const FString& Cmd) {
}
bool ADFBasePlayerController::ServerAdmin_Validate(const FString& Cmd) {
    return true;
}

void ADFBasePlayerController::Say(const FString& Msg) {
}









void ADFBasePlayerController::OnFireReleased() {
}

void ADFBasePlayerController::OnFirePressed() {
}

bool ADFBasePlayerController::IsServerAdministrator() const {
    return false;
}

bool ADFBasePlayerController::IsGameInputAllowed() {
    return false;
}

bool ADFBasePlayerController::InitiateVote(TSubclassOf<UDFVoteIssue> IssueClass, const FDFVoteIssueContext& IssueContext, int32 VoteSelectionIndex, EDFVotingChannel VotingChannel) {
    return false;
}

UDFVotingComponent* ADFBasePlayerController::GetVotingComponentByChannel(EDFVotingChannel VotingChannel) const {
    return NULL;
}

FTimerHandle ADFBasePlayerController::GetUnFreezeTimerHandle() const {
    return FTimerHandle{};
}

void ADFBasePlayerController::ClientEnableCheats_Implementation() {
}

bool ADFBasePlayerController::CastVote(int32 VoteSelectionIndex, EDFVotingChannel VotingChannel) {
    return false;
}

void ADFBasePlayerController::Admin(const FString& Cmd) {
}


