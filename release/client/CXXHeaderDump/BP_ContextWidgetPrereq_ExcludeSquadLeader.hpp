#ifndef UE4SS_SDK_BP_ContextWidgetPrereq_ExcludeSquadLeader_HPP
#define UE4SS_SDK_BP_ContextWidgetPrereq_ExcludeSquadLeader_HPP

class UBP_ContextWidgetPrereq_ExcludeSquadLeader_C : public UDFContextualWidgetPrerequisiteBase
{
    class AHDSquadState* MemberSQState;                                               // 0x0030 (size: 0x8)
    class AHDPlayerState* MemberPSToTest;                                             // 0x0038 (size: 0x8)
    bool bInitialized;                                                                // 0x0040 (size: 0x1)

    void IsValidContext(bool& bValidData);
    bool SatisfiesPrerequisite();
    void SetupContext(class AHDSquadState* InMemberSQState, class AHDPlayerState* InMemberPSToTest);
}; // Size: 0x41

#endif
