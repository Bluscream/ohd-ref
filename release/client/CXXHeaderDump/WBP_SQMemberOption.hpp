#ifndef UE4SS_SDK_WBP_SQMemberOption_HPP
#define UE4SS_SDK_WBP_SQMemberOption_HPP

class UWBP_SQMemberOption_C : public UWBP_HDContextualWidgetBase_C
{
    class UNamedSlot* InsertContentHere;                                              // 0x0250 (size: 0x8)
    class UWBP_DeployMenu_SquadMemberListing_C* ParentContainer;                      // 0x0258 (size: 0x8)
    class USquadMemberInfo* ParentMemberInfo;                                         // 0x0260 (size: 0x8)

    void GetParentMemberInfo(class USquadMemberInfo*& MemberInfo);
    void SetupOption(class USquadMemberInfo* InMemberInfo);
}; // Size: 0x268

#endif
