#pragma once
#include "CoreMinimal.h"
#include "HDBaseGameMode.h"
#include "HDGame_TeamDeathMatch.generated.h"

UCLASS(Blueprintable, NonTransient)
class HDMAIN_API AHDGame_TeamDeathMatch : public AHDBaseGameMode {
    GENERATED_BODY()
public:
    AHDGame_TeamDeathMatch(const FObjectInitializer& ObjectInitializer);

};

