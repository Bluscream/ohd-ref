#pragma once
#include "CoreMinimal.h"
#include "EMinimapCaptureResolution.generated.h"

UENUM()
enum class EMinimapCaptureResolution : uint16 {
    Size1024 = 1024,
    Size2048 = 2048,
    Size4096 = 4096,
};

