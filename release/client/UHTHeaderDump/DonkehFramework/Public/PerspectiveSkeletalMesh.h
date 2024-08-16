#pragma once
#include "CoreMinimal.h"
#include "PerspectiveSkeletalMesh.generated.h"

class USkeletalMesh;

USTRUCT(BlueprintType)
struct DONKEHFRAMEWORK_API FPerspectiveSkeletalMesh {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USkeletalMesh* Mesh1P;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USkeletalMesh* Mesh3P;
    
    FPerspectiveSkeletalMesh();
};

