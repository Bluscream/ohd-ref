#pragma once
#include "CoreMinimal.h"
#include "WeaponAnimSequence.generated.h"

class UAnimSequence;

USTRUCT(BlueprintType)
struct FWeaponAnimSequence {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* CharAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* WeapAnim;
    
    DONKEHFRAMEWORK_API FWeaponAnimSequence();
};

