#ifndef UE4SS_SDK_AugmentedReality_HPP
#define UE4SS_SDK_AugmentedReality_HPP

#include "AugmentedReality_enums.hpp"

struct FARPose2D
{
    FARSkeletonDefinition SkeletonDefinition;                                         // 0x0000 (size: 0x28)
    TArray<FVector2D> JointLocations;                                                 // 0x0028 (size: 0x10)
    TArray<bool> IsJointTracked;                                                      // 0x0038 (size: 0x10)

}; // Size: 0x48

struct FARPose3D
{
    FARSkeletonDefinition SkeletonDefinition;                                         // 0x0000 (size: 0x28)
    TArray<FTransform> JointTransforms;                                               // 0x0028 (size: 0x10)
    TArray<bool> IsJointTracked;                                                      // 0x0038 (size: 0x10)
    EARJointTransformSpace JointTransformSpace;                                       // 0x0048 (size: 0x1)

}; // Size: 0x50

struct FARSessionStatus
{
    FString AdditionalInfo;                                                           // 0x0000 (size: 0x10)
    EARSessionStatus Status;                                                          // 0x0010 (size: 0x1)

}; // Size: 0x18

struct FARSharedWorldReplicationState
{
    int32 PreviewImageOffset;                                                         // 0x0000 (size: 0x4)
    int32 ARWorldOffset;                                                              // 0x0004 (size: 0x4)

}; // Size: 0x8

struct FARSkeletonDefinition
{
    int32 NumJoints;                                                                  // 0x0000 (size: 0x4)
    char padding_0[0x4];                                                              // 0x0004 (size: 0x4)
    TArray<FName> JointNames;                                                         // 0x0008 (size: 0x10)
    TArray<int32> ParentIndices;                                                      // 0x0018 (size: 0x10)

}; // Size: 0x28

struct FARTraceResult
{
    float DistanceFromCamera;                                                         // 0x0000 (size: 0x4)
    EARLineTraceChannels TraceChannel;                                                // 0x0004 (size: 0x1)
    char padding_0[0xB];                                                              // 0x0005 (size: 0xB)
    FTransform LocalToTrackingTransform;                                              // 0x0010 (size: 0x30)
    class UARTrackedGeometry* TrackedGeometry;                                        // 0x0040 (size: 0x8)

}; // Size: 0x60

struct FARVideoFormat
{
    int32 FPS;                                                                        // 0x0000 (size: 0x4)
    int32 Width;                                                                      // 0x0004 (size: 0x4)
    int32 Height;                                                                     // 0x0008 (size: 0x4)

}; // Size: 0xC

class AAROriginActor : public AActor
{
    char padding_0[0x220];                                                            // 0x0000 (size: 0x0)
}; // Size: 0x220

class AARSharedWorldGameMode : public AGameMode
{
    int32 BufferSizePerChunk;                                                         // 0x0308 (size: 0x4)

    void SetPreviewImageData(TArray<uint8> ImageData);
    void SetARWorldSharingIsReady();
    void SetARSharedWorldData(TArray<uint8> ARWorldData);
    class AARSharedWorldGameState* GetARSharedWorldGameState();
}; // Size: 0x370

class AARSharedWorldGameState : public AGameState
{
    TArray<uint8> PreviewImageData;                                                   // 0x0290 (size: 0x10)
    TArray<uint8> ARWorldData;                                                        // 0x02A0 (size: 0x10)
    int32 PreviewImageBytesTotal;                                                     // 0x02B0 (size: 0x4)
    int32 ARWorldBytesTotal;                                                          // 0x02B4 (size: 0x4)
    int32 PreviewImageBytesDelivered;                                                 // 0x02B8 (size: 0x4)
    int32 ARWorldBytesDelivered;                                                      // 0x02BC (size: 0x4)

    void K2_OnARWorldMapIsReady();
}; // Size: 0x2C8

class AARSharedWorldPlayerController : public APlayerController
{
    char padding_0[0x578];                                                            // 0x0000 (size: 0x0)

    void ServerMarkReadyForReceiving();
    void ClientUpdatePreviewImageData(int32 Offset, const TArray<uint8>& Buffer);
    void ClientUpdateARWorldData(int32 Offset, const TArray<uint8>& Buffer);
    void ClientInitSharedWorld(int32 PreviewImageSize, int32 ARWorldDataSize);
}; // Size: 0x578

class AARSkyLight : public ASkyLight
{
    class UAREnvironmentCaptureProbe* CaptureProbe;                                   // 0x0230 (size: 0x8)

    void SetEnvironmentCaptureProbe(class UAREnvironmentCaptureProbe* InCaptureProbe);
}; // Size: 0x240

class UARBaseAsyncTaskBlueprintProxy : public UBlueprintAsyncActionBase
{
    char padding_0[0x50];                                                             // 0x0000 (size: 0x0)
}; // Size: 0x50

class UARBasicLightEstimate : public UARLightEstimate
{
    float AmbientIntensityLumens;                                                     // 0x0028 (size: 0x4)
    float AmbientColorTemperatureKelvin;                                              // 0x002C (size: 0x4)
    FLinearColor AmbientColor;                                                        // 0x0030 (size: 0x10)

    float GetAmbientIntensityLumens();
    float GetAmbientColorTemperatureKelvin();
    FLinearColor GetAmbientColor();
}; // Size: 0x40

class UARBlueprintLibrary : public UBlueprintFunctionLibrary
{
    char padding_0[0x28];                                                             // 0x0000 (size: 0x0)

    void UnpinComponent(class USceneComponent* ComponentToUnpin);
    void StopARSession();
    void StartARSession(class UARSessionConfig* SessionConfig);
    void SetAlignmentTransform(const FTransform& InAlignmentTransform);
    void RemovePin(class UARPin* PinToRemove);
    class UARPin* PinComponentToTraceResult(class USceneComponent* ComponentToPin, const FARTraceResult& TraceResult, const FName DebugName);
    class UARPin* PinComponent(class USceneComponent* ComponentToPin, const FTransform& PinToWorldTransform, class UARTrackedGeometry* TrackedGeometry, const FName DebugName);
    void PauseARSession();
    TArray<FARTraceResult> LineTraceTrackedObjects3D(const FVector Start, const FVector End, bool bTestFeaturePoints, bool bTestGroundPlane, bool bTestPlaneExtents, bool bTestPlaneBoundaryPolygon);
    TArray<FARTraceResult> LineTraceTrackedObjects(const FVector2D ScreenCoord, bool bTestFeaturePoints, bool bTestGroundPlane, bool bTestPlaneExtents, bool bTestPlaneBoundaryPolygon);
    bool IsSessionTypeSupported(EARSessionType SessionType);
    bool IsSessionTrackingFeatureSupported(EARSessionType SessionType, EARSessionTrackingFeature SessionTrackingFeature);
    bool IsARSupported();
    EARWorldMappingState GetWorldMappingStatus();
    EARTrackingQualityReason GetTrackingQualityReason();
    EARTrackingQuality GetTrackingQuality();
    TArray<FARVideoFormat> GetSupportedVideoFormats(EARSessionType SessionType);
    class UARSessionConfig* GetSessionConfig();
    TArray<FVector> GetPointCloud();
    class UARTextureCameraImage* GetPersonSegmentationImage();
    class UARTextureCameraImage* GetPersonSegmentationDepthImage();
    class UARLightEstimate* GetCurrentLightEstimate();
    class UARTextureCameraImage* GetCameraImage();
    class UARTextureCameraDepth* GetCameraDepth();
    FARSessionStatus GetARSessionStatus();
    TArray<class UARTrackedPose*> GetAllTrackedPoses();
    TArray<class UARTrackedPoint*> GetAllTrackedPoints();
    TArray<class UARPlaneGeometry*> GetAllTrackedPlanes();
    TArray<class UARTrackedImage*> GetAllTrackedImages();
    TArray<class UAREnvironmentCaptureProbe*> GetAllTrackedEnvironmentCaptureProbes();
    TArray<FARPose2D> GetAllTracked2DPoses();
    TArray<class UARPin*> GetAllPins();
    TArray<class UARTrackedGeometry*> GetAllGeometries();
    void DebugDrawTrackedGeometry(class UARTrackedGeometry* TrackedGeometry, class UObject* WorldContextObject, FLinearColor Color, float OutlineThickness, float PersistForSeconds);
    void DebugDrawPin(class UARPin* ARPin, class UObject* WorldContextObject, FLinearColor Color, float Scale, float PersistForSeconds);
    class UARCandidateImage* AddRuntimeCandidateImage(class UARSessionConfig* SessionConfig, class UTexture2D* CandidateTexture, FString FriendlyName, float PhysicalWidth);
    bool AddManualEnvironmentCaptureProbe(FVector Location, FVector Extent);
}; // Size: 0x28

class UARCandidateImage : public UDataAsset
{
    class UTexture2D* CandidateTexture;                                               // 0x0030 (size: 0x8)
    FString FriendlyName;                                                             // 0x0038 (size: 0x10)
    float Width;                                                                      // 0x0048 (size: 0x4)
    float Height;                                                                     // 0x004C (size: 0x4)
    EARCandidateImageOrientation Orientation;                                         // 0x0050 (size: 0x1)

    float GetPhysicalWidth();
    float GetPhysicalHeight();
    EARCandidateImageOrientation GetOrientation();
    FString GetFriendlyName();
    class UTexture2D* GetCandidateTexture();
}; // Size: 0x58

class UARCandidateObject : public UDataAsset
{
    TArray<uint8> CandidateObjectData;                                                // 0x0030 (size: 0x10)
    FString FriendlyName;                                                             // 0x0040 (size: 0x10)
    FBox BoundingBox;                                                                 // 0x0050 (size: 0x1C)

    void SetFriendlyName(FString NewName);
    void SetCandidateObjectData(const TArray<uint8>& InCandidateObject);
    void SetBoundingBox(const FBox& InBoundingBox);
    FString GetFriendlyName();
    TArray<uint8> GetCandidateObjectData();
    FBox GetBoundingBox();
}; // Size: 0x70

class UAREnvironmentCaptureProbe : public UARTrackedGeometry
{
    class UAREnvironmentCaptureProbeTexture* EnvironmentCaptureTexture;               // 0x00F8 (size: 0x8)

    FVector GetExtent();
    class UAREnvironmentCaptureProbeTexture* GetEnvironmentCaptureTexture();
}; // Size: 0x100

class UAREnvironmentCaptureProbeTexture : public UTextureCube
{
    EARTextureType TextureType;                                                       // 0x0110 (size: 0x1)
    char padding_0[0x3];                                                              // 0x0111 (size: 0x3)
    float Timestamp;                                                                  // 0x0114 (size: 0x4)
    FGuid ExternalTextureGuid;                                                        // 0x0118 (size: 0x10)
    FVector2D Size;                                                                   // 0x0128 (size: 0x8)

}; // Size: 0x130

class UARFaceGeometry : public UARTrackedGeometry
{
    FVector LookAtTarget;                                                             // 0x00E8 (size: 0xC)
    bool bIsTracked;                                                                  // 0x00F4 (size: 0x1)
    char padding_0[0x3];                                                              // 0x00F5 (size: 0x3)
    TMap<EARFaceBlendShape, float> BlendShapes;                                       // 0x00F8 (size: 0x50)

    FTransform GetWorldSpaceEyeTransform(EAREye Eye);
    FTransform GetLocalSpaceEyeTransform(EAREye Eye);
    float GetBlendShapeValue(EARFaceBlendShape BlendShape);
    TMap<EARFaceBlendShape, float> GetBlendShapes();
}; // Size: 0x1E0

class UARGetCandidateObjectAsyncTaskBlueprintProxy : public UARBaseAsyncTaskBlueprintProxy
{
    FARGetCandidateObjectAsyncTaskBlueprintProxyOnSuccess OnSuccess;                  // 0x0050 (size: 0x10)
    void ARGetCandidateObjectPin(class UARCandidateObject* SavedObject);
    FARGetCandidateObjectAsyncTaskBlueprintProxyOnFailed OnFailed;                    // 0x0060 (size: 0x10)
    void ARGetCandidateObjectPin(class UARCandidateObject* SavedObject);

    class UARGetCandidateObjectAsyncTaskBlueprintProxy* ARGetCandidateObject(class UObject* WorldContextObject, FVector Location, FVector Extent);
}; // Size: 0x98

class UARLightEstimate : public UObject
{
    char padding_0[0x28];                                                             // 0x0000 (size: 0x0)
}; // Size: 0x28

class UARPin : public UObject
{
    class UARTrackedGeometry* TrackedGeometry;                                        // 0x0028 (size: 0x8)
    class USceneComponent* PinnedComponent;                                           // 0x0030 (size: 0x8)
    char padding_0[0x8];                                                              // 0x0038 (size: 0x8)
    FTransform LocalToTrackingTransform;                                              // 0x0040 (size: 0x30)
    FTransform LocalToAlignedTrackingTransform;                                       // 0x0070 (size: 0x30)
    EARTrackingState TrackingState;                                                   // 0x00A0 (size: 0x1)
    char padding_1[0x1F];                                                             // 0x00A1 (size: 0x1F)
    FARPinOnARTrackingStateChanged OnARTrackingStateChanged;                          // 0x00C0 (size: 0x10)
    void OnARTrackingStateChanged(EARTrackingState NewTrackingState);
    FARPinOnARTransformUpdated OnARTransformUpdated;                                  // 0x00D0 (size: 0x10)
    void OnARTransformUpdated(const FTransform& OldToNewTransform);

    EARTrackingState GetTrackingState();
    class UARTrackedGeometry* GetTrackedGeometry();
    class USceneComponent* GetPinnedComponent();
    FTransform GetLocalToWorldTransform();
    FTransform GetLocalToTrackingTransform();
    FName GetDebugName();
    void DebugDraw(class UWorld* World, const FLinearColor& Color, float Scale, float PersistForSeconds);
}; // Size: 0xF0

class UARPlaneGeometry : public UARTrackedGeometry
{
    EARPlaneOrientation Orientation;                                                  // 0x00E8 (size: 0x1)
    char padding_0[0x3];                                                              // 0x00E9 (size: 0x3)
    FVector Center;                                                                   // 0x00EC (size: 0xC)
    FVector Extent;                                                                   // 0x00F8 (size: 0xC)
    char padding_1[0x14];                                                             // 0x0104 (size: 0x14)
    class UARPlaneGeometry* SubsumedBy;                                               // 0x0118 (size: 0x8)

    class UARPlaneGeometry* GetSubsumedBy();
    EARPlaneOrientation GetOrientation();
    FVector GetExtent();
    FVector GetCenter();
    TArray<FVector> GetBoundaryPolygonInLocalSpace();
}; // Size: 0x120

class UARSaveWorldAsyncTaskBlueprintProxy : public UARBaseAsyncTaskBlueprintProxy
{
    FARSaveWorldAsyncTaskBlueprintProxyOnSuccess OnSuccess;                           // 0x0050 (size: 0x10)
    void ARSaveWorldPin(const TArray<uint8>& SavedWorld);
    FARSaveWorldAsyncTaskBlueprintProxyOnFailed OnFailed;                             // 0x0060 (size: 0x10)
    void ARSaveWorldPin(const TArray<uint8>& SavedWorld);

    class UARSaveWorldAsyncTaskBlueprintProxy* ARSaveWorld(class UObject* WorldContextObject);
}; // Size: 0x80

class UARSessionConfig : public UDataAsset
{
    bool bGenerateMeshDataFromTrackedGeometry;                                        // 0x0030 (size: 0x1)
    bool bGenerateCollisionForMeshData;                                               // 0x0031 (size: 0x1)
    bool bGenerateNavMeshForMeshData;                                                 // 0x0032 (size: 0x1)
    bool bUseMeshDataForOcclusion;                                                    // 0x0033 (size: 0x1)
    bool bRenderMeshDataInWireframe;                                                  // 0x0034 (size: 0x1)
    bool bTrackSceneObjects;                                                          // 0x0035 (size: 0x1)
    bool bUsePersonSegmentationForOcclusion;                                          // 0x0036 (size: 0x1)
    EARWorldAlignment WorldAlignment;                                                 // 0x0037 (size: 0x1)
    EARSessionType SessionType;                                                       // 0x0038 (size: 0x1)
    EARPlaneDetectionMode PlaneDetectionMode;                                         // 0x0039 (size: 0x1)
    bool bHorizontalPlaneDetection;                                                   // 0x003A (size: 0x1)
    bool bVerticalPlaneDetection;                                                     // 0x003B (size: 0x1)
    bool bEnableAutoFocus;                                                            // 0x003C (size: 0x1)
    EARLightEstimationMode LightEstimationMode;                                       // 0x003D (size: 0x1)
    EARFrameSyncMode FrameSyncMode;                                                   // 0x003E (size: 0x1)
    bool bEnableAutomaticCameraOverlay;                                               // 0x003F (size: 0x1)
    bool bEnableAutomaticCameraTracking;                                              // 0x0040 (size: 0x1)
    bool bResetCameraTracking;                                                        // 0x0041 (size: 0x1)
    bool bResetTrackedObjects;                                                        // 0x0042 (size: 0x1)
    char padding_0[0x5];                                                              // 0x0043 (size: 0x5)
    TArray<class UARCandidateImage*> CandidateImages;                                 // 0x0048 (size: 0x10)
    int32 MaxNumSimultaneousImagesTracked;                                            // 0x0058 (size: 0x4)
    EAREnvironmentCaptureProbeType EnvironmentCaptureProbeType;                       // 0x005C (size: 0x1)
    char padding_1[0x3];                                                              // 0x005D (size: 0x3)
    TArray<uint8> WorldMapData;                                                       // 0x0060 (size: 0x10)
    TArray<class UARCandidateObject*> CandidateObjects;                               // 0x0070 (size: 0x10)
    FARVideoFormat DesiredVideoFormat;                                                // 0x0080 (size: 0xC)
    EARFaceTrackingDirection FaceTrackingDirection;                                   // 0x008C (size: 0x1)
    EARFaceTrackingUpdate FaceTrackingUpdate;                                         // 0x008D (size: 0x1)
    char padding_2[0x2];                                                              // 0x008E (size: 0x2)
    TArray<uint8> SerializedARCandidateImageDatabase;                                 // 0x0090 (size: 0x10)
    EARSessionTrackingFeature EnabledSessionTrackingFeature;                          // 0x00A0 (size: 0x1)

    bool ShouldResetTrackedObjects();
    bool ShouldResetCameraTracking();
    bool ShouldRenderCameraOverlay();
    bool ShouldEnableCameraTracking();
    bool ShouldEnableAutoFocus();
    void SetWorldMapData(TArray<uint8> WorldMapData);
    void SetSessionTrackingFeatureToEnable(EARSessionTrackingFeature InSessionTrackingFeature);
    void SetResetTrackedObjects(bool bNewValue);
    void SetResetCameraTracking(bool bNewValue);
    void SetFaceTrackingUpdate(EARFaceTrackingUpdate InUpdate);
    void SetFaceTrackingDirection(EARFaceTrackingDirection InDirection);
    void SetEnableAutoFocus(bool bNewValue);
    void SetDesiredVideoFormat(FARVideoFormat NewFormat);
    void SetCandidateObjectList(const TArray<class UARCandidateObject*>& InCandidateObjects);
    TArray<uint8> GetWorldMapData();
    EARWorldAlignment GetWorldAlignment();
    EARSessionType GetSessionType();
    EARPlaneDetectionMode GetPlaneDetectionMode();
    int32 GetMaxNumSimultaneousImagesTracked();
    EARLightEstimationMode GetLightEstimationMode();
    EARFrameSyncMode GetFrameSyncMode();
    EARFaceTrackingUpdate GetFaceTrackingUpdate();
    EARFaceTrackingDirection GetFaceTrackingDirection();
    EAREnvironmentCaptureProbeType GetEnvironmentCaptureProbeType();
    EARSessionTrackingFeature GetEnabledSessionTrackingFeature();
    FARVideoFormat GetDesiredVideoFormat();
    TArray<class UARCandidateObject*> GetCandidateObjectList();
    TArray<class UARCandidateImage*> GetCandidateImageList();
    void AddCandidateObject(class UARCandidateObject* CandidateObject);
    void AddCandidateImage(class UARCandidateImage* NewCandidateImage);
}; // Size: 0xA8

class UARTexture : public UTexture
{
    EARTextureType TextureType;                                                       // 0x00B8 (size: 0x1)
    char padding_0[0x3];                                                              // 0x00B9 (size: 0x3)
    float Timestamp;                                                                  // 0x00BC (size: 0x4)
    FGuid ExternalTextureGuid;                                                        // 0x00C0 (size: 0x10)
    FVector2D Size;                                                                   // 0x00D0 (size: 0x8)

}; // Size: 0xD8

class UARTextureCameraDepth : public UARTexture
{
    EARDepthQuality DepthQuality;                                                     // 0x00D8 (size: 0x1)
    EARDepthAccuracy DepthAccuracy;                                                   // 0x00D9 (size: 0x1)
    bool bIsTemporallySmoothed;                                                       // 0x00DA (size: 0x1)

}; // Size: 0xE0

class UARTextureCameraImage : public UARTexture
{
    char padding_0[0xD8];                                                             // 0x0000 (size: 0x0)
}; // Size: 0xD8

class UARTraceResultDummy : public UObject
{
    char padding_0[0x28];                                                             // 0x0000 (size: 0x0)
}; // Size: 0x28

class UARTraceResultLibrary : public UBlueprintFunctionLibrary
{
    char padding_0[0x28];                                                             // 0x0000 (size: 0x0)

    class UARTrackedGeometry* GetTrackedGeometry(const FARTraceResult& TraceResult);
    EARLineTraceChannels GetTraceChannel(const FARTraceResult& TraceResult);
    FTransform GetLocalToWorldTransform(const FARTraceResult& TraceResult);
    FTransform GetLocalToTrackingTransform(const FARTraceResult& TraceResult);
    float GetDistanceFromCamera(const FARTraceResult& TraceResult);
}; // Size: 0x28

class UARTrackableNotifyComponent : public UActorComponent
{
    FARTrackableNotifyComponentOnAddTrackedGeometry OnAddTrackedGeometry;             // 0x00B0 (size: 0x10)
    void TrackableDelegate(class UARTrackedGeometry* TrackedGeometry);
    FARTrackableNotifyComponentOnUpdateTrackedGeometry OnUpdateTrackedGeometry;       // 0x00C0 (size: 0x10)
    void TrackableDelegate(class UARTrackedGeometry* TrackedGeometry);
    FARTrackableNotifyComponentOnRemoveTrackedGeometry OnRemoveTrackedGeometry;       // 0x00D0 (size: 0x10)
    void TrackableDelegate(class UARTrackedGeometry* TrackedGeometry);
    FARTrackableNotifyComponentOnAddTrackedPlane OnAddTrackedPlane;                   // 0x00E0 (size: 0x10)
    void TrackablePlaneDelegate(class UARPlaneGeometry* TrackedPlane);
    FARTrackableNotifyComponentOnUpdateTrackedPlane OnUpdateTrackedPlane;             // 0x00F0 (size: 0x10)
    void TrackablePlaneDelegate(class UARPlaneGeometry* TrackedPlane);
    FARTrackableNotifyComponentOnRemoveTrackedPlane OnRemoveTrackedPlane;             // 0x0100 (size: 0x10)
    void TrackablePlaneDelegate(class UARPlaneGeometry* TrackedPlane);
    FARTrackableNotifyComponentOnAddTrackedPoint OnAddTrackedPoint;                   // 0x0110 (size: 0x10)
    void TrackablePointDelegate(class UARTrackedPoint* TrackedPoint);
    FARTrackableNotifyComponentOnUpdateTrackedPoint OnUpdateTrackedPoint;             // 0x0120 (size: 0x10)
    void TrackablePointDelegate(class UARTrackedPoint* TrackedPoint);
    FARTrackableNotifyComponentOnRemoveTrackedPoint OnRemoveTrackedPoint;             // 0x0130 (size: 0x10)
    void TrackablePointDelegate(class UARTrackedPoint* TrackedPoint);
    FARTrackableNotifyComponentOnAddTrackedImage OnAddTrackedImage;                   // 0x0140 (size: 0x10)
    void TrackableImageDelegate(class UARTrackedImage* TrackedImage);
    FARTrackableNotifyComponentOnUpdateTrackedImage OnUpdateTrackedImage;             // 0x0150 (size: 0x10)
    void TrackableImageDelegate(class UARTrackedImage* TrackedImage);
    FARTrackableNotifyComponentOnRemoveTrackedImage OnRemoveTrackedImage;             // 0x0160 (size: 0x10)
    void TrackableImageDelegate(class UARTrackedImage* TrackedImage);
    FARTrackableNotifyComponentOnAddTrackedFace OnAddTrackedFace;                     // 0x0170 (size: 0x10)
    void TrackableFaceDelegate(class UARFaceGeometry* TrackedFace);
    FARTrackableNotifyComponentOnUpdateTrackedFace OnUpdateTrackedFace;               // 0x0180 (size: 0x10)
    void TrackableFaceDelegate(class UARFaceGeometry* TrackedFace);
    FARTrackableNotifyComponentOnRemoveTrackedFace OnRemoveTrackedFace;               // 0x0190 (size: 0x10)
    void TrackableFaceDelegate(class UARFaceGeometry* TrackedFace);
    FARTrackableNotifyComponentOnAddTrackedEnvProbe OnAddTrackedEnvProbe;             // 0x01A0 (size: 0x10)
    void TrackableEnvProbeDelegate(class UAREnvironmentCaptureProbe* TrackedEnvProbe);
    FARTrackableNotifyComponentOnUpdateTrackedEnvProbe OnUpdateTrackedEnvProbe;       // 0x01B0 (size: 0x10)
    void TrackableEnvProbeDelegate(class UAREnvironmentCaptureProbe* TrackedEnvProbe);
    FARTrackableNotifyComponentOnRemoveTrackedEnvProbe OnRemoveTrackedEnvProbe;       // 0x01C0 (size: 0x10)
    void TrackableEnvProbeDelegate(class UAREnvironmentCaptureProbe* TrackedEnvProbe);
    FARTrackableNotifyComponentOnAddTrackedObject OnAddTrackedObject;                 // 0x01D0 (size: 0x10)
    void TrackableObjectDelegate(class UARTrackedObject* TrackedObject);
    FARTrackableNotifyComponentOnUpdateTrackedObject OnUpdateTrackedObject;           // 0x01E0 (size: 0x10)
    void TrackableObjectDelegate(class UARTrackedObject* TrackedObject);
    FARTrackableNotifyComponentOnRemoveTrackedObject OnRemoveTrackedObject;           // 0x01F0 (size: 0x10)
    void TrackableObjectDelegate(class UARTrackedObject* TrackedObject);

}; // Size: 0x200

class UARTrackedGeometry : public UObject
{
    FGuid UniqueId;                                                                   // 0x0028 (size: 0x10)
    char padding_0[0x8];                                                              // 0x0038 (size: 0x8)
    FTransform LocalToTrackingTransform;                                              // 0x0040 (size: 0x30)
    FTransform LocalToAlignedTrackingTransform;                                       // 0x0070 (size: 0x30)
    EARTrackingState TrackingState;                                                   // 0x00A0 (size: 0x1)
    char padding_1[0xF];                                                              // 0x00A1 (size: 0xF)
    class UMRMeshComponent* UnderlyingMesh;                                           // 0x00B0 (size: 0x8)
    EARObjectClassification ObjectClassification;                                     // 0x00B8 (size: 0x1)
    char padding_2[0x17];                                                             // 0x00B9 (size: 0x17)
    int32 LastUpdateFrameNumber;                                                      // 0x00D0 (size: 0x4)
    char padding_3[0xC];                                                              // 0x00D4 (size: 0xC)
    FName DebugName;                                                                  // 0x00E0 (size: 0x8)

    bool IsTracked();
    class UMRMeshComponent* GetUnderlyingMesh();
    EARTrackingState GetTrackingState();
    EARObjectClassification GetObjectClassification();
    FTransform GetLocalToWorldTransform();
    FTransform GetLocalToTrackingTransform();
    float GetLastUpdateTimestamp();
    int32 GetLastUpdateFrameNumber();
    FName GetDebugName();
}; // Size: 0xF0

class UARTrackedImage : public UARTrackedGeometry
{
    class UARCandidateImage* DetectedImage;                                           // 0x00E8 (size: 0x8)
    FVector2D EstimatedSize;                                                          // 0x00F0 (size: 0x8)

    FVector2D GetEstimateSize();
    class UARCandidateImage* GetDetectedImage();
}; // Size: 0x100

class UARTrackedObject : public UARTrackedGeometry
{
    class UARCandidateObject* DetectedObject;                                         // 0x00E8 (size: 0x8)

    class UARCandidateObject* GetDetectedObject();
}; // Size: 0xF0

class UARTrackedPoint : public UARTrackedGeometry
{
    char padding_0[0xF0];                                                             // 0x0000 (size: 0x0)
}; // Size: 0xF0

class UARTrackedPose : public UARTrackedGeometry
{
    char padding_0[0x140];                                                            // 0x0000 (size: 0x0)

    FARPose3D GetTrackedPoseData();
}; // Size: 0x140

class UARTrackedQRCode : public UARTrackedImage
{
    FString QRCode;                                                                   // 0x00F8 (size: 0x10)
    int32 Version;                                                                    // 0x0108 (size: 0x4)

}; // Size: 0x110

class UARTypesDummyClass : public UObject
{
    char padding_0[0x28];                                                             // 0x0000 (size: 0x0)
}; // Size: 0x28

#endif
