---@meta

---@class UWBP_HUDElement_EquipmentSelect_C : UUserWidget
---@field UberGraphFrame FPointerToUberGraphFrame
---@field SlotVBox UVerticalBox
---@field CurrentSlotIndex int32
---@field CurrentSlotNum int32
---@field SlotData TArray<FFEqpSlotData>
UWBP_HUDElement_EquipmentSelect_C = {}

---@param SlotNum int32
function UWBP_HUDElement_EquipmentSelect_C:SelectItemBySlotNum(SlotNum) end
---@param OutSlotData FFEqpSlotData
---@param bFoundItem boolean
function UWBP_HUDElement_EquipmentSelect_C:GetSelectedItem(OutSlotData, bFoundItem) end
---@param SlotDataArray TArray<FFEqpSlotData>
---@param MinSlotIndex int32
function UWBP_HUDElement_EquipmentSelect_C:GetMinSlotIndex(SlotDataArray, MinSlotIndex) end
---@param Icon UTexture2D
---@param SlotNum int32
---@param bEnabled boolean
---@param EqpItem AHDBaseWeapon
function UWBP_HUDElement_EquipmentSelect_C:CreateAndAddEquipmentWidget(Icon, SlotNum, bEnabled, EqpItem) end
function UWBP_HUDElement_EquipmentSelect_C:ClearEquipmentList() end
---@param SlotNum int32
---@param bRemoved boolean
function UWBP_HUDElement_EquipmentSelect_C:RemoveEquipmentAtSlotNum(SlotNum, bRemoved) end
function UWBP_HUDElement_EquipmentSelect_C:RebuildEquipmentList() end
---@param EqpInfo FHDItemEntry
---@param EqpItem AHDBaseWeapon
function UWBP_HUDElement_EquipmentSelect_C:AddEquipment(EqpInfo, EqpItem) end
---@param NewSlotIndex int32
function UWBP_HUDElement_EquipmentSelect_C:SelectItem(NewSlotIndex) end
function UWBP_HUDElement_EquipmentSelect_C:SelectPrevItem() end
function UWBP_HUDElement_EquipmentSelect_C:SelectNextItem() end
---@param Loaded UObject
function UWBP_HUDElement_EquipmentSelect_C:OnLoaded_B4ECD00040B15A8A41EE1DA4CE775D64(Loaded) end
---@param IsDesignTime boolean
function UWBP_HUDElement_EquipmentSelect_C:PreConstruct(IsDesignTime) end
---@param IconToLoad TSoftObjectPtr<UTexture2D>
---@param SlotNum int32
---@param EqpItem AHDBaseWeapon
function UWBP_HUDElement_EquipmentSelect_C:LoadEquipmentAsset(IconToLoad, SlotNum, EqpItem) end
function UWBP_HUDElement_EquipmentSelect_C:OnEquipmentListModified() end
---@param EntryPoint int32
function UWBP_HUDElement_EquipmentSelect_C:ExecuteUbergraph_WBP_HUDElement_EquipmentSelect(EntryPoint) end


