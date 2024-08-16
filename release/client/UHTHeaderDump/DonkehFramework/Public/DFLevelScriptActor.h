#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=LevelScriptActor -FallbackName=LevelScriptActor
#include "DFLevelScriptActor.generated.h"

UCLASS(Blueprintable)
class DONKEHFRAMEWORK_API ADFLevelScriptActor : public ALevelScriptActor {
    GENERATED_BODY()
public:
    ADFLevelScriptActor(const FObjectInitializer& ObjectInitializer);

};

