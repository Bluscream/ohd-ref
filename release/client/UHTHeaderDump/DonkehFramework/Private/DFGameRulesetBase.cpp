#include "DFGameRulesetBase.h"

UDFGameRulesetBase::UDFGameRulesetBase() {
    this->bTickable = false;
    this->Priority = 0;
}




void UDFGameRulesetBase::PlayerWounded_Implementation(AController* Victim, float DamageAmount, const UDamageType* DamageType, AController* InstigatedBy, AActor* DamageCauser) {
}

void UDFGameRulesetBase::PlayerSuicide_Implementation(AController* Victim) {
}

void UDFGameRulesetBase::PlayerSpawn_Implementation(AController* Player, APawn* NewPlayerPawn) {
}

void UDFGameRulesetBase::PlayerPostLogout_Implementation(AController* ExitingPlayer) {
}

void UDFGameRulesetBase::PlayerPostLogin_Implementation(APlayerController* NewPlayer) {
}

void UDFGameRulesetBase::PlayerKilled_Implementation(AController* Killer, AController* Victim) {
}

void UDFGameRulesetBase::PlayerJoinedTeam_Implementation(AController* JoiningPlayer, uint8 TeamNum) {
}

void UDFGameRulesetBase::PlayerJoined_Implementation(APlayerController* NewPlayer) {
}

void UDFGameRulesetBase::PlayerDied_Implementation(AController* Victim) {
}

void UDFGameRulesetBase::MatchHasEnded_Implementation() {
}


ADFBaseGameState* UDFGameRulesetBase::GetGameState() const {
    return NULL;
}

ADFBaseGameMode* UDFGameRulesetBase::GetGameMode() const {
    return NULL;
}


