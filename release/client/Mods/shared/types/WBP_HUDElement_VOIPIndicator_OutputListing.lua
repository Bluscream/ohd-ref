---@meta

---@class UWBP_HUDElement_VOIPIndicator_OutputListing_C : UHDVoipIndicatorListingWidgetBase
---@field UberGraphFrame FPointerToUberGraphFrame
---@field VOIPInputUIAnim UWidgetAnimation
---@field PlayerClassIcon UImage
---@field PlayerName UTextBlock
---@field bTintClassSymbolOnly boolean
---@field LocalChannelColor FSlateColor
---@field SquadChannelColor FSlateColor
---@field CommandChannelColor FSlateColor
---@field PlayerLoadout UHDKit
---@field bVoiceMsgInfoSet boolean
---@field bActive boolean
UWBP_HUDElement_VOIPIndicator_OutputListing_C = {}

function UWBP_HUDElement_VOIPIndicator_OutputListing_C:CheckForClassSymbolUpdates() end
---@param Loadout UHDKit
function UWBP_HUDElement_VOIPIndicator_OutputListing_C:UpdateClassSymbol(Loadout) end
---@param Loadout UHDKit
---@param ClassSymbolToUse FSlateBrush
function UWBP_HUDElement_VOIPIndicator_OutputListing_C:GetClassSymbolForLoadout(Loadout, ClassSymbolToUse) end
---@param PlayerState APlayerState
---@param Loadout UHDKit
function UWBP_HUDElement_VOIPIndicator_OutputListing_C:GetMostValidLoadoutFromPS(PlayerState, Loadout) end
---@param bIsDesignTime boolean
function UWBP_HUDElement_VOIPIndicator_OutputListing_C:OnVoiceMsgInfoSet(bIsDesignTime) end
---@param MyGeometry FGeometry
---@param InDeltaTime float
function UWBP_HUDElement_VOIPIndicator_OutputListing_C:Tick(MyGeometry, InDeltaTime) end
---@param NewLoadout UHDKit
function UWBP_HUDElement_VOIPIndicator_OutputListing_C:PlayerLoadoutChanged(NewLoadout) end
---@param IsDesignTime boolean
function UWBP_HUDElement_VOIPIndicator_OutputListing_C:PreConstruct(IsDesignTime) end
function UWBP_HUDElement_VOIPIndicator_OutputListing_C:OnInitialized() end
function UWBP_HUDElement_VOIPIndicator_OutputListing_C:Activate() end
function UWBP_HUDElement_VOIPIndicator_OutputListing_C:Deactivate() end
function UWBP_HUDElement_VOIPIndicator_OutputListing_C:InputAnimFinished() end
---@param EntryPoint int32
function UWBP_HUDElement_VOIPIndicator_OutputListing_C:ExecuteUbergraph_WBP_HUDElement_VOIPIndicator_OutputListing(EntryPoint) end


