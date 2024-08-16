---@meta

---@class UBPFL_HDWeapon_C : UBlueprintFunctionLibrary
UBPFL_HDWeapon_C = {}

---@param AimStyle EHDWeaponAimStyle
---@param __WorldContext UObject
---@param StyleText FText
function UBPFL_HDWeapon_C:AimStyleToDisplayText(AimStyle, __WorldContext, StyleText) end
---@param FireMode EFireMode
---@param __WorldContext UObject
---@param ModeText FText
function UBPFL_HDWeapon_C:FireModeToDisplayText(FireMode, __WorldContext, ModeText) end
---@param FireMode EFireMode
---@param __WorldContext UObject
---@param ModeString FString
function UBPFL_HDWeapon_C:FireModeToString(FireMode, __WorldContext, ModeString) end


