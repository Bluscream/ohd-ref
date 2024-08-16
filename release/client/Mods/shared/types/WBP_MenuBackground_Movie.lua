---@meta

---@class UWBP_MenuBackground_Movie_C : UUserWidget
---@field UberGraphFrame FPointerToUberGraphFrame
---@field BgFilterImg UImage
---@field BgMovieImg UImage
---@field MoviePlayer UMediaPlayer
---@field MoviePlaylist UMediaPlaylist
---@field FilterImgBrush FSlateBrush
---@field FilterImgColor FLinearColor
UWBP_MenuBackground_Movie_C = {}

function UWBP_MenuBackground_Movie_C:OnInitialized() end
---@param IsDesignTime boolean
function UWBP_MenuBackground_Movie_C:PreConstruct(IsDesignTime) end
function UWBP_MenuBackground_Movie_C:Destruct() end
---@param EntryPoint int32
function UWBP_MenuBackground_Movie_C:ExecuteUbergraph_WBP_MenuBackground_Movie(EntryPoint) end


