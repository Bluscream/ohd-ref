#pragma once
#include "CoreMinimal.h"
#include "ETextureSourceFormat.generated.h"

UENUM(BlueprintType)
enum ETextureSourceFormat {
    TSF_Invalid,
    TSF_G8,
    TSF_BGRA8,
    TSF_BGRE8,
    TSF_RGBA16,
    TSF_RGBA16F,
    TSF_RGBA8,
    TSF_RGBE8,
    TSF_G16,
};

