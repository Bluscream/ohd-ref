---@meta

---@class UWBP_OptionMenu_JoinGame_C : UHDJoinGameMenu
---@field UberGraphFrame FPointerToUberGraphFrame
---@field DetailsPanel UWBP_JoinServerDetailsPanel_C
---@field FiltersOpenCloseBtn UButton
---@field FiltersPanel UWBP_JoinServerFiltersPanel_C
---@field FiltersPanelOpenCloseBox USizeBox
---@field GameModeHeader UWBP_JoinServer_Header_C
---@field MapHeader UWBP_JoinServer_Header_C
---@field ModHeader UWBP_JoinServer_Header_C
---@field PingHeader UWBP_JoinServer_Header_C
---@field PlayersHeader UWBP_JoinServer_Header_C
---@field RefreshListBtn UButton
---@field RefreshListThrobber UCircularThrobber
---@field ServerDetails UWBP_ServerDetails_C
---@field ServerDetailsContainer UBorder
---@field ServerListBox USizeBox
---@field ServerNameHeader UWBP_JoinServer_Header_C
---@field SelectedServerListItem UHDServerListItemData
---@field bShowServerDetailsInDesigner boolean
---@field ServerBadgeTable UDataTable
---@field ServerBadgeDefs TArray<FFServerBadgeUIDefinition>
---@field bDesignTime boolean
---@field LastConfirmedJoinPassword FString
UWBP_OptionMenu_JoinGame_C = {}

---@param bSubMenuOptions boolean
function UWBP_OptionMenu_JoinGame_C:HasSubMenus(bSubMenuOptions) end
---@param SubOptions TArray<FFSubMenuOption>
function UWBP_OptionMenu_JoinGame_C:GetSubMenuOptions(SubOptions) end
---@param Alignment EHorizontalAlignment
function UWBP_OptionMenu_JoinGame_C:GetDesiredHorizontalAlignment(Alignment) end
---@param Alignment EVerticalAlignment
function UWBP_OptionMenu_JoinGame_C:GetDesiredVerticalAlignment(Alignment) end
function UWBP_OptionMenu_JoinGame_C:OpenPasswordPrompt() end
function UWBP_OptionMenu_JoinGame_C:ApplyActiveServerFilters() end
function UWBP_OptionMenu_JoinGame_C:RefreshServerList() end
---@param bShown boolean
function UWBP_OptionMenu_JoinGame_C:ToggleServerDetails(bShown) end
---@param SortPreference FFServerSortPreference
function UWBP_OptionMenu_JoinGame_C:GetServerListSortPreference(SortPreference) end
---@param IndexToTest int32
---@param bValidIndex boolean
function UWBP_OptionMenu_JoinGame_C:IsValidServerListItemIndex(IndexToTest, bValidIndex) end
---@param ServerItem UHDServerListItemData
function UWBP_OptionMenu_JoinGame_C:GetSelectedServerListItem(ServerItem) end
function UWBP_OptionMenu_JoinGame_C:ClearServerListItemSelection() end
function UWBP_OptionMenu_JoinGame_C:ServerListItemSelectionCleared() end
---@param InSelectedServerListItem UHDServerListItemData
function UWBP_OptionMenu_JoinGame_C:ServerListItemSelectionUpdated(InSelectedServerListItem) end
---@param SubMenuIndex int32
function UWBP_OptionMenu_JoinGame_C:SetActiveSubMenuByIndex(SubMenuIndex) end
function UWBP_OptionMenu_JoinGame_C:ReceiveOnRefreshStart() end
---@param bSortAscending boolean
---@param SortBy EHDServerListSortBy
function UWBP_OptionMenu_JoinGame_C:ReceiveOnRefreshComplete(bSortAscending, SortBy) end
function UWBP_OptionMenu_JoinGame_C:BndEvt__RefreshListBtn_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature() end
---@param Item UObject
---@param bIsSelected boolean
function UWBP_OptionMenu_JoinGame_C:BndEvt__ServerList_K2Node_ComponentBoundEvent_4_OnListItemSelectionChangedDynamic__DelegateSignature(Item, bIsSelected) end
---@param Item UObject
---@param Widget UUserWidget
function UWBP_OptionMenu_JoinGame_C:BndEvt__ServerList_K2Node_ComponentBoundEvent_1_OnListItemScrolledIntoViewDynamic__DelegateSignature(Item, Widget) end
---@param Widget UUserWidget
function UWBP_OptionMenu_JoinGame_C:BndEvt__ServerList_K2Node_ComponentBoundEvent_7_OnListEntryGeneratedDynamic__DelegateSignature(Widget) end
function UWBP_OptionMenu_JoinGame_C:BndEvt__DetailsPanel_K2Node_ComponentBoundEvent_3_OnJoinServerBtnClicked__DelegateSignature() end
function UWBP_OptionMenu_JoinGame_C:OnInitialized() end
---@param Item UObject
---@param Widget UUserWidget
function UWBP_OptionMenu_JoinGame_C:BndEvt__ServerList_K2Node_ComponentBoundEvent_0_OnListEntryInitializedDynamic__DelegateSignature(Item, Widget) end
---@param IsDesignTime boolean
function UWBP_OptionMenu_JoinGame_C:PreConstruct(IsDesignTime) end
---@param ActiveFilters TMap<TSubclassOf<UHDServerListFilterRule>, FHDFilterRuleParams>
function UWBP_OptionMenu_JoinGame_C:BndEvt__FiltersPanel_K2Node_ComponentBoundEvent_8_OnServerFiltersChanged__DelegateSignature(ActiveFilters) end
---@param SortPreference FFServerSortPreference
function UWBP_OptionMenu_JoinGame_C:SortPreferenceChanged(SortPreference) end
---@param InputText FText
function UWBP_OptionMenu_JoinGame_C:ConfirmServerPasswordInput(InputText) end
---@param EntryPoint int32
function UWBP_OptionMenu_JoinGame_C:ExecuteUbergraph_WBP_OptionMenu_JoinGame(EntryPoint) end


