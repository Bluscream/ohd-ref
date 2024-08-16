#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=LocalPlayer -FallbackName=LocalPlayer
#include "FantasticPerspectiveLocalPlayer.generated.h"

UCLASS(Blueprintable, NonTransient)
class FANTASTICPERSPECTIVEPLUGIN_API UFantasticPerspectiveLocalPlayer : public ULocalPlayer {
    GENERATED_BODY()
public:
    UFantasticPerspectiveLocalPlayer();

};

