#ifndef UE4SS_SDK_WBP_OptionsMenuItem_Checkbox_HPP
#define UE4SS_SDK_WBP_OptionsMenuItem_Checkbox_HPP

class UWBP_OptionsMenuItem_Checkbox_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0230 (size: 0x8)
    class UWBP_Checkbox_C* OptionCBox;                                                // 0x0238 (size: 0x8)
    class UTextBlock* OptionText;                                                     // 0x0240 (size: 0x8)
    FText Text;                                                                       // 0x0248 (size: 0x18)
    FWBP_OptionsMenuItem_Checkbox_CCheckStateChanged CheckStateChanged;               // 0x0260 (size: 0x10)
    void CheckStateChanged(ECheckBoxState CheckedState);
    FWBP_OptionsMenuItem_Checkbox_CCheckStateChangedBool CheckStateChangedBool;       // 0x0270 (size: 0x10)
    void CheckStateChangedBool(bool bChecked);
    FText TextDescription;                                                            // 0x0280 (size: 0x18)

    void SetCheckedState(ECheckBoxState NewCheckedState);
    void SetIsChecked(bool bChecked);
    void IsChecked(bool& bChecked);
    void GetCheckedState(ECheckBoxState& CheckedState);
    void PreConstruct(bool IsDesignTime);
    void BndEvt__OptionCBox_K2Node_ComponentBoundEvent_0_CheckStateChanged__DelegateSignature(ECheckBoxState CheckedState);
    void BndEvt__OptionCBox_K2Node_ComponentBoundEvent_1_CheckStateChangedBool__DelegateSignature(bool bChecked);
    void ExecuteUbergraph_WBP_OptionsMenuItem_Checkbox(int32 EntryPoint);
    void CheckStateChangedBool__DelegateSignature(bool bChecked);
    void CheckStateChanged__DelegateSignature(ECheckBoxState CheckedState);
}; // Size: 0x298

#endif
