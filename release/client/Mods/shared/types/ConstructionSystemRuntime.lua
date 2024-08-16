---@meta

---@class APrefabricatorConstructionSnap : AActor
---@field ConstructionSnapComponent UPrefabricatorConstructionSnapComponent
APrefabricatorConstructionSnap = {}



---@class FConstructionSystemSaveConstructedItem
---@field PrefabAsset UPrefabricatorAssetInterface
---@field Seed int32
---@field Transform FTransform
FConstructionSystemSaveConstructedItem = {}



---@class FConstructionSystemSavePlayerInfo
---@field bRestorePlayerInfo boolean
---@field Transform FTransform
---@field ControlRotation FRotator
FConstructionSystemSavePlayerInfo = {}



---@class FConstructionSystemUICategory
---@field DisplayName FText
---@field Icon UTexture2D
---@field PrefabEntries TArray<FConstructionSystemUIPrefabEntry>
FConstructionSystemUICategory = {}



---@class FConstructionSystemUIPrefabEntry
---@field DisplayName FText
---@field Tooltip FText
---@field Icon UTexture2D
---@field Prefab UPrefabricatorAssetInterface
FConstructionSystemUIPrefabEntry = {}



---@class FPCSnapConstraintFloor
---@field AttachX boolean
---@field AttachXNegative boolean
---@field AttachY boolean
---@field AttachYNegative boolean
---@field AttachZ boolean
---@field AttachZNegative boolean
FPCSnapConstraintFloor = {}



---@class FPCSnapConstraintWall
---@field AttachTop boolean
---@field AttachBottom boolean
---@field AttachLeft boolean
---@field AttachRight boolean
FPCSnapConstraintWall = {}



---@class IConstructionSystemBuildUI : IInterface
IConstructionSystemBuildUI = {}

---@param UIAsset UConstructionSystemUIAsset
function IConstructionSystemBuildUI:SetUIAsset(UIAsset) end
---@param ConstructionSystem UConstructionSystemComponent
function IConstructionSystemBuildUI:SetConstructionSystem(ConstructionSystem) end


---@class UConstructionSystemBuildTool : UConstructionSystemTool
---@field TraceDistance float
---@field CursorRotationStepAngle float
---@field Cursor UConstructionSystemCursor
---@field ActivePrefabAsset UPrefabricatorAssetInterface
UConstructionSystemBuildTool = {}

---@param InActivePrefabAsset UPrefabricatorAssetInterface
function UConstructionSystemBuildTool:SetActivePrefab(InActivePrefabAsset) end
---@param NumSteps float
function UConstructionSystemBuildTool:HandleInput_RotateCursorStep(NumSteps) end
function UConstructionSystemBuildTool:HandleInput_CursorMovePrev() end
function UConstructionSystemBuildTool:HandleInput_CursorMoveNext() end
function UConstructionSystemBuildTool:HandleInput_ConstructAtCursor() end


---@class UConstructionSystemComponent : UActorComponent
---@field CursorMaterial UMaterialInterface
---@field CursorInvalidMaterial UMaterialInterface
---@field TraceStartDistance float
---@field TraceSweepRadius float
---@field ConstructionCameraActor AActor
---@field ConstructionCameraTransitionTime float
---@field ConstructionCameraTransitionExp float
---@field BuildMenuUI TSubclassOf<UUserWidget>
---@field BuildMenuData UConstructionSystemUIAsset
---@field BuildMenuUIInstance UUserWidget
---@field ActiveToolType EConstructionSystemToolType
---@field Tools TMap<EConstructionSystemToolType, UConstructionSystemTool>
UConstructionSystemComponent = {}

function UConstructionSystemComponent:ToggleConstructionSystem() end
function UConstructionSystemComponent:ShowBuildMenu() end
---@param InToolType EConstructionSystemToolType
function UConstructionSystemComponent:SetActiveTool(InToolType) end
function UConstructionSystemComponent:HideBuildMenu() end
---@param InToolType EConstructionSystemToolType
---@return UConstructionSystemTool
function UConstructionSystemComponent:GetTool(InToolType) end
---@return EConstructionSystemToolType
function UConstructionSystemComponent:GetActiveToolType() end
---@return UConstructionSystemTool
function UConstructionSystemComponent:GetActiveTool() end
---@param InToolType EConstructionSystemToolType
function UConstructionSystemComponent:EnableConstructionSystem(InToolType) end
function UConstructionSystemComponent:DisableConstructionSystem() end


---@class UConstructionSystemCursor : UObject
---@field CursorGhostActor APrefabActor
---@field CursorSeed int32
---@field CursorMaterial UMaterialInterface
---@field CursorInvalidMaterial UMaterialInterface
---@field SnapComponents TArray<UPrefabricatorConstructionSnapComponent>
---@field ActiveSnapComponentIndex int32
UConstructionSystemCursor = {}



---@class UConstructionSystemItemUserData : UAssetUserData
---@field Seed int32
UConstructionSystemItemUserData = {}



---@class UConstructionSystemRemoveTool : UConstructionSystemTool
---@field TraceDistance float
---@field FocusedActor TWeakObjectPtr<APrefabActor>
UConstructionSystemRemoveTool = {}

function UConstructionSystemRemoveTool:HandleInput_RemoveAtCursor() end


---@class UConstructionSystemSaveGame : USaveGame
---@field SaveSlotName FString
---@field UserIndex uint32
---@field PlayerInfo FConstructionSystemSavePlayerInfo
---@field ConstructedItems TArray<FConstructionSystemSaveConstructedItem>
UConstructionSystemSaveGame = {}



---@class UConstructionSystemSaveSystem : UBlueprintFunctionLibrary
UConstructionSystemSaveSystem = {}

---@param WorldContextObject UObject
---@param SaveSlotName FString
---@param UserIndex int32
---@param bSavePlayerState boolean
function UConstructionSystemSaveSystem:SaveConstructionSystemLevel(WorldContextObject, SaveSlotName, UserIndex, bSavePlayerState) end
---@param WorldContextObject UObject
---@param LevelName FName
---@param bAbsolute boolean
---@param SaveSlotName FString
---@param UserIndex int32
function UConstructionSystemSaveSystem:LoadConstructionSystemLevel(WorldContextObject, LevelName, bAbsolute, SaveSlotName, UserIndex) end
---@param WorldContextObject UObject
function UConstructionSystemSaveSystem:HandleConstructionSystemLevelLoad(WorldContextObject) end


---@class UConstructionSystemTool : UObject
UConstructionSystemTool = {}


---@class UConstructionSystemUIAsset : UDataAsset
---@field MenuTitle FText
---@field Categories TArray<FConstructionSystemUICategory>
UConstructionSystemUIAsset = {}



---@class UPrefabricatorConstructionSnapComponent : UBoxComponent
---@field SnapType EPrefabricatorConstructionSnapType
---@field FloorConstraint FPCSnapConstraintFloor
---@field WallConstraint FPCSnapConstraintWall
---@field bAlignToGroundSlope boolean
---@field bUseMaxGroundSlopeConstraint boolean
---@field MaxGroundPlacementSlope float
UPrefabricatorConstructionSnapComponent = {}



