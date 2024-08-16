#pragma once
#include "CoreMinimal.h"
#include "NetDriverDefinition.generated.h"

USTRUCT(BlueprintType)
struct FNetDriverDefinition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName DefName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName DriverClassName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName DriverClassNameFallback;
    
    ENGINE_API FNetDriverDefinition();
};

