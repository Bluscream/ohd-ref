#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "InterpTrackInst.h"
#include "PrimitiveMaterialRef.h"
#include "InterpTrackInstVectorMaterialParam.generated.h"

class UInterpTrackVectorMaterialParam;
class UMaterialInstanceDynamic;

UCLASS(Blueprintable)
class UInterpTrackInstVectorMaterialParam : public UInterpTrackInst {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMaterialInstanceDynamic*> MaterialInstances;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVector> ResetVectors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPrimitiveMaterialRef> PrimitiveMaterialRefs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UInterpTrackVectorMaterialParam* InstancedTrack;
    
    UInterpTrackInstVectorMaterialParam();

};

