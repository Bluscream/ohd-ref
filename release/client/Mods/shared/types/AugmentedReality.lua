---@meta

---@class AAROriginActor : AActor
AAROriginActor = {}


---@class AARSharedWorldGameMode : AGameMode
---@field BufferSizePerChunk int32
AARSharedWorldGameMode = {}

---@param ImageData TArray<uint8>
function AARSharedWorldGameMode:SetPreviewImageData(ImageData) end
function AARSharedWorldGameMode:SetARWorldSharingIsReady() end
---@param ARWorldData TArray<uint8>
function AARSharedWorldGameMode:SetARSharedWorldData(ARWorldData) end
---@return AARSharedWorldGameState
function AARSharedWorldGameMode:GetARSharedWorldGameState() end


---@class AARSharedWorldGameState : AGameState
---@field PreviewImageData TArray<uint8>
---@field ARWorldData TArray<uint8>
---@field PreviewImageBytesTotal int32
---@field ARWorldBytesTotal int32
---@field PreviewImageBytesDelivered int32
---@field ARWorldBytesDelivered int32
AARSharedWorldGameState = {}

function AARSharedWorldGameState:K2_OnARWorldMapIsReady() end


---@class AARSharedWorldPlayerController : APlayerController
AARSharedWorldPlayerController = {}

function AARSharedWorldPlayerController:ServerMarkReadyForReceiving() end
---@param Offset int32
---@param Buffer TArray<uint8>
function AARSharedWorldPlayerController:ClientUpdatePreviewImageData(Offset, Buffer) end
---@param Offset int32
---@param Buffer TArray<uint8>
function AARSharedWorldPlayerController:ClientUpdateARWorldData(Offset, Buffer) end
---@param PreviewImageSize int32
---@param ARWorldDataSize int32
function AARSharedWorldPlayerController:ClientInitSharedWorld(PreviewImageSize, ARWorldDataSize) end


---@class AARSkyLight : ASkyLight
---@field CaptureProbe UAREnvironmentCaptureProbe
AARSkyLight = {}

---@param InCaptureProbe UAREnvironmentCaptureProbe
function AARSkyLight:SetEnvironmentCaptureProbe(InCaptureProbe) end


---@class FARPose2D
---@field SkeletonDefinition FARSkeletonDefinition
---@field JointLocations TArray<FVector2D>
---@field IsJointTracked TArray<boolean>
FARPose2D = {}



---@class FARPose3D
---@field SkeletonDefinition FARSkeletonDefinition
---@field JointTransforms TArray<FTransform>
---@field IsJointTracked TArray<boolean>
---@field JointTransformSpace EARJointTransformSpace
FARPose3D = {}



---@class FARSessionStatus
---@field AdditionalInfo FString
---@field Status EARSessionStatus
FARSessionStatus = {}



---@class FARSharedWorldReplicationState
---@field PreviewImageOffset int32
---@field ARWorldOffset int32
FARSharedWorldReplicationState = {}



---@class FARSkeletonDefinition
---@field NumJoints int32
---@field JointNames TArray<FName>
---@field ParentIndices TArray<int32>
FARSkeletonDefinition = {}



---@class FARTraceResult
---@field DistanceFromCamera float
---@field TraceChannel EARLineTraceChannels
---@field LocalToTrackingTransform FTransform
---@field TrackedGeometry UARTrackedGeometry
FARTraceResult = {}



---@class FARVideoFormat
---@field FPS int32
---@field Width int32
---@field Height int32
FARVideoFormat = {}



---@class UARBaseAsyncTaskBlueprintProxy : UBlueprintAsyncActionBase
UARBaseAsyncTaskBlueprintProxy = {}


---@class UARBasicLightEstimate : UARLightEstimate
---@field AmbientIntensityLumens float
---@field AmbientColorTemperatureKelvin float
---@field AmbientColor FLinearColor
UARBasicLightEstimate = {}

---@return float
function UARBasicLightEstimate:GetAmbientIntensityLumens() end
---@return float
function UARBasicLightEstimate:GetAmbientColorTemperatureKelvin() end
---@return FLinearColor
function UARBasicLightEstimate:GetAmbientColor() end


---@class UARBlueprintLibrary : UBlueprintFunctionLibrary
UARBlueprintLibrary = {}

---@param ComponentToUnpin USceneComponent
function UARBlueprintLibrary:UnpinComponent(ComponentToUnpin) end
function UARBlueprintLibrary:StopARSession() end
---@param SessionConfig UARSessionConfig
function UARBlueprintLibrary:StartARSession(SessionConfig) end
---@param InAlignmentTransform FTransform
function UARBlueprintLibrary:SetAlignmentTransform(InAlignmentTransform) end
---@param PinToRemove UARPin
function UARBlueprintLibrary:RemovePin(PinToRemove) end
---@param ComponentToPin USceneComponent
---@param TraceResult FARTraceResult
---@param DebugName FName
---@return UARPin
function UARBlueprintLibrary:PinComponentToTraceResult(ComponentToPin, TraceResult, DebugName) end
---@param ComponentToPin USceneComponent
---@param PinToWorldTransform FTransform
---@param TrackedGeometry UARTrackedGeometry
---@param DebugName FName
---@return UARPin
function UARBlueprintLibrary:PinComponent(ComponentToPin, PinToWorldTransform, TrackedGeometry, DebugName) end
function UARBlueprintLibrary:PauseARSession() end
---@param Start FVector
---@param End FVector
---@param bTestFeaturePoints boolean
---@param bTestGroundPlane boolean
---@param bTestPlaneExtents boolean
---@param bTestPlaneBoundaryPolygon boolean
---@return TArray<FARTraceResult>
function UARBlueprintLibrary:LineTraceTrackedObjects3D(Start, End, bTestFeaturePoints, bTestGroundPlane, bTestPlaneExtents, bTestPlaneBoundaryPolygon) end
---@param ScreenCoord FVector2D
---@param bTestFeaturePoints boolean
---@param bTestGroundPlane boolean
---@param bTestPlaneExtents boolean
---@param bTestPlaneBoundaryPolygon boolean
---@return TArray<FARTraceResult>
function UARBlueprintLibrary:LineTraceTrackedObjects(ScreenCoord, bTestFeaturePoints, bTestGroundPlane, bTestPlaneExtents, bTestPlaneBoundaryPolygon) end
---@param SessionType EARSessionType
---@return boolean
function UARBlueprintLibrary:IsSessionTypeSupported(SessionType) end
---@param SessionType EARSessionType
---@param SessionTrackingFeature EARSessionTrackingFeature
---@return boolean
function UARBlueprintLibrary:IsSessionTrackingFeatureSupported(SessionType, SessionTrackingFeature) end
---@return boolean
function UARBlueprintLibrary:IsARSupported() end
---@return EARWorldMappingState
function UARBlueprintLibrary:GetWorldMappingStatus() end
---@return EARTrackingQualityReason
function UARBlueprintLibrary:GetTrackingQualityReason() end
---@return EARTrackingQuality
function UARBlueprintLibrary:GetTrackingQuality() end
---@param SessionType EARSessionType
---@return TArray<FARVideoFormat>
function UARBlueprintLibrary:GetSupportedVideoFormats(SessionType) end
---@return UARSessionConfig
function UARBlueprintLibrary:GetSessionConfig() end
---@return TArray<FVector>
function UARBlueprintLibrary:GetPointCloud() end
---@return UARTextureCameraImage
function UARBlueprintLibrary:GetPersonSegmentationImage() end
---@return UARTextureCameraImage
function UARBlueprintLibrary:GetPersonSegmentationDepthImage() end
---@return UARLightEstimate
function UARBlueprintLibrary:GetCurrentLightEstimate() end
---@return UARTextureCameraImage
function UARBlueprintLibrary:GetCameraImage() end
---@return UARTextureCameraDepth
function UARBlueprintLibrary:GetCameraDepth() end
---@return FARSessionStatus
function UARBlueprintLibrary:GetARSessionStatus() end
---@return TArray<UARTrackedPose>
function UARBlueprintLibrary:GetAllTrackedPoses() end
---@return TArray<UARTrackedPoint>
function UARBlueprintLibrary:GetAllTrackedPoints() end
---@return TArray<UARPlaneGeometry>
function UARBlueprintLibrary:GetAllTrackedPlanes() end
---@return TArray<UARTrackedImage>
function UARBlueprintLibrary:GetAllTrackedImages() end
---@return TArray<UAREnvironmentCaptureProbe>
function UARBlueprintLibrary:GetAllTrackedEnvironmentCaptureProbes() end
---@return TArray<FARPose2D>
function UARBlueprintLibrary:GetAllTracked2DPoses() end
---@return TArray<UARPin>
function UARBlueprintLibrary:GetAllPins() end
---@return TArray<UARTrackedGeometry>
function UARBlueprintLibrary:GetAllGeometries() end
---@param TrackedGeometry UARTrackedGeometry
---@param WorldContextObject UObject
---@param Color FLinearColor
---@param OutlineThickness float
---@param PersistForSeconds float
function UARBlueprintLibrary:DebugDrawTrackedGeometry(TrackedGeometry, WorldContextObject, Color, OutlineThickness, PersistForSeconds) end
---@param ARPin UARPin
---@param WorldContextObject UObject
---@param Color FLinearColor
---@param Scale float
---@param PersistForSeconds float
function UARBlueprintLibrary:DebugDrawPin(ARPin, WorldContextObject, Color, Scale, PersistForSeconds) end
---@param SessionConfig UARSessionConfig
---@param CandidateTexture UTexture2D
---@param FriendlyName FString
---@param PhysicalWidth float
---@return UARCandidateImage
function UARBlueprintLibrary:AddRuntimeCandidateImage(SessionConfig, CandidateTexture, FriendlyName, PhysicalWidth) end
---@param Location FVector
---@param Extent FVector
---@return boolean
function UARBlueprintLibrary:AddManualEnvironmentCaptureProbe(Location, Extent) end


---@class UARCandidateImage : UDataAsset
---@field CandidateTexture UTexture2D
---@field FriendlyName FString
---@field Width float
---@field Height float
---@field Orientation EARCandidateImageOrientation
UARCandidateImage = {}

---@return float
function UARCandidateImage:GetPhysicalWidth() end
---@return float
function UARCandidateImage:GetPhysicalHeight() end
---@return EARCandidateImageOrientation
function UARCandidateImage:GetOrientation() end
---@return FString
function UARCandidateImage:GetFriendlyName() end
---@return UTexture2D
function UARCandidateImage:GetCandidateTexture() end


---@class UARCandidateObject : UDataAsset
---@field CandidateObjectData TArray<uint8>
---@field FriendlyName FString
---@field BoundingBox FBox
UARCandidateObject = {}

---@param NewName FString
function UARCandidateObject:SetFriendlyName(NewName) end
---@param InCandidateObject TArray<uint8>
function UARCandidateObject:SetCandidateObjectData(InCandidateObject) end
---@param InBoundingBox FBox
function UARCandidateObject:SetBoundingBox(InBoundingBox) end
---@return FString
function UARCandidateObject:GetFriendlyName() end
---@return TArray<uint8>
function UARCandidateObject:GetCandidateObjectData() end
---@return FBox
function UARCandidateObject:GetBoundingBox() end


---@class UAREnvironmentCaptureProbe : UARTrackedGeometry
---@field EnvironmentCaptureTexture UAREnvironmentCaptureProbeTexture
UAREnvironmentCaptureProbe = {}

---@return FVector
function UAREnvironmentCaptureProbe:GetExtent() end
---@return UAREnvironmentCaptureProbeTexture
function UAREnvironmentCaptureProbe:GetEnvironmentCaptureTexture() end


---@class UAREnvironmentCaptureProbeTexture : UTextureCube
---@field TextureType EARTextureType
---@field Timestamp float
---@field ExternalTextureGuid FGuid
---@field Size FVector2D
UAREnvironmentCaptureProbeTexture = {}



---@class UARFaceGeometry : UARTrackedGeometry
---@field LookAtTarget FVector
---@field bIsTracked boolean
---@field BlendShapes TMap<EARFaceBlendShape, float>
UARFaceGeometry = {}

---@param Eye EAREye
---@return FTransform
function UARFaceGeometry:GetWorldSpaceEyeTransform(Eye) end
---@param Eye EAREye
---@return FTransform
function UARFaceGeometry:GetLocalSpaceEyeTransform(Eye) end
---@param BlendShape EARFaceBlendShape
---@return float
function UARFaceGeometry:GetBlendShapeValue(BlendShape) end
---@return TMap<EARFaceBlendShape, float>
function UARFaceGeometry:GetBlendShapes() end


---@class UARGetCandidateObjectAsyncTaskBlueprintProxy : UARBaseAsyncTaskBlueprintProxy
---@field OnSuccess FARGetCandidateObjectAsyncTaskBlueprintProxyOnSuccess
---@field OnFailed FARGetCandidateObjectAsyncTaskBlueprintProxyOnFailed
UARGetCandidateObjectAsyncTaskBlueprintProxy = {}

---@param WorldContextObject UObject
---@param Location FVector
---@param Extent FVector
---@return UARGetCandidateObjectAsyncTaskBlueprintProxy
function UARGetCandidateObjectAsyncTaskBlueprintProxy:ARGetCandidateObject(WorldContextObject, Location, Extent) end


---@class UARLightEstimate : UObject
UARLightEstimate = {}


---@class UARPin : UObject
---@field TrackedGeometry UARTrackedGeometry
---@field PinnedComponent USceneComponent
---@field LocalToTrackingTransform FTransform
---@field LocalToAlignedTrackingTransform FTransform
---@field TrackingState EARTrackingState
---@field OnARTrackingStateChanged FARPinOnARTrackingStateChanged
---@field OnARTransformUpdated FARPinOnARTransformUpdated
UARPin = {}

---@return EARTrackingState
function UARPin:GetTrackingState() end
---@return UARTrackedGeometry
function UARPin:GetTrackedGeometry() end
---@return USceneComponent
function UARPin:GetPinnedComponent() end
---@return FTransform
function UARPin:GetLocalToWorldTransform() end
---@return FTransform
function UARPin:GetLocalToTrackingTransform() end
---@return FName
function UARPin:GetDebugName() end
---@param World UWorld
---@param Color FLinearColor
---@param Scale float
---@param PersistForSeconds float
function UARPin:DebugDraw(World, Color, Scale, PersistForSeconds) end


---@class UARPlaneGeometry : UARTrackedGeometry
---@field Orientation EARPlaneOrientation
---@field Center FVector
---@field Extent FVector
---@field SubsumedBy UARPlaneGeometry
UARPlaneGeometry = {}

---@return UARPlaneGeometry
function UARPlaneGeometry:GetSubsumedBy() end
---@return EARPlaneOrientation
function UARPlaneGeometry:GetOrientation() end
---@return FVector
function UARPlaneGeometry:GetExtent() end
---@return FVector
function UARPlaneGeometry:GetCenter() end
---@return TArray<FVector>
function UARPlaneGeometry:GetBoundaryPolygonInLocalSpace() end


---@class UARSaveWorldAsyncTaskBlueprintProxy : UARBaseAsyncTaskBlueprintProxy
---@field OnSuccess FARSaveWorldAsyncTaskBlueprintProxyOnSuccess
---@field OnFailed FARSaveWorldAsyncTaskBlueprintProxyOnFailed
UARSaveWorldAsyncTaskBlueprintProxy = {}

---@param WorldContextObject UObject
---@return UARSaveWorldAsyncTaskBlueprintProxy
function UARSaveWorldAsyncTaskBlueprintProxy:ARSaveWorld(WorldContextObject) end


---@class UARSessionConfig : UDataAsset
---@field bGenerateMeshDataFromTrackedGeometry boolean
---@field bGenerateCollisionForMeshData boolean
---@field bGenerateNavMeshForMeshData boolean
---@field bUseMeshDataForOcclusion boolean
---@field bRenderMeshDataInWireframe boolean
---@field bTrackSceneObjects boolean
---@field bUsePersonSegmentationForOcclusion boolean
---@field WorldAlignment EARWorldAlignment
---@field SessionType EARSessionType
---@field PlaneDetectionMode EARPlaneDetectionMode
---@field bHorizontalPlaneDetection boolean
---@field bVerticalPlaneDetection boolean
---@field bEnableAutoFocus boolean
---@field LightEstimationMode EARLightEstimationMode
---@field FrameSyncMode EARFrameSyncMode
---@field bEnableAutomaticCameraOverlay boolean
---@field bEnableAutomaticCameraTracking boolean
---@field bResetCameraTracking boolean
---@field bResetTrackedObjects boolean
---@field CandidateImages TArray<UARCandidateImage>
---@field MaxNumSimultaneousImagesTracked int32
---@field EnvironmentCaptureProbeType EAREnvironmentCaptureProbeType
---@field WorldMapData TArray<uint8>
---@field CandidateObjects TArray<UARCandidateObject>
---@field DesiredVideoFormat FARVideoFormat
---@field FaceTrackingDirection EARFaceTrackingDirection
---@field FaceTrackingUpdate EARFaceTrackingUpdate
---@field SerializedARCandidateImageDatabase TArray<uint8>
---@field EnabledSessionTrackingFeature EARSessionTrackingFeature
UARSessionConfig = {}

---@return boolean
function UARSessionConfig:ShouldResetTrackedObjects() end
---@return boolean
function UARSessionConfig:ShouldResetCameraTracking() end
---@return boolean
function UARSessionConfig:ShouldRenderCameraOverlay() end
---@return boolean
function UARSessionConfig:ShouldEnableCameraTracking() end
---@return boolean
function UARSessionConfig:ShouldEnableAutoFocus() end
---@param WorldMapData TArray<uint8>
function UARSessionConfig:SetWorldMapData(WorldMapData) end
---@param InSessionTrackingFeature EARSessionTrackingFeature
function UARSessionConfig:SetSessionTrackingFeatureToEnable(InSessionTrackingFeature) end
---@param bNewValue boolean
function UARSessionConfig:SetResetTrackedObjects(bNewValue) end
---@param bNewValue boolean
function UARSessionConfig:SetResetCameraTracking(bNewValue) end
---@param InUpdate EARFaceTrackingUpdate
function UARSessionConfig:SetFaceTrackingUpdate(InUpdate) end
---@param InDirection EARFaceTrackingDirection
function UARSessionConfig:SetFaceTrackingDirection(InDirection) end
---@param bNewValue boolean
function UARSessionConfig:SetEnableAutoFocus(bNewValue) end
---@param NewFormat FARVideoFormat
function UARSessionConfig:SetDesiredVideoFormat(NewFormat) end
---@param InCandidateObjects TArray<UARCandidateObject>
function UARSessionConfig:SetCandidateObjectList(InCandidateObjects) end
---@return TArray<uint8>
function UARSessionConfig:GetWorldMapData() end
---@return EARWorldAlignment
function UARSessionConfig:GetWorldAlignment() end
---@return EARSessionType
function UARSessionConfig:GetSessionType() end
---@return EARPlaneDetectionMode
function UARSessionConfig:GetPlaneDetectionMode() end
---@return int32
function UARSessionConfig:GetMaxNumSimultaneousImagesTracked() end
---@return EARLightEstimationMode
function UARSessionConfig:GetLightEstimationMode() end
---@return EARFrameSyncMode
function UARSessionConfig:GetFrameSyncMode() end
---@return EARFaceTrackingUpdate
function UARSessionConfig:GetFaceTrackingUpdate() end
---@return EARFaceTrackingDirection
function UARSessionConfig:GetFaceTrackingDirection() end
---@return EAREnvironmentCaptureProbeType
function UARSessionConfig:GetEnvironmentCaptureProbeType() end
---@return EARSessionTrackingFeature
function UARSessionConfig:GetEnabledSessionTrackingFeature() end
---@return FARVideoFormat
function UARSessionConfig:GetDesiredVideoFormat() end
---@return TArray<UARCandidateObject>
function UARSessionConfig:GetCandidateObjectList() end
---@return TArray<UARCandidateImage>
function UARSessionConfig:GetCandidateImageList() end
---@param CandidateObject UARCandidateObject
function UARSessionConfig:AddCandidateObject(CandidateObject) end
---@param NewCandidateImage UARCandidateImage
function UARSessionConfig:AddCandidateImage(NewCandidateImage) end


---@class UARTexture : UTexture
---@field TextureType EARTextureType
---@field Timestamp float
---@field ExternalTextureGuid FGuid
---@field Size FVector2D
UARTexture = {}



---@class UARTextureCameraDepth : UARTexture
---@field DepthQuality EARDepthQuality
---@field DepthAccuracy EARDepthAccuracy
---@field bIsTemporallySmoothed boolean
UARTextureCameraDepth = {}



---@class UARTextureCameraImage : UARTexture
UARTextureCameraImage = {}


---@class UARTraceResultDummy : UObject
UARTraceResultDummy = {}


---@class UARTraceResultLibrary : UBlueprintFunctionLibrary
UARTraceResultLibrary = {}

---@param TraceResult FARTraceResult
---@return UARTrackedGeometry
function UARTraceResultLibrary:GetTrackedGeometry(TraceResult) end
---@param TraceResult FARTraceResult
---@return EARLineTraceChannels
function UARTraceResultLibrary:GetTraceChannel(TraceResult) end
---@param TraceResult FARTraceResult
---@return FTransform
function UARTraceResultLibrary:GetLocalToWorldTransform(TraceResult) end
---@param TraceResult FARTraceResult
---@return FTransform
function UARTraceResultLibrary:GetLocalToTrackingTransform(TraceResult) end
---@param TraceResult FARTraceResult
---@return float
function UARTraceResultLibrary:GetDistanceFromCamera(TraceResult) end


---@class UARTrackableNotifyComponent : UActorComponent
---@field OnAddTrackedGeometry FARTrackableNotifyComponentOnAddTrackedGeometry
---@field OnUpdateTrackedGeometry FARTrackableNotifyComponentOnUpdateTrackedGeometry
---@field OnRemoveTrackedGeometry FARTrackableNotifyComponentOnRemoveTrackedGeometry
---@field OnAddTrackedPlane FARTrackableNotifyComponentOnAddTrackedPlane
---@field OnUpdateTrackedPlane FARTrackableNotifyComponentOnUpdateTrackedPlane
---@field OnRemoveTrackedPlane FARTrackableNotifyComponentOnRemoveTrackedPlane
---@field OnAddTrackedPoint FARTrackableNotifyComponentOnAddTrackedPoint
---@field OnUpdateTrackedPoint FARTrackableNotifyComponentOnUpdateTrackedPoint
---@field OnRemoveTrackedPoint FARTrackableNotifyComponentOnRemoveTrackedPoint
---@field OnAddTrackedImage FARTrackableNotifyComponentOnAddTrackedImage
---@field OnUpdateTrackedImage FARTrackableNotifyComponentOnUpdateTrackedImage
---@field OnRemoveTrackedImage FARTrackableNotifyComponentOnRemoveTrackedImage
---@field OnAddTrackedFace FARTrackableNotifyComponentOnAddTrackedFace
---@field OnUpdateTrackedFace FARTrackableNotifyComponentOnUpdateTrackedFace
---@field OnRemoveTrackedFace FARTrackableNotifyComponentOnRemoveTrackedFace
---@field OnAddTrackedEnvProbe FARTrackableNotifyComponentOnAddTrackedEnvProbe
---@field OnUpdateTrackedEnvProbe FARTrackableNotifyComponentOnUpdateTrackedEnvProbe
---@field OnRemoveTrackedEnvProbe FARTrackableNotifyComponentOnRemoveTrackedEnvProbe
---@field OnAddTrackedObject FARTrackableNotifyComponentOnAddTrackedObject
---@field OnUpdateTrackedObject FARTrackableNotifyComponentOnUpdateTrackedObject
---@field OnRemoveTrackedObject FARTrackableNotifyComponentOnRemoveTrackedObject
UARTrackableNotifyComponent = {}



---@class UARTrackedGeometry : UObject
---@field UniqueId FGuid
---@field LocalToTrackingTransform FTransform
---@field LocalToAlignedTrackingTransform FTransform
---@field TrackingState EARTrackingState
---@field UnderlyingMesh UMRMeshComponent
---@field ObjectClassification EARObjectClassification
---@field LastUpdateFrameNumber int32
---@field DebugName FName
UARTrackedGeometry = {}

---@return boolean
function UARTrackedGeometry:IsTracked() end
---@return UMRMeshComponent
function UARTrackedGeometry:GetUnderlyingMesh() end
---@return EARTrackingState
function UARTrackedGeometry:GetTrackingState() end
---@return EARObjectClassification
function UARTrackedGeometry:GetObjectClassification() end
---@return FTransform
function UARTrackedGeometry:GetLocalToWorldTransform() end
---@return FTransform
function UARTrackedGeometry:GetLocalToTrackingTransform() end
---@return float
function UARTrackedGeometry:GetLastUpdateTimestamp() end
---@return int32
function UARTrackedGeometry:GetLastUpdateFrameNumber() end
---@return FName
function UARTrackedGeometry:GetDebugName() end


---@class UARTrackedImage : UARTrackedGeometry
---@field DetectedImage UARCandidateImage
---@field EstimatedSize FVector2D
UARTrackedImage = {}

---@return FVector2D
function UARTrackedImage:GetEstimateSize() end
---@return UARCandidateImage
function UARTrackedImage:GetDetectedImage() end


---@class UARTrackedObject : UARTrackedGeometry
---@field DetectedObject UARCandidateObject
UARTrackedObject = {}

---@return UARCandidateObject
function UARTrackedObject:GetDetectedObject() end


---@class UARTrackedPoint : UARTrackedGeometry
UARTrackedPoint = {}


---@class UARTrackedPose : UARTrackedGeometry
UARTrackedPose = {}

---@return FARPose3D
function UARTrackedPose:GetTrackedPoseData() end


---@class UARTrackedQRCode : UARTrackedImage
---@field QRCode FString
---@field Version int32
UARTrackedQRCode = {}



---@class UARTypesDummyClass : UObject
UARTypesDummyClass = {}


