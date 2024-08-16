#pragma once
#include "CoreMinimal.h"
#include "InterpTrackFloatBase.h"
#include "Templates/SubclassOf.h"
#include "InterpTrackFloatAnimBPParam.generated.h"

class UAnimInstance;

UCLASS(Blueprintable, CollapseCategories)
class UInterpTrackFloatAnimBPParam : public UInterpTrackFloatBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UClass* AnimBlueprintClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UAnimInstance> AnimClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ParamName;
    
    UInterpTrackFloatAnimBPParam();

};

