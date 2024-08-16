#pragma once
#include "CoreMinimal.h"
#include "LocomotionWeaponAnimSubset.generated.h"

class UAnimSequence;

USTRUCT(BlueprintType)
struct FLocomotionWeaponAnimSubset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* Idle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* Move;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* Sprint;
    
    DONKEHFRAMEWORK_API FLocomotionWeaponAnimSubset();
};

