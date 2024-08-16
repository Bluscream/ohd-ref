#include "KillDeathRulesetSettings.h"

FKillDeathRulesetSettings::FKillDeathRulesetSettings() {
    this->TicketsGainedForKill = 0;
    this->TicketsLostOnKill = 0;
    this->TicketsLostOnTeamKill = 0;
    this->TicketsLostOnDeath = 0;
    this->TicketsLostOnSuicide = 0;
    this->PointsForKill = 0.00f;
    this->PointsForAssist = 0.00f;
    this->PointsForTeamKill = 0.00f;
    this->PointsForDeath = 0.00f;
    this->PointsForSuicide = 0.00f;
}

