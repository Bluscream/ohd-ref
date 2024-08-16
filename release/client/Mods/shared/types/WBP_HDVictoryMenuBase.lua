---@meta

---@class UWBP_HDVictoryMenuBase_C : UVictoryMenu
---@field UberGraphFrame FPointerToUberGraphFrame
---@field BluforForceText UTextBlock
---@field BluforTeamScoreText UTextBlock
---@field ElapsedTimeText UTextBlock
---@field GameModeNameText UTextBlock
---@field MapNameText UTextBlock
---@field OpforForceText UTextBlock
---@field OpforTeamScoreText UTextBlock
---@field VictoryText UTextBlock
---@field BluforVictoryText FText
---@field OpforVictoryText FText
---@field NoTeamVictoryText FText
---@field MenuMusicAC UAudioComponent
---@field WinMusicBlufor USoundBase
---@field WinMusicOpfor USoundBase
---@field LossMusicBlufor USoundBase
---@field LossMusicOpfor USoundBase
---@field WinningTeamState AHDTeamState
---@field BluforTeamState AHDTeamState
---@field BluforFactionInfoClass TSubclassOf<UBP_HDFactionInfoBase_C>
---@field OpforTeamState AHDTeamState
---@field OpforFactionInfoClass TSubclassOf<UBP_HDFactionInfoBase_C>
UWBP_HDVictoryMenuBase_C = {}

---@param PlayerTeam EHDTeam
function UWBP_HDVictoryMenuBase_C:GetPlayerTeam(PlayerTeam) end
---@param PlayerTeam EHDTeam
---@param bPlayerWon boolean
---@param SoundToUse USoundBase
function UWBP_HDVictoryMenuBase_C:GetMusicTrackToUse(PlayerTeam, bPlayerWon, SoundToUse) end
function UWBP_HDVictoryMenuBase_C:PlayWinLossMenuMusic() end
function UWBP_HDVictoryMenuBase_C:SetupTeamScoreText() end
function UWBP_HDVictoryMenuBase_C:SetupGameModeNameText() end
function UWBP_HDVictoryMenuBase_C:SetupElapsedTimeText() end
function UWBP_HDVictoryMenuBase_C:SetupMapNameText() end
function UWBP_HDVictoryMenuBase_C:SetupForceNameText() end
function UWBP_HDVictoryMenuBase_C:SetupVictoryText() end
---@param InMyGeometry FGeometry
---@param InMouseEvent FPointerEvent
---@return FEventReply
function UWBP_HDVictoryMenuBase_C:OnMouseButtonDoubleClick(InMyGeometry, InMouseEvent) end
---@param MyGeometry FGeometry
---@param MouseEvent FPointerEvent
---@return FEventReply
function UWBP_HDVictoryMenuBase_C:OnMouseButtonDown(MyGeometry, MouseEvent) end
function UWBP_HDVictoryMenuBase_C:Construct() end
function UWBP_HDVictoryMenuBase_C:OnVictoryInit() end
---@param EntryPoint int32
function UWBP_HDVictoryMenuBase_C:ExecuteUbergraph_WBP_HDVictoryMenuBase(EntryPoint) end


