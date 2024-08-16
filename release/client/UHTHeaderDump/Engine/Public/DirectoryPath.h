#pragma once
#include "CoreMinimal.h"
#include "DirectoryPath.generated.h"

USTRUCT(BlueprintType)
struct FDirectoryPath {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Path;
    
    ENGINE_API FDirectoryPath();
};

