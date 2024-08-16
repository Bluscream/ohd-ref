#pragma once
#include "CoreMinimal.h"
#include "SingleActionWeaponAnimSubset.generated.h"

class UAnimMontage;

USTRUCT(BlueprintType)
struct FSingleActionWeaponAnimSubset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* Action;
    
    DONKEHFRAMEWORK_API FSingleActionWeaponAnimSubset();
};

