#ifndef UE4SS_SDK_WBP_DeployMenu_DeployButton_HPP
#define UE4SS_SDK_WBP_DeployMenu_DeployButton_HPP

class UWBP_DeployMenu_DeployButton_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0230 (size: 0x8)
    class UButton* DeployBtn;                                                         // 0x0238 (size: 0x8)
    class UTextBlock* DeployBtnText;                                                  // 0x0240 (size: 0x8)
    bool bCloseBtnBehavior;                                                           // 0x0248 (size: 0x1)
    char padding_0[0x7];                                                              // 0x0249 (size: 0x7)
    FText DeployText;                                                                 // 0x0250 (size: 0x18)
    FText CloseMenuText;                                                              // 0x0268 (size: 0x18)
    FWBP_DeployMenu_DeployButton_COnClicked OnClicked;                                // 0x0280 (size: 0x10)
    void OnClicked(bool bCloseBtn);
    FWBP_DeployMenu_DeployButton_COnPressed OnPressed;                                // 0x0290 (size: 0x10)
    void OnPressed(bool bCloseBtn);
    FWBP_DeployMenu_DeployButton_COnReleased OnReleased;                              // 0x02A0 (size: 0x10)
    void OnReleased(bool bCloseBtn);
    FWBP_DeployMenu_DeployButton_COnHovered OnHovered;                                // 0x02B0 (size: 0x10)
    void OnHovered(bool bCloseBtn);
    FWBP_DeployMenu_DeployButton_COnUnhovered OnUnhovered;                            // 0x02C0 (size: 0x10)
    void OnUnhovered(bool bCloseBtn);
    FText SelectSpawnText;                                                            // 0x02D0 (size: 0x18)
    bool bDeploying;                                                                  // 0x02E8 (size: 0x1)
    char padding_1[0x7];                                                              // 0x02E9 (size: 0x7)
    FButtonStyle DeployBtnStyle;                                                      // 0x02F0 (size: 0x278)
    FButtonStyle CancelBtnStyle;                                                      // 0x0568 (size: 0x278)
    bool bDesignPreviewCancelBtn;                                                     // 0x07E0 (size: 0x1)
    char padding_2[0x7];                                                              // 0x07E1 (size: 0x7)
    FText CancelDeploymentText;                                                       // 0x07E8 (size: 0x18)
    bool bSpawnPointSelected;                                                         // 0x0800 (size: 0x1)
    bool bUseCancelBehavior;                                                          // 0x0801 (size: 0x1)

    void InternalGetSpawnTimeRemaining(int32& SpawnSeconds);
    void InternalUpdateBtnStyle();
    void InternalUpdateBtnText(bool bDeploying, bool bSpawnPointSelected);
    void UpdateDeployBtnState(bool bPlayerAlive, bool bDeploymentQueued, bool bSpawnPointSelected);
    void PreConstruct(bool IsDesignTime);
    void BndEvt__DeployBtn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__DeployBtn_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature();
    void BndEvt__DeployBtn_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature();
    void BndEvt__DeployBtn_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__DeployBtn_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void ExecuteUbergraph_WBP_DeployMenu_DeployButton(int32 EntryPoint);
    void OnUnhovered__DelegateSignature(bool bCloseBtn);
    void OnHovered__DelegateSignature(bool bCloseBtn);
    void OnReleased__DelegateSignature(bool bCloseBtn);
    void OnPressed__DelegateSignature(bool bCloseBtn);
    void OnClicked__DelegateSignature(bool bCloseBtn);
}; // Size: 0x802

#endif
