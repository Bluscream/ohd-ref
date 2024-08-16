#pragma once
#include "CoreMinimal.h"
#include "Vector.h"
#include "BoxSphereBounds.generated.h"

USTRUCT(BlueprintType, NoExport)
struct FBoxSphereBounds {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FVector Origin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FVector BoxExtent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    float SphereRadius;
    
    COREUOBJECT_API FBoxSphereBounds();
};

