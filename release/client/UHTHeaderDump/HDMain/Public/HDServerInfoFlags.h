#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=DonkehFramework -ObjectName=EDFPlayerWhitelistType -FallbackName=EDFPlayerWhitelistType
#include "HDServerInfoFlags.generated.h"

USTRUCT(BlueprintType)
struct HDMAIN_API FHDServerInfoFlags {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPasswordProtected;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDFPlayerWhitelistType WhitelistType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSupportersOnlyWhitelist;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUtilizesUGC;
    
    FHDServerInfoFlags();
};

