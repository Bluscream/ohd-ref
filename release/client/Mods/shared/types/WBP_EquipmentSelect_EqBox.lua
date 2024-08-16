---@meta

---@class UWBP_EquipmentSelect_EqBox_C : UUserWidget
---@field UberGraphFrame FPointerToUberGraphFrame
---@field EquipmentNumber UTextBlock
---@field Image_10 UImage
---@field Image_11 UImage
---@field Image_12 UImage
---@field Image_13 UImage
---@field Item UImage
---@field RestrictedOverlay UOverlay
---@field Selected UImage
---@field Icon UTexture2D
---@field SlotNum int32
---@field bEnabled boolean
---@field EqpItem AHDBaseWeapon
---@field bHighlighted boolean
UWBP_EquipmentSelect_EqBox_C = {}

---@param bEnabled boolean
function UWBP_EquipmentSelect_EqBox_C:SetEnabled(bEnabled) end
---@param bHighlight boolean
function UWBP_EquipmentSelect_EqBox_C:IsHighlighted(bHighlight) end
---@param bHighlighted boolean
function UWBP_EquipmentSelect_EqBox_C:SetHighlight(bHighlighted) end
---@param IsDesignTime boolean
function UWBP_EquipmentSelect_EqBox_C:PreConstruct(IsDesignTime) end
---@param MyGeometry FGeometry
---@param InDeltaTime float
function UWBP_EquipmentSelect_EqBox_C:Tick(MyGeometry, InDeltaTime) end
---@param EntryPoint int32
function UWBP_EquipmentSelect_EqBox_C:ExecuteUbergraph_WBP_EquipmentSelect_EqBox(EntryPoint) end


