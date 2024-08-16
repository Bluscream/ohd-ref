#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=SoftObjectPath -FallbackName=SoftObjectPath
#include "DFCommChannelEntry.generated.h"

USTRUCT(BlueprintType)
struct DONKEHFRAMEWORKCOMMS_API FDFCommChannelEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftObjectPath ChannelDefinition;
    
    FDFCommChannelEntry();
};

