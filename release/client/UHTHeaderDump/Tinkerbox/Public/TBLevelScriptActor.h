#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=DonkehFramework -ObjectName=DFLevelScriptActor -FallbackName=DFLevelScriptActor
#include "TBLevelScriptActor.generated.h"

UCLASS(Blueprintable)
class TINKERBOX_API ATBLevelScriptActor : public ADFLevelScriptActor {
    GENERATED_BODY()
public:
    ATBLevelScriptActor(const FObjectInitializer& ObjectInitializer);

};

