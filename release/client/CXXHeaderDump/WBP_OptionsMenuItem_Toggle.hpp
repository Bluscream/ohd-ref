#ifndef UE4SS_SDK_WBP_OptionsMenuItem_Toggle_HPP
#define UE4SS_SDK_WBP_OptionsMenuItem_Toggle_HPP

class UWBP_OptionsMenuItem_Toggle_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0230 (size: 0x8)
    class UTextBlock* OptionText;                                                     // 0x0238 (size: 0x8)
    class UWBP_Toggle_C* OptionToggle;                                                // 0x0240 (size: 0x8)
    FText Text;                                                                       // 0x0248 (size: 0x18)
    FText TextTooltip;                                                                // 0x0260 (size: 0x18)
    FWBP_OptionsMenuItem_Toggle_CToggleStateChanged ToggleStateChanged;               // 0x0278 (size: 0x10)
    void ToggleStateChanged(bool bToggledOn);
    FText OnText;                                                                     // 0x0288 (size: 0x18)
    FText OffText;                                                                    // 0x02A0 (size: 0x18)

    void IsToggledOn(bool& bToggledOn);
    void SetToggle(bool bInToggle);
    void PreConstruct(bool IsDesignTime);
    void BndEvt__OptionToggle_K2Node_ComponentBoundEvent_2_ToggleStateChanged__DelegateSignature(bool bToggledOn);
    void ExecuteUbergraph_WBP_OptionsMenuItem_Toggle(int32 EntryPoint);
    void ToggleStateChanged__DelegateSignature(bool bToggledOn);
}; // Size: 0x2B8

#endif
