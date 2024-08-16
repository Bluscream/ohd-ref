#ifndef UE4SS_SDK_BP_HDRuleset_CommandComms_HPP
#define UE4SS_SDK_BP_HDRuleset_CommandComms_HPP

class UBP_HDRuleset_CommandComms_C : public UHDGameRulesetBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0060 (size: 0x8)
    class UDFCommChannelDefinition* CommandChannelDef;                                // 0x0068 (size: 0x8)

    void RetrieveSQMemberData(class AHDSquadState* Squad, class AHDPlayerState* SQMemberPS, bool& bValidData, class APlayerController*& MemberPC, class AHDTeamState*& MemberTS, class UDFPlayerCommsComponent*& MemberCommsComp);
    void HandleAssignedHumanSquadLead(class AHDSquadState* Squad, class AHDPlayerState* NewLeaderPS);
    void HandleUnassignedHumanSquadLead(class AHDSquadState* Squad, class AHDPlayerState* FormerLeaderPS);
    void OnFailure_4BAA1D2044B2D5D3BCF77D9C80E373A3();
    void OnSuccess_4BAA1D2044B2D5D3BCF77D9C80E373A3(class UDFCommChannel* CreatedChannel);
    void OnPerformSetup_4BAA1D2044B2D5D3BCF77D9C80E373A3(class UDFCommChannel* CreatedChannel);
    void RegisterActor(class AActor* RegisteredActor);
    void SquadStateLeaderAssigned(class AHDSquadState* Squad, class AHDPlayerState* NewLeaderPS, class AHDPlayerState* PrevLeaderPS);
    void CreateCmdChannel(class APlayerController* SQLeaderPC, class AHDSquadState* SQState, FName NameOverride, class AHDTeamState* SQTeam);
    void ExecuteUbergraph_BP_HDRuleset_CommandComms(int32 EntryPoint);
}; // Size: 0x70

#endif
