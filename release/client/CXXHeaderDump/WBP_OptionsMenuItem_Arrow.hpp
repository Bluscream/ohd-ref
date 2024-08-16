#ifndef UE4SS_SDK_WBP_OptionsMenuItem_Arrow_HPP
#define UE4SS_SDK_WBP_OptionsMenuItem_Arrow_HPP

class UWBP_OptionsMenuItem_Arrow_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0230 (size: 0x8)
    class UButton* NextOptionBtn;                                                     // 0x0238 (size: 0x8)
    class UTextBlock* OptionText;                                                     // 0x0240 (size: 0x8)
    class UButton* PrevOptionBtn;                                                     // 0x0248 (size: 0x8)
    class USizeBox* SelectedOptionSizeBox;                                            // 0x0250 (size: 0x8)
    class UTextBlock* SelectedOptionText;                                             // 0x0258 (size: 0x8)
    FText Text;                                                                       // 0x0260 (size: 0x18)
    TArray<FFOptionItemSelection> Options;                                            // 0x0278 (size: 0x10)
    int32 SelectedOptionIndex;                                                        // 0x0288 (size: 0x4)
    char padding_0[0x4];                                                              // 0x028C (size: 0x4)
    FWBP_OptionsMenuItem_Arrow_COnSelectionChanged OnSelectionChanged;                // 0x0290 (size: 0x10)
    void OnSelectionChanged(FString SelectedItemValue, TEnumAsByte<ESelectInfo::Type> SelectionType);
    FText TextDescription;                                                            // 0x02A0 (size: 0x18)
    float TextWidth;                                                                  // 0x02B8 (size: 0x4)
    TEnumAsByte<EArrowOptionsPreset::Type> OptionsPreset;                             // 0x02BC (size: 0x1)
    char padding_1[0x3];                                                              // 0x02BD (size: 0x3)
    TArray<FFOptionItemSelection> ScalabilityOptions;                                 // 0x02C0 (size: 0x10)
    FWBP_OptionsMenuItem_Arrow_COnSelectionChangedByUser OnSelectionChangedByUser;    // 0x02D0 (size: 0x10)
    void OnSelectionChangedByUser(FString SelectedItemValue);

    void FindOptionIndex(FText OptionDisplayName, int32& Index);
    void SetSelectedOption(FText OptionDisplayName);
    void SetSelectedOptionByValue(FString OptionValue);
    void PopulateOptionsByPreset(TEnumAsByte<EArrowOptionsPreset::Type> Preset);
    void FindOptionValueIndex(FString OptionValue, int32& Index);
    void SetSelectedOptionByIndex(int32 Index);
    void ClearSelection();
    void INTERNAL_ClearSelection(TEnumAsByte<ESelectInfo::Type> DeselectionType);
    void RemoveOptionAtIndex(int32 IndexToRemove, bool& bRemovalSuccess);
    void GetOptionCount(int32& OptionCount);
    void AddOption(FFOptionItemSelection& NewOption);
    void GetOptionValueAtIndex(int32 Index, FString& OptionValue);
    void GetSelectedOptionValue(FString& OptionValue);
    void INTERNAL_SetSelectedOptionByIndex(int32 Index, TEnumAsByte<ESelectInfo::Type> SelectionType);
    void ClearOptions();
    void BndEvt__PrevOptionBtn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__NextOptionBtn_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
    void PreConstruct(bool IsDesignTime);
    void Construct();
    void OnItemSelectionChanged(FString SelectedItemValue, TEnumAsByte<ESelectInfo::Type> SelectionType);
    void ExecuteUbergraph_WBP_OptionsMenuItem_Arrow(int32 EntryPoint);
    void OnSelectionChangedByUser__DelegateSignature(FString SelectedItemValue);
    void OnSelectionChanged__DelegateSignature(FString SelectedItemValue, TEnumAsByte<ESelectInfo::Type> SelectionType);
}; // Size: 0x2E0

#endif
