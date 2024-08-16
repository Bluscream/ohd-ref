#pragma once
#include "CoreMinimal.h"
#include "DFVaultTargetParams.h"
#include "EVaultBehavior.h"
#include "DFVaultTraceData.generated.h"

USTRUCT(BlueprintType)
struct DONKEHFRAMEWORK_API FDFVaultTraceData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDFVaultTargetParams TargetParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVaultBehavior Behavior;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Height;
    
    FDFVaultTraceData();
};

