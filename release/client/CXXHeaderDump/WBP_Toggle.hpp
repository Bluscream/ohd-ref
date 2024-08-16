#ifndef UE4SS_SDK_WBP_Toggle_HPP
#define UE4SS_SDK_WBP_Toggle_HPP

class UWBP_Toggle_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0230 (size: 0x8)
    class UWBP_TextButton_C* OffBtn;                                                  // 0x0238 (size: 0x8)
    class UWBP_TextButton_C* OnBtn;                                                   // 0x0240 (size: 0x8)
    bool bToggleOn;                                                                   // 0x0248 (size: 0x1)
    char padding_0[0x7];                                                              // 0x0249 (size: 0x7)
    FWBP_Toggle_CToggleStateChanged ToggleStateChanged;                               // 0x0250 (size: 0x10)
    void ToggleStateChanged(bool bToggledOn);
    FText OnText;                                                                     // 0x0260 (size: 0x18)
    FText OffText;                                                                    // 0x0278 (size: 0x18)

    void UpdateDesignerView();
    void IsToggledOn(bool& bToggledOn);
    void SetToggle(bool bInToggle);
    void BndEvt__OnBtn_K2Node_ComponentBoundEvent_1_ButtonClicked__DelegateSignature();
    void BndEvt__OffBtn_K2Node_ComponentBoundEvent_2_ButtonClicked__DelegateSignature();
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_WBP_Toggle(int32 EntryPoint);
    void ToggleStateChanged__DelegateSignature(bool bToggledOn);
}; // Size: 0x290

#endif
