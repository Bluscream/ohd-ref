---@meta

---@class UWBP_OptionMenu_Credits_C : UDFBaseMenu
---@field UberGraphFrame FPointerToUberGraphFrame
---@field CreditsScrollBox UScrollBox
---@field CreditsEntriesTable UDataTable
---@field EntryPadding FMargin
---@field AutoScrollSpeed float
UWBP_OptionMenu_Credits_C = {}

---@param HeaderRowName FName
---@param CreditEntries TArray<FFGameCreditsEntry>
function UWBP_OptionMenu_Credits_C:GetCreditEntriesForHeader(HeaderRowName, CreditEntries) end
---@param IsDesignTime boolean
function UWBP_OptionMenu_Credits_C:PreConstruct(IsDesignTime) end
---@param MyGeometry FGeometry
---@param InDeltaTime float
function UWBP_OptionMenu_Credits_C:Tick(MyGeometry, InDeltaTime) end
---@param EntryPoint int32
function UWBP_OptionMenu_Credits_C:ExecuteUbergraph_WBP_OptionMenu_Credits(EntryPoint) end


