#pragma once
#include "CoreMinimal.h"
#include "InterpTrackInstProperty.h"
#include "InterpTrackInstFloatProp.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UInterpTrackInstFloatProp : public UInterpTrackInstProperty {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ResetFloat;
    
    UInterpTrackInstFloatProp();

};

