#pragma once
#include "CoreMinimal.h"
#include "DFBaseGameMode.h"
#include "DFBaseGame_DeathMatch.generated.h"

class ADFBasePlayerState;

UCLASS(Abstract, Blueprintable, NonTransient)
class DONKEHFRAMEWORK_API ADFBaseGame_DeathMatch : public ADFBaseGameMode {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ADFBasePlayerState* WinningPlayerState;
    
public:
    ADFBaseGame_DeathMatch(const FObjectInitializer& ObjectInitializer);

};

