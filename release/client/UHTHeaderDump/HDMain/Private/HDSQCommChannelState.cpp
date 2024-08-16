#include "HDSQCommChannelState.h"
#include "Net/UnrealNetwork.h"

UHDSQCommChannelState::UHDSQCommChannelState() {
    this->SquadState = NULL;
}

void UHDSQCommChannelState::SetupSQChannelState(AHDSquadState* ForSquadState) {
}

FName UHDSQCommChannelState::GetChannelNameForSquad(const AHDSquadState* Squad) {
    return NAME_None;
}

void UHDSQCommChannelState::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UHDSQCommChannelState, SquadState);
}


