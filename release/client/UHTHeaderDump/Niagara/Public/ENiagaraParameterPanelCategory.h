#pragma once
#include "CoreMinimal.h"
#include "ENiagaraParameterPanelCategory.generated.h"

UENUM(BlueprintType)
enum class ENiagaraParameterPanelCategory : uint8 {
    Input,
    Attributes,
    Output,
    Local,
    User,
    Engine,
    Owner,
    System,
    Emitter,
    Particles,
    ScriptTransient,
    StaticSwitch,
    None,
    Num,
};

