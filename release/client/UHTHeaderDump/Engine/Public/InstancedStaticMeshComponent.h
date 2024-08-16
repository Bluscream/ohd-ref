#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Box -FallbackName=Box
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "InstancedStaticMeshInstanceData.h"
#include "InstancedStaticMeshMappingInfo.h"
#include "StaticMeshComponent.h"
#include "InstancedStaticMeshComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ENGINE_API UInstancedStaticMeshComponent : public UStaticMeshComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, meta=(AllowPrivateAccess=true))
    TArray<FInstancedStaticMeshInstanceData> PerInstanceSMData;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumCustomDataFloats;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, EditFixedSize, SkipSerialization, meta=(AllowPrivateAccess=true))
    TArray<float> PerInstanceSMCustomData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 InstancingRandomSeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 InstanceStartCullDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 InstanceEndCullDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> InstanceReorderTable;
    
protected:
    UPROPERTY(BlueprintReadWrite, DuplicateTransient, EditAnywhere, TextExportTransient, Transient, meta=(AllowPrivateAccess=true))
    int32 NumPendingLightmaps;
    
    UPROPERTY(BlueprintReadWrite, DuplicateTransient, EditAnywhere, TextExportTransient, Transient, meta=(AllowPrivateAccess=true))
    TArray<FInstancedStaticMeshMappingInfo> CachedMappings;
    
public:
    UInstancedStaticMeshComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    bool UpdateInstanceTransform(int32 InstanceIndex, const FTransform& NewInstanceTransform, bool bWorldSpace, bool bMarkRenderStateDirty, bool bTeleport);
    
    UFUNCTION(BlueprintCallable)
    bool SetCustomDataValue(int32 InstanceIndex, int32 CustomDataIndex, float CustomDataValue, bool bMarkRenderStateDirty);
    
    UFUNCTION(BlueprintCallable)
    void SetCullDistances(int32 StartCullDistance, int32 EndCullDistance);
    
    UFUNCTION(BlueprintCallable)
    bool RemoveInstance(int32 InstanceIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetInstanceTransform(int32 InstanceIndex, FTransform& OutInstanceTransform, bool bWorldSpace) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<int32> GetInstancesOverlappingSphere(const FVector& Center, float Radius, bool bSphereInWorldSpace) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<int32> GetInstancesOverlappingBox(const FBox& Box, bool bBoxInWorldSpace) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetInstanceCount() const;
    
    UFUNCTION(BlueprintCallable)
    void ClearInstances();
    
    UFUNCTION(BlueprintCallable)
    bool BatchUpdateInstancesTransforms(int32 StartInstanceIndex, const TArray<FTransform>& NewInstancesTransforms, bool bWorldSpace, bool bMarkRenderStateDirty, bool bTeleport);
    
    UFUNCTION(BlueprintCallable)
    bool BatchUpdateInstancesTransform(int32 StartInstanceIndex, int32 NumInstances, const FTransform& NewInstancesTransform, bool bWorldSpace, bool bMarkRenderStateDirty, bool bTeleport);
    
    UFUNCTION(BlueprintCallable)
    int32 AddInstanceWorldSpace(const FTransform& WorldTransform);
    
    UFUNCTION(BlueprintCallable)
    int32 AddInstance(const FTransform& InstanceTransform);
    
};

