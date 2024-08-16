#ifndef UE4SS_SDK_BPFL_HDComms_HPP
#define UE4SS_SDK_BPFL_HDComms_HPP

class UBPFL_HDComms_C : public UBlueprintFunctionLibrary
{
    char padding_0[0x28];                                                             // 0x0000 (size: 0x0)

    void GetTextChatIconForCommChannel(class UDFCommChannel* Channel, class UObject* __WorldContext, class UTexture2D*& ChannelChatIcon);
    void SetupNewSquadChannel(class UDFCommChannel* CreatedChannel, class AHDSquadState* SquadToAssociate, class UObject* __WorldContext);
    void SetupNewTeamChannel(class UDFCommChannel* CreatedChannel, class AHDTeamState* TeamToAssociate, class UObject* __WorldContext);
    void GetColorForCommChannel(class UDFCommChannel* Channel, class UObject* __WorldContext, FSlateColor& ChannelColor);
    void GetValidCommsComponentForPlayer(class APlayerController* Player, class UObject* __WorldContext, class UDFPlayerCommsComponent*& PlayerCommsComp);
}; // Size: 0x28

#endif
