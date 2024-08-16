#pragma once
#include "CoreMinimal.h"
#include "TicketBleedRulesetSettings.generated.h"

USTRUCT(BlueprintType)
struct FTicketBleedRulesetSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TicketBleed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MercyTicketBleed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bAllowMercyTicketBleed: 1;
    
    HDMAIN_API FTicketBleedRulesetSettings();
};

