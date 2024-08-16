---@meta

---@class UWBP_ServerDetails_C : UUserWidget
---@field UberGraphFrame FPointerToUberGraphFrame
---@field FavoriteServerBtn UCheckBox
---@field JoinServerBtn UButton
---@field ServerAddrText UTextBlock
---@field ServerDataDescriptionText UTextBlock
---@field ServerDataNameText UTextBlock
---@field ServerDataSubtitleText UTextBlock
---@field ServerGMText UTextBlock
---@field ServerMapPreviewImg UImage
---@field ServerMapText UTextBlock
---@field ServerStatusText UTextBlock
---@field OnJoinServerBtnClicked FWBP_ServerDetails_COnJoinServerBtnClicked
UWBP_ServerDetails_C = {}

---@param ServerInfo FHDServerInfo
function UWBP_ServerDetails_C:UpdateServerMetaData(ServerInfo) end
---@param ServerInfo FHDServerInfo
function UWBP_ServerDetails_C:UpdateServerData(ServerInfo) end
---@param ServerInfo FHDServerInfo
function UWBP_ServerDetails_C:SetupServerDetails(ServerInfo) end
function UWBP_ServerDetails_C:BndEvt__JoinServerBtn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature() end
---@param EntryPoint int32
function UWBP_ServerDetails_C:ExecuteUbergraph_WBP_ServerDetails(EntryPoint) end
function UWBP_ServerDetails_C:OnJoinServerBtnClicked__DelegateSignature() end


