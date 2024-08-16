---@meta

---@class UWBP_JoinServerDetailsPanel_C : UUserWidget
---@field UberGraphFrame FPointerToUberGraphFrame
---@field AdvancedServerData UWBP_ServerListModifierSettings_AdvancedServerData_C
---@field BasicServerData UWBP_ServerListModifierSettings_BasicServerData_C
---@field JoinGameBtn UButton
---@field MapPreviewImg UImage
---@field OnJoinServerBtnClicked FWBP_JoinServerDetailsPanel_COnJoinServerBtnClicked
---@field PlaceholderMapPreviewImg UTexture2D
UWBP_JoinServerDetailsPanel_C = {}

---@param NewImg UTexture2D
function UWBP_JoinServerDetailsPanel_C:SetMapPreviewImage(NewImg) end
function UWBP_JoinServerDetailsPanel_C:HideServerDetails() end
function UWBP_JoinServerDetailsPanel_C:ShowServerDetails() end
---@param ServerData FHDServerInfo
function UWBP_JoinServerDetailsPanel_C:UpdateServerMetaData(ServerData) end
---@param ServerData FHDServerInfo
function UWBP_JoinServerDetailsPanel_C:UpdateServerData(ServerData) end
---@param ServerInfo FHDServerInfo
function UWBP_JoinServerDetailsPanel_C:SetupServerDetails(ServerInfo) end
function UWBP_JoinServerDetailsPanel_C:BndEvt__JoinGameBtn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature() end
function UWBP_JoinServerDetailsPanel_C:OnInitialized() end
---@param IsDesignTime boolean
function UWBP_JoinServerDetailsPanel_C:PreConstruct(IsDesignTime) end
---@param EntryPoint int32
function UWBP_JoinServerDetailsPanel_C:ExecuteUbergraph_WBP_JoinServerDetailsPanel(EntryPoint) end
function UWBP_JoinServerDetailsPanel_C:OnJoinServerBtnClicked__DelegateSignature() end


