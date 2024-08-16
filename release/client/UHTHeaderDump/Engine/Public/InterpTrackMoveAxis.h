#pragma once
#include "CoreMinimal.h"
#include "EInterpMoveAxis.h"
#include "InterpLookupTrack.h"
#include "InterpTrackFloatBase.h"
#include "InterpTrackMoveAxis.generated.h"

UCLASS(Blueprintable, CollapseCategories, MinimalAPI)
class UInterpTrackMoveAxis : public UInterpTrackFloatBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EInterpMoveAxis> MoveAxis;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInterpLookupTrack LookupTrack;
    
    UInterpTrackMoveAxis();

};

