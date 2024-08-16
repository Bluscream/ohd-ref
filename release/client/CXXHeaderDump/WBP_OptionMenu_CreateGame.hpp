#ifndef UE4SS_SDK_WBP_OptionMenu_CreateGame_HPP
#define UE4SS_SDK_WBP_OptionMenu_CreateGame_HPP

class UWBP_OptionMenu_CreateGame_C : public UDFBaseMenu
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0238 (size: 0x8)
    class UTBListView* GMList;                                                        // 0x0240 (size: 0x8)
    class UTBListView* MapList;                                                       // 0x0248 (size: 0x8)
    class UImage* MapPreviewImg;                                                      // 0x0250 (size: 0x8)
    class UScrollBox* ModifierListScrollBox;                                          // 0x0258 (size: 0x8)
    class UWBP_BotsGameModifierSettings_C* SettingsModifierBots;                      // 0x0260 (size: 0x8)
    class UWBP_FactionGameModifierSettings_C* SettingsModifierFactions;               // 0x0268 (size: 0x8)
    class UButton* StartGameBtn;                                                      // 0x0270 (size: 0x8)
    bool bAutoSelectFirstMap;                                                         // 0x0278 (size: 0x1)
    bool bUsePredefinedMapList;                                                       // 0x0279 (size: 0x1)
    char padding_0[0x6];                                                              // 0x027A (size: 0x6)
    TArray<FFMapInfo> PredefinedMapList;                                              // 0x0280 (size: 0x10)
    bool bAutoSelectFirstGame;                                                        // 0x0290 (size: 0x1)
    char padding_1[0x7];                                                              // 0x0291 (size: 0x7)
    class UTexture2D* DefaultGMBanner;                                                // 0x0298 (size: 0x8)
    TSoftClassPtr<AGameModeBase> LegacyAASGMClass;                                    // 0x02A0 (size: 0x28)
    bool bUsePredefinedGameList;                                                      // 0x02C8 (size: 0x1)
    char padding_2[0x7];                                                              // 0x02C9 (size: 0x7)
    TArray<FFGameModeInfo> PredefinedGameList;                                        // 0x02D0 (size: 0x10)
    FWBP_OptionMenu_CreateGame_COnBuildTravelURL OnBuildTravelURL;                    // 0x02E0 (size: 0x10)
    void OnBuildTravelURL();
    FString TravelURL;                                                                // 0x02F0 (size: 0x10)
    TMap<class FName, class FText> PredefinedMapParentNameOverrides;                  // 0x0300 (size: 0x50)
    TArray<class UHDGameModeDefinition*> SelectableGMDefs;                            // 0x0350 (size: 0x10)
    class UHDGameModeDefinition* SelectedGM;                                          // 0x0360 (size: 0x8)

    void GetValidDisplayNameForGMDefinition(const class UHDGameModeDefinition* GMDef, FText& DisplayName);
    void FindGMDefinitionByClassName(FString& ClassName, class UHDGameModeDefinition*& GMDef);
    void ContainsGMByClass(TSoftClassPtr<AGameModeBase> GMClass, bool& bContainsGM);
    void FilterExcludesGMClass(TSoftClassPtr<AGameModeBase> GMClass, bool bLegacyAASSupport, bool& bExcludeGM);
    void FilterExcludesMapPrefix(FString MapName, bool& bExcludePrefix);
    void SortGMList(TArray<FFGameModeInfo>& GMListToSort, bool bDescending);
    void SortMapList(TArray<FFMapInfo>& MapListToSort, bool bDescending);
    void UpdateStartButtonState();
    void ClearMapPreviewImage();
    void SetMapPreviewImage(class UTexture2D* NewImg);
    void AddGMToList(FFGameModeInfo& GMInfo, class UBP_GMListItemData_C*& NewGMItem);
    void CreateGMListItem(FFGameModeInfo& GMInfo, class UBP_GMListItemData_C*& GMItem);
    void HandleStartGame(FFMapInfo& SelectedMapInfo, FFGameModeInfo& SelectedGMInfo);
    void AppendOptionsFromActiveModifiers();
    void GetActiveModifiers(TArray<TScriptInterface<IBPI_GameModifierSettings_C>>& ActiveModifiers);
    void AppendTravelURL(FString& OptionsToAdd);
    void AddMapToList(FFMapInfo& MapInfo, class UBP_MapListItemData_C*& NewMapItem);
    void CreateMapListItem(FFMapInfo& MapInfo, class UBP_MapListItemData_C*& MapItem);
    void RepopulateMapListFromRegistry(class UBP_GMListItemData_C* GMItemFilter);
    void RepopulateGameListFromRegistry();
    void ShouldAddGMListing(const class UHDGameModeDefinition* GMDef, bool& bAddListing);
    void FetchGameModesFromRegistry(TArray<FFGameModeInfo>& GMsFound);
    void ShouldAddMapListing(FPrimaryAssetId& MapAssetId, bool& bAddListing);
    void FetchMapsFromRegistry(TArray<FFMapInfo>& MapsFound);
    void Completed_D5E8D9AE41A0DF3C4DEC0184D72FF481(const TArray<class UObject*>& Loaded);
    void BndEvt__CreateGameBtn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void OnInitialized();
    void BndEvt__GMList_K2Node_ComponentBoundEvent_2_OnListItemSelectionChangedDynamic__DelegateSignature(class UObject* Item, bool bIsSelected);
    void BndEvt__GMList_K2Node_ComponentBoundEvent_3_OnListEntryInitializedDynamic__DelegateSignature(class UObject* Item, class UUserWidget* Widget);
    void BndEvt__MapList_K2Node_ComponentBoundEvent_5_OnListEntryInitializedDynamic__DelegateSignature(class UObject* Item, class UUserWidget* Widget);
    void BndEvt__MapList_K2Node_ComponentBoundEvent_1_OnListItemSelectionChangedDynamic__DelegateSignature(class UObject* Item, bool bIsSelected);
    void FetchGameModes();
    void Destruct();
    void ExecuteUbergraph_WBP_OptionMenu_CreateGame(int32 EntryPoint);
    void OnBuildTravelURL__DelegateSignature();
}; // Size: 0x368

#endif
