#pragma once
#include "CoreMinimal.h"
#include "InterpTrackFloatBase.h"
#include "InterpTrackFloatProp.generated.h"

UCLASS(Blueprintable, CollapseCategories, MinimalAPI)
class UInterpTrackFloatProp : public UInterpTrackFloatBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName PropertyName;
    
    UInterpTrackFloatProp();

};

