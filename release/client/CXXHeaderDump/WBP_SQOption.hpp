#ifndef UE4SS_SDK_WBP_SQOption_HPP
#define UE4SS_SDK_WBP_SQOption_HPP

class UWBP_SQOption_C : public UWBP_HDContextualWidgetBase_C
{
    class UNamedSlot* InsertContentHere;                                              // 0x0250 (size: 0x8)
    class UWBP_DeployMenu_SquadList_C* ParentContainer;                               // 0x0258 (size: 0x8)
    class USquadListEntry* ParentSquadData;                                           // 0x0260 (size: 0x8)

    void GetParentSquadData(class USquadListEntry*& SquadData);
    void SetupOption(class USquadListEntry* InSquadData);
}; // Size: 0x268

#endif
