#pragma once
#include "CoreMinimal.h"
#include "InterpTrackInst.h"
#include "InterpTrackInstParticleReplay.generated.h"

UCLASS(Blueprintable)
class UInterpTrackInstParticleReplay : public UInterpTrackInst {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LastUpdatePosition;
    
    UInterpTrackInstParticleReplay();

};

