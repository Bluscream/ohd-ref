#include "HDGameRulesetBase.h"

UHDGameRulesetBase::UHDGameRulesetBase() {
    this->bUseTickets = false;
}

void UHDGameRulesetBase::RevokeTicketsFromTeam(EHDTeam TicketTeam, int32 TicketsToRemove) {
}

void UHDGameRulesetBase::GiveTicketsToTeam(EHDTeam TicketTeam, int32 TicketsToAdd) {
}

AHDGameState* UHDGameRulesetBase::GetHDGameState() const {
    return NULL;
}

AHDBaseGameMode* UHDGameRulesetBase::GetHDGameMode() const {
    return NULL;
}


