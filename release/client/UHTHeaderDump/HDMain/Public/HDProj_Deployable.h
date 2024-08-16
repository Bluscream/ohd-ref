#pragma once
#include "CoreMinimal.h"
#include "HDBaseProjectile.h"
#include "HDProj_Deployable.generated.h"

UCLASS(Abstract, Blueprintable)
class HDMAIN_API AHDProj_Deployable : public AHDBaseProjectile {
    GENERATED_BODY()
public:
    AHDProj_Deployable(const FObjectInitializer& ObjectInitializer);

};

