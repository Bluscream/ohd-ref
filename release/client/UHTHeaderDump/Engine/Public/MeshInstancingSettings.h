#pragma once
#include "CoreMinimal.h"
#include "EMeshInstancingReplacementMethod.h"
#include "Templates/SubclassOf.h"
#include "MeshInstancingSettings.generated.h"

class AActor;
class UInstancedStaticMeshComponent;

USTRUCT(BlueprintType)
struct FMeshInstancingSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NoClear, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> ActorClassToUse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 InstanceReplacementThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMeshInstancingReplacementMethod MeshReplacementMethod;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSkipMeshesWithVertexColors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseHLODVolumes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UInstancedStaticMeshComponent> ISMComponentToUse;
    
    ENGINE_API FMeshInstancingSettings();
};

