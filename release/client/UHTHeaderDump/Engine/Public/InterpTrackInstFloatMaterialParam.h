#pragma once
#include "CoreMinimal.h"
#include "InterpTrackInst.h"
#include "PrimitiveMaterialRef.h"
#include "InterpTrackInstFloatMaterialParam.generated.h"

class UInterpTrackFloatMaterialParam;
class UMaterialInstanceDynamic;

UCLASS(Blueprintable)
class UInterpTrackInstFloatMaterialParam : public UInterpTrackInst {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMaterialInstanceDynamic*> MaterialInstances;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> ResetFloats;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPrimitiveMaterialRef> PrimitiveMaterialRefs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UInterpTrackFloatMaterialParam* InstancedTrack;
    
    UInterpTrackInstFloatMaterialParam();

};

