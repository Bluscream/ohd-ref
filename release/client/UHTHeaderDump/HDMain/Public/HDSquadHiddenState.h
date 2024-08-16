#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=DonkehFramework -ObjectName=DFTeamAgentInterface -FallbackName=DFTeamAgentInterface
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Info -FallbackName=Info
#include "HDSquadHiddenState.generated.h"

class AHDSquadState;

UCLASS(Blueprintable, NotPlaceable, Transient)
class HDMAIN_API AHDSquadHiddenState : public AInfo, public IDFTeamAgentInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AHDSquadState* SquadStateOwner;
    
public:
    AHDSquadHiddenState(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

