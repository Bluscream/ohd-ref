#include "HDRuleset_KillDeath.h"

UHDRuleset_KillDeath::UHDRuleset_KillDeath() {
    this->bUseTickets = true;
}

void UHDRuleset_KillDeath::PlayerTeamKilled_Implementation(AController* Killer, AController* Victim) {
}

FKillDeathRulesetSettings UHDRuleset_KillDeath::GetKillDeathSettingsForTeam(EHDTeam KillDeathTeam) const {
    return FKillDeathRulesetSettings{};
}


