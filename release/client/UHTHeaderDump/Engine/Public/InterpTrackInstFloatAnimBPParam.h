#pragma once
#include "CoreMinimal.h"
#include "InterpTrackInst.h"
#include "InterpTrackInstFloatAnimBPParam.generated.h"

class UAnimInstance;

UCLASS(Blueprintable)
class UInterpTrackInstFloatAnimBPParam : public UInterpTrackInst {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAnimInstance* AnimScriptInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float ResetFloat;
    
    UInterpTrackInstFloatAnimBPParam();

};

