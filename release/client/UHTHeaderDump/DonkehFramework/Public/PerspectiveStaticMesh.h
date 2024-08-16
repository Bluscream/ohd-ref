#pragma once
#include "CoreMinimal.h"
#include "PerspectiveStaticMesh.generated.h"

class UStaticMesh;

USTRUCT(BlueprintType)
struct DONKEHFRAMEWORK_API FPerspectiveStaticMesh {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStaticMesh* Mesh1P;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStaticMesh* Mesh3P;
    
    FPerspectiveStaticMesh();
};

