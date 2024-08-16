#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=PrimaryAssetType -FallbackName=PrimaryAssetType
#include "UGCPrimaryAssetSearchInfo.generated.h"

USTRUCT(BlueprintType)
struct HDCOREUGC_API FUGCPrimaryAssetSearchInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPrimaryAssetType AssetType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Directory;
    
    FUGCPrimaryAssetSearchInfo();
};

