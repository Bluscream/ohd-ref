#pragma once
#include "CoreMinimal.h"
#include "EVisibilityTrackAction.h"
#include "InterpTrackInst.h"
#include "InterpTrackInstVisibility.generated.h"

UCLASS(Blueprintable)
class UInterpTrackInstVisibility : public UInterpTrackInst {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EVisibilityTrackAction> Action;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LastUpdatePosition;
    
    UInterpTrackInstVisibility();

};

