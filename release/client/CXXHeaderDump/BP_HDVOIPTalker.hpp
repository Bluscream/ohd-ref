#ifndef UE4SS_SDK_BP_HDVOIPTalker_HPP
#define UE4SS_SDK_BP_HDVOIPTalker_HPP

class UBP_HDVOIPTalker_C : public UVOIPTalker
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x00E8 (size: 0x8)
    class APlayerState* OwningPS;                                                     // 0x00F0 (size: 0x8)
    FVoiceSettings NonSpatializedSettings;                                            // 0x00F8 (size: 0x18)
    FVoiceSettings SpatializedSettings;                                               // 0x0110 (size: 0x18)
    bool bRegistered;                                                                 // 0x0128 (size: 0x1)
    bool bTalking;                                                                    // 0x0129 (size: 0x1)
    char padding_0[0x6];                                                              // 0x012A (size: 0x6)
    class UAudioComponent* CachedAudioComp;                                           // 0x0130 (size: 0x8)

    void ListenForTalkingStateChangedEvents();
    void UpdateSettingsUsageForNextBeginTalk(bool bUseSpatialized, bool& bSettingsUpdated);
    void RegisterTalker(class APlayerState* InRegisteredPS, FVoiceSettings& InSpatializedSettings, FVoiceSettings& InNonSpatializedSettings, bool bStartSpatialized);
    void BPOnTalkingBegin(class UAudioComponent* AudioComponent);
    void BPOnTalkingEnd();
    void TalkStateChangedOnChannel(class UDFCommChannel* MsgTalkerChannel, class APlayerState* MsgTalkerPS, bool bMsgIsTalking);
    void ExecuteUbergraph_BP_HDVOIPTalker(int32 EntryPoint);
}; // Size: 0x138

#endif
