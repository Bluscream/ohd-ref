#pragma once
#include "CoreMinimal.h"
#include "WeaponAnimMontage.generated.h"

class UAnimMontage;

USTRUCT(BlueprintType)
struct FWeaponAnimMontage {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* CharAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* WeapAnim;
    
    DONKEHFRAMEWORK_API FWeaponAnimMontage();
};

