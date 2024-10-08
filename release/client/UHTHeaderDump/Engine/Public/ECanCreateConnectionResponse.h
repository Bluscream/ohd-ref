#pragma once
#include "CoreMinimal.h"
#include "ECanCreateConnectionResponse.generated.h"

UENUM(BlueprintType)
enum ECanCreateConnectionResponse {
    CONNECT_RESPONSE_MAKE,
    CONNECT_RESPONSE_DISALLOW,
    CONNECT_RESPONSE_BREAK_OTHERS_A,
    CONNECT_RESPONSE_BREAK_OTHERS_B,
    CONNECT_RESPONSE_BREAK_OTHERS_AB,
    CONNECT_RESPONSE_MAKE_WITH_CONVERSION_NODE,
};

