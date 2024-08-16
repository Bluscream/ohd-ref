#ifndef UE4SS_SDK_WBP_DeployMenu_ClassSelectionPanel_HPP
#define UE4SS_SDK_WBP_DeployMenu_ClassSelectionPanel_HPP

class UWBP_DeployMenu_ClassSelectionPanel_C : public UDeployMenu_ClassSelectionPanel
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0230 (size: 0x8)
    class UScrollBox* ClassScrollBox;                                                 // 0x0238 (size: 0x8)
    bool bPanelInitialized;                                                           // 0x0240 (size: 0x1)
    char padding_0[0x7];                                                              // 0x0241 (size: 0x7)
    class ABP_HDPlayerControllerBase_C* HDOwningPlayer;                               // 0x0248 (size: 0x8)
    FTimerHandle TimerHandle_CheckRestrictions;                                       // 0x0250 (size: 0x8)
    TSubclassOf<class UWBP_DeployMenu_ClassSelectionListing_C> KitListingWidgetClass; // 0x0258 (size: 0x8)
    TSet<UHDKit*> DesignPreviewKits;                                                  // 0x0260 (size: 0x50)
    class UHDKit* SelectedClass;                                                      // 0x02B0 (size: 0x8)
    EHDTeam LastFaction;                                                              // 0x02B8 (size: 0x1)

    void SetClassSelectionState(class UHDKit* ClassToUpdate, bool bSelected, bool bMatchDisplayNames, bool& bClassUpdated);
    void InternalUpdateSelectionState(class UDeployMenu_ClassSelectionListing* NewSelection);
    void SelectFirstUnrestrictedClass();
    void InternalDeselectAllClasses();
    void IsValidClassListingIndex(int32 ChildIndex, bool& bValidIndex);
    void SetClassSelectionStateByIndex(int32 ChildIndex, bool bSelected);
    void ToggleRestrictionsTimer(bool bEnabled, bool bFireOnceImmediately);
    void InternalCreateClassListingWidget(class UHDKit* Kit, class UWBP_DeployMenu_ClassSelectionListing_C*& NewKitListingWidget);
    void InternalPopulateListWithClasses(TSet<UHDKit*> TeamKits);
    void RepopulateListByFaction(EHDTeam OwningPlayerTeam);
    void Construct();
    void PreConstruct(bool IsDesignTime);
    void LateInit_RepPlayerState();
    void CheckRestrictions();
    void Destruct();
    void OnClassSelected(class UWBP_DeployMenu_ClassSelectionListing_C* SelectedClassWidget);
    void OnClassDeselected(class UWBP_DeployMenu_ClassSelectionListing_C* DeselectedClassWidget);
    void ExecuteUbergraph_WBP_DeployMenu_ClassSelectionPanel(int32 EntryPoint);
}; // Size: 0x2B9

#endif
