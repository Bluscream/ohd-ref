#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=DonkehFramework -ObjectName=DFGameEngine -FallbackName=DFGameEngine
#include "HDGameEngine.generated.h"

UCLASS(Blueprintable, NonTransient)
class HDMAIN_API UHDGameEngine : public UDFGameEngine {
    GENERATED_BODY()
public:
    UHDGameEngine();

};

