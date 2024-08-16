---@meta

---@class UWBP_DeployMenu_SquadMemberListing_C : UDeployMenu_SquadMemberListingBase
---@field UberGraphFrame FPointerToUberGraphFrame
---@field DummyOption USizeBox
---@field DummyOptionBtn UButton
---@field KickMemberOption UWBP_SQMemberOption_C
---@field KickMemberOptionBtn UButton
---@field MemberBtn UButton
---@field PlayerClassIcon UImage
---@field PlayerClassIconBg UImage
---@field PlayerNameText UTextBlock
---@field SQMOptionsHBox UHorizontalBox
---@field OddListingBtnBgColor FLinearColor
---@field OddListingIconBgColor FLinearColor
---@field EvenListingBgColor FLinearColor
---@field ParentContainerWidget UWBP_DeployMenu_SquadList_C
---@field LastLoadout UHDKit
---@field bMemberSet boolean
UWBP_DeployMenu_SquadMemberListing_C = {}

---@param Loadout UHDKit
---@param ClassIconToUse FSlateBrush
function UWBP_DeployMenu_SquadMemberListing_C:GetClassIconForLoadout(Loadout, ClassIconToUse) end
---@param Loadout UHDKit
function UWBP_DeployMenu_SquadMemberListing_C:UpdatePlayerClassIcon(Loadout) end
function UWBP_DeployMenu_SquadMemberListing_C:SetupOptions() end
function UWBP_DeployMenu_SquadMemberListing_C:TestOptionPrereqs() end
---@param bEvenNumberListing boolean
function UWBP_DeployMenu_SquadMemberListing_C:UpdateColorOffset(bEvenNumberListing) end
---@param NewPlayerName FText
function UWBP_DeployMenu_SquadMemberListing_C:SetPlayerNameText(NewPlayerName) end
function UWBP_DeployMenu_SquadMemberListing_C:BndEvt__KickMemberBtn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature() end
function UWBP_DeployMenu_SquadMemberListing_C:OnMemberSet() end
---@param NewPlayerName FString
function UWBP_DeployMenu_SquadMemberListing_C:OnMemberPlayerNameUpdated(NewPlayerName) end
---@param IsDesignTime boolean
function UWBP_DeployMenu_SquadMemberListing_C:PreConstruct(IsDesignTime) end
---@param MyGeometry FGeometry
---@param InDeltaTime float
function UWBP_DeployMenu_SquadMemberListing_C:Tick(MyGeometry, InDeltaTime) end
---@param EntryPoint int32
function UWBP_DeployMenu_SquadMemberListing_C:ExecuteUbergraph_WBP_DeployMenu_SquadMemberListing(EntryPoint) end


