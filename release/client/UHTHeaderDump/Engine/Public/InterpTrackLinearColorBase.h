#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=InterpCurveLinearColor -FallbackName=InterpCurveLinearColor
#include "InterpTrack.h"
#include "InterpTrackLinearColorBase.generated.h"

UCLASS(Abstract, Blueprintable, CollapseCategories, MinimalAPI)
class UInterpTrackLinearColorBase : public UInterpTrack {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInterpCurveLinearColor LinearColorTrack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CurveTension;
    
    UInterpTrackLinearColorBase();

};

