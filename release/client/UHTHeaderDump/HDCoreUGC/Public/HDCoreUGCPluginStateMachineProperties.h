#pragma once
#include "CoreMinimal.h"
#include "HDCoreUGCPluginStateMachineProperties.generated.h"

class UHDCoreUGCData;

USTRUCT(BlueprintType)
struct FHDCoreUGCPluginStateMachineProperties {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UHDCoreUGCData* UGCData;
    
    HDCOREUGC_API FHDCoreUGCPluginStateMachineProperties();
};

