---@meta

---@class UWBP_DeployMenu_SpawnMinimap_C : UDeployMenu_SpawnMinimap
---@field UberGraphFrame FPointerToUberGraphFrame
---@field MapMI UMaterialInstanceDynamic
---@field MapTexture TSoftObjectPtr<UTexture2D>
---@field InitialZoom float
---@field MapMaterial UMaterialInterface
---@field PanSpeedFactor float
---@field ZoomDivisor float
---@field ZoomStep float
---@field MapTint FLinearColor
---@field bDonePreloading boolean
---@field bMenuInitialized boolean
---@field CurrentMapTexture UTexture2D
---@field NumContentToLoad int32
---@field NumLoadedContent int32
---@field OnPreloadFinished FWBP_DeployMenu_SpawnMinimap_COnPreloadFinished
---@field OnSpawnPointSelected FWBP_DeployMenu_SpawnMinimap_COnSpawnPointSelected
---@field OnSpawnPointDeselected FWBP_DeployMenu_SpawnMinimap_COnSpawnPointDeselected
UWBP_DeployMenu_SpawnMinimap_C = {}

function UWBP_DeployMenu_SpawnMinimap_C:UpdatePlayerPOIs() end
---@param NewMapTexture UTexture2D
function UWBP_DeployMenu_SpawnMinimap_C:SetCurrentMapTexture(NewMapTexture) end
---@param bPreloading boolean
function UWBP_DeployMenu_SpawnMinimap_C:HasPreloadInProgress(bPreloading) end
function UWBP_DeployMenu_SpawnMinimap_C:ApplyPreloadedContent() end
function UWBP_DeployMenu_SpawnMinimap_C:PreloadContent() end
---@param ZoomDecrement float
function UWBP_DeployMenu_SpawnMinimap_C:ZoomOut(ZoomDecrement) end
---@param ZoomIncrement float
function UWBP_DeployMenu_SpawnMinimap_C:ZoomIn(ZoomIncrement) end
---@param MyGeometry FGeometry
---@param MouseEvent FPointerEvent
---@return FEventReply
function UWBP_DeployMenu_SpawnMinimap_C:OnMouseWheel(MyGeometry, MouseEvent) end
---@param MyGeometry FGeometry
---@param MouseEvent FPointerEvent
---@return FEventReply
function UWBP_DeployMenu_SpawnMinimap_C:OnMouseButtonUp(MyGeometry, MouseEvent) end
function UWBP_DeployMenu_SpawnMinimap_C:UpdateMapMatParams() end
---@param Geometry FGeometry
---@param MouseEvent FPointerEvent
---@param LocalDelta FVector2D
function UWBP_DeployMenu_SpawnMinimap_C:GetLocalCursorDelta(Geometry, MouseEvent, LocalDelta) end
---@param MyGeometry FGeometry
---@param MouseEvent FPointerEvent
---@return FEventReply
function UWBP_DeployMenu_SpawnMinimap_C:OnMouseMove(MyGeometry, MouseEvent) end
---@param MyGeometry FGeometry
---@param MouseEvent FPointerEvent
---@return FEventReply
function UWBP_DeployMenu_SpawnMinimap_C:OnMouseButtonDown(MyGeometry, MouseEvent) end
---@param MapTexture UTexture2D
function UWBP_DeployMenu_SpawnMinimap_C:InitMapBg(MapTexture) end
---@param Loaded UObject
function UWBP_DeployMenu_SpawnMinimap_C:OnLoaded_BACDC4954F814289E55DD7AAEBE3E34E(Loaded) end
---@param Loaded UClass
function UWBP_DeployMenu_SpawnMinimap_C:OnLoaded_BB8D079144A98AFE7BD3849D43A40947(Loaded) end
function UWBP_DeployMenu_SpawnMinimap_C:Construct() end
---@param IsDesignTime boolean
function UWBP_DeployMenu_SpawnMinimap_C:PreConstruct(IsDesignTime) end
---@param MyGeometry FGeometry
---@param MouseEvent FPointerEvent
function UWBP_DeployMenu_SpawnMinimap_C:OnMouseEnter(MyGeometry, MouseEvent) end
---@param MyGeometry FGeometry
---@param InDeltaTime float
function UWBP_DeployMenu_SpawnMinimap_C:Tick(MyGeometry, InDeltaTime) end
---@param AssetsToLoad TArray<TSoftObjectPtr<UObject>>
---@param ClassesToLoad TArray<TSoftClassPtr<UObject>>
function UWBP_DeployMenu_SpawnMinimap_C:OnContentPreloadStarted(AssetsToLoad, ClassesToLoad) end
function UWBP_DeployMenu_SpawnMinimap_C:OnContentPreloadFinished() end
function UWBP_DeployMenu_SpawnMinimap_C:OnAsyncLoadCompleted() end
---@param POI UDFPOIWidget
---@param bSelected boolean
function UWBP_DeployMenu_SpawnMinimap_C:ReceiveOnPOISelectionStateChanged(POI, bSelected) end
---@param EntryPoint int32
function UWBP_DeployMenu_SpawnMinimap_C:ExecuteUbergraph_WBP_DeployMenu_SpawnMinimap(EntryPoint) end
---@param POISpawnPointActor AActor
function UWBP_DeployMenu_SpawnMinimap_C:OnSpawnPointDeselected__DelegateSignature(POISpawnPointActor) end
---@param POISpawnPointActor AActor
function UWBP_DeployMenu_SpawnMinimap_C:OnSpawnPointSelected__DelegateSignature(POISpawnPointActor) end
function UWBP_DeployMenu_SpawnMinimap_C:OnPreloadFinished__DelegateSignature() end


