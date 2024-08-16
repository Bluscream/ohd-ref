#pragma once
#include "CoreMinimal.h"
#include "VirtualTextureBuildSettings.generated.h"

USTRUCT(BlueprintType)
struct FVirtualTextureBuildSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TileSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TileBorderSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableCompressCrunch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableCompressZlib;
    
    ENGINE_API FVirtualTextureBuildSettings();
};

