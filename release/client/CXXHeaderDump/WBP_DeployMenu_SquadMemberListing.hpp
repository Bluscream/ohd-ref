#ifndef UE4SS_SDK_WBP_DeployMenu_SquadMemberListing_HPP
#define UE4SS_SDK_WBP_DeployMenu_SquadMemberListing_HPP

class UWBP_DeployMenu_SquadMemberListing_C : public UDeployMenu_SquadMemberListingBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0238 (size: 0x8)
    class USizeBox* DummyOption;                                                      // 0x0240 (size: 0x8)
    class UButton* DummyOptionBtn;                                                    // 0x0248 (size: 0x8)
    class UWBP_SQMemberOption_C* KickMemberOption;                                    // 0x0250 (size: 0x8)
    class UButton* KickMemberOptionBtn;                                               // 0x0258 (size: 0x8)
    class UButton* MemberBtn;                                                         // 0x0260 (size: 0x8)
    class UImage* PlayerClassIcon;                                                    // 0x0268 (size: 0x8)
    class UImage* PlayerClassIconBg;                                                  // 0x0270 (size: 0x8)
    class UTextBlock* PlayerNameText;                                                 // 0x0278 (size: 0x8)
    class UHorizontalBox* SQMOptionsHBox;                                             // 0x0280 (size: 0x8)
    FLinearColor OddListingBtnBgColor;                                                // 0x0288 (size: 0x10)
    FLinearColor OddListingIconBgColor;                                               // 0x0298 (size: 0x10)
    FLinearColor EvenListingBgColor;                                                  // 0x02A8 (size: 0x10)
    class UWBP_DeployMenu_SquadList_C* ParentContainerWidget;                         // 0x02B8 (size: 0x8)
    class UHDKit* LastLoadout;                                                        // 0x02C0 (size: 0x8)
    bool bMemberSet;                                                                  // 0x02C8 (size: 0x1)

    void GetClassIconForLoadout(class UHDKit* Loadout, FSlateBrush& ClassIconToUse);
    void UpdatePlayerClassIcon(class UHDKit* Loadout);
    void SetupOptions();
    void TestOptionPrereqs();
    void UpdateColorOffset(bool bEvenNumberListing);
    void SetPlayerNameText(FText NewPlayerName);
    void BndEvt__KickMemberBtn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void OnMemberSet();
    void OnMemberPlayerNameUpdated(FString NewPlayerName);
    void PreConstruct(bool IsDesignTime);
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void ExecuteUbergraph_WBP_DeployMenu_SquadMemberListing(int32 EntryPoint);
}; // Size: 0x2C9

#endif
