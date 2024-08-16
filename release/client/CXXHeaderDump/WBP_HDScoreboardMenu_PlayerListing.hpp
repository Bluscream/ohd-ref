#ifndef UE4SS_SDK_WBP_HDScoreboardMenu_PlayerListing_HPP
#define UE4SS_SDK_WBP_HDScoreboardMenu_PlayerListing_HPP

class UWBP_HDScoreboardMenu_PlayerListing_C : public UHDScoreboardListingRowBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0318 (size: 0x8)
    class UBorder* BorderList;                                                        // 0x0320 (size: 0x8)
    class UButton* VoteKickBtn;                                                       // 0x0328 (size: 0x8)
    class UTextBlock* VoteKickText;                                                   // 0x0330 (size: 0x8)
    class UTexture2D* MutedIcon;                                                      // 0x0338 (size: 0x8)
    class UTexture2D* NotTalkingIcon;                                                 // 0x0340 (size: 0x8)
    class UTexture2D* TalkingIcon;                                                    // 0x0348 (size: 0x8)

    void CanVoteKick(bool& bAllowed);
    void ReceiveRefreshListing();
    void BndEvt__VoteKickBtn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__VoteKickBtn_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__VoteKickBtn_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__VoteKickBtn_K2Node_ComponentBoundEvent_3_OnButtonReleasedEvent__DelegateSignature();
    void BndEvt__VoteKickBtn_K2Node_ComponentBoundEvent_4_OnButtonPressedEvent__DelegateSignature();
    void ExecuteUbergraph_WBP_HDScoreboardMenu_PlayerListing(int32 EntryPoint);
}; // Size: 0x350

#endif
