#pragma once
#include "CoreMinimal.h"
#include "FilePath.generated.h"

USTRUCT(BlueprintType)
struct FFilePath {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString FilePath;
    
    ENGINE_API FFilePath();
};

