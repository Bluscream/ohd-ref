#pragma once
#include "CoreMinimal.h"
#include "DFCharStanceContext.generated.h"

USTRUCT(BlueprintType)
struct FDFCharStanceContext {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bWantsToBeInStance: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bIsInStance: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bFullyTransitionedIntoStance: 1;
    
    DONKEHFRAMEWORKANIM_API FDFCharStanceContext();
};

