---@meta

---@class UWBP_DeployMenu_ClassSelectionListing_C : UDeployMenu_ClassSelectionListing
---@field UberGraphFrame FPointerToUberGraphFrame
---@field ClassBg UImage
---@field ClassNameText UTextBlock
---@field ClassRestrictedText UTextBlock
---@field ClassSymbol UImage
---@field EqpGrid UUniformGridPanel
---@field EqpSlot1 UImage
---@field EqpSlot2 UImage
---@field EqpSlot3 UImage
---@field EqpSlot4 UImage
---@field EqpSlot5 UImage
---@field EqpSlot6 UImage
---@field EqpSlot7 UImage
---@field EqpSlot8 UImage
---@field Image_10 UImage
---@field Image_11 UImage
---@field Image_12 UImage
---@field Image_13 UImage
---@field PrimaryWeaponIcon UImage
---@field RestrictedOverlay UOverlay
---@field SelectClassBtn UButton
---@field Kit UHDKit
---@field bListingInitialized boolean
---@field HDOwningPlayer ABP_HDPlayerControllerBase_C
---@field OnClassSelected FWBP_DeployMenu_ClassSelectionListing_COnClassSelected
---@field bSelected boolean
---@field bRestricted boolean
---@field OnClassDeselected FWBP_DeployMenu_ClassSelectionListing_COnClassDeselected
---@field DefaultDisplaySymbolBrush FSlateBrush
---@field NoSymbolColor FLinearColor
---@field DefaultDisplayNameText FText
---@field SelectedBtnStyle FButtonStyle
---@field DeselectedBtnStyle FButtonStyle
---@field ClassSymbolDisabledTint FSlateColor
---@field ClassSymbolEnabledTint FSlateColor
---@field KitItemEntries TArray<FHDItemEntry>
---@field DefaultEqpSymbolBrush FSlateBrush
---@field DefaultEqpSymbolColor FLinearColor
---@field RestrictedTextColor FSlateColor
---@field UnrestrictedTextColor FSlateColor
---@field KitLimitationDisplayText FText
UWBP_DeployMenu_ClassSelectionListing_C = {}

---@param ColorOne FLinearColor
---@param ColorTwo FLinearColor
---@param bEqual boolean
function UWBP_DeployMenu_ClassSelectionListing_C:AreColorsNearlyEqual(ColorOne, ColorTwo, bEqual) end
function UWBP_DeployMenu_ClassSelectionListing_C:InternalFillEqpSlots() end
---@param EntriesToSort TArray<FHDItemEntry>
function UWBP_DeployMenu_ClassSelectionListing_C:SortItemEntriesInPlaceBySlotNum(EntriesToSort) end
---@param SlotNum int32
---@param SlotSymbolToUse UTexture2D
---@param bDesignTime boolean
function UWBP_DeployMenu_ClassSelectionListing_C:InternalSetEqpDisplaySymbolBySlotNum(SlotNum, SlotSymbolToUse, bDesignTime) end
function UWBP_DeployMenu_ClassSelectionListing_C:InternalSetupKitDisplayEqpSlots() end
---@param SlotNum int32
---@param EqpSlotImage UImage
function UWBP_DeployMenu_ClassSelectionListing_C:InternalGetEqpSlotImageWidgetByNum(SlotNum, EqpSlotImage) end
---@param bNewRestricted boolean
---@param NewRestrictionReason FText
function UWBP_DeployMenu_ClassSelectionListing_C:InternalSetClassRestrictedState(bNewRestricted, NewRestrictionReason) end
---@param bKitRestricted boolean
---@param KitRestrictionReason FText
function UWBP_DeployMenu_ClassSelectionListing_C:InternalUpdateClassRestrictedText(bKitRestricted, KitRestrictionReason) end
---@param bKitRestricted boolean
---@param KitRestrictionReason FText
function UWBP_DeployMenu_ClassSelectionListing_C:InternalSetupKitRestrictionDisplay(bKitRestricted, KitRestrictionReason) end
---@param bKitRestricted boolean
---@param KitRestrictionReason FText
function UWBP_DeployMenu_ClassSelectionListing_C:InternalIsKitRestricted(bKitRestricted, KitRestrictionReason) end
function UWBP_DeployMenu_ClassSelectionListing_C:InternalSetupKitDisplayName() end
function UWBP_DeployMenu_ClassSelectionListing_C:InternalSetupKitDisplaySymbol() end
---@param bSelected boolean
function UWBP_DeployMenu_ClassSelectionListing_C:SetSelected(bSelected) end
function UWBP_DeployMenu_ClassSelectionListing_C:ToggleClassSelection() end
---@param bNewSelected boolean
function UWBP_DeployMenu_ClassSelectionListing_C:InternalSetClassSelectionState(bNewSelected) end
function UWBP_DeployMenu_ClassSelectionListing_C:DeselectClass() end
function UWBP_DeployMenu_ClassSelectionListing_C:SelectClass() end
function UWBP_DeployMenu_ClassSelectionListing_C:InternalSetupPrimaryWeaponIcon() end
function UWBP_DeployMenu_ClassSelectionListing_C:UpdateRestrictedState() end
function UWBP_DeployMenu_ClassSelectionListing_C:InternalKitDisplaySetup() end
---@param Kit UHDKit
---@param OwningPC ABP_HDPlayerControllerBase_C
function UWBP_DeployMenu_ClassSelectionListing_C:Init(Kit, OwningPC) end
function UWBP_DeployMenu_ClassSelectionListing_C:BndEvt__SelectClassBtn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature() end
---@param IsDesignTime boolean
function UWBP_DeployMenu_ClassSelectionListing_C:PreConstruct(IsDesignTime) end
function UWBP_DeployMenu_ClassSelectionListing_C:Construct() end
---@param EntryPoint int32
function UWBP_DeployMenu_ClassSelectionListing_C:ExecuteUbergraph_WBP_DeployMenu_ClassSelectionListing(EntryPoint) end
---@param DeselectedClassWidget UWBP_DeployMenu_ClassSelectionListing_C
function UWBP_DeployMenu_ClassSelectionListing_C:OnClassDeselected__DelegateSignature(DeselectedClassWidget) end
---@param SelectedClassWidget UWBP_DeployMenu_ClassSelectionListing_C
function UWBP_DeployMenu_ClassSelectionListing_C:OnClassSelected__DelegateSignature(SelectedClassWidget) end


