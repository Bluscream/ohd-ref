#pragma once
#include "CoreMinimal.h"
#include "InterpTrackFloatBase.h"
#include "InterpTrackFloatParticleParam.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class UInterpTrackFloatParticleParam : public UInterpTrackFloatBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ParamName;
    
    UInterpTrackFloatParticleParam();

};

