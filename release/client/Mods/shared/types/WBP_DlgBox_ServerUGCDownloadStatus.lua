---@meta

---@class UWBP_DlgBox_ServerUGCDownloadStatus_C : UHDUGCLoadProgressScreen
---@field UberGraphFrame FPointerToUberGraphFrame
---@field StatusProgressBar UProgressBar
---@field StatusText UTextBlock
---@field UGCRemaining int32
---@field UGCTotal int32
UWBP_DlgBox_ServerUGCDownloadStatus_C = {}

function UWBP_DlgBox_ServerUGCDownloadStatus_C:Construct() end
function UWBP_DlgBox_ServerUGCDownloadStatus_C:DummyInput() end
---@param TotalUGCToLoad int32
function UWBP_DlgBox_ServerUGCDownloadStatus_C:SetupProgressScreen(TotalUGCToLoad) end
---@param NumUGCRemainingToLoad int32
function UWBP_DlgBox_ServerUGCDownloadStatus_C:UpdateLoadProgress(NumUGCRemainingToLoad) end
function UWBP_DlgBox_ServerUGCDownloadStatus_C:StatusDisplayUpdate() end
---@param EntryPoint int32
function UWBP_DlgBox_ServerUGCDownloadStatus_C:ExecuteUbergraph_WBP_DlgBox_ServerUGCDownloadStatus(EntryPoint) end


