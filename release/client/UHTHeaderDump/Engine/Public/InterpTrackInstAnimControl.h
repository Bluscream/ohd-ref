#pragma once
#include "CoreMinimal.h"
#include "InterpTrackInst.h"
#include "InterpTrackInstAnimControl.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UInterpTrackInstAnimControl : public UInterpTrackInst {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float LastUpdatePosition;
    
    UInterpTrackInstAnimControl();

};

