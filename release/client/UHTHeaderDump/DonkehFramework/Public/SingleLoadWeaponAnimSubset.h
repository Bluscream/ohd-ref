#pragma once
#include "CoreMinimal.h"
#include "SingleLoadWeaponAnimSubset.generated.h"

class UAnimMontage;

USTRUCT(BlueprintType)
struct FSingleLoadWeaponAnimSubset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* StartReload;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* EndReload;
    
    DONKEHFRAMEWORK_API FSingleLoadWeaponAnimSubset();
};

