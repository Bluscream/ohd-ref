#ifndef UE4SS_SDK_BP_HDRuleset_SquadComms_HPP
#define UE4SS_SDK_BP_HDRuleset_SquadComms_HPP

class UBP_HDRuleset_SquadComms_C : public UHDGameRulesetBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0060 (size: 0x8)
    TArray<class APlayerController*> AddChannelPlayers;                               // 0x0068 (size: 0x10)

    void UpdateSquadChannelForPlayer(class APlayerController* Player, class UDFPlayerCommsComponent* PlayerCommsComp, class AHDSquadState* PlayerSquad, bool bRemoveChannel);
    void OnFailure_EF6FE6634798C45922DA3F8796D99226();
    void OnSuccess_EF6FE6634798C45922DA3F8796D99226(class UDFCommChannel* CreatedChannel);
    void OnPerformSetup_EF6FE6634798C45922DA3F8796D99226(class UDFCommChannel* CreatedChannel);
    void RegisterActor(class AActor* RegisteredActor);
    void PlayerJoinedSquad(class AHDSquadState* Squad, class AHDPlayerState* MemberPS);
    void PlayerLeftSquad(class AHDSquadState* Squad, class AHDPlayerState* MemberPS);
    void CreateSquadChannel(class APlayerController* Player, FName NameOverride, class AHDSquadState* PlayerSquad);
    void SquadRenamed(class AHDSquadState* Squad, const FText& NewName, const FText& PrevName);
    void ExecuteUbergraph_BP_HDRuleset_SquadComms(int32 EntryPoint);
}; // Size: 0x78

#endif
