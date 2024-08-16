#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=DonkehFramework -ObjectName=DFNavigationSystem -FallbackName=DFNavigationSystem
#include "HDNavigationSystem.generated.h"

UCLASS(Blueprintable, NonTransient)
class HDMAIN_API UHDNavigationSystem : public UDFNavigationSystem {
    GENERATED_BODY()
public:
    UHDNavigationSystem();

};

