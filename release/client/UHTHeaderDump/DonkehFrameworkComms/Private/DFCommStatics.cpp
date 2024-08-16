#include "DFCommStatics.h"

UDFCommStatics::UDFCommStatics() {
}

void UDFCommStatics::UpdateExclusiveChannelForFormatByName(APlayerController* Player, const FName FormatNameToUpdate, const FName SingleChannelNameToUse) {
}

void UDFCommStatics::UpdateExclusiveChannelForFormat(APlayerController* Player, UDFCommsFormatBase* FormatToUpdate, UDFCommChannel* SingleChannelToUse) {
}

void UDFCommStatics::SendCommsViaChannelByName(APlayerController* PlayerSender, const FName FormatName, const FName ReceivingChannelName, FDFGenericChannelMsg& MsgToSend, bool bUseChannelAsNewExclusive) {
}

void UDFCommStatics::SendCommsViaChannel(APlayerController* PlayerSender, UDFCommsFormatBase* FormatToUse, UDFCommChannel* ReceivingChannel, FDFGenericChannelMsg& MsgToSend, bool bUseChannelAsNewExclusive) {
}

bool UDFCommStatics::PlayerHasCommChannelByName(const APlayerController* Player, const FName ChannelName) {
    return false;
}

bool UDFCommStatics::PlayerHasCommChannel(const APlayerController* Player, const UDFCommChannel* Channel) {
    return false;
}

bool UDFCommStatics::FindCommsComponentByPlayer(const APlayerController* Player, UDFPlayerCommsComponent*& OutPlayerCommsComp) {
    return false;
}

bool UDFCommStatics::CommsFormatUsesChannelByName(const APlayerController* Player, const FName FormatName, const FName ChannelNameToCheck) {
    return false;
}

bool UDFCommStatics::CommsFormatUsesChannel(const APlayerController* Player, const UDFCommsFormatBase* Format, const UDFCommChannel* ChannelToCheck) {
    return false;
}

bool UDFCommStatics::CommsFormatHasExclusiveChannelByName(const APlayerController* PlayerFormatOwner, const FName FormatName) {
    return false;
}

bool UDFCommStatics::CommsFormatHasExclusiveChannel(const UDFCommsFormatBase* Format) {
    return false;
}

UDFCommChannel* UDFCommStatics::CommsFormatGetExclusiveChannelByName(const APlayerController* PlayerFormatOwner, const FName FormatName) {
    return NULL;
}

UDFCommChannel* UDFCommStatics::CommsFormatGetExclusiveChannel(const UDFCommsFormatBase* Format) {
    return NULL;
}

void UDFCommStatics::ClearCurrentExclusiveChannelForFormatByName(APlayerController* Player, const FName FormatNameToUpdate) {
}

void UDFCommStatics::ClearCurrentExclusiveChannelForFormat(APlayerController* Player, UDFCommsFormatBase* FormatToUpdate) {
}


