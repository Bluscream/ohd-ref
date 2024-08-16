#ifndef UE4SS_SDK_WBP_SelectionListEntry_Map_HPP
#define UE4SS_SDK_WBP_SelectionListEntry_Map_HPP

class UWBP_SelectionListEntry_Map_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0230 (size: 0x8)
    class UWBP_CreateGameSelectionListEntry_C* SelectionEntry;                        // 0x0238 (size: 0x8)
    FFMapInfo MapInfo;                                                                // 0x0240 (size: 0x48)

    void BP_OnEntryReleased();
    void BP_OnItemExpansionChanged(bool bIsExpanded);
    void BndEvt__SelectionItem_K2Node_ComponentBoundEvent_0_OnSelectionStateChanged__DelegateSignature(class UWBP_CreateGameSelectionListEntry_C* Item, bool bSelected);
    void OnListItemObjectSet(class UObject* ListItemObject);
    void BP_OnItemSelectionChanged(bool bIsSelected);
    void ExecuteUbergraph_WBP_SelectionListEntry_Map(int32 EntryPoint);
}; // Size: 0x288

#endif
