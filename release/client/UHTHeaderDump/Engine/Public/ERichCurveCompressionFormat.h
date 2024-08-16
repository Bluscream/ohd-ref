#pragma once
#include "CoreMinimal.h"
#include "ERichCurveCompressionFormat.generated.h"

UENUM(BlueprintType)
enum ERichCurveCompressionFormat {
    RCCF_Empty,
    RCCF_Constant,
    RCCF_Linear,
    RCCF_Cubic,
    RCCF_Mixed,
};

