#pragma once
#include "CoreMinimal.h"
#include "EFantasticPerspectiveStereoscopicPass.generated.h"

UENUM(BlueprintType)
enum class EFantasticPerspectiveStereoscopicPass : uint8 {
    eFPSSP_FULL,
    eFPSSP_LEFT_EYE,
    eFPSSP_RIGHT_EYE,
    eFPSSP_LEFT_EYE_SIDE,
    eFPSSP_RIGHT_EYE_SIDE,
};

