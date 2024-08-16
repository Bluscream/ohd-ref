#pragma once
#include "CoreMinimal.h"
#include "DFPlayerVOIPTalkingState.generated.h"

class UDFCommChannel;

USTRUCT(BlueprintType)
struct DONKEHFRAMEWORKCOMMS_API FDFPlayerVOIPTalkingState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bWasTalking: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bIsTalking: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bPendingTalkerReset: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UDFCommChannel* TalkerChannel;
    
    FDFPlayerVOIPTalkingState();
};

