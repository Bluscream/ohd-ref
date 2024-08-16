#ifndef UE4SS_SDK_WBP_HUDElement_VOIPIndicator_HPP
#define UE4SS_SDK_WBP_HUDElement_VOIPIndicator_HPP

class UWBP_HUDElement_VOIPIndicator_C : public UHDVoipIndicatorWidgetBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0280 (size: 0x8)
    class UWBP_VOIPOwnerChatIndicator_C* CommandChatIndicator;                        // 0x0288 (size: 0x8)
    class UWBP_VOIPOwnerChatIndicator_C* LocalChatIndicator;                          // 0x0290 (size: 0x8)
    class UWBP_VOIPOwnerChatIndicator_C* SquadChatIndicator;                          // 0x0298 (size: 0x8)
    class UVerticalBox* TalkerListVBox;                                               // 0x02A0 (size: 0x8)
    int32 NumFakeOutputListings;                                                      // 0x02A8 (size: 0x4)
    int32 MaxTalkerListings;                                                          // 0x02AC (size: 0x4)
    FMargin TalkerListingPadding;                                                     // 0x02B0 (size: 0x10)
    bool bTalkerListingTintClassIconOnly;                                             // 0x02C0 (size: 0x1)

    void ContainsTalkerListing(class UHDVoiceChatMsgInfo* PlayerMsgInfo, bool& bMatchFound);
    void FindTalkerListing(class UHDVoiceChatMsgInfo* PlayerMsgInfo, bool& bListingFound, class UWBP_HUDElement_VOIPIndicator_OutputListing_C*& TalkerListing);
    void PlayerStoppedTalking(class UHDVoiceChatMsgInfo* TalkerMsgInfo);
    void PlayerStartedTalking(class UHDVoiceChatMsgInfo* TalkerMsgInfo);
    void OnPlayerStartTalking(class UHDVoiceChatMsgInfo* TalkerMsgInfo);
    void OnPlayerStopTalking(class UHDVoiceChatMsgInfo* TalkerMsgInfo);
    void OnOwningPlayerStartTalking(class UHDVoiceChatMsgInfo* LocalTalkerMsgInfo);
    void OnOwningPlayerStopTalking(class UHDVoiceChatMsgInfo* LocalTalkerMsgInfo);
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_WBP_HUDElement_VOIPIndicator(int32 EntryPoint);
}; // Size: 0x2C1

#endif
