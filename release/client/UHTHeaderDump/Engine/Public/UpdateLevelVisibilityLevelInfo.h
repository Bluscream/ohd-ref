#pragma once
#include "CoreMinimal.h"
#include "UpdateLevelVisibilityLevelInfo.generated.h"

USTRUCT(BlueprintType)
struct ENGINE_API FUpdateLevelVisibilityLevelInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName PackageName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Filename;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bIsVisible: 1;
    
    FUpdateLevelVisibilityLevelInfo();
};

