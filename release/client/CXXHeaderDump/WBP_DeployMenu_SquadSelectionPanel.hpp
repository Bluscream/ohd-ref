#ifndef UE4SS_SDK_WBP_DeployMenu_SquadSelectionPanel_HPP
#define UE4SS_SDK_WBP_DeployMenu_SquadSelectionPanel_HPP

class UWBP_DeployMenu_SquadSelectionPanel_C : public UDeployMenu_SquadSelectionWidgetBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0250 (size: 0x8)
    class UScrollBox* PlatoonsList;                                                   // 0x0258 (size: 0x8)
    int32 NumFakePlatoonItems;                                                        // 0x0260 (size: 0x4)
    FMargin PlatoonItemPadding;                                                       // 0x0264 (size: 0x10)

    void RemovePlatoonItemWidgetFromList(class UPlatoonListEntry* RemovedPlatoonData, int32 RemoveIdx);
    void AddNewPlatoonItemWidget(class UPlatoonListEntry* PlatoonData);
    void GeneratePlatoon(class UPlatoonListEntry* PlatoonData);
    void DeconstructPlatoon(class UPlatoonListEntry* RemovedPlatoonData, int32 RemovedPlatoonIdx);
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_WBP_DeployMenu_SquadSelectionPanel(int32 EntryPoint);
}; // Size: 0x274

#endif
