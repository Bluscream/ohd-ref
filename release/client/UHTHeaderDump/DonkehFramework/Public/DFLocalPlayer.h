#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=LocalPlayer -FallbackName=LocalPlayer
#include "DFLocalPlayer.generated.h"

UCLASS(Blueprintable, NonTransient)
class DONKEHFRAMEWORK_API UDFLocalPlayer : public ULocalPlayer {
    GENERATED_BODY()
public:
    UDFLocalPlayer();

};

