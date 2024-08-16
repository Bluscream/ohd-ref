#pragma once
#include "CoreMinimal.h"
#include "ESamplerSourceMode.generated.h"

UENUM(BlueprintType)
enum ESamplerSourceMode {
    SSM_FromTextureAsset,
    SSM_Wrap_WorldGroupSettings,
    SSM_Clamp_WorldGroupSettings,
};

