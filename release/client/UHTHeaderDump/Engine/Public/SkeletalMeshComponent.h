#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "ConstraintBrokenSignatureDelegate.h"
#include "EAnimationMode.h"
#include "EClothMassMode.h"
#include "EKinematicBonesUpdateToPhysics.h"
#include "EPhysicsTransformUpdateMode.h"
#include "ETeleportType.h"
#include "Interface_CollisionDataProvider.h"
#include "OnAnimInitializedDelegate.h"
#include "PoseSnapshot.h"
#include "SingleAnimationPlayData.h"
#include "SkinnedMeshComponent.h"
#include "Templates/SubclassOf.h"
#include "SkeletalMeshComponent.generated.h"

class UAnimInstance;
class UAnimationAsset;
class UBodySetup;
class UClothingSimulationFactory;
class UClothingSimulationInteractor;

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ENGINE_API USkeletalMeshComponent : public USkinnedMeshComponent, public IInterface_CollisionDataProvider {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UClass* AnimBlueprintGeneratedClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UAnimInstance> AnimClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NonTransactional, Transient, meta=(AllowPrivateAccess=true))
    UAnimInstance* AnimScriptInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAnimInstance* PostProcessAnimInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSingleAnimationPlayData AnimationData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector RootBoneTranslation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector LineCheckBoundsScale;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UAnimInstance*> LinkedInstances;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FTransform> CachedBoneSpaceTransforms;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FTransform> CachedComponentSpaceTransforms;
    
public:
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GlobalAnimRateScale;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EKinematicBonesUpdateToPhysics::Type> KinematicBonesUpdateType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EPhysicsTransformUpdateMode::Type> PhysicsTransformUpdateMode;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EAnimationMode::Type> AnimationMode;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bDisablePostProcessBlueprint: 1;
    
public:
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bUpdateOverlapsOnAnimationFinalize: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bHasValidBodies: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bBlendPhysics: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bEnablePhysicsOnDedicatedServer: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bUpdateJointsFromAnimation: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bDisableClothSimulation: 1;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bDisableRigidBodyAnimNode: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bAllowAnimCurveEvaluation: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bDisableAnimCurves: 1;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bCollideWithEnvironment: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bCollideWithAttachedChildren: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bLocalSpaceSimulation: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bResetAfterTeleport: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bDeferKinematicBoneUpdate: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bNoSkeletonUpdate: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bPauseAnims: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bUseRefPoseOnInitAnim: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bEnablePerPolyCollision: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bForceRefpose: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bOnlyAllowAutonomousTickPose: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bIsAutonomousTickPose: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bOldForceRefPose: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bShowPrePhysBones: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bRequiredBonesUpToDate: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bAnimTreeInitialised: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bIncludeComponentLocationIntoBounds: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bEnableLineCheckWithBounds: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bUseBendingElements: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bUseTetrahedralConstraints: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bUseThinShellVolumeConstraints: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bUseSelfCollisions: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bUseContinuousCollisionDetection: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bPropagateCurvesToSlaves: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bSkipKinematicUpdateWhenInterpolating: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bSkipBoundsUpdateWhenInterpolating: 1;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bNeedsQueuedAnimEventsDispatched: 1;
    
public:
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint16 CachedAnimCurveUidVersion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EClothMassMode MassMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float UniformMass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TotalMass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Density;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinPerParticleMass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ClothBlendWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EdgeStiffness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BendingStiffness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AreaStiffness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float VolumeStiffness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StrainLimitingStiffness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ShapeTargetStiffness;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FName> DisallowedAnimCurves;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UBodySetup* BodySetup;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FConstraintBrokenSignature OnConstraintBroken;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UClothingSimulationFactory> ClothingSimulationFactory;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TeleportDistanceThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TeleportRotationThreshold;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint32 LastPoseTickFrame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UClothingSimulationInteractor* ClothingInteractor;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnAnimInitialized OnAnimInitialized;
    
    USkeletalMeshComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UnlinkAnimClassLayers(TSubclassOf<UAnimInstance> InClass);
    
    UFUNCTION(BlueprintCallable)
    void UnbindClothFromMasterPoseComponent(bool bRestoreSimulationSpace);
    
    UFUNCTION(BlueprintCallable)
    void ToggleDisablePostProcessBlueprint();
    
    UFUNCTION(BlueprintCallable)
    void TermBodiesBelow(FName ParentBoneName);
    
    UFUNCTION(BlueprintCallable)
    void SuspendClothingSimulation();
    
    UFUNCTION(BlueprintCallable)
    void Stop();
    
    UFUNCTION(BlueprintCallable)
    void SnapshotPose(UPARAM(Ref) FPoseSnapshot& Snapshot);
    
    UFUNCTION(BlueprintCallable)
    void SetUpdateAnimationInEditor(const bool NewUpdateState);
    
    UFUNCTION(BlueprintCallable)
    void SetTeleportRotationThreshold(float Threshold);
    
    UFUNCTION(BlueprintCallable)
    void SetTeleportDistanceThreshold(float Threshold);
    
    UFUNCTION(BlueprintCallable)
    void SetPosition(float InPos, bool bFireNotifies);
    
    UFUNCTION(BlueprintCallable)
    void SetPlayRate(float Rate);
    
    UFUNCTION(BlueprintCallable)
    void SetPhysicsBlendWeight(float PhysicsBlendWeight);
    
    UFUNCTION(BlueprintCallable)
    void SetNotifyRigidBodyCollisionBelow(bool bNewNotifyRigidBodyCollision, FName BoneName, bool bIncludeSelf);
    
    UFUNCTION(BlueprintCallable)
    void SetMorphTarget(FName MorphTargetName, float Value, bool bRemoveZeroWeight);
    
    UFUNCTION(BlueprintCallable)
    void SetEnablePhysicsBlending(bool bNewBlendPhysics);
    
    UFUNCTION(BlueprintCallable)
    void SetEnableGravityOnAllBodiesBelow(bool bEnableGravity, FName BoneName, bool bIncludeSelf);
    
    UFUNCTION(BlueprintCallable)
    void SetEnableBodyGravity(bool bEnableGravity, FName BoneName);
    
    UFUNCTION(BlueprintCallable)
    void SetDisablePostProcessBlueprint(bool bInDisablePostProcess);
    
    UFUNCTION(BlueprintCallable)
    void SetDisableAnimCurves(bool bInDisableAnimCurves);
    
    UFUNCTION(BlueprintCallable)
    void SetConstraintProfileForAll(FName ProfileName, bool bDefaultIfNotFound);
    
    UFUNCTION(BlueprintCallable)
    void SetConstraintProfile(FName JointName, FName ProfileName, bool bDefaultIfNotFound);
    
    UFUNCTION(BlueprintCallable)
    void SetClothMaxDistanceScale(float Scale);
    
    UFUNCTION(BlueprintCallable)
    void SetBodyNotifyRigidBodyCollision(bool bNewNotifyRigidBodyCollision, FName BoneName);
    
    UFUNCTION(BlueprintCallable)
    void SetAnimClass(UClass* NewClass);
    
    UFUNCTION(BlueprintCallable)
    void SetAnimationMode(TEnumAsByte<EAnimationMode::Type> InAnimationMode);
    
    UFUNCTION(BlueprintCallable)
    void SetAnimation(UAnimationAsset* NewAnimToPlay);
    
    UFUNCTION(BlueprintCallable)
    void SetAngularLimits(FName InBoneName, float Swing1LimitAngle, float TwistLimitAngle, float Swing2LimitAngle);
    
    UFUNCTION(BlueprintCallable)
    void SetAllowRigidBodyAnimNode(bool bInAllow, bool bReinitAnim);
    
    UFUNCTION(BlueprintCallable)
    void SetAllowedAnimCurvesEvaluation(const TArray<FName>& List, bool bAllow);
    
    UFUNCTION(BlueprintCallable)
    void SetAllowAnimCurveEvaluation(bool bInAllow);
    
    UFUNCTION(BlueprintCallable)
    void SetAllMotorsAngularVelocityDrive(bool bEnableSwingDrive, bool bEnableTwistDrive, bool bSkipCustomPhysicsType);
    
    UFUNCTION(BlueprintCallable)
    void SetAllMotorsAngularPositionDrive(bool bEnableSwingDrive, bool bEnableTwistDrive, bool bSkipCustomPhysicsType);
    
    UFUNCTION(BlueprintCallable)
    void SetAllMotorsAngularDriveParams(float InSpring, float InDamping, float InForceLimit, bool bSkipCustomPhysicsType);
    
    UFUNCTION(BlueprintCallable)
    void SetAllBodiesSimulatePhysics(bool bNewSimulate);
    
    UFUNCTION(BlueprintCallable)
    void SetAllBodiesPhysicsBlendWeight(float PhysicsBlendWeight, bool bSkipCustomPhysicsType);
    
    UFUNCTION(BlueprintCallable)
    void SetAllBodiesBelowSimulatePhysics(const FName& InBoneName, bool bNewSimulate, bool bIncludeSelf);
    
    UFUNCTION(BlueprintCallable)
    void SetAllBodiesBelowPhysicsBlendWeight(const FName& InBoneName, float PhysicsBlendWeight, bool bSkipCustomPhysicsType, bool bIncludeSelf);
    
    UFUNCTION(BlueprintCallable)
    void ResumeClothingSimulation();
    
    UFUNCTION(BlueprintCallable)
    void ResetClothTeleportMode();
    
    UFUNCTION(BlueprintCallable)
    void ResetAnimInstanceDynamics(ETeleportType InTeleportType);
    
    UFUNCTION(BlueprintCallable)
    void ResetAllowedAnimCurveEvaluation();
    
    UFUNCTION(BlueprintCallable)
    void ResetAllBodiesSimulatePhysics();
    
    UFUNCTION(BlueprintCallable)
    void PlayAnimation(UAnimationAsset* NewAnimToPlay, bool bLooping);
    
    UFUNCTION(BlueprintCallable)
    void Play(bool bLooping);
    
    UFUNCTION(BlueprintCallable)
    void OverrideAnimationData(UAnimationAsset* InAnimToPlay, bool bIsLooping, bool bIsPlaying, float Position, float PlayRate);
    
    UFUNCTION(BlueprintCallable)
    void LinkAnimGraphByTag(FName InTag, TSubclassOf<UAnimInstance> InClass);
    
    UFUNCTION(BlueprintCallable)
    void LinkAnimClassLayers(TSubclassOf<UAnimInstance> InClass);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool K2_GetClosestPointOnPhysicsAsset(const FVector& WorldPosition, FVector& ClosestWorldPosition, FVector& Normal, FName& BoneName, float& Distance) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlaying() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsClothingSimulationSuspended() const;
    
    UFUNCTION(BlueprintCallable)
    bool IsBodyGravityEnabled(FName BoneName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasValidAnimationInstance() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetTeleportRotationThreshold() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetTeleportDistanceThreshold() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetSkeletalCenterOfMass() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UAnimInstance* GetPostProcessInstance() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetPosition() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetPlayRate() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMorphTarget(FName MorphTargetName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UAnimInstance* GetLinkedAnimLayerInstanceByGroup(FName InGroup) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UAnimInstance* GetLinkedAnimLayerInstanceByClass(TSubclassOf<UAnimInstance> InClass) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetLinkedAnimGraphInstancesByTag(FName InTag, TArray<UAnimInstance*>& OutLinkedInstances) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UAnimInstance* GetLinkedAnimGraphInstanceByTag(FName InTag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetDisablePostProcessBlueprint() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetDisableAnimCurves() const;
    
    UFUNCTION(BlueprintCallable)
    void GetCurrentJointAngles(FName InBoneName, float& Swing1Angle, float& TwistAngle, float& Swing2Angle);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetClothMaxDistanceScale() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UClothingSimulationInteractor* GetClothingSimulationInteractor() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetBoneMass(FName BoneName, bool bScaleMass) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UAnimInstance* GetAnimInstance() const;
    
    UFUNCTION(BlueprintCallable)
    UClass* GetAnimClass();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TEnumAsByte<EAnimationMode::Type> GetAnimationMode() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetAllowRigidBodyAnimNode() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetAllowedAnimCurveEvaluate() const;
    
    UFUNCTION(BlueprintCallable)
    void ForceClothNextUpdateTeleportAndReset();
    
    UFUNCTION(BlueprintCallable)
    void ForceClothNextUpdateTeleport();
    
    UFUNCTION(BlueprintCallable)
    FName FindConstraintBoneName(int32 ConstraintIndex);
    
    UFUNCTION(BlueprintCallable)
    void ClearMorphTargets();
    
    UFUNCTION(BlueprintCallable)
    void BreakConstraint(FVector Impulse, FVector HitLocation, FName InBoneName);
    
    UFUNCTION(BlueprintCallable)
    void BindClothToMasterPoseComponent();
    
    UFUNCTION(BlueprintCallable)
    void AllowAnimCurveEvaluation(FName NameOfCurve, bool bAllow);
    
    UFUNCTION(BlueprintCallable)
    void AddImpulseToAllBodiesBelow(FVector Impulse, FName BoneName, bool bVelChange, bool bIncludeSelf);
    
    UFUNCTION(BlueprintCallable)
    void AddForceToAllBodiesBelow(FVector Force, FName BoneName, bool bAccelChange, bool bIncludeSelf);
    
    UFUNCTION(BlueprintCallable)
    void AccumulateAllBodiesBelowPhysicsBlendWeight(const FName& InBoneName, float AddPhysicsBlendWeight, bool bSkipCustomPhysicsType);
    

    // Fix for true pure virtual functions not being implemented
};

