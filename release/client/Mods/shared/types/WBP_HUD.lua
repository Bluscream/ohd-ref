---@meta

---@class UWBP_HUD_C : UHDUIUWHUD
---@field UberGraphFrame FPointerToUberGraphFrame
---@field CaptureStatus UWBP_CaptureStatus_C
---@field Compass UWBP_HUDElement_Compass_C
---@field EquipmentSelect UWBP_HUDElement_EquipmentSelect_C
---@field NotificationTray UWBP_NotificationTray_C
---@field PlayerStatus UWBP_PlayerStatus_C
---@field TextChat UWBP_HUDElement_TextChat_C
---@field VOIPStatus UWBP_HUDElement_VOIPIndicator_C
---@field WeaponStatus UWBP_WeaponStatus_C
---@field bShowCompass boolean
---@field bShowPlayerStatus boolean
---@field bShowWeaponStatus boolean
---@field bShowCaptureStatus boolean
---@field bShowEquipmentSelect boolean
UWBP_HUD_C = {}

---@param Widget UWidget
---@param bShown boolean
function UWBP_HUD_C:SetHUDElementVisibility(Widget, bShown) end
---@param bVisible boolean
function UWBP_HUD_C:ToggleWeaponStatus(bVisible) end
---@param bVisible boolean
function UWBP_HUD_C:ToggleEquipmentSelect(bVisible) end
function UWBP_HUD_C:Construct() end
---@param EntryPoint int32
function UWBP_HUD_C:ExecuteUbergraph_WBP_HUD(EntryPoint) end


