#pragma once
#include "CoreMinimal.h"
#include "SoundModulationParameter.generated.h"

USTRUCT(BlueprintType)
struct FSoundModulationParameter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Control;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Value;
    
    AUDIOEXTENSIONS_API FSoundModulationParameter();
};

