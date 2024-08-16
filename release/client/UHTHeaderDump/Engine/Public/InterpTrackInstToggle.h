#pragma once
#include "CoreMinimal.h"
#include "ETrackToggleAction.h"
#include "InterpTrackInst.h"
#include "InterpTrackInstToggle.generated.h"

UCLASS(Blueprintable)
class UInterpTrackInstToggle : public UInterpTrackInst {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ETrackToggleAction> Action;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LastUpdatePosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bSavedActiveState: 1;
    
    UInterpTrackInstToggle();

};

