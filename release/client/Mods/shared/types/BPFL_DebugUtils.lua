---@meta

---@class UBPFL_DebugUtils_C : UBlueprintFunctionLibrary
UBPFL_DebugUtils_C = {}

---@param Name FString
---@param InFloat float
---@param TextColor FLinearColor
---@param __WorldContext UObject
function UBPFL_DebugUtils_C:PrintFloat(Name, InFloat, TextColor, __WorldContext) end
---@param Name FString
---@param InInteger int32
---@param TextColor FLinearColor
---@param __WorldContext UObject
function UBPFL_DebugUtils_C:PrintInt(Name, InInteger, TextColor, __WorldContext) end
---@param Name FString
---@param bInBool boolean
---@param TextColor FLinearColor
---@param __WorldContext UObject
function UBPFL_DebugUtils_C:PrintBool(Name, bInBool, TextColor, __WorldContext) end
---@param Name FString
---@param Value FString
---@param TextColor FLinearColor
---@param __WorldContext UObject
function UBPFL_DebugUtils_C:PrintStr(Name, Value, TextColor, __WorldContext) end
---@param PropName FString
---@param Value FString
---@param TextColor FLinearColor
---@param __WorldContext UObject
function UBPFL_DebugUtils_C:PrintProperty(PropName, Value, TextColor, __WorldContext) end


