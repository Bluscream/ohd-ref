#ifndef UE4SS_SDK_WBP_SelectionListEntry_GameMode_HPP
#define UE4SS_SDK_WBP_SelectionListEntry_GameMode_HPP

class UWBP_SelectionListEntry_GameMode_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0230 (size: 0x8)
    class UWBP_CreateGameSelectionListEntry_C* SelectionEntry;                        // 0x0238 (size: 0x8)

    void BP_OnEntryReleased();
    void BP_OnItemExpansionChanged(bool bIsExpanded);
    void OnListItemObjectSet(class UObject* ListItemObject);
    void BP_OnItemSelectionChanged(bool bIsSelected);
    void BndEvt__SelectionItem_K2Node_ComponentBoundEvent_0_OnSelectionStateChanged__DelegateSignature(class UWBP_CreateGameSelectionListEntry_C* Item, bool bSelected);
    void ExecuteUbergraph_WBP_SelectionListEntry_GameMode(int32 EntryPoint);
}; // Size: 0x240

#endif
