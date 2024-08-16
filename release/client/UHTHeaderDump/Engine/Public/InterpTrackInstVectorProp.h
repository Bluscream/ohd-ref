#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "InterpTrackInstProperty.h"
#include "InterpTrackInstVectorProp.generated.h"

UCLASS(Blueprintable)
class UInterpTrackInstVectorProp : public UInterpTrackInstProperty {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector ResetVector;
    
    UInterpTrackInstVectorProp();

};

