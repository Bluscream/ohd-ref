#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
#include "InterpTrackInstProperty.h"
#include "InterpTrackInstLinearColorProp.generated.h"

UCLASS(Blueprintable)
class UInterpTrackInstLinearColorProp : public UInterpTrackInstProperty {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor ResetColor;
    
    UInterpTrackInstLinearColorProp();

};

