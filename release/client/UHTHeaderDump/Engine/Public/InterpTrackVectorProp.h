#pragma once
#include "CoreMinimal.h"
#include "InterpTrackVectorBase.h"
#include "InterpTrackVectorProp.generated.h"

UCLASS(Blueprintable, CollapseCategories, MinimalAPI)
class UInterpTrackVectorProp : public UInterpTrackVectorBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName PropertyName;
    
    UInterpTrackVectorProp();

};

