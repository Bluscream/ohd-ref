#ifndef UE4SS_SDK_WBP_CommunityMediaLink_HPP
#define UE4SS_SDK_WBP_CommunityMediaLink_HPP

class UWBP_CommunityMediaLink_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0230 (size: 0x8)
    class UButton* LinkBtn;                                                           // 0x0238 (size: 0x8)
    class UImage* LinkIcon;                                                           // 0x0240 (size: 0x8)
    class UTextBlock* LinkText;                                                       // 0x0248 (size: 0x8)
    FFCommunityMediaLinkUIDefinition LinkUIDefinition;                                // 0x0250 (size: 0xC0)

    void BndEvt__LinkBtn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_WBP_CommunityMediaLink(int32 EntryPoint);
}; // Size: 0x310

#endif
