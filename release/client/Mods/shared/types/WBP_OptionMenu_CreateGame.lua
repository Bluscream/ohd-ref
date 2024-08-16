---@meta

---@class UWBP_OptionMenu_CreateGame_C : UDFBaseMenu
---@field UberGraphFrame FPointerToUberGraphFrame
---@field GMList UTBListView
---@field MapList UTBListView
---@field MapPreviewImg UImage
---@field ModifierListScrollBox UScrollBox
---@field SettingsModifierBots UWBP_BotsGameModifierSettings_C
---@field SettingsModifierFactions UWBP_FactionGameModifierSettings_C
---@field StartGameBtn UButton
---@field bAutoSelectFirstMap boolean
---@field bUsePredefinedMapList boolean
---@field PredefinedMapList TArray<FFMapInfo>
---@field bAutoSelectFirstGame boolean
---@field DefaultGMBanner UTexture2D
---@field LegacyAASGMClass TSoftClassPtr<AGameModeBase>
---@field bUsePredefinedGameList boolean
---@field PredefinedGameList TArray<FFGameModeInfo>
---@field OnBuildTravelURL FWBP_OptionMenu_CreateGame_COnBuildTravelURL
---@field TravelURL FString
---@field PredefinedMapParentNameOverrides TMap<FName, FText>
---@field SelectableGMDefs TArray<UHDGameModeDefinition>
---@field SelectedGM UHDGameModeDefinition
UWBP_OptionMenu_CreateGame_C = {}

---@param GMDef UHDGameModeDefinition
---@param DisplayName FText
function UWBP_OptionMenu_CreateGame_C:GetValidDisplayNameForGMDefinition(GMDef, DisplayName) end
---@param ClassName FString
---@param GMDef UHDGameModeDefinition
function UWBP_OptionMenu_CreateGame_C:FindGMDefinitionByClassName(ClassName, GMDef) end
---@param GMClass TSoftClassPtr<AGameModeBase>
---@param bContainsGM boolean
function UWBP_OptionMenu_CreateGame_C:ContainsGMByClass(GMClass, bContainsGM) end
---@param GMClass TSoftClassPtr<AGameModeBase>
---@param bLegacyAASSupport boolean
---@param bExcludeGM boolean
function UWBP_OptionMenu_CreateGame_C:FilterExcludesGMClass(GMClass, bLegacyAASSupport, bExcludeGM) end
---@param MapName FString
---@param bExcludePrefix boolean
function UWBP_OptionMenu_CreateGame_C:FilterExcludesMapPrefix(MapName, bExcludePrefix) end
---@param GMListToSort TArray<FFGameModeInfo>
---@param bDescending boolean
function UWBP_OptionMenu_CreateGame_C:SortGMList(GMListToSort, bDescending) end
---@param MapListToSort TArray<FFMapInfo>
---@param bDescending boolean
function UWBP_OptionMenu_CreateGame_C:SortMapList(MapListToSort, bDescending) end
function UWBP_OptionMenu_CreateGame_C:UpdateStartButtonState() end
function UWBP_OptionMenu_CreateGame_C:ClearMapPreviewImage() end
---@param NewImg UTexture2D
function UWBP_OptionMenu_CreateGame_C:SetMapPreviewImage(NewImg) end
---@param GMInfo FFGameModeInfo
---@param NewGMItem UBP_GMListItemData_C
function UWBP_OptionMenu_CreateGame_C:AddGMToList(GMInfo, NewGMItem) end
---@param GMInfo FFGameModeInfo
---@param GMItem UBP_GMListItemData_C
function UWBP_OptionMenu_CreateGame_C:CreateGMListItem(GMInfo, GMItem) end
---@param SelectedMapInfo FFMapInfo
---@param SelectedGMInfo FFGameModeInfo
function UWBP_OptionMenu_CreateGame_C:HandleStartGame(SelectedMapInfo, SelectedGMInfo) end
function UWBP_OptionMenu_CreateGame_C:AppendOptionsFromActiveModifiers() end
---@param ActiveModifiers TArray<TScriptInterface<IBPI_GameModifierSettings_C>>
function UWBP_OptionMenu_CreateGame_C:GetActiveModifiers(ActiveModifiers) end
---@param OptionsToAdd FString
function UWBP_OptionMenu_CreateGame_C:AppendTravelURL(OptionsToAdd) end
---@param MapInfo FFMapInfo
---@param NewMapItem UBP_MapListItemData_C
function UWBP_OptionMenu_CreateGame_C:AddMapToList(MapInfo, NewMapItem) end
---@param MapInfo FFMapInfo
---@param MapItem UBP_MapListItemData_C
function UWBP_OptionMenu_CreateGame_C:CreateMapListItem(MapInfo, MapItem) end
---@param GMItemFilter UBP_GMListItemData_C
function UWBP_OptionMenu_CreateGame_C:RepopulateMapListFromRegistry(GMItemFilter) end
function UWBP_OptionMenu_CreateGame_C:RepopulateGameListFromRegistry() end
---@param GMDef UHDGameModeDefinition
---@param bAddListing boolean
function UWBP_OptionMenu_CreateGame_C:ShouldAddGMListing(GMDef, bAddListing) end
---@param GMsFound TArray<FFGameModeInfo>
function UWBP_OptionMenu_CreateGame_C:FetchGameModesFromRegistry(GMsFound) end
---@param MapAssetId FPrimaryAssetId
---@param bAddListing boolean
function UWBP_OptionMenu_CreateGame_C:ShouldAddMapListing(MapAssetId, bAddListing) end
---@param MapsFound TArray<FFMapInfo>
function UWBP_OptionMenu_CreateGame_C:FetchMapsFromRegistry(MapsFound) end
---@param Loaded TArray<UObject>
function UWBP_OptionMenu_CreateGame_C:Completed_D5E8D9AE41A0DF3C4DEC0184D72FF481(Loaded) end
function UWBP_OptionMenu_CreateGame_C:BndEvt__CreateGameBtn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature() end
function UWBP_OptionMenu_CreateGame_C:OnInitialized() end
---@param Item UObject
---@param bIsSelected boolean
function UWBP_OptionMenu_CreateGame_C:BndEvt__GMList_K2Node_ComponentBoundEvent_2_OnListItemSelectionChangedDynamic__DelegateSignature(Item, bIsSelected) end
---@param Item UObject
---@param Widget UUserWidget
function UWBP_OptionMenu_CreateGame_C:BndEvt__GMList_K2Node_ComponentBoundEvent_3_OnListEntryInitializedDynamic__DelegateSignature(Item, Widget) end
---@param Item UObject
---@param Widget UUserWidget
function UWBP_OptionMenu_CreateGame_C:BndEvt__MapList_K2Node_ComponentBoundEvent_5_OnListEntryInitializedDynamic__DelegateSignature(Item, Widget) end
---@param Item UObject
---@param bIsSelected boolean
function UWBP_OptionMenu_CreateGame_C:BndEvt__MapList_K2Node_ComponentBoundEvent_1_OnListItemSelectionChangedDynamic__DelegateSignature(Item, bIsSelected) end
function UWBP_OptionMenu_CreateGame_C:FetchGameModes() end
function UWBP_OptionMenu_CreateGame_C:Destruct() end
---@param EntryPoint int32
function UWBP_OptionMenu_CreateGame_C:ExecuteUbergraph_WBP_OptionMenu_CreateGame(EntryPoint) end
function UWBP_OptionMenu_CreateGame_C:OnBuildTravelURL__DelegateSignature() end


