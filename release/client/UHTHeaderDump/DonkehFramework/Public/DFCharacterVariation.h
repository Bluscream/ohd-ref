#pragma once
#include "CoreMinimal.h"
#include "DFCharacterVariation.generated.h"

class USkeletalMesh;

USTRUCT(BlueprintType)
struct DONKEHFRAMEWORK_API FDFCharacterVariation {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USkeletalMesh> Mesh;
    
    FDFCharacterVariation();
};

