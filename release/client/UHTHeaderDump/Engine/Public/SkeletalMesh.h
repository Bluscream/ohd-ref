#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=BoxSphereBounds -FallbackName=BoxSphereBounds
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=EAxis -FallbackName=EAxis
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "BoneMirrorInfo.h"
#include "Interface_AssetUserData.h"
#include "Interface_CollisionDataProvider.h"
#include "NodeMappingProviderInterface.h"
#include "PerPlatformBool.h"
#include "PerPlatformInt.h"
#include "SkeletalMaterial.h"
#include "SkeletalMeshLODInfo.h"
#include "SkeletalMeshSamplingInfo.h"
#include "SkinWeightProfileInfo.h"
#include "StreamableRenderAsset.h"
#include "Templates/SubclassOf.h"
#include "SkeletalMesh.generated.h"

class UAnimInstance;
class UAssetUserData;
class UBlueprint;
class UBodySetup;
class UClothingAssetBase;
class UMorphTarget;
class UNodeMappingContainer;
class UPhysicsAsset;
class USkeletalMeshLODSettings;
class USkeletalMeshSocket;
class USkeleton;

UCLASS(Blueprintable)
class ENGINE_API USkeletalMesh : public UStreamableRenderAsset, public IInterface_CollisionDataProvider, public IInterface_AssetUserData, public INodeMappingProviderInterface {
    GENERATED_BODY()
public:
    UPROPERTY(AssetRegistrySearchable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USkeleton* Skeleton;
    
private:
    UPROPERTY(BlueprintReadWrite, DuplicateTransient, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FBoxSphereBounds ImportedBounds;
    
    UPROPERTY(BlueprintReadWrite, DuplicateTransient, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FBoxSphereBounds ExtendedBounds;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector PositiveBoundsExtension;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector NegativeBoundsExtension;
    
public:
    UPROPERTY(BlueprintReadWrite, DuplicateTransient, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FSkeletalMaterial> Materials;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    TArray<FBoneMirrorInfo> SkelMirrorTable;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    TArray<FSkeletalMeshLODInfo> LODInfo;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPerPlatformInt MinLOD;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPerPlatformBool DisableBelowMinLodStripping;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EAxis::Type> SkelMirrorAxis;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EAxis::Type> SkelMirrorFlipAxis;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bUseFullPrecisionUVs: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bUseHighPrecisionTangentBasis: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bHasBeenSimplified: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bHasVertexColors: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bEnablePerPolyCollision: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UBodySetup* BodySetup;
    
    UPROPERTY(AssetRegistrySearchable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPhysicsAsset* PhysicsAsset;
    
    UPROPERTY(AssetRegistrySearchable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPhysicsAsset* ShadowPhysicsAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    TArray<UNodeMappingContainer*> NodeMappingData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMorphTarget*> MorphTargets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UAnimInstance> PostProcessAnimBlueprint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    TArray<UClothingAssetBase*> MeshClothingAssets;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSkeletalMeshSamplingInfo SamplingInfo;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UAssetUserData*> AssetUserData;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USkeletalMeshSocket*> Sockets;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    TArray<FSkinWeightProfileInfo> SkinWeightProfiles;
    
public:
    USkeletalMesh();

    UFUNCTION(BlueprintCallable)
    void SetLODSettings(USkeletalMeshLODSettings* InLODSettings);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 NumSockets() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FString> K2_GetAllMorphTargetNames() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSectionUsingCloth(int32 InSectionIndex, bool bCheckCorrespondingSections) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USkeletalMeshSocket* GetSocketByIndex(int32 Index) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UNodeMappingContainer* GetNodeMappingContainer(UBlueprint* SourceAsset) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FBoxSphereBounds GetImportedBounds() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FBoxSphereBounds GetBounds() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USkeletalMeshSocket* FindSocketInfo(FName InSocketName, FTransform& OutTransform, int32& OutBoneIndex, int32& OutIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USkeletalMeshSocket* FindSocketAndIndex(FName InSocketName, int32& OutIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USkeletalMeshSocket* FindSocket(FName InSocketName) const;
    

    // Fix for true pure virtual functions not being implemented
};

