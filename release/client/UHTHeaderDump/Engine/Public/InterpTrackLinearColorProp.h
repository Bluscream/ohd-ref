#pragma once
#include "CoreMinimal.h"
#include "InterpTrackLinearColorBase.h"
#include "InterpTrackLinearColorProp.generated.h"

UCLASS(Blueprintable, CollapseCategories, MinimalAPI)
class UInterpTrackLinearColorProp : public UInterpTrackLinearColorBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName PropertyName;
    
    UInterpTrackLinearColorProp();

};

