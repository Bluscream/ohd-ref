---@meta

---@class UWBP_WeaponStatus_C : UHDUIUWWeaponStatus
---@field UberGraphFrame FPointerToUberGraphFrame
---@field MagCounterChangeUIAnim UWidgetAnimation
---@field AimStyleInputUIAnim UWidgetAnimation
---@field FireModeInputUIAnim UWidgetAnimation
---@field AimStyleText UTextBlock
---@field FireModeText UTextBlock
---@field MagCounterText UTextBlock
---@field Separator UImage
UWBP_WeaponStatus_C = {}

---@param bDisplayTotalAmmo boolean
function UWBP_WeaponStatus_C:ShouldDisplayTotalAmmo(bDisplayTotalAmmo) end
function UWBP_WeaponStatus_C:UpdateElementVisibility() end
---@param IsDesignTime boolean
function UWBP_WeaponStatus_C:PreConstruct(IsDesignTime) end
---@param NewWeap AHDBaseWeapon
---@param PrevWeap AHDBaseWeapon
function UWBP_WeaponStatus_C:BPOwnerWeaponChanged(NewWeap, PrevWeap) end
---@param NewFireMode EFireMode
---@param PreviousFireMode EFireMode
---@param bFromPlayerInput boolean
function UWBP_WeaponStatus_C:BPOwnerWeaponSetFireMode(NewFireMode, PreviousFireMode, bFromPlayerInput) end
---@param AmmoState FHDUIWeaponAmmoState
---@param bFromReload boolean
---@param bTotalFreeAmmoUpdated boolean
---@param bNumFreeAmmoClipsUpdated boolean
function UWBP_WeaponStatus_C:BPOwnerWeaponAmmoUpdated(AmmoState, bFromReload, bTotalFreeAmmoUpdated, bNumFreeAmmoClipsUpdated) end
---@param NewAimStyle EHDWeaponAimStyle
---@param PrevAimStyle EHDWeaponAimStyle
---@param bFromPlayerInput boolean
function UWBP_WeaponStatus_C:OwnerSetAimStyle(NewAimStyle, PrevAimStyle, bFromPlayerInput) end
---@param EntryPoint int32
function UWBP_WeaponStatus_C:ExecuteUbergraph_WBP_WeaponStatus(EntryPoint) end


