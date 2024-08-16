#ifndef UE4SS_SDK_WBP_MenuSubNavSelectionListEntry_HPP
#define UE4SS_SDK_WBP_MenuSubNavSelectionListEntry_HPP

class UWBP_MenuSubNavSelectionListEntry_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0230 (size: 0x8)
    class UWBP_CreateGameSelectionListEntry_C* SelectionEntry;                        // 0x0238 (size: 0x8)
    FText ItemText;                                                                   // 0x0240 (size: 0x18)
    int32 SubMenuIndex;                                                               // 0x0258 (size: 0x4)
    char padding_0[0x4];                                                              // 0x025C (size: 0x4)
    FWBP_MenuSubNavSelectionListEntry_CButtonClicked ButtonClicked;                   // 0x0260 (size: 0x10)
    void ButtonClicked(class UWBP_MenuSubNavSelectionListEntry_C* ClickedBtn);

    void SetSubMenuIndex(int32 Idx);
    void PreConstruct(bool IsDesignTime);
    void OnItemSelectionChanged(bool bIsSelected);
    void BndEvt__SelectionEntry_K2Node_ComponentBoundEvent_1_OnSelectionStateChanged__DelegateSignature(class UWBP_CreateGameSelectionListEntry_C* Item, bool bSelected);
    void ExecuteUbergraph_WBP_MenuSubNavSelectionListEntry(int32 EntryPoint);
    void ButtonClicked__DelegateSignature(class UWBP_MenuSubNavSelectionListEntry_C* ClickedBtn);
}; // Size: 0x270

#endif
