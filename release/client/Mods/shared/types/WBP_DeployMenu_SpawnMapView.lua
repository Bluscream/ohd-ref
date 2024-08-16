---@meta

---@class UWBP_DeployMenu_SpawnMapView_C : UDeployMenu_SpawnMapView
---@field UberGraphFrame FPointerToUberGraphFrame
---@field Minimap UWBP_DeployMenu_SpawnMinimap_C
---@field bMenuInitialized boolean
---@field OnPreloadFinished FWBP_DeployMenu_SpawnMapView_COnPreloadFinished
---@field SelectedPOIActor AActor
---@field OnSpawnPointSelected FWBP_DeployMenu_SpawnMapView_COnSpawnPointSelected
---@field OnSpawnPointDeselected FWBP_DeployMenu_SpawnMapView_COnSpawnPointDeselected
UWBP_DeployMenu_SpawnMapView_C = {}

function UWBP_DeployMenu_SpawnMapView_C:UpdatePlayerPOIs() end
---@param bSuccess boolean
---@param MinimapImg TSoftObjectPtr<UTexture2D>
---@param MinimapSettings FMinimapGenerationSettings
function UWBP_DeployMenu_SpawnMapView_C:GetMinimapData(bSuccess, MinimapImg, MinimapSettings) end
function UWBP_DeployMenu_SpawnMapView_C:PreloadContent() end
function UWBP_DeployMenu_SpawnMapView_C:Construct() end
function UWBP_DeployMenu_SpawnMapView_C:BndEvt__Minimap_K2Node_ComponentBoundEvent_1_OnPreloadFinished__DelegateSignature() end
UWBP_DeployMenu_SpawnMapView_C['OnPreloadFinished (SpawnMapView)'] = function() end
---@param POISpawnPointActor AActor
function UWBP_DeployMenu_SpawnMapView_C:BndEvt__Minimap_K2Node_ComponentBoundEvent_0_OnSpawnPointSelected__DelegateSignature(POISpawnPointActor) end
---@param POISpawnPointActor AActor
function UWBP_DeployMenu_SpawnMapView_C:BndEvt__Minimap_K2Node_ComponentBoundEvent_2_OnSpawnPointDeselected__DelegateSignature(POISpawnPointActor) end
---@param EntryPoint int32
function UWBP_DeployMenu_SpawnMapView_C:ExecuteUbergraph_WBP_DeployMenu_SpawnMapView(EntryPoint) end
function UWBP_DeployMenu_SpawnMapView_C:OnSpawnPointDeselected__DelegateSignature() end
---@param POISpawnPointActor AActor
function UWBP_DeployMenu_SpawnMapView_C:OnSpawnPointSelected__DelegateSignature(POISpawnPointActor) end
function UWBP_DeployMenu_SpawnMapView_C:OnPreloadFinished__DelegateSignature() end


