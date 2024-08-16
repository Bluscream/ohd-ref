#ifndef UE4SS_SDK_WBP_DeployMenu_SquadList_HPP
#define UE4SS_SDK_WBP_DeployMenu_SquadList_HPP

class UWBP_DeployMenu_SquadList_C : public UDeployMenu_SquadListBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UCanvasPanel* CanvasPanel_1;                                                // 0x0268 (size: 0x8)
    class USizeBox* DummyOption;                                                      // 0x0270 (size: 0x8)
    class UButton* DummyOptionBtn;                                                    // 0x0278 (size: 0x8)
    class UImage* Image_5;                                                            // 0x0280 (size: 0x8)
    class UWBP_SQOption_C* JoinLeaveSQOption;                                         // 0x0288 (size: 0x8)
    class UButton* JoinLeaveSQOptionBtn;                                              // 0x0290 (size: 0x8)
    class UTextBlock* JoinLeaveSQOptionText;                                          // 0x0298 (size: 0x8)
    class UWBP_SQOption_C* LockUnlockSQOption;                                        // 0x02A0 (size: 0x8)
    class UButton* LockUnlockSQOptionBtn;                                             // 0x02A8 (size: 0x8)
    class UTextBlock* LockUnlockSQOptionText;                                         // 0x02B0 (size: 0x8)
    class UHorizontalBox* SQOptionsHBox;                                              // 0x02B8 (size: 0x8)
    class UTextBlock* SquadMemberCountText;                                           // 0x02C0 (size: 0x8)
    class UVerticalBox* SquadMembersList;                                             // 0x02C8 (size: 0x8)
    class UTextBlock* SquadNameText;                                                  // 0x02D0 (size: 0x8)
    class UButton* ToggleListVisibilityBtn;                                           // 0x02D8 (size: 0x8)
    class UImage* ToggleListVisibilityImg;                                            // 0x02E0 (size: 0x8)
    bool bExpanded;                                                                   // 0x02E8 (size: 0x1)
    char padding_0[0x7];                                                              // 0x02E9 (size: 0x7)
    FText SquadTextFormat;                                                            // 0x02F0 (size: 0x18)
    bool bExpandListInDesigner;                                                       // 0x0308 (size: 0x1)
    char padding_1[0x3];                                                              // 0x0309 (size: 0x3)
    int32 NumFakeSquadMemberItems;                                                    // 0x030C (size: 0x4)
    FMargin SquadMemberItemPadding;                                                   // 0x0310 (size: 0x10)
    bool bCollapsedByUser;                                                            // 0x0320 (size: 0x1)
    char padding_2[0x7];                                                              // 0x0321 (size: 0x7)
    class UWBP_DeployMenu_PlatoonSquadList_C* ParentContainerWidget;                  // 0x0328 (size: 0x8)
    FMargin OptionPadding;                                                            // 0x0330 (size: 0x10)

    void IsSquadValid(bool& bValidSQ);
    void OnPaint(FPaintContext& Context);
    void SetSquadLockedState(bool bNewLocked);
    void UnlockSquad();
    void LockSquad();
    void KickSquadMember(class AHDPlayerState* MemberPSToKick);
    void WasListCollapsedByUser(bool& bCollapsedByUser);
    void UpdateLockUnlockBtnState();
    void HasAnySquadMembers(bool& bValidMembersPresent);
    void SetupSQOptions();
    void IsOwningPlayerInMemberWidgetList(bool& bOwnsMemberWidget);
    void TestPrereqsForAllMembers();
    void TestSquadAndMemberPrereqs();
    void TestSQPrereqs();
    void IsOwningPlayerRegisteredSquadLeader(bool& bSquadLeader);
    void IsOwningPlayerRegisteredSquadMember(bool bIgnorePendingRemoval, bool& bRegisteredMember);
    void UpdateJoinLeaveBtnState();
    void UpdateSquadMemberCountText();
    void CollapseListIfEmpty(bool bCollapseParentIfEmpty);
    void SetSquadNameText(FText NewSquadName);
    void RemoveSquadMemberItemWidgetFromList(class USquadMemberInfo* RemovedMemberData);
    void AddNewSquadMemberItemWidget(class USquadMemberInfo* MemberData);
    void CollapseList(bool bCollapseParent);
    void ExpandList(bool bExpandParent);
    void BndEvt__LockUnlockSQOptionBtn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void GenerateSquadMember(class USquadMemberInfo* MemberData);
    void DeconstructSquadMember(class USquadMemberInfo* RemovedMemberData);
    void BndEvt__LeaveSquadBtn_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__ExpandBtn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void PreConstruct(bool IsDesignTime);
    void SquadMembersListExpanded();
    void SquadMembersListCollapsed();
    void OnSquadSet();
    void OnSquadNameUpdated(const FText& NewSquadName, const FText& PreviousSquadName);
    void OnSquadLeaderUpdated(class AHDPlayerState* NewLeaderPS, class AHDPlayerState* PrevLeaderPS);
    void OnSquadLockStateUpdated(bool bNewLockedState);
    void ExecuteUbergraph_WBP_DeployMenu_SquadList(int32 EntryPoint);
}; // Size: 0x340

#endif
