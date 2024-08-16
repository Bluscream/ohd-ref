#include "DFCommChannel.h"
#include "Net/UnrealNetwork.h"

UDFCommChannel::UDFCommChannel() {
    this->bChannelPreInitialized = false;
    this->bChannelClosed = false;
    this->bCompletedSetup = false;
    this->bChannelOpenOnClient = false;
    this->ChannelDefinition = NULL;
    this->ChannelState = NULL;
}

void UDFCommChannel::SetChannelState(UObject* NewChannelState) {
}

bool UDFCommChannel::IsReady() const {
    return false;
}

bool UDFCommChannel::HasFormat(const UDFCommsFormatBase* Format) const {
    return false;
}

FString UDFCommChannel::GetChannelNameStr() const {
    return TEXT("");
}

FName UDFCommChannel::GetChannelName() const {
    return NAME_None;
}

FName UDFCommChannel::GetChannelGroupNameIfValid() const {
    return NAME_None;
}

FText UDFCommChannel::GetChannelDisplayName() const {
    return FText::GetEmpty();
}

void UDFCommChannel::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UDFCommChannel, ChannelDefinition);
    DOREPLIFETIME(UDFCommChannel, ChannelState);
}


