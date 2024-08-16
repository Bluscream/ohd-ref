---@meta

---@class UWBP_CreateGameSelectionListEntry_C : UUserWidget
---@field UberGraphFrame FPointerToUberGraphFrame
---@field ItemBg UImage
---@field ItemBox USizeBox
---@field ItemCheckBox UCheckBox
---@field ItemSelectionHighlight UImage
---@field ItemSubText UTextBlock
---@field ItemText UTextBlock
---@field OnSelectionStateChanged FWBP_CreateGameSelectionListEntry_COnSelectionStateChanged
---@field ItemStyle FCheckBoxStyle
---@field ItemTextStyle FFSelectionItemTextStyle
---@field ItemSubTextStyle FFSelectionItemTextStyle
---@field ItemMinWidth int32
---@field Text FText
---@field SubText FText
---@field ItemMinHeight int32
---@field bSelectionToggle boolean
UWBP_CreateGameSelectionListEntry_C = {}

---@param Brush FSlateBrush
---@param Image UTexture2D
---@param UpdatedBrush FSlateBrush
function UWBP_CreateGameSelectionListEntry_C:GetBrushWithImageTexture(Brush, Image, UpdatedBrush) end
function UWBP_CreateGameSelectionListEntry_C:InternalRefreshDimensions() end
---@param MinHeight int32
function UWBP_CreateGameSelectionListEntry_C:GetItemMinHeight(MinHeight) end
---@param MinWidth int32
function UWBP_CreateGameSelectionListEntry_C:GetItemMinWidth(MinWidth) end
---@param InMinWidth int32
---@param InMinHeight int32
function UWBP_CreateGameSelectionListEntry_C:SetItemMinDimensions(InMinWidth, InMinHeight) end
---@param Text FText
function UWBP_CreateGameSelectionListEntry_C:GetItemSubText(Text) end
---@param Text FText
function UWBP_CreateGameSelectionListEntry_C:GetItemText(Text) end
---@param InText FText
function UWBP_CreateGameSelectionListEntry_C:SetItemSubText(InText) end
---@param InText FText
function UWBP_CreateGameSelectionListEntry_C:SetItemText(InText) end
---@param TextStyle FFSelectionItemTextStyle
function UWBP_CreateGameSelectionListEntry_C:GetItemSubTextStyle(TextStyle) end
---@param TextStyle FFSelectionItemTextStyle
function UWBP_CreateGameSelectionListEntry_C:GetItemTextStyle(TextStyle) end
---@param ItemStyle FCheckBoxStyle
function UWBP_CreateGameSelectionListEntry_C:GetItemStyle(ItemStyle) end
---@param InItemImg UTexture2D
function UWBP_CreateGameSelectionListEntry_C:SetItemImage(InItemImg) end
---@param InItemSubTextStyle FFSelectionItemTextStyle
function UWBP_CreateGameSelectionListEntry_C:SetItemSubTextStyle(InItemSubTextStyle) end
---@param InItemTextStyle FFSelectionItemTextStyle
function UWBP_CreateGameSelectionListEntry_C:SetItemTextStyle(InItemTextStyle) end
---@param InItemStyle FCheckBoxStyle
function UWBP_CreateGameSelectionListEntry_C:SetItemStyle(InItemStyle) end
---@param bSelected boolean
function UWBP_CreateGameSelectionListEntry_C:InternalUpdateItemBgTintColor(bSelected) end
---@param Text UTextBlock
---@param TextStyle FFSelectionItemTextStyle
function UWBP_CreateGameSelectionListEntry_C:InternalApplyStyleToText(Text, TextStyle) end
---@param bSelected boolean
function UWBP_CreateGameSelectionListEntry_C:IsItemSelected(bSelected) end
---@param SelectionState ECheckBoxState
function UWBP_CreateGameSelectionListEntry_C:GetItemSelectionState(SelectionState) end
---@param bSelected boolean
function UWBP_CreateGameSelectionListEntry_C:SetItemIsSelected(bSelected) end
---@param InSelectionState ECheckBoxState
function UWBP_CreateGameSelectionListEntry_C:SetItemSelectionState(InSelectionState) end
---@param IsDesignTime boolean
function UWBP_CreateGameSelectionListEntry_C:PreConstruct(IsDesignTime) end
---@param bIsChecked boolean
function UWBP_CreateGameSelectionListEntry_C:BndEvt__ItemCheckBox_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature(bIsChecked) end
---@param EntryPoint int32
function UWBP_CreateGameSelectionListEntry_C:ExecuteUbergraph_WBP_CreateGameSelectionListEntry(EntryPoint) end
---@param Item UWBP_CreateGameSelectionListEntry_C
---@param bSelected boolean
function UWBP_CreateGameSelectionListEntry_C:OnSelectionStateChanged__DelegateSignature(Item, bSelected) end


