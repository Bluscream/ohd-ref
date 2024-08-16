#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=GameEngine -FallbackName=GameEngine
#include "DFGameEngine.generated.h"

UCLASS(Blueprintable, NonTransient)
class DONKEHFRAMEWORK_API UDFGameEngine : public UGameEngine {
    GENERATED_BODY()
public:
    UDFGameEngine();

};

