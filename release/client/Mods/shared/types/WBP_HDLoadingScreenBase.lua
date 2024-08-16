---@meta

---@class UWBP_HDLoadingScreenBase_C : UUserWidget
---@field UberGraphFrame FPointerToUberGraphFrame
---@field BackgroundImage_Map UImage
---@field BluforFactionName UTextBlock
---@field BluforTeamInfo UOverlay
---@field BluforTeamReinforcementText UTextBlock
---@field DeploymentText UTextBlock
---@field DeploymentThrobber UThrobber
---@field GameModeHeader UOverlay
---@field GameModeNameText UTextBlock
---@field MapNameText UTextBlock
---@field MapOverview UOverlay
---@field MinimapImage UImage
---@field OpforFactionName UTextBlock
---@field OpforTeamInfo UOverlay
---@field OpforTeamReinforcementText UTextBlock
---@field MapBgImages TArray<TSoftObjectPtr<UTexture2D>>
---@field MapBgBrush FSlateBrush
---@field bEnableMapOverviewUI boolean
---@field bEnableTeamInfoUI boolean
UWBP_HDLoadingScreenBase_C = {}

---@param InBgImage TSoftObjectPtr<UTexture2D>
function UWBP_HDLoadingScreenBase_C:SetMapBgImage(InBgImage) end
---@param TicketCount int32
function UWBP_HDLoadingScreenBase_C:SetOpforStartingTicketCount(TicketCount) end
---@param TicketCount int32
function UWBP_HDLoadingScreenBase_C:SetBluforStartingTicketCount(TicketCount) end
---@param NewVisibility ESlateVisibility
function UWBP_HDLoadingScreenBase_C:SetMapElementVisibility(NewVisibility) end
---@param Description FLoadingScreenDescription
function UWBP_HDLoadingScreenBase_C:SetLoadingScreenDescription(Description) end
---@param LevelData FLoadScreenLevelData
function UWBP_HDLoadingScreenBase_C:SetLevelLoadData(LevelData) end
---@param IsDesignTime boolean
function UWBP_HDLoadingScreenBase_C:PreConstruct(IsDesignTime) end
function UWBP_HDLoadingScreenBase_C:OnInitialized() end
---@param EntryPoint int32
function UWBP_HDLoadingScreenBase_C:ExecuteUbergraph_WBP_HDLoadingScreenBase(EntryPoint) end


