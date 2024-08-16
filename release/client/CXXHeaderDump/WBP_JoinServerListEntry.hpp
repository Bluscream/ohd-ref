#ifndef UE4SS_SDK_WBP_JoinServerListEntry_HPP
#define UE4SS_SDK_WBP_JoinServerListEntry_HPP

class UWBP_JoinServerListEntry_C : public UHDServerListing
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0270 (size: 0x8)
    class UWBP_ServerListEntryColumn_C* GameVersionCol;                               // 0x0278 (size: 0x8)
    class UWBP_ServerListEntryColumn_C* GMNameCol;                                    // 0x0280 (size: 0x8)
    class UImage* ItemBg;                                                             // 0x0288 (size: 0x8)
    class USizeBox* ItemBox;                                                          // 0x0290 (size: 0x8)
    class UCheckBox* ItemCheckBox;                                                    // 0x0298 (size: 0x8)
    class UImage* ItemSelectionHighlight;                                             // 0x02A0 (size: 0x8)
    class UWBP_ServerListEntryColumn_C* MapNameCol;                                   // 0x02A8 (size: 0x8)
    class UWBP_ServerListEntryColumn_C* PingCol;                                      // 0x02B0 (size: 0x8)
    class UWBP_ServerListEntryColumn_C* PlayerCountCol;                               // 0x02B8 (size: 0x8)
    class UHorizontalBox* ServerBadgeHBox;                                            // 0x02C0 (size: 0x8)
    class UWBP_ServerListEntryColumn_C* ServerNameCol;                                // 0x02C8 (size: 0x8)
    FWBP_JoinServerListEntry_COnSelectionStateChanged OnSelectionStateChanged;        // 0x02D0 (size: 0x10)
    void OnSelectionStateChanged(class UWBP_JoinServerListEntry_C* Item, bool bSelected);
    class UTexture2D* PlaceholderMapBannerImg;                                        // 0x02E0 (size: 0x8)
    FMargin BadgePadding;                                                             // 0x02E8 (size: 0x10)
    FCheckBoxStyle ItemStyle;                                                         // 0x02F8 (size: 0x580)
    bool bSelectionToggle;                                                            // 0x0878 (size: 0x1)
    char padding_0[0x3];                                                              // 0x0879 (size: 0x3)
    int32 ItemMinWidth;                                                               // 0x087C (size: 0x4)
    int32 ItemMinHeight;                                                              // 0x0880 (size: 0x4)
    bool bBadgesInitialized;                                                          // 0x0884 (size: 0x1)

    void AddBadgeDefinitionToListIfFound(FName TableRowName, TArray<FFServerBadgeUIDefinition>& BadgeArr);
    void CreateAndAddBadgeWidgetFromDefinition(FFServerBadgeUIDefinition& BadgeUIDef);
    void GetBadgeDefinitionFromTable(FDataTableRowHandle RowHandle, bool& bFound, FFServerBadgeUIDefinition& BadgeUIDef);
    void HideAllBadges();
    void SetBadgeVisibilityFromServerData();
    void PopulateBadges(TArray<FFServerBadgeUIDefinition>& BadgeDefs);
    void GetBrushWithItemDimensions(FSlateBrush& InBrush, FSlateBrush& OutBrush);
    void GetBrushWithImageTexture(FSlateBrush& Brush, class UTexture2D* Image, FSlateBrush& UpdatedBrush);
    void InternalRefreshDimensions();
    void GetItemMinHeight(int32& MinHeight);
    void GetItemMinWidth(int32& MinWidth);
    void SetItemMinDimensions(int32 InMinWidth, int32 InMinHeight);
    void GetItemStyle(FCheckBoxStyle& ItemStyle);
    void SetItemImage(class UTexture2D* InItemImg);
    void SetItemStyle(FCheckBoxStyle InItemStyle);
    void InternalUpdateItemBgTintColor(bool bSelected);
    void IsItemSelected(bool& bSelected);
    void GetItemSelectionState(ECheckBoxState& SelectionState);
    void SetItemIsSelected(bool bSelected);
    void SetItemSelectionState(ECheckBoxState InSelectionState);
    void PreConstruct(bool IsDesignTime);
    void BndEvt__ItemCheckBox_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
    void BP_OnItemSelectionChanged(bool bIsSelected);
    void On Selection State Changed(bool bSelected);
    void OnListItemObjectSet(class UObject* ListItemObject);
    void OnServerItemDataSet(bool bIsDesignTime);
    void BP_OnEntryReleased();
    void BP_OnItemExpansionChanged(bool bIsExpanded);
    void ExecuteUbergraph_WBP_JoinServerListEntry(int32 EntryPoint);
    void OnSelectionStateChanged__DelegateSignature(class UWBP_JoinServerListEntry_C* Item, bool bSelected);
}; // Size: 0x885

#endif
