---@meta

---@class IBPI_OptionMenu_C : IInterface
IBPI_OptionMenu_C = {}

---@param Alignment EVerticalAlignment
function IBPI_OptionMenu_C:GetDesiredVerticalAlignment(Alignment) end
---@param Alignment EHorizontalAlignment
function IBPI_OptionMenu_C:GetDesiredHorizontalAlignment(Alignment) end
---@param SubOptions TArray<FFSubMenuOption>
function IBPI_OptionMenu_C:GetSubMenuOptions(SubOptions) end
---@param SubMenuIndex int32
function IBPI_OptionMenu_C:SetActiveSubMenuByIndex(SubMenuIndex) end
---@param bSubMenuOptions boolean
function IBPI_OptionMenu_C:HasSubMenus(bSubMenuOptions) end


