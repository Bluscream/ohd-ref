#pragma once
#include "CoreMinimal.h"
#include "UpdateLevelStreamingLevelStatus.generated.h"

USTRUCT(BlueprintType)
struct ENGINE_API FUpdateLevelStreamingLevelStatus {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName PackageName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LODIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bNewShouldBeLoaded: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bNewShouldBeVisible: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bNewShouldBlockOnLoad: 1;
    
    FUpdateLevelStreamingLevelStatus();
};

