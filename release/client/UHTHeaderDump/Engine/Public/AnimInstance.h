#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "AnimNotifyEvent.h"
#include "AnimNotifyQueue.h"
#include "EAnimCurveType.h"
#include "EMontagePlayReturnType.h"
#include "ERootMotionMode.h"
#include "ETeleportType.h"
#include "MarkerSyncAnimPosition.h"
#include "OnAllMontageInstancesEndedMCDelegateDelegate.h"
#include "OnMontageBlendingOutStartedMCDelegateDelegate.h"
#include "OnMontageEndedMCDelegateDelegate.h"
#include "OnMontageStartedMCDelegateDelegate.h"
#include "PoseSnapshot.h"
#include "Templates/SubclassOf.h"
#include "AnimInstance.generated.h"

class AActor;
class APawn;
class UAnimInstance;
class UAnimMontage;
class UAnimSequenceBase;
class USkeletalMeshComponent;
class USkeleton;

UCLASS(Blueprintable, Transient, Within=SkeletalMeshComponent)
class ENGINE_API UAnimInstance : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USkeleton* CurrentSkeleton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ERootMotionMode::Type> RootMotionMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bUseMultiThreadedAnimationUpdate: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bUsingCopyPoseFromMesh: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bReceiveNotifiesFromLinkedInstances: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bPropagateNotifiesToLinkedInstances: 1;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bQueueMontageEvents: 1;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMontageBlendingOutStartedMCDelegate OnMontageBlendingOut;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMontageStartedMCDelegate OnMontageStarted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMontageEndedMCDelegate OnMontageEnded;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnAllMontageInstancesEndedMCDelegate OnAllMontageInstancesEnded;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FAnimNotifyQueue NotifyQueue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FAnimNotifyEvent> ActiveAnimNotifyState;
    
    UAnimInstance();

    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void UnlockAIResources(bool bUnlockMovement, bool UnlockAILogic);
    
    UFUNCTION(BlueprintCallable)
    void UnlinkAnimClassLayers(TSubclassOf<UAnimInstance> InClass);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    APawn* TryGetPawnOwner() const;
    
    UFUNCTION(BlueprintCallable)
    void StopSlotAnimation(float InBlendOutTime, FName SlotNodeName);
    
    UFUNCTION(BlueprintCallable)
    void SnapshotPose(UPARAM(Ref) FPoseSnapshot& Snapshot);
    
    UFUNCTION(BlueprintCallable)
    void SetRootMotionMode(TEnumAsByte<ERootMotionMode::Type> Value);
    
    UFUNCTION(BlueprintCallable)
    void SetReceiveNotifiesFromLinkedInstances(bool bSet);
    
    UFUNCTION(BlueprintCallable)
    void SetPropagateNotifiesToLinkedInstances(bool bSet);
    
    UFUNCTION(BlueprintCallable)
    void SetMorphTarget(FName MorphTargetName, float Value);
    
    UFUNCTION(BlueprintCallable)
    void SavePoseSnapshot(FName SnapshotName);
    
    UFUNCTION(BlueprintCallable)
    void ResetDynamics(ETeleportType InTeleportType);
    
    UFUNCTION(BlueprintCallable)
    UAnimMontage* PlaySlotAnimationAsDynamicMontage(UAnimSequenceBase* Asset, FName SlotNodeName, float BlendInTime, float BlendOutTime, float InPlayRate, int32 LoopCount, float BlendOutTriggerTime, float InTimeToStartMontageAt);
    
    UFUNCTION(BlueprintCallable)
    float PlaySlotAnimation(UAnimSequenceBase* Asset, FName SlotNodeName, float BlendInTime, float BlendOutTime, float InPlayRate, int32 LoopCount);
    
    UFUNCTION(BlueprintCallable)
    void Montage_StopGroupByName(float InBlendOutTime, FName GroupName);
    
    UFUNCTION(BlueprintCallable)
    void Montage_Stop(float InBlendOutTime, const UAnimMontage* Montage);
    
    UFUNCTION(BlueprintCallable)
    void Montage_SetPosition(const UAnimMontage* Montage, float NewPosition);
    
    UFUNCTION(BlueprintCallable)
    void Montage_SetPlayRate(const UAnimMontage* Montage, float NewPlayRate);
    
    UFUNCTION(BlueprintCallable)
    void Montage_SetNextSection(FName SectionNameToChange, FName NextSection, const UAnimMontage* Montage);
    
    UFUNCTION(BlueprintCallable)
    void Montage_Resume(const UAnimMontage* Montage);
    
    UFUNCTION(BlueprintCallable)
    float Montage_Play(UAnimMontage* MontageToPlay, float InPlayRate, EMontagePlayReturnType ReturnValueType, float InTimeToStartMontageAt, bool bStopAllMontages);
    
    UFUNCTION(BlueprintCallable)
    void Montage_Pause(const UAnimMontage* Montage);
    
    UFUNCTION(BlueprintCallable)
    void Montage_JumpToSectionsEnd(FName SectionName, const UAnimMontage* Montage);
    
    UFUNCTION(BlueprintCallable)
    void Montage_JumpToSection(FName SectionName, const UAnimMontage* Montage);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool Montage_IsPlaying(const UAnimMontage* Montage) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool Montage_IsActive(const UAnimMontage* Montage) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float Montage_GetPosition(const UAnimMontage* Montage) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float Montage_GetPlayRate(const UAnimMontage* Montage) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool Montage_GetIsStopped(const UAnimMontage* Montage) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName Montage_GetCurrentSection(const UAnimMontage* Montage) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float Montage_GetBlendTime(const UAnimMontage* Montage) const;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void LockAIResources(bool bLockMovement, bool LockAILogic);
    
    UFUNCTION(BlueprintCallable)
    void LinkAnimGraphByTag(FName InTag, TSubclassOf<UAnimInstance> InClass);
    
    UFUNCTION(BlueprintCallable)
    void LinkAnimClassLayers(TSubclassOf<UAnimInstance> InClass);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSyncGroupBetweenMarkers(FName InSyncGroupName, FName PreviousMarker, FName NextMarker, bool bRespectMarkerOrder) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlayingSlotAnimation(const UAnimSequenceBase* Asset, FName SlotNodeName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAnyMontagePlaying() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasMarkerBeenHitThisFrame(FName SyncGroup, FName MarkerName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetTimeToClosestMarker(FName SyncGroup, FName MarkerName, float& OutMarkerTime) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FMarkerSyncAnimPosition GetSyncGroupPosition(FName InSyncGroupName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetRelevantAnimTimeRemainingFraction(int32 MachineIndex, int32 StateIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetRelevantAnimTimeRemaining(int32 MachineIndex, int32 StateIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetRelevantAnimTimeFraction(int32 MachineIndex, int32 StateIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetRelevantAnimTime(int32 MachineIndex, int32 StateIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetRelevantAnimLength(int32 MachineIndex, int32 StateIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetReceiveNotifiesFromLinkedInstances() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetPropagateNotifiesToLinkedInstances() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USkeletalMeshComponent* GetOwningComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetOwningActor() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UAnimInstance* GetLinkedAnimLayerInstanceByGroup(FName InGroup) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UAnimInstance* GetLinkedAnimLayerInstanceByClass(TSubclassOf<UAnimInstance> InClass) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetLinkedAnimGraphInstancesByTag(FName InTag, TArray<UAnimInstance*>& OutLinkedInstances) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UAnimInstance* GetLinkedAnimGraphInstanceByTag(FName InTag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetInstanceTransitionTimeElapsedFraction(int32 MachineIndex, int32 TransitionIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetInstanceTransitionTimeElapsed(int32 MachineIndex, int32 TransitionIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetInstanceTransitionCrossfadeDuration(int32 MachineIndex, int32 TransitionIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetInstanceStateWeight(int32 MachineIndex, int32 StateIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetInstanceMachineWeight(int32 MachineIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetInstanceCurrentStateElapsedTime(int32 MachineIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetInstanceAssetPlayerTimeFromEndFraction(int32 AssetPlayerIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetInstanceAssetPlayerTimeFromEnd(int32 AssetPlayerIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetInstanceAssetPlayerTimeFraction(int32 AssetPlayerIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetInstanceAssetPlayerTime(int32 AssetPlayerIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetInstanceAssetPlayerLength(int32 AssetPlayerIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCurveValue(FName CurveName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetCurrentStateName(int32 MachineIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UAnimMontage* GetCurrentActiveMontage() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetAllCurveNames(TArray<FName>& OutNames) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetActiveCurveNames(EAnimCurveType CurveType, TArray<FName>& OutNames) const;
    
    UFUNCTION(BlueprintCallable)
    void ClearMorphTargets();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float CalculateDirection(const FVector& Velocity, const FRotator& BaseRotation) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BlueprintUpdateAnimation(float DeltaTimeX);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BlueprintPostEvaluateAnimation();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BlueprintLinkedAnimationLayersInitialized();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BlueprintInitializeAnimation();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BlueprintBeginPlay();
    
};

