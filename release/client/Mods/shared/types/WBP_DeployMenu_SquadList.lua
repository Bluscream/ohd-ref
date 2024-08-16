---@meta

---@class UWBP_DeployMenu_SquadList_C : UDeployMenu_SquadListBase
---@field UberGraphFrame FPointerToUberGraphFrame
---@field CanvasPanel_1 UCanvasPanel
---@field DummyOption USizeBox
---@field DummyOptionBtn UButton
---@field Image_5 UImage
---@field JoinLeaveSQOption UWBP_SQOption_C
---@field JoinLeaveSQOptionBtn UButton
---@field JoinLeaveSQOptionText UTextBlock
---@field LockUnlockSQOption UWBP_SQOption_C
---@field LockUnlockSQOptionBtn UButton
---@field LockUnlockSQOptionText UTextBlock
---@field SQOptionsHBox UHorizontalBox
---@field SquadMemberCountText UTextBlock
---@field SquadMembersList UVerticalBox
---@field SquadNameText UTextBlock
---@field ToggleListVisibilityBtn UButton
---@field ToggleListVisibilityImg UImage
---@field bExpanded boolean
---@field SquadTextFormat FText
---@field bExpandListInDesigner boolean
---@field NumFakeSquadMemberItems int32
---@field SquadMemberItemPadding FMargin
---@field bCollapsedByUser boolean
---@field ParentContainerWidget UWBP_DeployMenu_PlatoonSquadList_C
---@field OptionPadding FMargin
UWBP_DeployMenu_SquadList_C = {}

---@param bValidSQ boolean
function UWBP_DeployMenu_SquadList_C:IsSquadValid(bValidSQ) end
---@param Context FPaintContext
function UWBP_DeployMenu_SquadList_C:OnPaint(Context) end
---@param bNewLocked boolean
function UWBP_DeployMenu_SquadList_C:SetSquadLockedState(bNewLocked) end
function UWBP_DeployMenu_SquadList_C:UnlockSquad() end
function UWBP_DeployMenu_SquadList_C:LockSquad() end
---@param MemberPSToKick AHDPlayerState
function UWBP_DeployMenu_SquadList_C:KickSquadMember(MemberPSToKick) end
---@param bCollapsedByUser boolean
function UWBP_DeployMenu_SquadList_C:WasListCollapsedByUser(bCollapsedByUser) end
function UWBP_DeployMenu_SquadList_C:UpdateLockUnlockBtnState() end
---@param bValidMembersPresent boolean
function UWBP_DeployMenu_SquadList_C:HasAnySquadMembers(bValidMembersPresent) end
function UWBP_DeployMenu_SquadList_C:SetupSQOptions() end
---@param bOwnsMemberWidget boolean
function UWBP_DeployMenu_SquadList_C:IsOwningPlayerInMemberWidgetList(bOwnsMemberWidget) end
function UWBP_DeployMenu_SquadList_C:TestPrereqsForAllMembers() end
function UWBP_DeployMenu_SquadList_C:TestSquadAndMemberPrereqs() end
function UWBP_DeployMenu_SquadList_C:TestSQPrereqs() end
---@param bSquadLeader boolean
function UWBP_DeployMenu_SquadList_C:IsOwningPlayerRegisteredSquadLeader(bSquadLeader) end
---@param bIgnorePendingRemoval boolean
---@param bRegisteredMember boolean
function UWBP_DeployMenu_SquadList_C:IsOwningPlayerRegisteredSquadMember(bIgnorePendingRemoval, bRegisteredMember) end
function UWBP_DeployMenu_SquadList_C:UpdateJoinLeaveBtnState() end
function UWBP_DeployMenu_SquadList_C:UpdateSquadMemberCountText() end
---@param bCollapseParentIfEmpty boolean
function UWBP_DeployMenu_SquadList_C:CollapseListIfEmpty(bCollapseParentIfEmpty) end
---@param NewSquadName FText
function UWBP_DeployMenu_SquadList_C:SetSquadNameText(NewSquadName) end
---@param RemovedMemberData USquadMemberInfo
function UWBP_DeployMenu_SquadList_C:RemoveSquadMemberItemWidgetFromList(RemovedMemberData) end
---@param MemberData USquadMemberInfo
function UWBP_DeployMenu_SquadList_C:AddNewSquadMemberItemWidget(MemberData) end
---@param bCollapseParent boolean
function UWBP_DeployMenu_SquadList_C:CollapseList(bCollapseParent) end
---@param bExpandParent boolean
function UWBP_DeployMenu_SquadList_C:ExpandList(bExpandParent) end
function UWBP_DeployMenu_SquadList_C:BndEvt__LockUnlockSQOptionBtn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature() end
---@param MemberData USquadMemberInfo
function UWBP_DeployMenu_SquadList_C:GenerateSquadMember(MemberData) end
---@param RemovedMemberData USquadMemberInfo
function UWBP_DeployMenu_SquadList_C:DeconstructSquadMember(RemovedMemberData) end
function UWBP_DeployMenu_SquadList_C:BndEvt__LeaveSquadBtn_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature() end
function UWBP_DeployMenu_SquadList_C:BndEvt__ExpandBtn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature() end
---@param IsDesignTime boolean
function UWBP_DeployMenu_SquadList_C:PreConstruct(IsDesignTime) end
function UWBP_DeployMenu_SquadList_C:SquadMembersListExpanded() end
function UWBP_DeployMenu_SquadList_C:SquadMembersListCollapsed() end
function UWBP_DeployMenu_SquadList_C:OnSquadSet() end
---@param NewSquadName FText
---@param PreviousSquadName FText
function UWBP_DeployMenu_SquadList_C:OnSquadNameUpdated(NewSquadName, PreviousSquadName) end
---@param NewLeaderPS AHDPlayerState
---@param PrevLeaderPS AHDPlayerState
function UWBP_DeployMenu_SquadList_C:OnSquadLeaderUpdated(NewLeaderPS, PrevLeaderPS) end
---@param bNewLockedState boolean
function UWBP_DeployMenu_SquadList_C:OnSquadLockStateUpdated(bNewLockedState) end
---@param EntryPoint int32
function UWBP_DeployMenu_SquadList_C:ExecuteUbergraph_WBP_DeployMenu_SquadList(EntryPoint) end


