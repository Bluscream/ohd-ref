#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=DonkehFramework -ObjectName=DFLocalPlayer -FallbackName=DFLocalPlayer
#include "HDLocalPlayer.generated.h"

UCLASS(Blueprintable, NonTransient)
class HDMAIN_API UHDLocalPlayer : public UDFLocalPlayer {
    GENERATED_BODY()
public:
    UHDLocalPlayer();

};

