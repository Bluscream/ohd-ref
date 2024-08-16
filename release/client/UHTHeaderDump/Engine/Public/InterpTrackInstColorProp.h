#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Color -FallbackName=Color
#include "InterpTrackInstProperty.h"
#include "InterpTrackInstColorProp.generated.h"

UCLASS(Blueprintable)
class UInterpTrackInstColorProp : public UInterpTrackInstProperty {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FColor ResetColor;
    
    UInterpTrackInstColorProp();

};

