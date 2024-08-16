---@meta

---@class FLoadScreenLevelData
---@field MapFriendlyName FText
---@field GameModeFriendlyName FText
---@field MapLoadingImage TSoftObjectPtr<UTexture2D>
---@field bMainMenuMap boolean
---@field StartingTicketsBlufor int32
---@field StartingTicketsOpfor int32
FLoadScreenLevelData = {}



---@class FLoadingScreenDescription
---@field MinimumLoadingScreenDisplayTime float
---@field bAutoCompleteWhenLoadingCompletes boolean
---@field bMoviesAreSkippable boolean
---@field bWaitForManualStop boolean
---@field MoviePaths TArray<FString>
---@field PlaybackType EMoviePlaybackType
---@field bShowOverlayWidget boolean
---@field OverlayWidgetClass FSoftClassPath
FLoadingScreenDescription = {}



---@class ILoadingScreenWidgetInterface : IInterface
ILoadingScreenWidgetInterface = {}

---@param Description FLoadingScreenDescription
function ILoadingScreenWidgetInterface:SetLoadingScreenDescription(Description) end
---@param LevelData FLoadScreenLevelData
function ILoadingScreenWidgetInterface:SetLevelLoadData(LevelData) end


---@class ULoadingScreenSettings : UDeveloperSettings
---@field bUseStartupScreen boolean
---@field StartupScreen FLoadingScreenDescription
---@field DefaultScreen FLoadingScreenDescription
ULoadingScreenSettings = {}



