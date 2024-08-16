#pragma once
#include "CoreMinimal.h"
#include "DFVaultTraceData.h"
#include "DFVaultTraceResult.generated.h"

USTRUCT(BlueprintType)
struct DONKEHFRAMEWORK_API FDFVaultTraceResult : public FDFVaultTraceData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSuccess;
    
    FDFVaultTraceResult();
};

