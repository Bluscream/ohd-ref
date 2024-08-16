#pragma once
#include "CoreMinimal.h"
#include "InterpGroupActorInfo.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FInterpGroupActorInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ObjectName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> Actors;
    
    ENGINE_API FInterpGroupActorInfo();
};

