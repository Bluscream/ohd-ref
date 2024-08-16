#pragma once
#include "CoreMinimal.h"
#include "Rotator.generated.h"

USTRUCT(Atomic, BlueprintType, Immutable, NoExport)
struct FRotator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    float Pitch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    float Yaw;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    float Roll;
    
    COREUOBJECT_API FRotator();
};

