#pragma once
#include "CoreMinimal.h"
#include "BoolTrackKey.h"
#include "InterpTrack.h"
#include "InterpTrackBoolProp.generated.h"

UCLASS(Blueprintable, CollapseCategories, MinimalAPI)
class UInterpTrackBoolProp : public UInterpTrack {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBoolTrackKey> BoolTrack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName PropertyName;
    
    UInterpTrackBoolProp();

};

