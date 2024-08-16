#include "HDPlayerController.h"
#include "HDCheatManager.h"
#include "HDPlayerCameraManager.h"

AHDPlayerController::AHDPlayerController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->PlayerCameraManagerClass = AHDPlayerCameraManager::StaticClass();
    this->CheatClass = UHDCheatManager::StaticClass();
    this->ClickEventKeys.AddDefaulted(1);
    this->HDCharacter = NULL;
    this->PlayerComponent = NULL;
    this->TextCommsFormatName = TEXT("Text");
    this->TeamLocalVoipCommChannelGroupName = TEXT("Team");
    this->SquadVoipCommChannelGroupName = TEXT("Squad");
    this->CommandVoipCommChannelGroupName = TEXT("Command");
    this->CachedPlayerCommsComp = NULL;
    this->VictoryMenuClass = NULL;
    this->VictoryMenu = NULL;
}

void AHDPlayerController::UnloadVictoryMenu() {
}

void AHDPlayerController::TeamTalk() {
}

void AHDPlayerController::Talk() {
}

void AHDPlayerController::StopTalkingOverChannelIfActive(const FName TalkStopChannelName) {
}

void AHDPlayerController::StopTalkingOverChannelGroupIfActive(const FName TalkStopGroupName) {
}

void AHDPlayerController::StopTalkingOnActiveChannels() {
}

void AHDPlayerController::StartTalkingOverChannelGroup(const FName TalkStartGroupName) {
}

void AHDPlayerController::StartTalkingOverChannel(const FName TalkStartChannelName) {
}

void AHDPlayerController::ServerSwitchTeam_Implementation() {
}
bool AHDPlayerController::ServerSwitchTeam_Validate() {
    return true;
}

void AHDPlayerController::ServerSpawnVehicle_Implementation() {
}
bool AHDPlayerController::ServerSpawnVehicle_Validate() {
    return true;
}

void AHDPlayerController::ServerRestartPlayerAtStartSpot_Implementation(AActor* DesiredStartSpot, UDFLoadout* DesiredStartLoadout) {
}
bool AHDPlayerController::ServerRestartPlayerAtStartSpot_Validate(AActor* DesiredStartSpot, UDFLoadout* DesiredStartLoadout) {
    return true;
}

void AHDPlayerController::ServerPickTeam_Implementation(const EHDTeam DesiredTeam) {
}
bool AHDPlayerController::ServerPickTeam_Validate(const EHDTeam DesiredTeam) {
    return true;
}

void AHDPlayerController::ServerCheatSetAllowIdleSway_Implementation(bool bIdleSwayDisallowed) {
}
bool AHDPlayerController::ServerCheatSetAllowIdleSway_Validate(bool bIdleSwayDisallowed) {
    return true;
}


void AHDPlayerController::OnShowScoreboardReleased() {
}

void AHDPlayerController::OnShowScoreboardPressed() {
}


void AHDPlayerController::OnPauseMenu() {
}

void AHDPlayerController::LoadVictoryMenu(const FHDGameRoundEndEventDetails& RoundDetails, bool bWinner) {
}

bool AHDPlayerController::IsTalkingOverChannelName(const FName TalkChannelName) {
    return false;
}

bool AHDPlayerController::IsTalkingOverChannelGroup(const FName TalkGroupName) {
    return false;
}

bool AHDPlayerController::IsTalkingOverChannel(const UDFCommChannel* TalkChannel) {
    return false;
}

bool AHDPlayerController::IsTalking(bool bIncludeWantsToTalk) const {
    return false;
}

bool AHDPlayerController::IsInVehicle() const {
    return false;
}

bool AHDPlayerController::IsIdleSwayAllowed() const {
    return false;
}

UDFCommChannel* AHDPlayerController::GetTalkChannel() {
    return NULL;
}

UDFPlayerCommsComponent* AHDPlayerController::GetPlayerCommsComponent() {
    return NULL;
}

void AHDPlayerController::ClientRoundEnd_Implementation(const FHDGameRoundEndEventDetails& RoundDetails, bool bIsWinner) {
}

void AHDPlayerController::ClientLoadTeamData_Implementation(const TArray<FString>& FactionAssetPaths) {
}

void AHDPlayerController::ClientCheatSetAllowIdleSway_Implementation(bool bIdleSwayDisallowed) {
}

bool AHDPlayerController::CanTalkOverChannel(const FName TalkChannelName) {
    return false;
}

void AHDPlayerController::Auth_SpawnVehicle_Implementation() {
}


