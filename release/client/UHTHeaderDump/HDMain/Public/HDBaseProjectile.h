#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=DonkehFramework -ObjectName=DFBaseProjectile -FallbackName=DFBaseProjectile
#include "HDBaseProjectile.generated.h"

UCLASS(Abstract, Blueprintable)
class HDMAIN_API AHDBaseProjectile : public ADFBaseProjectile {
    GENERATED_BODY()
public:
    AHDBaseProjectile(const FObjectInitializer& ObjectInitializer);

};

