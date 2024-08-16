---@meta

---@class UWBP_SpawnMap_POISelectionIndicator_C : UUserWidget
---@field UberGraphFrame FPointerToUberGraphFrame
---@field SelectionIcon UImage
---@field ParentPOI UDFPOIWidget
---@field SelectionBrush FSlateBrush
---@field DeselectionBrush FSlateBrush
UWBP_SpawnMap_POISelectionIndicator_C = {}

---@param NewDeselectionBrush FSlateBrush
function UWBP_SpawnMap_POISelectionIndicator_C:SetDeselectionBrush(NewDeselectionBrush) end
---@param ParentPOI UDFPOIWidget
---@param SelectionBrush FSlateBrush
---@param DeselectionBrush FSlateBrush
---@param bSelectable boolean
function UWBP_SpawnMap_POISelectionIndicator_C:Init(ParentPOI, SelectionBrush, DeselectionBrush, bSelectable) end
UWBP_SpawnMap_POISelectionIndicator_C['POI Selected'] = function() end
---@param bSelectable boolean
UWBP_SpawnMap_POISelectionIndicator_C['POI Deselected'] = function(bSelectable) end
---@param EntryPoint int32
function UWBP_SpawnMap_POISelectionIndicator_C:ExecuteUbergraph_WBP_SpawnMap_POISelectionIndicator(EntryPoint) end


