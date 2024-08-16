---@meta

---@class UWBP_HDRadialMenu_C : UWBP_HDRadialMenuBase_C
---@field UberGraphFrame FPointerToUberGraphFrame
---@field ShowFirst UWidgetAnimation
---@field ShowCategory UWidgetAnimation
---@field ShowBuild UWidgetAnimation
---@field CategoryTitle UTextBlock
---@field CenterCircle UImage
---@field MenuOptionsRing UWBP_RadialMenuBase_C
---@field MenuSubselection UTextBlock
---@field SelectedItem FName
---@field SelectedMenuOption FName
---@field CategoryData FSHDRadialMenu_OptionData
---@field bPickingItem boolean
---@field SelectedItemData FSHDRadialMenu_OptionData
---@field SelectedIndex int32
---@field CategorySelectSound USoundBase
---@field GoBackSound USoundBase
---@field IconStyle FSRadialMenuIconSettings
---@field MenuOptionsMain UDataTable
---@field MenuOptionsSelected UDataTable
---@field DisabledIconStyle FSRadialMenuIconSettings
---@field RallypointRespawnTimeDefault float
---@field OutpostRespawnTime float
---@field NumberOfSegments int32
UWBP_HDRadialMenu_C = {}

---@return FText
function UWBP_HDRadialMenu_C:GetOutpostName() end
---@param OwnerPawn ABP_HDPlayerCharacterBase_C
---@param TimeRemaining FText
function UWBP_HDRadialMenu_C:GetOutpostTimeRemaining(OwnerPawn, TimeRemaining) end
---@return FText
function UWBP_HDRadialMenu_C:GetRallypointName() end
---@param OwnerPawn ABP_HDPlayerCharacterBase_C
---@param TimeRemaining FText
function UWBP_HDRadialMenu_C:GetRallypointTimeRemaining(OwnerPawn, TimeRemaining) end
---@param VictimPawn APawn
---@param VictimController AController
---@param KillingDamage float
---@param DamageEvent FDamageEvent
---@param InstigatingPawn APawn
---@param DamageCauser AActor
function UWBP_HDRadialMenu_C:OwnerPawnDeath(VictimPawn, VictimController, KillingDamage, DamageEvent, InstigatingPawn, DamageCauser) end
---@param OptionData FSHDRadialMenu_OptionData
---@param Widget UWBP_RadialMenuIconBase_C
function UWBP_HDRadialMenu_C:MakeOutpostIcon(OptionData, Widget) end
---@param OptionData FSHDRadialMenu_OptionData
---@param Widget UWBP_RadialMenuIconBase_C
function UWBP_HDRadialMenu_C:MakeRallypointIcon(OptionData, Widget) end
---@param OptionData FSHDRadialMenu_OptionData
---@param Widget UWBP_RadialMenuIconBase_C
function UWBP_HDRadialMenu_C:MakeSpottingIcon(OptionData, Widget) end
function UWBP_HDRadialMenu_C:SelectSubmenu() end
function UWBP_HDRadialMenu_C:PopulateSubmenuOptions() end
---@param MenuOptions UDataTable
function UWBP_HDRadialMenu_C:PopulateMenuOptions(MenuOptions) end
---@param RowName FName
---@param ItemData FSHDRadialMenu_OptionData
function UWBP_HDRadialMenu_C:GetItemData(RowName, ItemData) end
---@param OutRowNames TArray<FName>
function UWBP_HDRadialMenu_C:GetItemNamesForSelectedOption(OutRowNames) end
---@param Category FName
---@param CategoryData FSHDRadialMenu_OptionData
function UWBP_HDRadialMenu_C:GetCategoryData(Category, CategoryData) end
---@param Categories TArray<FName>
function UWBP_HDRadialMenu_C:GetCategories(Categories) end
---@return FText
function UWBP_HDRadialMenu_C:GetCategoryName() end
---@param NewSelection int32
---@param OldSelection int32
function UWBP_HDRadialMenu_C:BndEvt__categoryRing_K2Node_ComponentBoundEvent_1_SelectionChanged__DelegateSignature(NewSelection, OldSelection) end
function UWBP_HDRadialMenu_C:Submit() end
function UWBP_HDRadialMenu_C:GoBack() end
---@param MyGeometry FGeometry
---@param InDeltaTime float
function UWBP_HDRadialMenu_C:Tick(MyGeometry, InDeltaTime) end
function UWBP_HDRadialMenu_C:Construct() end
function UWBP_HDRadialMenu_C:OnCancel() end
---@param EntryPoint int32
function UWBP_HDRadialMenu_C:ExecuteUbergraph_WBP_HDRadialMenu(EntryPoint) end


