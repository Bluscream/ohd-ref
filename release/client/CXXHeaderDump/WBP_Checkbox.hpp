#ifndef UE4SS_SDK_WBP_Checkbox_HPP
#define UE4SS_SDK_WBP_Checkbox_HPP

class UWBP_Checkbox_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0230 (size: 0x8)
    class UCheckBox* CBox;                                                            // 0x0238 (size: 0x8)
    FWBP_Checkbox_CCheckStateChanged CheckStateChanged;                               // 0x0240 (size: 0x10)
    void CheckStateChanged(ECheckBoxState CheckedState);
    FWBP_Checkbox_CCheckStateChangedBool CheckStateChangedBool;                       // 0x0250 (size: 0x10)
    void CheckStateChangedBool(bool bChecked);

    void SetCheckedState(ECheckBoxState NewCheckedState);
    void SetIsChecked(bool bChecked);
    void IsChecked(bool& bChecked);
    void GetCheckedState(ECheckBoxState& CheckedState);
    void BndEvt__CBox_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
    void ExecuteUbergraph_WBP_Checkbox(int32 EntryPoint);
    void CheckStateChangedBool__DelegateSignature(bool bChecked);
    void CheckStateChanged__DelegateSignature(ECheckBoxState CheckedState);
}; // Size: 0x260

#endif
