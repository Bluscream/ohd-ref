#ifndef UE4SS_SDK_BP_HDRuleset_TeamComms_HPP
#define UE4SS_SDK_BP_HDRuleset_TeamComms_HPP

class UBP_HDRuleset_TeamComms_C : public UHDGameRulesetBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0060 (size: 0x8)
    class UDFCommChannelDefinition* TeamChannelDef;                                   // 0x0068 (size: 0x8)

    void GetPlayerName(class AController* Player, FString& PlayerName);
    void HandlePlayerJoinedTeam(class APlayerController* Player, class UDFPlayerCommsComponent* PlayerCommsComp, class AHDTeamState* AssignedTS);
    void OnFailure_C4300E984EC6AE0B0EBC1EA4F402D0FF();
    void OnSuccess_C4300E984EC6AE0B0EBC1EA4F402D0FF(class UDFCommChannel* CreatedChannel);
    void OnPerformSetup_C4300E984EC6AE0B0EBC1EA4F402D0FF(class UDFCommChannel* CreatedChannel);
    void PlayerJoinedTeam(class AController* JoiningPlayer, uint8 TeamNum);
    void CreateTeamChannel(class APlayerController* Player, FName NameOverride, class AHDTeamState* PlayerTeam);
    void ExecuteUbergraph_BP_HDRuleset_TeamComms(int32 EntryPoint);
}; // Size: 0x70

#endif
