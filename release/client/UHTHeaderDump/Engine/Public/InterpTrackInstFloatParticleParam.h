#pragma once
#include "CoreMinimal.h"
#include "InterpTrackInst.h"
#include "InterpTrackInstFloatParticleParam.generated.h"

UCLASS(Blueprintable)
class UInterpTrackInstFloatParticleParam : public UInterpTrackInst {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ResetFloat;
    
    UInterpTrackInstFloatParticleParam();

};

