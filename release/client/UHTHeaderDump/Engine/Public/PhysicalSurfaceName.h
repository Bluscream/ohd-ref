#pragma once
#include "CoreMinimal.h"
#include "EPhysicalSurface.h"
#include "PhysicalSurfaceName.generated.h"

USTRUCT(BlueprintType)
struct FPhysicalSurfaceName {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EPhysicalSurface> Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Name;
    
    ENGINE_API FPhysicalSurfaceName();
};

