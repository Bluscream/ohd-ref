#pragma once
#include "CoreMinimal.h"
#include "EHDPrimaryAssetType.h"
#include "HDPrimaryAssetSearchPath.generated.h"

USTRUCT(BlueprintType)
struct HDMAIN_API FHDPrimaryAssetSearchPath {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHDPrimaryAssetType AssetType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Directory;
    
    FHDPrimaryAssetSearchPath();
};

