#pragma once
#include "CoreMinimal.h"
#include "AnimControlTrackKey.h"
#include "InterpTrackFloatBase.h"
#include "InterpTrackAnimControl.generated.h"

UCLASS(Blueprintable, CollapseCategories, MinimalAPI)
class UInterpTrackAnimControl : public UInterpTrackFloatBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SlotName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAnimControlTrackKey> AnimSeqs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bSkipAnimNotifiers: 1;
    
    UInterpTrackAnimControl();

};

