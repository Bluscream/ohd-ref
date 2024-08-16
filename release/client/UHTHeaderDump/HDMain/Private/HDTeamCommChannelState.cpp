#include "HDTeamCommChannelState.h"
#include "Net/UnrealNetwork.h"

UHDTeamCommChannelState::UHDTeamCommChannelState() {
    this->TeamState = NULL;
}

void UHDTeamCommChannelState::SetupTeamChannelState(AHDTeamState* ForTeamState) {
}

FName UHDTeamCommChannelState::GetChannelNameForTeam(const AHDTeamState* Team) {
    return NAME_None;
}

FName UHDTeamCommChannelState::GetChannelNameForCommand(const AHDTeamState* CmdTeam) {
    return NAME_None;
}

void UHDTeamCommChannelState::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UHDTeamCommChannelState, TeamState);
}


