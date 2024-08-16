#pragma once
#include "CoreMinimal.h"
#include "InterpTrackInst.h"
#include "InterpTrackInstSlomo.generated.h"

UCLASS(Blueprintable)
class UInterpTrackInstSlomo : public UInterpTrackInst {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OldTimeDilation;
    
    UInterpTrackInstSlomo();

};

