#pragma once
#include "CoreMinimal.h"
#include "InterpTrackInstProperty.h"
#include "InterpTrackInstBoolProp.generated.h"

UCLASS(Blueprintable)
class UInterpTrackInstBoolProp : public UInterpTrackInstProperty {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ResetBool;
    
    UInterpTrackInstBoolProp();

};

