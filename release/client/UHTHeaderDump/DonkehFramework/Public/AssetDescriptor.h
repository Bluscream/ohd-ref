#pragma once
#include "CoreMinimal.h"
#include "AssetDescriptor.generated.h"

USTRUCT(BlueprintType)
struct DONKEHFRAMEWORK_API FAssetDescriptor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AssetName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText DisplayText;
    
    FAssetDescriptor();
};

