#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=HUD -FallbackName=HUD
#include "HDHUD.generated.h"

UCLASS(Blueprintable, NonTransient)
class HDMAIN_API AHDHUD : public AHUD {
    GENERATED_BODY()
public:
    AHDHUD(const FObjectInitializer& ObjectInitializer);

};

