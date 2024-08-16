#include "DFBaseGameMode.h"
#include "DFBaseAIController.h"
#include "DFBaseGameState.h"
#include "DFBasePlayerCharacter.h"
#include "DFBasePlayerController.h"
#include "DFBasePlayerState.h"
#include "DFGameSession.h"
#include "DFTeamState.h"
#include "DFVotingComponent.h"
#include "Templates/SubclassOf.h"

ADFBaseGameMode::ADFBaseGameMode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->GameSessionClass = ADFGameSession::StaticClass();
    this->GameStateClass = ADFBaseGameState::StaticClass();
    this->PlayerControllerClass = ADFBasePlayerController::StaticClass();
    this->PlayerStateClass = ADFBasePlayerState::StaticClass();
    this->DefaultPawnClass = ADFBasePlayerCharacter::StaticClass();
    this->bUseSeamlessTravel = true;
    this->bPauseable = false;
    this->DFGameSession = NULL;
    this->TeamStateClass = ADFTeamState::StaticClass();
    this->AIControllerClass = ADFBaseAIController::StaticClass();
    this->WarmupTime = 0;
    this->RoundTimeLimit = 0;
    this->RoundScoreLimit = 0;
    this->TimeBetweenMatches = 10;
    this->bBalanceTeams = false;
    this->BalanceTimerInterval = 60.00f;
    this->AutoAssignHumanTeam = 255;
    this->bBotAutofill = false;
    this->NumTeams = 0;
    this->bAllowUnassignedTeams = true;
    this->bAllowPlayerNameChanges = true;
    this->bAllowPlayerNameChangesUnderNullOSS = true;
    this->bAllowPlayerNameChangesUnderSteamOSS = false;
    this->bAlwaysDestroyPlayerDuringSeamlessTravel = true;
    this->bForceRespawn = true;
    this->bRandomSpawns = true;
    this->bRestartPlayerAtTransformOnly = false;
    this->bFriendlyFire = true;
    this->bUpdatePlayerGameplayMuteStates = false;
    this->bTeamOnlyVoice = false;
    this->DefaultPawnSpawnCollisionHandlingMethodOverride = ESpawnActorCollisionHandlingMethod::Undefined;
    this->bAllowBots = false;
    this->bAllowVoting = false;
    this->bAllowPlayerToChangeVote = true;
    this->AllowedVoteIssues.AddDefaulted(1);
    this->PlayerVotingGameStateComponentClass = UDFVotingComponent::StaticClass();
}

void ADFBaseGameMode::UpdatePlayerGameplayMuteStates(ADFBasePlayerController* ForPlayerController) {
}

void ADFBaseGameMode::UnregisterSignificantActor(AActor* ActorToRemove) {
}

void ADFBaseGameMode::SwitchToNextMap() {
}

void ADFBaseGameMode::SignificantActorEndPlay(AActor* RemovedActor, TEnumAsByte<EEndPlayReason::Type> EndPlayReason) {
}

bool ADFBaseGameMode::ShouldHibernate() const {
    return false;
}

bool ADFBaseGameMode::ShouldGameplayMuteRemotePlayer_Implementation(ADFBasePlayerController* ForPlayer, ADFBasePlayerController* PlayerToCheck) const {
    return false;
}

bool ADFBaseGameMode::ShouldBotAutofill() const {
    return false;
}

void ADFBaseGameMode::RemoveTeamBots(uint8 TeamId, int32 Num) {
}

void ADFBaseGameMode::RemovePlayerByAge(bool bNewest, bool bExcludeBots, bool bExcludeHumans) {
}

void ADFBaseGameMode::RemoveOldestPlayer() {
}

void ADFBaseGameMode::RemoveOldestBot() {
}

void ADFBaseGameMode::RemoveNewestPlayer() {
}

void ADFBaseGameMode::RemoveNewestBot() {
}

bool ADFBaseGameMode::RemoveBotByName(const FString& PlayerName) {
    return false;
}

bool ADFBaseGameMode::RemoveBot(APlayerState* BotPS) {
    return false;
}

void ADFBaseGameMode::RemoveAllBots() {
}

void ADFBaseGameMode::RegisterSignificantActor(AActor* ActorToRegister) {
}







bool ADFBaseGameMode::PlayerCanRestartGeneric(AController* Player) {
    return false;
}

bool ADFBaseGameMode::PlayerBotCanRestart_Implementation(AAIController* Player) {
    return false;
}

void ADFBaseGameMode::NextMap() {
}

float ADFBaseGameMode::ModifyDamage(float Damage, AActor* DamagedActor, const FDamageEvent& DamageEvent, AController* EventInstigator, AActor* DamageCauser) const {
    return 0.0f;
}

bool ADFBaseGameMode::KickPlayerByName(const FString& KickedPlayerName, const FText& KickReason) {
    return false;
}

bool ADFBaseGameMode::KickPlayerById(int32 KickedPlayerId, const FText& KickReason) {
    return false;
}

bool ADFBaseGameMode::IsValidTeamId(uint8 TeamId) const {
    return false;
}

bool ADFBaseGameMode::IsMatchWinner_Implementation(ADFBasePlayerState* PlayerStateToCheck) const {
    return false;
}

bool ADFBaseGameMode::IsHibernating() const {
    return false;
}

bool ADFBaseGameMode::IsFriendlyFireEnabled() const {
    return false;
}

int32 ADFBaseGameMode::GetTotalNumPlayers(bool bIncludeTravellingPlayers) {
    return 0;
}

int32 ADFBaseGameMode::GetNumPlayersOnTeam(uint8 TeamId, EPlayerKind PlayerType) const {
    return 0;
}

FString ADFBaseGameMode::GetNextMapName() const {
    return TEXT("");
}

FString ADFBaseGameMode::GetNextGameName() const {
    return TEXT("");
}

uint8 ADFBaseGameMode::GetAutoAssignHumanTeam() const {
    return 0;
}

bool ADFBaseGameMode::ForceTeamId(int32 SwitchedPlayerId, uint8 TeamIdToAssign) {
    return false;
}

bool ADFBaseGameMode::ForceTeam(const FString& SwitchedPlayerName, uint8 TeamIdToAssign) {
    return false;
}

bool ADFBaseGameMode::FindPlayerStartTransform_Implementation(AController* Player, FTransform& OutFoundSpawnTransform, const FString& IncomingName) {
    return false;
}

void ADFBaseGameMode::DumpActiveRulesets() {
}

void ADFBaseGameMode::DetermineMatchWinner_Implementation() {
}

ADFTeamState* ADFBaseGameMode::CreateTeam(const UDFTeamDefinition* NewTeamDef, const uint8 NewTeamIdToUse) {
    return NULL;
}

uint8 ADFBaseGameMode::ChooseTeam_Implementation(ADFBasePlayerState* ForPlayerState) const {
    return 0;
}

bool ADFBaseGameMode::ChooseSpawnPointFromPlayerStart_Implementation(AController* Player, AActor* StartSpot, FSpawnPointDef& OutChosenSpawnPoint, ESpawnActorCollisionHandlingMethod& OutCollisionHandlingMethod) {
    return false;
}

bool ADFBaseGameMode::CheckWinConditions_Implementation() {
    return false;
}

bool ADFBaseGameMode::CheckRulesetWinConditions() {
    return false;
}

bool ADFBaseGameMode::CanRegisterSignificantActor_Implementation(const AActor* ActorToRegister, FString& ActorDenialReason) const {
    return false;
}

bool ADFBaseGameMode::CanDealDamage_Implementation(ADFBasePlayerState* DamageInstigator, ADFBasePlayerState* DamagedPlayer) const {
    return false;
}

bool ADFBaseGameMode::CanAddRuleset_Implementation(TSubclassOf<UDFGameRulesetBase>& RulesetClassToAdd, FString& RulesetDenialReason) const {
    return false;
}

bool ADFBaseGameMode::BanPlayerByName(const FString& BannedPlayerName, const FText& BanReason, float BanDuration) {
    return false;
}

bool ADFBaseGameMode::BanPlayerById(int32 BannedPlayerId, const FText& BanReason, float BanDuration) {
    return false;
}

void ADFBaseGameMode::AutofillWithBots() {
}

void ADFBaseGameMode::AssignTeam(AController* ForController, uint8 AssignedTeam) {
}

void ADFBaseGameMode::AddTeamBots(uint8 TeamId, int32 Num) {
}

void ADFBaseGameMode::AddNamedBot(const FString& BotName) {
}

void ADFBaseGameMode::AddBots(int32 Num) {
}

APlayerState* ADFBaseGameMode::AddBot(uint8 PlayerTeamID, const FString& PlayerName) {
    return NULL;
}


