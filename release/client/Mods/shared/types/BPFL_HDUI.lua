---@meta

---@class UBPFL_HDUI_C : UBlueprintFunctionLibrary
UBPFL_HDUI_C = {}

---@param BadgeTable UDataTable
---@param __WorldContext UObject
---@param SortedBadgeDefs TArray<FFServerBadgeUIDefinition>
function UBPFL_HDUI_C:ParseServerBadgesFromTable(BadgeTable, __WorldContext, SortedBadgeDefs) end
---@param State EHDUICharacterStanceState
---@param __WorldContext UObject
---@param IconBrush FSlateBrush
function UBPFL_HDUI_C:GetIconBrushForStanceState(State, __WorldContext, IconBrush) end
---@param State EHDUICharacterStanceState
---@param __WorldContext UObject
---@param IconTex UTexture2D
function UBPFL_HDUI_C:GetIconTextureForStanceState(State, __WorldContext, IconTex) end
---@param HealthValueNorm float
---@param __WorldContext UObject
---@param ColorToUse FLinearColor
function UBPFL_HDUI_C:GetNormHealthColorByRatio(HealthValueNorm, __WorldContext, ColorToUse) end
---@param Health float
---@param MaxHealth float
---@param __WorldContext UObject
---@param ColorToUse FLinearColor
function UBPFL_HDUI_C:GetHealthColorByRatio(Health, MaxHealth, __WorldContext, ColorToUse) end


