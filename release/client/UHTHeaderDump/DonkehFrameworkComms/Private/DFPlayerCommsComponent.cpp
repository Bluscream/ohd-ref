#include "DFPlayerCommsComponent.h"
#include "Net/UnrealNetwork.h"

UDFPlayerCommsComponent::UDFPlayerCommsComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void UDFPlayerCommsComponent::UpdateExclusiveChannelToUseForCommsFormatByName(const FName& FormatName, const FName& SingleChannelNameToUse) {
}

void UDFPlayerCommsComponent::UpdateExclusiveChannelToUseForCommsFormat(UDFCommsFormatBase* Format, UDFCommChannel* SingleChannelToUse) {
}

void UDFPlayerCommsComponent::ServerUpdateExclusiveChannelToUseForCommsFormat_Implementation(const FName& FormatName, UDFCommChannel* SingleChannelToUse) {
}

void UDFPlayerCommsComponent::ServerSendCommMsgViaExclChannel_Implementation(const FName& FormatName, UDFCommChannel* ReceivingChannel, FDFGenericChannelMsg CommMsg) {
}
bool UDFPlayerCommsComponent::ServerSendCommMsgViaExclChannel_Validate(const FName& FormatName, UDFCommChannel* ReceivingChannel, FDFGenericChannelMsg CommMsg) {
    return true;
}

void UDFPlayerCommsComponent::ServerSendCommMsgViaChannel_Implementation(const FName& FormatName, UDFCommChannel* ReceivingChannel, FDFGenericChannelMsg CommMsg) {
}
bool UDFPlayerCommsComponent::ServerSendCommMsgViaChannel_Validate(const FName& FormatName, UDFCommChannel* ReceivingChannel, FDFGenericChannelMsg CommMsg) {
    return true;
}

void UDFPlayerCommsComponent::ServerRequestExclusiveChannelUsedForCommsFormat_Implementation(const FName& RequestedFormatName) {
}

void UDFPlayerCommsComponent::ServerClearCurrentExclusiveChannelForCommsFormat_Implementation(const FName& FormatName) {
}

void UDFPlayerCommsComponent::ServerChannelOpened_Implementation(UDFCommChannel* AckedChannel) {
}

void UDFPlayerCommsComponent::SendCommMsgViaChannelByName(const FName& FormatName, const FName& ReceivingChannelName, FDFGenericChannelMsg& CommMsgToSend, bool bUseChannelAsNewExclusive) {
}

void UDFPlayerCommsComponent::SendCommMsgViaChannel(UDFCommsFormatBase* FormatToUse, UDFCommChannel* ReceivingChannel, FDFGenericChannelMsg& CommMsgToSend, bool bUseChannelAsNewExclusive) {
}

void UDFPlayerCommsComponent::RemoveCommChannelByName(const FName ChannelNameToRemove) {
}

void UDFPlayerCommsComponent::RemoveCommChannel(UDFCommChannel* ChannelToRemove) {
}

void UDFPlayerCommsComponent::RemoveAllCommChannels() {
}



bool UDFPlayerCommsComponent::FormatUsesChannelByName(const FName& FormatName, const FName& ChannelNameToCheck) const {
    return false;
}

bool UDFPlayerCommsComponent::FormatUsesChannel(const UDFCommsFormatBase* Format, const UDFCommChannel* ChannelToCheck) const {
    return false;
}

bool UDFPlayerCommsComponent::FormatHasExclusiveChannelByName(const FName& FormatName) const {
    return false;
}

bool UDFPlayerCommsComponent::FormatHasExclusiveChannel(const UDFCommsFormatBase* Format) const {
    return false;
}

bool UDFPlayerCommsComponent::FindCommChannel(const FName ChannelName, UDFCommChannel*& OutChannelFound) const {
    return false;
}

bool UDFPlayerCommsComponent::FindAssociatedCommsFormat(const FName FormatName, UDFCommsFormatBase*& OutFormatFound) const {
    return false;
}

bool UDFPlayerCommsComponent::ContainsCommChannelByName(const FName ChannelNameToCheck) const {
    return false;
}

bool UDFPlayerCommsComponent::ContainsCommChannel(const UDFCommChannel* ChannelToCheck) const {
    return false;
}

bool UDFPlayerCommsComponent::ContainsAssociatedCommsFormat(const FName FormatName) const {
    return false;
}

void UDFPlayerCommsComponent::ClientUpdateExclusiveChannelToUseForCommsFormat_Implementation(const FName& FormatName, UDFCommChannel* SingleChannelToUse) {
}

void UDFPlayerCommsComponent::ClientRecvCommMsgFromChannel_Implementation(const FName& SourceFormatName, UDFCommChannel* SourceChannel, const FDFGenericChannelMsg& ReceivedCommMsg) {
}

void UDFPlayerCommsComponent::ClientClearCurrentExclusiveChannelForCommsFormat_Implementation(const FName& FormatName) {
}

void UDFPlayerCommsComponent::ClearCurrentExclusiveChannelForCommsFormatByName(const FName& FormatName) {
}

void UDFPlayerCommsComponent::ClearCurrentExclusiveChannelForCommsFormat(UDFCommsFormatBase* Format) {
}

bool UDFPlayerCommsComponent::CanSendCommMsgViaChannel(UDFCommsFormatBase* ReceivingFormat, UDFCommChannel* ReceivingChannel, const FDFGenericChannelMsg& CommMsgToSend, bool bUseChannelAsNewExclusive) const {
    return false;
}

bool UDFPlayerCommsComponent::CanSendAndRecvCommMsgViaChannel(const FName& FormatName, const FName& ChannelName, const FDFGenericChannelMsg& CommMsg) const {
    return false;
}

bool UDFPlayerCommsComponent::CanRecvCommMsgViaChannel(const FName& SourceFormatName, const FName& SourceChannelName, const FDFGenericChannelMsg& CommMsgToReceive) const {
    return false;
}

void UDFPlayerCommsComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UDFPlayerCommsComponent, OpenCommChannels);
}


