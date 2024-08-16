#pragma once
#include "CoreMinimal.h"
#include "InterpTrackInst.h"
#include "InterpTrackInstEvent.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UInterpTrackInstEvent : public UInterpTrackInst {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LastUpdatePosition;
    
    UInterpTrackInstEvent();

};

