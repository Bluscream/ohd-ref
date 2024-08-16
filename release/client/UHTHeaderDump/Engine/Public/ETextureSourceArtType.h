#pragma once
#include "CoreMinimal.h"
#include "ETextureSourceArtType.generated.h"

UENUM(BlueprintType)
enum ETextureSourceArtType {
    TSAT_Uncompressed,
    TSAT_PNGCompressed,
    TSAT_DDSFile,
};

