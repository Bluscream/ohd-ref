---@meta

---@class UWBP_DeployMenu_DeployButton_C : UUserWidget
---@field UberGraphFrame FPointerToUberGraphFrame
---@field DeployBtn UButton
---@field DeployBtnText UTextBlock
---@field bCloseBtnBehavior boolean
---@field DeployText FText
---@field CloseMenuText FText
---@field OnClicked FWBP_DeployMenu_DeployButton_COnClicked
---@field OnPressed FWBP_DeployMenu_DeployButton_COnPressed
---@field OnReleased FWBP_DeployMenu_DeployButton_COnReleased
---@field OnHovered FWBP_DeployMenu_DeployButton_COnHovered
---@field OnUnhovered FWBP_DeployMenu_DeployButton_COnUnhovered
---@field SelectSpawnText FText
---@field bDeploying boolean
---@field DeployBtnStyle FButtonStyle
---@field CancelBtnStyle FButtonStyle
---@field bDesignPreviewCancelBtn boolean
---@field CancelDeploymentText FText
---@field bSpawnPointSelected boolean
---@field bUseCancelBehavior boolean
UWBP_DeployMenu_DeployButton_C = {}

---@param SpawnSeconds int32
function UWBP_DeployMenu_DeployButton_C:InternalGetSpawnTimeRemaining(SpawnSeconds) end
function UWBP_DeployMenu_DeployButton_C:InternalUpdateBtnStyle() end
---@param bDeploying boolean
---@param bSpawnPointSelected boolean
function UWBP_DeployMenu_DeployButton_C:InternalUpdateBtnText(bDeploying, bSpawnPointSelected) end
---@param bPlayerAlive boolean
---@param bDeploymentQueued boolean
---@param bSpawnPointSelected boolean
function UWBP_DeployMenu_DeployButton_C:UpdateDeployBtnState(bPlayerAlive, bDeploymentQueued, bSpawnPointSelected) end
---@param IsDesignTime boolean
function UWBP_DeployMenu_DeployButton_C:PreConstruct(IsDesignTime) end
function UWBP_DeployMenu_DeployButton_C:BndEvt__DeployBtn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature() end
function UWBP_DeployMenu_DeployButton_C:BndEvt__DeployBtn_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature() end
function UWBP_DeployMenu_DeployButton_C:BndEvt__DeployBtn_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature() end
function UWBP_DeployMenu_DeployButton_C:BndEvt__DeployBtn_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature() end
function UWBP_DeployMenu_DeployButton_C:BndEvt__DeployBtn_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature() end
---@param MyGeometry FGeometry
---@param InDeltaTime float
function UWBP_DeployMenu_DeployButton_C:Tick(MyGeometry, InDeltaTime) end
---@param EntryPoint int32
function UWBP_DeployMenu_DeployButton_C:ExecuteUbergraph_WBP_DeployMenu_DeployButton(EntryPoint) end
---@param bCloseBtn boolean
function UWBP_DeployMenu_DeployButton_C:OnUnhovered__DelegateSignature(bCloseBtn) end
---@param bCloseBtn boolean
function UWBP_DeployMenu_DeployButton_C:OnHovered__DelegateSignature(bCloseBtn) end
---@param bCloseBtn boolean
function UWBP_DeployMenu_DeployButton_C:OnReleased__DelegateSignature(bCloseBtn) end
---@param bCloseBtn boolean
function UWBP_DeployMenu_DeployButton_C:OnPressed__DelegateSignature(bCloseBtn) end
---@param bCloseBtn boolean
function UWBP_DeployMenu_DeployButton_C:OnClicked__DelegateSignature(bCloseBtn) end


