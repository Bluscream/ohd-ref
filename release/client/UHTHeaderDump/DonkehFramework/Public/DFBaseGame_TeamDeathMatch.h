#pragma once
#include "CoreMinimal.h"
#include "DFBaseGameMode.h"
#include "DFBaseGame_TeamDeathMatch.generated.h"

UCLASS(Abstract, Blueprintable, NonTransient)
class DONKEHFRAMEWORK_API ADFBaseGame_TeamDeathMatch : public ADFBaseGameMode {
    GENERATED_BODY()
public:
    ADFBaseGame_TeamDeathMatch(const FObjectInitializer& ObjectInitializer);

};

