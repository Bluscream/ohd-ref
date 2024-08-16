#pragma once
#include "CoreMinimal.h"
#include "WeaponAnim.generated.h"

class UAnimSequenceBase;

USTRUCT(BlueprintType)
struct FWeaponAnim {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequenceBase* CharAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequenceBase* WeapAnim;
    
    DONKEHFRAMEWORK_API FWeaponAnim();
};

