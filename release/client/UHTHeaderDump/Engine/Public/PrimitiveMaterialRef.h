#pragma once
#include "CoreMinimal.h"
#include "PrimitiveMaterialRef.generated.h"

class UDecalComponent;
class UPrimitiveComponent;

USTRUCT(BlueprintType)
struct FPrimitiveMaterialRef {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPrimitiveComponent* Primitive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDecalComponent* Decal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ElementIndex;
    
    ENGINE_API FPrimitiveMaterialRef();
};

