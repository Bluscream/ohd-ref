#pragma once
#include "CoreMinimal.h"
#include "HDPlatoonAttributes.generated.h"

USTRUCT(BlueprintType)
struct HDMAIN_API FHDPlatoonAttributes {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 TeamId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText DisplayName;
    
    FHDPlatoonAttributes();
};

