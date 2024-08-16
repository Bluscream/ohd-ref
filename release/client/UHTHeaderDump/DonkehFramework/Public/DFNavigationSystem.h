#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=NavigationSystem -ObjectName=NavigationSystemV1 -FallbackName=NavigationSystemV1
#include "DFNavigationSystem.generated.h"

UCLASS(Blueprintable, NonTransient)
class DONKEHFRAMEWORK_API UDFNavigationSystem : public UNavigationSystemV1 {
    GENERATED_BODY()
public:
    UDFNavigationSystem();

};

