#ifndef UE4SS_SDK_WBP_DeployMenu_PlatoonSquadList_HPP
#define UE4SS_SDK_WBP_DeployMenu_PlatoonSquadList_HPP

class UWBP_DeployMenu_PlatoonSquadList_C : public UDeployMenu_PlatoonSquadListBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0250 (size: 0x8)
    class UButton* CreateSquadBtn;                                                    // 0x0258 (size: 0x8)
    class UImage* Image_10;                                                           // 0x0260 (size: 0x8)
    class UTextBlock* PlatoonNameText;                                                // 0x0268 (size: 0x8)
    class UTextBlock* SquadCountText;                                                 // 0x0270 (size: 0x8)
    class UVerticalBox* SquadsList;                                                   // 0x0278 (size: 0x8)
    class UButton* ToggleListVisibilityBtn;                                           // 0x0280 (size: 0x8)
    class UImage* ToggleListVisibilityImg;                                            // 0x0288 (size: 0x8)
    bool bExpanded;                                                                   // 0x0290 (size: 0x1)
    char padding_0[0x7];                                                              // 0x0291 (size: 0x7)
    FText PlatoonTextFormat;                                                          // 0x0298 (size: 0x18)
    bool bExpandListInDesigner;                                                       // 0x02B0 (size: 0x1)
    char padding_1[0x3];                                                              // 0x02B1 (size: 0x3)
    int32 NumFakeSquadItems;                                                          // 0x02B4 (size: 0x4)
    FMargin SquadItemPadding;                                                         // 0x02B8 (size: 0x10)
    bool bCollapsedByUser;                                                            // 0x02C8 (size: 0x1)
    char padding_2[0x7];                                                              // 0x02C9 (size: 0x7)
    class UWBP_DeployMenu_SquadSelectionPanel_C* ParentContainerWidget;               // 0x02D0 (size: 0x8)

    void IsPlatoonValid(bool& bValidPLTN);
    void WasListCollapsedByUser(bool& bCollapsedByUser);
    void HasAnySquads(bool& bValidSquadsPresent);
    void SetPlatoonNameText(FText NewPlatoonName);
    void UpdateCreateBtnAvailability();
    void UpdateSquadCountText();
    void CollapseListIfEmpty();
    void CollapseList();
    void ExpandList();
    void RemoveSquadItemWidgetFromList(class USquadListEntry* RemovedSquadData, int32 RemoveIdx);
    void AddNewSquadItemWidget(class USquadListEntry* SquadData, class UWBP_DeployMenu_SquadList_C*& SquadItemWidget);
    void GenerateSquad(class USquadListEntry* SquadData);
    void DeconstructSquad(class USquadListEntry* RemovedSquadData, int32 RemovedSquadIdx);
    void BndEvt__ListToggleBtn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void PreConstruct(bool IsDesignTime);
    void SquadsListExpanded();
    void SquadsListCollapsed();
    void BndEvt__CreateSquadBtn_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
    void OnPlatoonSet();
    void ExecuteUbergraph_WBP_DeployMenu_PlatoonSquadList(int32 EntryPoint);
}; // Size: 0x2D8

#endif
