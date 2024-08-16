#ifndef UE4SS_SDK_WBP_HDScoreboardMenu_HPP
#define UE4SS_SDK_WBP_HDScoreboardMenu_HPP

class UWBP_HDScoreboardMenu_C : public UHDScoreboardBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0250 (size: 0x8)
    class UTextBlock* BluforFactionText;                                              // 0x0258 (size: 0x8)
    class UTextBlock* OpforFactionText;                                               // 0x0260 (size: 0x8)
    FLinearColor EvenRowEntryColor;                                                   // 0x0268 (size: 0x10)

    void SetupFactionInfoForTeam(class AHDTeamState* TeamState);
    void GetRowWidgetIndex(class UHDScoreboardListingRowBase* ListEntry, int32& EntryIndex);
    FEventReply OnMouseButtonDoubleClick(FGeometry InMyGeometry, const FPointerEvent& InMouseEvent);
    FEventReply OnMouseButtonDown(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    void PreConstruct(bool IsDesignTime);
    void ReceiveScoreboardListRowAdded(class UHDScoreboardListingRowBase* NewListEntry);
    void Construct();
    void ExecuteUbergraph_WBP_HDScoreboardMenu(int32 EntryPoint);
}; // Size: 0x278

#endif
