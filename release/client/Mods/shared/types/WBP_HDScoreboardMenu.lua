---@meta

---@class UWBP_HDScoreboardMenu_C : UHDScoreboardBase
---@field UberGraphFrame FPointerToUberGraphFrame
---@field BluforFactionText UTextBlock
---@field OpforFactionText UTextBlock
---@field EvenRowEntryColor FLinearColor
UWBP_HDScoreboardMenu_C = {}

---@param TeamState AHDTeamState
function UWBP_HDScoreboardMenu_C:SetupFactionInfoForTeam(TeamState) end
---@param ListEntry UHDScoreboardListingRowBase
---@param EntryIndex int32
function UWBP_HDScoreboardMenu_C:GetRowWidgetIndex(ListEntry, EntryIndex) end
---@param InMyGeometry FGeometry
---@param InMouseEvent FPointerEvent
---@return FEventReply
function UWBP_HDScoreboardMenu_C:OnMouseButtonDoubleClick(InMyGeometry, InMouseEvent) end
---@param MyGeometry FGeometry
---@param MouseEvent FPointerEvent
---@return FEventReply
function UWBP_HDScoreboardMenu_C:OnMouseButtonDown(MyGeometry, MouseEvent) end
---@param IsDesignTime boolean
function UWBP_HDScoreboardMenu_C:PreConstruct(IsDesignTime) end
---@param NewListEntry UHDScoreboardListingRowBase
function UWBP_HDScoreboardMenu_C:ReceiveScoreboardListRowAdded(NewListEntry) end
function UWBP_HDScoreboardMenu_C:Construct() end
---@param EntryPoint int32
function UWBP_HDScoreboardMenu_C:ExecuteUbergraph_WBP_HDScoreboardMenu(EntryPoint) end


