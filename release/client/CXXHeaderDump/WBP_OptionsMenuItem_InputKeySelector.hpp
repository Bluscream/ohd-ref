#ifndef UE4SS_SDK_WBP_OptionsMenuItem_InputKeySelector_HPP
#define UE4SS_SDK_WBP_OptionsMenuItem_InputKeySelector_HPP

class UWBP_OptionsMenuItem_InputKeySelector_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0230 (size: 0x8)
    class UWBP_InputKeySelector_C* OptionIKS;                                         // 0x0238 (size: 0x8)
    class UTextBlock* OptionText;                                                     // 0x0240 (size: 0x8)
    FText Text;                                                                       // 0x0248 (size: 0x18)
    FText TextDescription;                                                            // 0x0260 (size: 0x18)
    FName InputName;                                                                  // 0x0278 (size: 0x8)
    FWBP_OptionsMenuItem_InputKeySelector_COnKeySelected OnKeySelected;               // 0x0280 (size: 0x10)
    void OnKeySelected(FInputChord SelectedKey);
    float InputScale;                                                                 // 0x0290 (size: 0x4)
    char padding_0[0x4];                                                              // 0x0294 (size: 0x4)
    FKey MappedKey;                                                                   // 0x0298 (size: 0x18)
    FWBP_OptionsMenuItem_InputKeySelector_COnIsSelectingKeyChanged OnIsSelectingKeyChanged; // 0x02B0 (size: 0x10)
    void OnIsSelectingKeyChanged();

    void IsSelectingKey(bool& IsSelecting);
    void ClearSelectedKey(class UWBP_OptionsMenuItem_InputKeySelector_C* IKS, FKey NewKey, bool bIsPlayerChangingKeyBindings);
    void SetSelectedKey(FKey SelectedKey);
    void GetSelectedKey(FKey& SelectedKey);
    void PreConstruct(bool IsDesignTime);
    void BndEvt__OptionIKS_K2Node_ComponentBoundEvent_2_OnKeySelected__DelegateSignature(FInputChord SelectedKey);
    void BndEvt__OptionIKS_K2Node_ComponentBoundEvent_0_OnIsSelectingKeyChanged__DelegateSignature();
    void ExecuteUbergraph_WBP_OptionsMenuItem_InputKeySelector(int32 EntryPoint);
    void OnIsSelectingKeyChanged__DelegateSignature();
    void OnKeySelected__DelegateSignature(FInputChord SelectedKey);
}; // Size: 0x2C0

#endif
