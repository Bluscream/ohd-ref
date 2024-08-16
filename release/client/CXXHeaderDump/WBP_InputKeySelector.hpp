#ifndef UE4SS_SDK_WBP_InputKeySelector_HPP
#define UE4SS_SDK_WBP_InputKeySelector_HPP

class UWBP_InputKeySelector_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0230 (size: 0x8)
    class UInputKeySelector* IKS;                                                     // 0x0238 (size: 0x8)
    FWBP_InputKeySelector_COnKeySelected OnKeySelected;                               // 0x0240 (size: 0x10)
    void OnKeySelected(FInputChord SelectedKey);
    FWBP_InputKeySelector_COnIsSelectingKeyChanged OnIsSelectingKeyChanged;           // 0x0250 (size: 0x10)
    void OnIsSelectingKeyChanged();

    void SetSelectedKey(FKey SelectedKey);
    void GetSelectedKey(FKey& SelectedKey);
    void BndEvt__IKS_K2Node_ComponentBoundEvent_2_OnIsSelectingKeyChanged__DelegateSignature();
    void BndEvt__IKS_K2Node_ComponentBoundEvent_1_OnKeySelected__DelegateSignature(FInputChord SelectedKey);
    void ExecuteUbergraph_WBP_InputKeySelector(int32 EntryPoint);
    void OnIsSelectingKeyChanged__DelegateSignature();
    void OnKeySelected__DelegateSignature(FInputChord SelectedKey);
}; // Size: 0x260

#endif
