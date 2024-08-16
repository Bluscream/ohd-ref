#ifndef UE4SS_SDK_HeadMountedDisplay_HPP
#define UE4SS_SDK_HeadMountedDisplay_HPP

#include "HeadMountedDisplay_enums.hpp"

struct FXRDeviceId
{
    FName SystemName;                                                                 // 0x0000 (size: 0x8)
    int32 DeviceID;                                                                   // 0x0008 (size: 0x4)

}; // Size: 0xC

class UAsyncTask_LoadXRDeviceVisComponent : public UBlueprintAsyncActionBase
{
    FAsyncTask_LoadXRDeviceVisComponentOnModelLoaded OnModelLoaded;                   // 0x0030 (size: 0x10)
    void DeviceModelLoadedDelegate(const class UPrimitiveComponent* LoadedComponent);
    FAsyncTask_LoadXRDeviceVisComponentOnLoadFailure OnLoadFailure;                   // 0x0040 (size: 0x10)
    void DeviceModelLoadedDelegate(const class UPrimitiveComponent* LoadedComponent);
    char padding_0[0x8];                                                              // 0x0050 (size: 0x8)
    class UPrimitiveComponent* SpawnedComponent;                                      // 0x0058 (size: 0x8)

    class UAsyncTask_LoadXRDeviceVisComponent* AddNamedDeviceVisualizationComponentAsync(class AActor* Target, const FName SystemName, const FName DeviceName, bool bManualAttachment, const FTransform& RelativeTransform, FXRDeviceId& XRDeviceId, class UPrimitiveComponent*& NewComponent);
    class UAsyncTask_LoadXRDeviceVisComponent* AddDeviceVisualizationComponentAsync(class AActor* Target, const FXRDeviceId& XRDeviceId, bool bManualAttachment, const FTransform& RelativeTransform, class UPrimitiveComponent*& NewComponent);
}; // Size: 0x60

class UHeadMountedDisplayFunctionLibrary : public UBlueprintFunctionLibrary
{
    char padding_0[0x28];                                                             // 0x0000 (size: 0x0)

    void UpdateExternalTrackingHMDPosition(const FTransform& ExternalTrackingTransform);
    void SetWorldToMetersScale(class UObject* WorldContext, float NewScale);
    void SetTrackingOrigin(TEnumAsByte<EHMDTrackingOrigin::Type> Origin);
    void SetSpectatorScreenTexture(class UTexture* InTexture);
    void SetSpectatorScreenModeTexturePlusEyeLayout(FVector2D EyeRectMin, FVector2D EyeRectMax, FVector2D TextureRectMin, FVector2D TextureRectMax, bool bDrawEyeFirst, bool bClearBlack, bool bUseAlpha);
    void SetSpectatorScreenMode(ESpectatorScreenMode Mode);
    void SetClippingPlanes(float Near, float Far);
    void ResetOrientationAndPosition(float Yaw, TEnumAsByte<EOrientPositionSelector::Type> Options);
    bool IsSpectatorScreenModeControllable();
    bool IsInLowPersistenceMode();
    bool IsHeadMountedDisplayEnabled();
    bool IsHeadMountedDisplayConnected();
    bool IsDeviceTracking(const FXRDeviceId& XRDeviceId);
    bool HasValidTrackingPosition();
    float GetWorldToMetersScale(class UObject* WorldContext);
    void GetVRFocusState(bool& bUseFocus, bool& bHasFocus);
    FTransform GetTrackingToWorldTransform(class UObject* WorldContext);
    void GetTrackingSensorParameters(FVector& Origin, FRotator& Rotation, float& LeftFOV, float& RightFOV, float& TopFOV, float& BottomFOV, float& Distance, float& NearPlane, float& FarPlane, bool& IsActive, int32 Index);
    TEnumAsByte<EHMDTrackingOrigin::Type> GetTrackingOrigin();
    float GetScreenPercentage();
    void GetPositionalTrackingCameraParameters(FVector& CameraOrigin, FRotator& CameraRotation, float& HFOV, float& VFOV, float& CameraDistance, float& NearPlane, float& FarPlane);
    float GetPixelDensity();
    void GetOrientationAndPosition(FRotator& DeviceRotation, FVector& DevicePosition);
    int32 GetNumOfTrackingSensors();
    TEnumAsByte<EHMDWornState::Type> GetHMDWornState();
    FName GetHMDDeviceName();
    void GetDeviceWorldPose(class UObject* WorldContext, const FXRDeviceId& XRDeviceId, bool& bIsTracked, FRotator& Orientation, bool& bHasPositionalTracking, FVector& Position);
    void GetDevicePose(const FXRDeviceId& XRDeviceId, bool& bIsTracked, FRotator& Orientation, bool& bHasPositionalTracking, FVector& Position);
    TArray<FXRDeviceId> EnumerateTrackedDevices(const FName SystemId, EXRTrackedDeviceType DeviceType);
    void EnableLowPersistenceMode(bool bEnable);
    bool EnableHMD(bool bEnable);
    void CalibrateExternalTrackingToHMD(const FTransform& ExternalTrackingTransform);
}; // Size: 0x28

class UMotionControllerComponent : public UPrimitiveComponent
{
    int32 PlayerIndex;                                                                // 0x0408 (size: 0x4)
    EControllerHand Hand;                                                             // 0x040C (size: 0x1)
    char padding_0[0x3];                                                              // 0x040D (size: 0x3)
    FName MotionSource;                                                               // 0x0410 (size: 0x8)
    uint8 bDisableLowLatencyUpdate;                                                   // 0x0418 (size: 0x1)
    char padding_1[0x3];                                                              // 0x0419 (size: 0x3)
    ETrackingStatus CurrentTrackingStatus;                                            // 0x041C (size: 0x1)
    bool bDisplayDeviceModel;                                                         // 0x041D (size: 0x1)
    char padding_2[0x2];                                                              // 0x041E (size: 0x2)
    FName DisplayModelSource;                                                         // 0x0420 (size: 0x8)
    class UStaticMesh* CustomDisplayMesh;                                             // 0x0428 (size: 0x8)
    TArray<class UMaterialInterface*> DisplayMeshMaterialOverrides;                   // 0x0430 (size: 0x10)
    char padding_3[0x60];                                                             // 0x0440 (size: 0x60)
    class UPrimitiveComponent* DisplayComponent;                                      // 0x04A0 (size: 0x8)

    void SetTrackingSource(const EControllerHand NewSource);
    void SetTrackingMotionSource(const FName NewSource);
    void SetShowDeviceModel(const bool bShowControllerModel);
    void SetDisplayModelSource(const FName NewDisplayModelSource);
    void SetCustomDisplayMesh(class UStaticMesh* NewDisplayMesh);
    void SetAssociatedPlayerIndex(const int32 NewPlayer);
    void OnMotionControllerUpdated();
    bool IsTracked();
    EControllerHand GetTrackingSource();
    float GetParameterValue(FName InName, bool& bValueFound);
    FVector GetHandJointPosition(int32 jointIndex, bool& bValueFound);
}; // Size: 0x4C0

class UMotionTrackedDeviceFunctionLibrary : public UBlueprintFunctionLibrary
{
    char padding_0[0x28];                                                             // 0x0000 (size: 0x0)

    void SetIsControllerMotionTrackingEnabledByDefault(bool Enable);
    bool IsMotionTrackingEnabledForSource(int32 PlayerIndex, FName SourceName);
    bool IsMotionTrackingEnabledForDevice(int32 PlayerIndex, EControllerHand Hand);
    bool IsMotionTrackingEnabledForComponent(const class UMotionControllerComponent* MotionControllerComponent);
    bool IsMotionTrackedDeviceCountManagementNecessary();
    bool IsMotionSourceTracking(int32 PlayerIndex, FName SourceName);
    int32 GetMotionTrackingEnabledControllerCount();
    int32 GetMaximumMotionTrackedControllerCount();
    FName GetActiveTrackingSystemName();
    TArray<FName> EnumerateMotionSources();
    bool EnableMotionTrackingOfSource(int32 PlayerIndex, FName SourceName);
    bool EnableMotionTrackingOfDevice(int32 PlayerIndex, EControllerHand Hand);
    bool EnableMotionTrackingForComponent(class UMotionControllerComponent* MotionControllerComponent);
    void DisableMotionTrackingOfSource(int32 PlayerIndex, FName SourceName);
    void DisableMotionTrackingOfDevice(int32 PlayerIndex, EControllerHand Hand);
    void DisableMotionTrackingOfControllersForPlayer(int32 PlayerIndex);
    void DisableMotionTrackingOfAllControllers();
    void DisableMotionTrackingForComponent(const class UMotionControllerComponent* MotionControllerComponent);
}; // Size: 0x28

class UVRNotificationsComponent : public UActorComponent
{
    FVRNotificationsComponentHMDTrackingInitializingAndNeedsHMDToBeTrackedDelegate HMDTrackingInitializingAndNeedsHMDToBeTrackedDelegate; // 0x00B0 (size: 0x10)
    void VRNotificationsDelegate();
    FVRNotificationsComponentHMDTrackingInitializedDelegate HMDTrackingInitializedDelegate; // 0x00C0 (size: 0x10)
    void VRNotificationsDelegate();
    FVRNotificationsComponentHMDRecenteredDelegate HMDRecenteredDelegate;             // 0x00D0 (size: 0x10)
    void VRNotificationsDelegate();
    FVRNotificationsComponentHMDLostDelegate HMDLostDelegate;                         // 0x00E0 (size: 0x10)
    void VRNotificationsDelegate();
    FVRNotificationsComponentHMDReconnectedDelegate HMDReconnectedDelegate;           // 0x00F0 (size: 0x10)
    void VRNotificationsDelegate();
    FVRNotificationsComponentHMDConnectCanceledDelegate HMDConnectCanceledDelegate;   // 0x0100 (size: 0x10)
    void VRNotificationsDelegate();
    FVRNotificationsComponentHMDPutOnHeadDelegate HMDPutOnHeadDelegate;               // 0x0110 (size: 0x10)
    void VRNotificationsDelegate();
    FVRNotificationsComponentHMDRemovedFromHeadDelegate HMDRemovedFromHeadDelegate;   // 0x0120 (size: 0x10)
    void VRNotificationsDelegate();
    FVRNotificationsComponentVRControllerRecenteredDelegate VRControllerRecenteredDelegate; // 0x0130 (size: 0x10)
    void VRNotificationsDelegate();

}; // Size: 0x140

class UXRAssetFunctionLibrary : public UBlueprintFunctionLibrary
{
    char padding_0[0x28];                                                             // 0x0000 (size: 0x0)

    class UPrimitiveComponent* AddNamedDeviceVisualizationComponentBlocking(class AActor* Target, const FName SystemName, const FName DeviceName, bool bManualAttachment, const FTransform& RelativeTransform, FXRDeviceId& XRDeviceId);
    class UPrimitiveComponent* AddDeviceVisualizationComponentBlocking(class AActor* Target, const FXRDeviceId& XRDeviceId, bool bManualAttachment, const FTransform& RelativeTransform);
}; // Size: 0x28

class UXRLoadingScreenFunctionLibrary : public UBlueprintFunctionLibrary
{
    char padding_0[0x28];                                                             // 0x0000 (size: 0x0)

    void ShowLoadingScreen();
    void SetLoadingScreen(class UTexture* Texture, FVector2D Scale, FVector Offset, bool bShowLoadingMovie, bool bShowOnSet);
    void HideLoadingScreen();
    void ClearLoadingScreenSplashes();
    void AddLoadingScreenSplash(class UTexture* Texture, FVector Translation, FRotator Rotation, FVector2D Size, FRotator DeltaRotation, bool bClearBeforeAdd);
}; // Size: 0x28

#endif
