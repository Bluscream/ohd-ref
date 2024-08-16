#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=BoxSphereBounds -FallbackName=BoxSphereBounds
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Matrix -FallbackName=Matrix
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "EPhysBodyOp.h"
#include "ESkinCacheUsage.h"
#include "EVisibilityBasedAnimTickOption.h"
#include "MeshComponent.h"
#include "SkelMeshComponentLODInfo.h"
#include "SkelMeshSkinWeightInfo.h"
#include "SkinnedMeshComponent.generated.h"

class UPhysicsAsset;
class USkeletalMesh;
class USkinnedMeshComponent;

UCLASS(Abstract, Blueprintable, EditInlineNew, ClassGroup=Custom, Config=Engine, meta=(BlueprintSpawnableComponent))
class ENGINE_API USkinnedMeshComponent : public UMeshComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USkeletalMesh* SkeletalMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<USkinnedMeshComponent> MasterPoseComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ESkinCacheUsage> SkinCacheUsage;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPhysicsAsset* PhysicsAssetOverride;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ForcedLodModel;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MinLodModel;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StreamingDistanceMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FSkelMeshComponentLODInfo> LODInfo;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVisibilityBasedAnimTickOption VisibilityBasedAnimTickOption;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bOverrideMinLOD: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bUseBoundsFromMasterPoseComponent: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bForceWireframe: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bDisplayBones: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bDisableMorphTarget: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bHideSkin: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bPerBoneMotionBlur: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bComponentUseFixedSkelBounds: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bConsiderAllBodiesForBounds: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bSyncAttachParentLOD: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bCanHighlightSelectedSections: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bRecentlyRendered: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bCastCapsuleDirectShadow: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bCastCapsuleIndirectShadow: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bCPUSkinning: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bEnableUpdateRateOptimizations: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bDisplayDebugUpdateRateOptimizations: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bRenderStatic: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bIgnoreMasterPoseComponentLOD: 1;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bCachedLocalBoundsUpToDate: 1;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bForceMeshObjectUpdate: 1;
    
public:
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CapsuleIndirectShadowMinVisibility;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FBoxSphereBounds CachedWorldSpaceBounds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FMatrix CachedWorldToLocalTransform;
    
public:
    USkinnedMeshComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UnloadSkinWeightProfile(FName InProfileName);
    
    UFUNCTION(BlueprintCallable)
    void UnHideBoneByName(FName BoneName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void TransformToBoneSpace(FName BoneName, FVector InPosition, FRotator InRotation, FVector& OutPosition, FRotator& OutRotation) const;
    
    UFUNCTION(BlueprintCallable)
    void TransformFromBoneSpace(FName BoneName, FVector InPosition, FRotator InRotation, FVector& OutPosition, FRotator& OutRotation);
    
    UFUNCTION(BlueprintCallable)
    void ShowMaterialSection(int32 MaterialID, int32 SectionIndex, bool bShow, int32 LODIndex);
    
    UFUNCTION(BlueprintCallable)
    void ShowAllMaterialSections(int32 LODIndex);
    
    UFUNCTION(BlueprintCallable)
    void SetVertexColorOverride_LinearColor(int32 LODIndex, const TArray<FLinearColor>& VertexColors);
    
    UFUNCTION(BlueprintCallable)
    bool SetSkinWeightProfile(FName InProfileName);
    
    UFUNCTION(BlueprintCallable)
    void SetSkinWeightOverride(int32 LODIndex, const TArray<FSkelMeshSkinWeightInfo>& SkinWeights);
    
    UFUNCTION(BlueprintCallable)
    void SetSkeletalMesh(USkeletalMesh* NewMesh, bool bReinitPose);
    
    UFUNCTION(BlueprintCallable)
    void SetRenderStatic(bool bNewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetPhysicsAsset(UPhysicsAsset* NewPhysicsAsset, bool bForceReInit);
    
    UFUNCTION(BlueprintCallable)
    void SetMinLOD(int32 InNewMinLOD);
    
    UFUNCTION(BlueprintCallable)
    void SetMasterPoseComponent(USkinnedMeshComponent* NewMasterBoneComponent, bool bForceUpdate);
    
    UFUNCTION(BlueprintCallable)
    void SetForcedLOD(int32 InNewForcedLOD);
    
    UFUNCTION(BlueprintCallable)
    void SetCastCapsuleIndirectShadow(bool bNewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetCastCapsuleDirectShadow(bool bNewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetCapsuleIndirectShadowMinVisibility(float NewValue);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsUsingSkinWeightProfile() const;
    
    UFUNCTION(BlueprintCallable)
    bool IsMaterialSectionShown(int32 MaterialID, int32 LODIndex);
    
    UFUNCTION(BlueprintCallable)
    bool IsBoneHiddenByName(FName BoneName);
    
    UFUNCTION(BlueprintCallable)
    void HideBoneByName(FName BoneName, TEnumAsByte<EPhysBodyOp> PhysBodyOption);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetTwistAndSwingAngleOfDeltaRotationFromRefPose(FName BoneName, float& OutTwistAngle, float& OutSwingAngle) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetSocketBoneName(FName InSocketName) const;
    
    UFUNCTION(BlueprintCallable)
    FVector GetRefPosePosition(int32 BoneIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetParentBone(FName BoneName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNumLODs() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNumBones() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetForcedLOD() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FTransform GetDeltaTransformFromRefPose(FName BoneName, FName BaseName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetCurrentSkinWeightProfileName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetBoneName(int32 BoneIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetBoneIndex(FName BoneName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName FindClosestBone_K2(FVector TestLocation, FVector& BoneLocation, float IgnoreScale, bool bRequirePhysicsAsset) const;
    
    UFUNCTION(BlueprintCallable)
    void ClearVertexColorOverride(int32 LODIndex);
    
    UFUNCTION(BlueprintCallable)
    void ClearSkinWeightProfile();
    
    UFUNCTION(BlueprintCallable)
    void ClearSkinWeightOverride(int32 LODIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BoneIsChildOf(FName BoneName, FName ParentBoneName) const;
    
};

