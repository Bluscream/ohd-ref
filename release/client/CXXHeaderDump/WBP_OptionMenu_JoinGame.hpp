#ifndef UE4SS_SDK_WBP_OptionMenu_JoinGame_HPP
#define UE4SS_SDK_WBP_OptionMenu_JoinGame_HPP

class UWBP_OptionMenu_JoinGame_C : public UHDJoinGameMenu
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0280 (size: 0x8)
    class UWBP_JoinServerDetailsPanel_C* DetailsPanel;                                // 0x0288 (size: 0x8)
    class UButton* FiltersOpenCloseBtn;                                               // 0x0290 (size: 0x8)
    class UWBP_JoinServerFiltersPanel_C* FiltersPanel;                                // 0x0298 (size: 0x8)
    class USizeBox* FiltersPanelOpenCloseBox;                                         // 0x02A0 (size: 0x8)
    class UWBP_JoinServer_Header_C* GameModeHeader;                                   // 0x02A8 (size: 0x8)
    class UWBP_JoinServer_Header_C* MapHeader;                                        // 0x02B0 (size: 0x8)
    class UWBP_JoinServer_Header_C* ModHeader;                                        // 0x02B8 (size: 0x8)
    class UWBP_JoinServer_Header_C* PingHeader;                                       // 0x02C0 (size: 0x8)
    class UWBP_JoinServer_Header_C* PlayersHeader;                                    // 0x02C8 (size: 0x8)
    class UButton* RefreshListBtn;                                                    // 0x02D0 (size: 0x8)
    class UCircularThrobber* RefreshListThrobber;                                     // 0x02D8 (size: 0x8)
    class UWBP_ServerDetails_C* ServerDetails;                                        // 0x02E0 (size: 0x8)
    class UBorder* ServerDetailsContainer;                                            // 0x02E8 (size: 0x8)
    class USizeBox* ServerListBox;                                                    // 0x02F0 (size: 0x8)
    class UWBP_JoinServer_Header_C* ServerNameHeader;                                 // 0x02F8 (size: 0x8)
    class UHDServerListItemData* SelectedServerListItem;                              // 0x0300 (size: 0x8)
    bool bShowServerDetailsInDesigner;                                                // 0x0308 (size: 0x1)
    char padding_0[0x7];                                                              // 0x0309 (size: 0x7)
    class UDataTable* ServerBadgeTable;                                               // 0x0310 (size: 0x8)
    TArray<FFServerBadgeUIDefinition> ServerBadgeDefs;                                // 0x0318 (size: 0x10)
    bool bDesignTime;                                                                 // 0x0328 (size: 0x1)
    char padding_1[0x7];                                                              // 0x0329 (size: 0x7)
    FString LastConfirmedJoinPassword;                                                // 0x0330 (size: 0x10)

    void HasSubMenus(bool& bSubMenuOptions);
    void GetSubMenuOptions(TArray<FFSubMenuOption>& SubOptions);
    void GetDesiredHorizontalAlignment(TEnumAsByte<EHorizontalAlignment>& Alignment);
    void GetDesiredVerticalAlignment(TEnumAsByte<EVerticalAlignment>& Alignment);
    void OpenPasswordPrompt();
    void ApplyActiveServerFilters();
    void RefreshServerList();
    void ToggleServerDetails(bool bShown);
    void GetServerListSortPreference(FFServerSortPreference& SortPreference);
    void IsValidServerListItemIndex(int32 IndexToTest, bool& bValidIndex);
    void GetSelectedServerListItem(class UHDServerListItemData*& ServerItem);
    void ClearServerListItemSelection();
    void ServerListItemSelectionCleared();
    void ServerListItemSelectionUpdated(class UHDServerListItemData* InSelectedServerListItem);
    void SetActiveSubMenuByIndex(int32 SubMenuIndex);
    void ReceiveOnRefreshStart();
    void ReceiveOnRefreshComplete(bool bSortAscending, EHDServerListSortBy SortBy);
    void BndEvt__RefreshListBtn_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__ServerList_K2Node_ComponentBoundEvent_4_OnListItemSelectionChangedDynamic__DelegateSignature(class UObject* Item, bool bIsSelected);
    void BndEvt__ServerList_K2Node_ComponentBoundEvent_1_OnListItemScrolledIntoViewDynamic__DelegateSignature(class UObject* Item, class UUserWidget* Widget);
    void BndEvt__ServerList_K2Node_ComponentBoundEvent_7_OnListEntryGeneratedDynamic__DelegateSignature(class UUserWidget* Widget);
    void BndEvt__DetailsPanel_K2Node_ComponentBoundEvent_3_OnJoinServerBtnClicked__DelegateSignature();
    void OnInitialized();
    void BndEvt__ServerList_K2Node_ComponentBoundEvent_0_OnListEntryInitializedDynamic__DelegateSignature(class UObject* Item, class UUserWidget* Widget);
    void PreConstruct(bool IsDesignTime);
    void BndEvt__FiltersPanel_K2Node_ComponentBoundEvent_8_OnServerFiltersChanged__DelegateSignature(TMap<class TSubclassOf<UHDServerListFilterRule>, class FHDFilterRuleParams> ActiveFilters);
    void SortPreferenceChanged(FFServerSortPreference SortPreference);
    void ConfirmServerPasswordInput(FText InputText);
    void ExecuteUbergraph_WBP_OptionMenu_JoinGame(int32 EntryPoint);
}; // Size: 0x340

#endif
